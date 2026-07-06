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

// Function: sub_0018C780
// Address: 0x18c780 - 0x18cc20
void sub_0018C780_0x18c780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C780_0x18c780");
#endif

    switch (ctx->pc) {
        case 0x18c7d4u: goto label_18c7d4;
        case 0x18c7e0u: goto label_18c7e0;
        case 0x18c828u: goto label_18c828;
        case 0x18c844u: goto label_18c844;
        case 0x18c884u: goto label_18c884;
        case 0x18c890u: goto label_18c890;
        case 0x18c8bcu: goto label_18c8bc;
        case 0x18c8ccu: goto label_18c8cc;
        case 0x18c8d8u: goto label_18c8d8;
        case 0x18c904u: goto label_18c904;
        case 0x18c91cu: goto label_18c91c;
        case 0x18c944u: goto label_18c944;
        case 0x18c954u: goto label_18c954;
        case 0x18c978u: goto label_18c978;
        case 0x18c98cu: goto label_18c98c;
        case 0x18c9f4u: goto label_18c9f4;
        case 0x18ca00u: goto label_18ca00;
        case 0x18ca2cu: goto label_18ca2c;
        case 0x18ca3cu: goto label_18ca3c;
        case 0x18ca48u: goto label_18ca48;
        case 0x18ca74u: goto label_18ca74;
        case 0x18ca8cu: goto label_18ca8c;
        case 0x18caf4u: goto label_18caf4;
        case 0x18cb00u: goto label_18cb00;
        case 0x18cb2cu: goto label_18cb2c;
        case 0x18cbacu: goto label_18cbac;
        case 0x18cbe4u: goto label_18cbe4;
        default: break;
    }

    ctx->pc = 0x18c780u;

    // 0x18c780: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x18c780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x18c784: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x18c784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x18c788: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x18c788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x18c78c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x18c78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x18c790: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x18c790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x18c794: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x18c794u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c798: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x18c798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x18c79c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x18c79cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7a0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x18c7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x18c7a4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x18c7a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x18c7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x18c7ac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18c7acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x18c7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x18c7b4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x18c7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x18c7b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x18c7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x18c7bc: 0xa3a500bf  sb          $a1, 0xBF($sp)
    ctx->pc = 0x18c7bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 191), (uint8_t)GPR_U32(ctx, 5));
    // 0x18c7c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18c7c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18c7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18c7c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18c7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7cc: 0xc067d64  jal         func_19F590
    ctx->pc = 0x18C7CCu;
    SET_GPR_U32(ctx, 31, 0x18C7D4u);
    ctx->pc = 0x18C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7CCu;
    // 0x18c7d0: 0x7fb00010  sq          $s0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F590u, 0x18C7CCu, 0x18C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C7D4u;
label_18c7d4:
    // 0x18c7d4: 0x8eb40518  lw          $s4, 0x518($s5)
    ctx->pc = 0x18c7d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1304)));
    // 0x18c7d8: 0xc0627f8  jal         func_189FE0
    ctx->pc = 0x18C7D8u;
    SET_GPR_U32(ctx, 31, 0x18C7E0u);
    ctx->pc = 0x18C7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C7D8u;
    // 0x18c7dc: 0x8e8400dc  lw          $a0, 0xDC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189FE0u, 0x18C7D8u, 0x18C7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C7E0u;
label_18c7e0:
    // 0x18c7e0: 0x92b0036f  lbu         $s0, 0x36F($s5)
    ctx->pc = 0x18c7e0u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 879)));
    // 0x18c7e4: 0x128000ff  beqz        $s4, . + 4 + (0xFF << 2)
    ctx->pc = 0x18C7E4u;
    {
        const bool branch_taken_0x18c7e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C7E4u;
        // 0x18c7e8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c7e4) {
            ctx->pc = 0x18CBE4u;
            goto label_18cbe4;
        }
    }
    ctx->pc = 0x18C7ECu;
    // 0x18c7ec: 0x93a200bf  lbu         $v0, 0xBF($sp)
    ctx->pc = 0x18c7ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 191)));
    // 0x18c7f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18c7f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c7f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c7f8: 0x506200a1  beql        $v1, $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x18C7F8u;
    {
        const bool branch_taken_0x18c7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18c7f8) {
            ctx->pc = 0x18C7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C7F8u;
            // 0x18c7fc: 0x968400ea  lhu         $a0, 0xEA($s4) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CA80u;
            goto label_18ca80;
        }
    }
    ctx->pc = 0x18C800u;
    // 0x18c800: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18c800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c804: 0x5062005e  beql        $v1, $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x18C804u;
    {
        const bool branch_taken_0x18c804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18c804) {
            ctx->pc = 0x18C808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C804u;
            // 0x18c808: 0x968400ea  lhu         $a0, 0xEA($s4) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C980u;
            goto label_18c980;
        }
    }
    ctx->pc = 0x18C80Cu;
    // 0x18c80c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C80Cu;
    {
        const bool branch_taken_0x18c80c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c80c) {
            ctx->pc = 0x18C810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C80Cu;
            // 0x18c810: 0x968400ea  lhu         $a0, 0xEA($s4) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C81Cu;
            goto label_18c81c;
        }
    }
    ctx->pc = 0x18C814u;
    // 0x18c814: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x18C814u;
    {
        const bool branch_taken_0x18c814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C814u;
        // 0x18c818: 0x8e8300dc  lw          $v1, 0xDC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c814) {
            ctx->pc = 0x18CB3Cu;
            goto label_18cb3c;
        }
    }
    ctx->pc = 0x18C81Cu;
label_18c81c:
    // 0x18c81c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x18c81cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x18c820: 0xc063808  jal         func_18E020
    ctx->pc = 0x18C820u;
    SET_GPR_U32(ctx, 31, 0x18C828u);
    ctx->pc = 0x18C824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C820u;
    // 0x18c824: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x18C820u, 0x18C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C828u;
label_18c828:
    // 0x18c828: 0x866304dc  lh          $v1, 0x4DC($s3)
    ctx->pc = 0x18c828u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1244)));
    // 0x18c82c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x18c82cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x18c830: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18c830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c834: 0xa66204dc  sh          $v0, 0x4DC($s3)
    ctx->pc = 0x18c834u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1244), (uint16_t)GPR_U32(ctx, 2));
    // 0x18c838: 0x968400ea  lhu         $a0, 0xEA($s4)
    ctx->pc = 0x18c838u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x18c83c: 0xc063808  jal         func_18E020
    ctx->pc = 0x18C83Cu;
    SET_GPR_U32(ctx, 31, 0x18C844u);
    ctx->pc = 0x18C840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C83Cu;
    // 0x18c840: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x18C83Cu, 0x18C844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C844u;
label_18c844:
    // 0x18c844: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c848: 0x86a304dc  lh          $v1, 0x4DC($s5)
    ctx->pc = 0x18c848u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1244)));
    // 0x18c84c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c84cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c850: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x18c850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18c854: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x18c854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x18c858: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x18c858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x18c85c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x18c85cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x18c860: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18c860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18c864: 0xa6a304dc  sh          $v1, 0x4DC($s5)
    ctx->pc = 0x18c864u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1244), (uint16_t)GPR_U32(ctx, 3));
    // 0x18c868: 0x8e830494  lw          $v1, 0x494($s4)
    ctx->pc = 0x18c868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1172)));
    // 0x18c86c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18c86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18c870: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x18C870u;
    {
        const bool branch_taken_0x18c870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c870) {
            ctx->pc = 0x18C874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C870u;
            // 0x18c874: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C87Cu;
            goto label_18c87c;
        }
    }
    ctx->pc = 0x18C878u;
    // 0x18c878: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x18c878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18c87c:
    // 0x18c87c: 0xc0637a0  jal         func_18DE80
    ctx->pc = 0x18C87Cu;
    SET_GPR_U32(ctx, 31, 0x18C884u);
    ctx->pc = 0x18C880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C87Cu;
    // 0x18c880: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DE80u, 0x18C87Cu, 0x18C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C884u;
label_18c884:
    // 0x18c884: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18c884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c888: 0xc0637a0  jal         func_18DE80
    ctx->pc = 0x18C888u;
    SET_GPR_U32(ctx, 31, 0x18C890u);
    ctx->pc = 0x18C88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C888u;
    // 0x18c88c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DE80u, 0x18C888u, 0x18C890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C890u;
label_18c890:
    // 0x18c890: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x18c890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x18c894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18c894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c898: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x18c898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x18c89c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x18c89cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c8a0: 0x92aa036f  lbu         $t2, 0x36F($s5)
    ctx->pc = 0x18c8a0u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 879)));
    // 0x18c8a4: 0x96a500ea  lhu         $a1, 0xEA($s5)
    ctx->pc = 0x18c8a4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 234)));
    // 0x18c8a8: 0x8ea600f8  lw          $a2, 0xF8($s5)
    ctx->pc = 0x18c8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x18c8ac: 0x968800ea  lhu         $t0, 0xEA($s4)
    ctx->pc = 0x18c8acu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x18c8b0: 0x8e6900f8  lw          $t1, 0xF8($s3)
    ctx->pc = 0x18c8b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x18c8b4: 0xc0630b4  jal         func_18C2D0
    ctx->pc = 0x18C8B4u;
    SET_GPR_U32(ctx, 31, 0x18C8BCu);
    ctx->pc = 0x18C8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8B4u;
    // 0x18c8b8: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2D0u, 0x18C8B4u, 0x18C8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C8BCu;
label_18c8bc:
    // 0x18c8bc: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x18c8bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c8c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18c8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c8c4: 0xc0637a0  jal         func_18DE80
    ctx->pc = 0x18C8C4u;
    SET_GPR_U32(ctx, 31, 0x18C8CCu);
    ctx->pc = 0x18C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8C4u;
    // 0x18c8c8: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DE80u, 0x18C8C4u, 0x18C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C8CCu;
label_18c8cc:
    // 0x18c8cc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x18c8ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c8d0: 0xc0637a0  jal         func_18DE80
    ctx->pc = 0x18C8D0u;
    SET_GPR_U32(ctx, 31, 0x18C8D8u);
    ctx->pc = 0x18C8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8D0u;
    // 0x18c8d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DE80u, 0x18C8D0u, 0x18C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C8D8u;
label_18c8d8:
    // 0x18c8d8: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x18c8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x18c8dc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x18c8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c8e0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x18c8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x18c8e4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x18c8e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c8e8: 0x8e6900f8  lw          $t1, 0xF8($s3)
    ctx->pc = 0x18c8e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x18c8ec: 0x92aa036f  lbu         $t2, 0x36F($s5)
    ctx->pc = 0x18c8ecu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 879)));
    // 0x18c8f0: 0x96a500ea  lhu         $a1, 0xEA($s5)
    ctx->pc = 0x18c8f0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 234)));
    // 0x18c8f4: 0x8ea600f8  lw          $a2, 0xF8($s5)
    ctx->pc = 0x18c8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x18c8f8: 0x968800ea  lhu         $t0, 0xEA($s4)
    ctx->pc = 0x18c8f8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x18c8fc: 0xc063180  jal         func_18C600
    ctx->pc = 0x18C8FCu;
    SET_GPR_U32(ctx, 31, 0x18C904u);
    ctx->pc = 0x18C900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C8FCu;
    // 0x18c900: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C600u, 0x18C8FCu, 0x18C904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C904u;
label_18c904:
    // 0x18c904: 0x968400ea  lhu         $a0, 0xEA($s4)
    ctx->pc = 0x18c904u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x18c908: 0x2b43c  dsll32      $s6, $v0, 16
    ctx->pc = 0x18c908u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c90c: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x18c90cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x18c910: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x18c910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x18c914: 0xc063808  jal         func_18E020
    ctx->pc = 0x18C914u;
    SET_GPR_U32(ctx, 31, 0x18C91Cu);
    ctx->pc = 0x18C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C914u;
    // 0x18c918: 0x16b43f  dsra32      $s6, $s6, 16 (Delay Slot)
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x18C914u, 0x18C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C91Cu;
label_18c91c:
    // 0x18c91c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18c91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c920: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x18c920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x18c924: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18c924u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18c928: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x18c928u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x18c92c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18c930: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18c930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c934: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18c934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18c938: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18c938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18c93c: 0xc06435c  jal         func_190D70
    ctx->pc = 0x18C93Cu;
    SET_GPR_U32(ctx, 31, 0x18C944u);
    ctx->pc = 0x18C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C93Cu;
    // 0x18c940: 0x2f080  sll         $fp, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190D70u, 0x18C93Cu, 0x18C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C944u;
label_18c944:
    // 0x18c944: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x18c944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x18c948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18c948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c94c: 0xc064374  jal         func_190DD0
    ctx->pc = 0x18C94Cu;
    SET_GPR_U32(ctx, 31, 0x18C954u);
    ctx->pc = 0x18C950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C94Cu;
    // 0x18c950: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190DD0u, 0x18C94Cu, 0x18C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C954u;
label_18c954:
    // 0x18c954: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18c954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c958: 0x102c3c  dsll32      $a1, $s0, 16
    ctx->pc = 0x18c958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 16));
    // 0x18c95c: 0x86a204ec  lh          $v0, 0x4EC($s5)
    ctx->pc = 0x18c95cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1260)));
    // 0x18c960: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18c960u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18c964: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18c964u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c968: 0xa6a204ec  sh          $v0, 0x4EC($s5)
    ctx->pc = 0x18c968u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1260), (uint16_t)GPR_U32(ctx, 2));
    // 0x18c96c: 0x86a404ee  lh          $a0, 0x4EE($s5)
    ctx->pc = 0x18c96cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1262)));
    // 0x18c970: 0xc0631d4  jal         func_18C750
    ctx->pc = 0x18C970u;
    SET_GPR_U32(ctx, 31, 0x18C978u);
    ctx->pc = 0x18C974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C970u;
    // 0x18c974: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C750u, 0x18C970u, 0x18C978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C978u;
label_18c978:
    // 0x18c978: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x18C978u;
    {
        const bool branch_taken_0x18c978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C978u;
        // 0x18c97c: 0xa6a204ee  sh          $v0, 0x4EE($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 1262), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c978) {
            ctx->pc = 0x18CB38u;
            goto label_18cb38;
        }
    }
    ctx->pc = 0x18C980u;
label_18c980:
    // 0x18c980: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x18c980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x18c984: 0xc063808  jal         func_18E020
    ctx->pc = 0x18C984u;
    SET_GPR_U32(ctx, 31, 0x18C98Cu);
    ctx->pc = 0x18C988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C984u;
    // 0x18c988: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x18C984u, 0x18C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C98Cu;
label_18c98c:
    // 0x18c98c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18c98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c990: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18c990u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18c994: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x18C994u;
    {
        const bool branch_taken_0x18c994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c994) {
            ctx->pc = 0x18C998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C994u;
            // 0x18c998: 0x86a204dc  lh          $v0, 0x4DC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C9E0u;
            goto label_18c9e0;
        }
    }
    ctx->pc = 0x18C99Cu;
    // 0x18c99c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18c99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c9a0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18c9a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18c9a4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18C9A4u;
    {
        const bool branch_taken_0x18c9a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18C9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9A4u;
        // 0x18c9a8: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9a4) {
            ctx->pc = 0x18C9B4u;
            goto label_18c9b4;
        }
    }
    ctx->pc = 0x18C9ACu;
    // 0x18c9ac: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x18c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x18c9b0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x18c9b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_18c9b4:
    // 0x18c9b4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18c9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18c9b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18c9b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18c9bc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C9BCu;
    {
        const bool branch_taken_0x18c9bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c9bc) {
            ctx->pc = 0x18C9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C9BCu;
            // 0x18c9c0: 0x866204dc  lh          $v0, 0x4DC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C9D4u;
            goto label_18c9d4;
        }
    }
    ctx->pc = 0x18C9C4u;
    // 0x18c9c4: 0x866204dc  lh          $v0, 0x4DC($s3)
    ctx->pc = 0x18c9c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1244)));
    // 0x18c9c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c9cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18C9CCu;
    {
        const bool branch_taken_0x18c9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C9CCu;
        // 0x18c9d0: 0xa66204dc  sh          $v0, 0x4DC($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1244), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c9cc) {
            ctx->pc = 0x18C9DCu;
            goto label_18c9dc;
        }
    }
    ctx->pc = 0x18C9D4u;
label_18c9d4:
    // 0x18c9d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18c9d8: 0xa66204dc  sh          $v0, 0x4DC($s3)
    ctx->pc = 0x18c9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1244), (uint16_t)GPR_U32(ctx, 2));
label_18c9dc:
    // 0x18c9dc: 0x86a204dc  lh          $v0, 0x4DC($s5)
    ctx->pc = 0x18c9dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1244)));
label_18c9e0:
    // 0x18c9e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18c9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c9e4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x18c9e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c9e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18c9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18c9ec: 0xc0637a0  jal         func_18DE80
    ctx->pc = 0x18C9ECu;
    SET_GPR_U32(ctx, 31, 0x18C9F4u);
    ctx->pc = 0x18C9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C9ECu;
    // 0x18c9f0: 0xa6a204dc  sh          $v0, 0x4DC($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 1244), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DE80u, 0x18C9ECu, 0x18C9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C9F4u;
label_18c9f4:
    // 0x18c9f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18c9f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c9f8: 0xc0637a0  jal         func_18DE80
    ctx->pc = 0x18C9F8u;
    SET_GPR_U32(ctx, 31, 0x18CA00u);
    ctx->pc = 0x18C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C9F8u;
    // 0x18c9fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DE80u, 0x18C9F8u, 0x18CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA00u;
label_18ca00:
    // 0x18ca00: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x18ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x18ca04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ca04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca08: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x18ca08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x18ca0c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x18ca0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca10: 0x92aa036f  lbu         $t2, 0x36F($s5)
    ctx->pc = 0x18ca10u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 879)));
    // 0x18ca14: 0x96a500ea  lhu         $a1, 0xEA($s5)
    ctx->pc = 0x18ca14u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 234)));
    // 0x18ca18: 0x8ea600f8  lw          $a2, 0xF8($s5)
    ctx->pc = 0x18ca18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x18ca1c: 0x968800ea  lhu         $t0, 0xEA($s4)
    ctx->pc = 0x18ca1cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x18ca20: 0x8e6900f8  lw          $t1, 0xF8($s3)
    ctx->pc = 0x18ca20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x18ca24: 0xc0630b4  jal         func_18C2D0
    ctx->pc = 0x18CA24u;
    SET_GPR_U32(ctx, 31, 0x18CA2Cu);
    ctx->pc = 0x18CA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA24u;
    // 0x18ca28: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2D0u, 0x18CA24u, 0x18CA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA2Cu;
label_18ca2c:
    // 0x18ca2c: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x18ca2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18ca30: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18ca30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca34: 0xc0637a0  jal         func_18DE80
    ctx->pc = 0x18CA34u;
    SET_GPR_U32(ctx, 31, 0x18CA3Cu);
    ctx->pc = 0x18CA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA34u;
    // 0x18ca38: 0x12943f  dsra32      $s2, $s2, 16 (Delay Slot)
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DE80u, 0x18CA34u, 0x18CA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA3Cu;
label_18ca3c:
    // 0x18ca3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18ca3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca40: 0xc0637a0  jal         func_18DE80
    ctx->pc = 0x18CA40u;
    SET_GPR_U32(ctx, 31, 0x18CA48u);
    ctx->pc = 0x18CA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA40u;
    // 0x18ca44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DE80u, 0x18CA40u, 0x18CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA48u;
label_18ca48:
    // 0x18ca48: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x18ca48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x18ca4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ca4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca50: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x18ca50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x18ca54: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x18ca54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ca58: 0x8e6900f8  lw          $t1, 0xF8($s3)
    ctx->pc = 0x18ca58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x18ca5c: 0x92aa036f  lbu         $t2, 0x36F($s5)
    ctx->pc = 0x18ca5cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 879)));
    // 0x18ca60: 0x96a500ea  lhu         $a1, 0xEA($s5)
    ctx->pc = 0x18ca60u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 234)));
    // 0x18ca64: 0x8ea600f8  lw          $a2, 0xF8($s5)
    ctx->pc = 0x18ca64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x18ca68: 0x968800ea  lhu         $t0, 0xEA($s4)
    ctx->pc = 0x18ca68u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x18ca6c: 0xc063134  jal         func_18C4D0
    ctx->pc = 0x18CA6Cu;
    SET_GPR_U32(ctx, 31, 0x18CA74u);
    ctx->pc = 0x18CA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA6Cu;
    // 0x18ca70: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C4D0u, 0x18CA6Cu, 0x18CA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA74u;
label_18ca74:
    // 0x18ca74: 0x2bc3c  dsll32      $s7, $v0, 16
    ctx->pc = 0x18ca74u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18ca78: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x18CA78u;
    {
        const bool branch_taken_0x18ca78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CA78u;
        // 0x18ca7c: 0x17bc3f  dsra32      $s7, $s7, 16 (Delay Slot)
        SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ca78) {
            ctx->pc = 0x18CB38u;
            goto label_18cb38;
        }
    }
    ctx->pc = 0x18CA80u;
label_18ca80:
    // 0x18ca80: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x18ca80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x18ca84: 0xc063808  jal         func_18E020
    ctx->pc = 0x18CA84u;
    SET_GPR_U32(ctx, 31, 0x18CA8Cu);
    ctx->pc = 0x18CA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CA84u;
    // 0x18ca88: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E020u, 0x18CA84u, 0x18CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CA8Cu;
label_18ca8c:
    // 0x18ca8c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18ca8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18ca90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18ca90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18ca94: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x18CA94u;
    {
        const bool branch_taken_0x18ca94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ca94) {
            ctx->pc = 0x18CA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CA94u;
            // 0x18ca98: 0x86a204dc  lh          $v0, 0x4DC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CAE0u;
            goto label_18cae0;
        }
    }
    ctx->pc = 0x18CA9Cu;
    // 0x18ca9c: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18ca9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18caa0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18caa0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18caa4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CAA4u;
    {
        const bool branch_taken_0x18caa4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x18CAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAA4u;
        // 0x18caa8: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18caa4) {
            ctx->pc = 0x18CAB4u;
            goto label_18cab4;
        }
    }
    ctx->pc = 0x18CAACu;
    // 0x18caac: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x18caacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x18cab0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x18cab0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_18cab4:
    // 0x18cab4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x18cab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18cab8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x18cab8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x18cabc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CABCu;
    {
        const bool branch_taken_0x18cabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cabc) {
            ctx->pc = 0x18CAC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CABCu;
            // 0x18cac0: 0x866204dc  lh          $v0, 0x4DC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CAD4u;
            goto label_18cad4;
        }
    }
    ctx->pc = 0x18CAC4u;
    // 0x18cac4: 0x866204dc  lh          $v0, 0x4DC($s3)
    ctx->pc = 0x18cac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 1244)));
    // 0x18cac8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cacc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18CACCu;
    {
        const bool branch_taken_0x18cacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CACCu;
        // 0x18cad0: 0xa66204dc  sh          $v0, 0x4DC($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 1244), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cacc) {
            ctx->pc = 0x18CADCu;
            goto label_18cadc;
        }
    }
    ctx->pc = 0x18CAD4u;
label_18cad4:
    // 0x18cad4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18cad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18cad8: 0xa66204dc  sh          $v0, 0x4DC($s3)
    ctx->pc = 0x18cad8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1244), (uint16_t)GPR_U32(ctx, 2));
label_18cadc:
    // 0x18cadc: 0x86a204dc  lh          $v0, 0x4DC($s5)
    ctx->pc = 0x18cadcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1244)));
label_18cae0:
    // 0x18cae0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18cae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cae4: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x18cae4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18cae8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18caec: 0xc0637a0  jal         func_18DE80
    ctx->pc = 0x18CAECu;
    SET_GPR_U32(ctx, 31, 0x18CAF4u);
    ctx->pc = 0x18CAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CAECu;
    // 0x18caf0: 0xa6a204dc  sh          $v0, 0x4DC($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 1244), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DE80u, 0x18CAECu, 0x18CAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CAF4u;
label_18caf4:
    // 0x18caf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18caf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18caf8: 0xc0637a0  jal         func_18DE80
    ctx->pc = 0x18CAF8u;
    SET_GPR_U32(ctx, 31, 0x18CB00u);
    ctx->pc = 0x18CAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CAF8u;
    // 0x18cafc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DE80u, 0x18CAF8u, 0x18CB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB00u;
label_18cb00:
    // 0x18cb00: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x18cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x18cb04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb08: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x18cb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x18cb0c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x18cb0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb10: 0x8e6900f8  lw          $t1, 0xF8($s3)
    ctx->pc = 0x18cb10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x18cb14: 0x92aa036f  lbu         $t2, 0x36F($s5)
    ctx->pc = 0x18cb14u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 879)));
    // 0x18cb18: 0x96a500ea  lhu         $a1, 0xEA($s5)
    ctx->pc = 0x18cb18u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 234)));
    // 0x18cb1c: 0x8ea600f8  lw          $a2, 0xF8($s5)
    ctx->pc = 0x18cb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
    // 0x18cb20: 0x968800ea  lhu         $t0, 0xEA($s4)
    ctx->pc = 0x18cb20u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 234)));
    // 0x18cb24: 0xc0630b4  jal         func_18C2D0
    ctx->pc = 0x18CB24u;
    SET_GPR_U32(ctx, 31, 0x18CB2Cu);
    ctx->pc = 0x18CB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB24u;
    // 0x18cb28: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2D0u, 0x18CB24u, 0x18CB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB2Cu;
label_18cb2c:
    // 0x18cb2c: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x18cb2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18cb30: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x18cb30u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb34: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x18cb34u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
label_18cb38:
    // 0x18cb38: 0x8e8300dc  lw          $v1, 0xDC($s4)
    ctx->pc = 0x18cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
label_18cb3c:
    // 0x18cb3c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x18cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x18cb40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18cb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18cb44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CB44u;
    {
        const bool branch_taken_0x18cb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cb44) {
            ctx->pc = 0x18CB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CB44u;
            // 0x18cb48: 0x8e8300f8  lw          $v1, 0xF8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CB5Cu;
            goto label_18cb5c;
        }
    }
    ctx->pc = 0x18CB4Cu;
    // 0x18cb4c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x18cb4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb50: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x18cb50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb54: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x18cb54u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb58: 0x8e8300f8  lw          $v1, 0xF8($s4)
    ctx->pc = 0x18cb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
label_18cb5c:
    // 0x18cb5c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x18cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x18cb60: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18cb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18cb64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18cb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18cb68: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CB68u;
    {
        const bool branch_taken_0x18cb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cb68) {
            ctx->pc = 0x18CB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CB68u;
            // 0x18cb6c: 0x86a204a8  lh          $v0, 0x4A8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CB78u;
            goto label_18cb78;
        }
    }
    ctx->pc = 0x18CB70u;
    // 0x18cb70: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x18cb70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb74: 0x86a204a8  lh          $v0, 0x4A8($s5)
    ctx->pc = 0x18cb74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1192)));
label_18cb78:
    // 0x18cb78: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x18cb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb7c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x18cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18cb80: 0xa6a204a8  sh          $v0, 0x4A8($s5)
    ctx->pc = 0x18cb80u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1192), (uint16_t)GPR_U32(ctx, 2));
    // 0x18cb84: 0x86a204bc  lh          $v0, 0x4BC($s5)
    ctx->pc = 0x18cb84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1212)));
    // 0x18cb88: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x18cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x18cb8c: 0xa6a204bc  sh          $v0, 0x4BC($s5)
    ctx->pc = 0x18cb8cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1212), (uint16_t)GPR_U32(ctx, 2));
    // 0x18cb90: 0x86a204c4  lh          $v0, 0x4C4($s5)
    ctx->pc = 0x18cb90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 1220)));
    // 0x18cb94: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x18cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x18cb98: 0xa6a204c4  sh          $v0, 0x4C4($s5)
    ctx->pc = 0x18cb98u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 1220), (uint16_t)GPR_U32(ctx, 2));
    // 0x18cb9c: 0x8e8200dc  lw          $v0, 0xDC($s4)
    ctx->pc = 0x18cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x18cba0: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x18cba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x18cba4: 0xc0634f8  jal         func_18D3E0
    ctx->pc = 0x18CBA4u;
    SET_GPR_U32(ctx, 31, 0x18CBACu);
    ctx->pc = 0x18CBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CBA4u;
    // 0x18cba8: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D3E0u, 0x18CBA4u, 0x18CBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CBACu;
label_18cbac:
    // 0x18cbac: 0x16143c  dsll32      $v0, $s6, 16
    ctx->pc = 0x18cbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 16));
    // 0x18cbb0: 0xa3b100c8  sb          $s1, 0xC8($sp)
    ctx->pc = 0x18cbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 17));
    // 0x18cbb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18cbb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18cbb8: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x18cbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x18cbbc: 0x21823  negu        $v1, $v0
    ctx->pc = 0x18cbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x18cbc0: 0x17143c  dsll32      $v0, $s7, 16
    ctx->pc = 0x18cbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 16));
    // 0x18cbc4: 0xa7a300ca  sh          $v1, 0xCA($sp)
    ctx->pc = 0x18cbc4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 3));
    // 0x18cbc8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18cbc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18cbcc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x18cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x18cbd0: 0xa7a200cc  sh          $v0, 0xCC($sp)
    ctx->pc = 0x18cbd0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 204), (uint16_t)GPR_U32(ctx, 2));
    // 0x18cbd4: 0x8e8200dc  lw          $v0, 0xDC($s4)
    ctx->pc = 0x18cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x18cbd8: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x18cbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x18cbdc: 0xc05d870  jal         func_1761C0
    ctx->pc = 0x18CBDCu;
    SET_GPR_U32(ctx, 31, 0x18CBE4u);
    ctx->pc = 0x18CBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CBDCu;
    // 0x18cbe0: 0x22082  srl         $a0, $v0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1761C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1761C0u, 0x18CBDCu, 0x18CBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CBE4u;
label_18cbe4:
    // 0x18cbe4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x18cbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18cbe8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x18cbe8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18cbec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x18cbecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18cbf0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x18cbf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18cbf4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x18cbf4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18cbf8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x18cbf8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18cbfc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x18cbfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18cc00: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x18cc00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cc04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18cc04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cc08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18cc08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18cc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x18CC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CC0Cu;
        // 0x18cc10: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CC14u;
    // 0x18cc14: 0x0  nop
    ctx->pc = 0x18cc14u;
    // NOP
    // 0x18cc18: 0x0  nop
    ctx->pc = 0x18cc18u;
    // NOP
    // 0x18cc1c: 0x0  nop
    ctx->pc = 0x18cc1cu;
    // NOP
    if (ctx->pc == 0x18cc1cu) { ctx->pc = 0x18cc20u; }
}
