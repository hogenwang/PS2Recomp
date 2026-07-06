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

// Function: sub_0024C608
// Address: 0x24c608 - 0x24c760
void sub_0024C608_0x24c608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C608_0x24c608");
#endif

    switch (ctx->pc) {
        case 0x24c650u: goto label_24c650;
        case 0x24c660u: goto label_24c660;
        case 0x24c66cu: goto label_24c66c;
        case 0x24c678u: goto label_24c678;
        case 0x24c6b0u: goto label_24c6b0;
        default: break;
    }

    ctx->pc = 0x24c608u;

    // 0x24c608: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24c608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24c60c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x24c60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x24c610: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x24c610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x24c614: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x24c614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x24c618: 0x30d5ffff  andi        $s5, $a2, 0xFFFF
    ctx->pc = 0x24c618u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x24c61c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x24c61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x24c620: 0x3114ffff  andi        $s4, $t0, 0xFFFF
    ctx->pc = 0x24c620u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x24c624: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x24c624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x24c628: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24c628u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c62c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x24c62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x24c630: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x24c630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x24c634: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x24c634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x24c638: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x24c638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x24c63c: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x24c63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x24c640: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x24c640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x24c644: 0x8fb70000  lw          $s7, 0x0($sp)
    ctx->pc = 0x24c644u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c648: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x24C648u;
    SET_GPR_U32(ctx, 31, 0x24C650u);
    ctx->pc = 0x24C64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C648u;
    // 0x24c64c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x24C648u, 0x24C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C650u;
label_24c650:
    // 0x24c650: 0x8fb60010  lw          $s6, 0x10($sp)
    ctx->pc = 0x24c650u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c654: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c658: 0xc08b5fe  jal         func_22D7F8
    ctx->pc = 0x24C658u;
    SET_GPR_U32(ctx, 31, 0x24C660u);
    ctx->pc = 0x24C65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C658u;
    // 0x24c65c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D7F8u, 0x24C658u, 0x24C660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C660u;
label_24c660:
    // 0x24c660: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24c660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c664: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x24C664u;
    SET_GPR_U32(ctx, 31, 0x24C66Cu);
    ctx->pc = 0x24C668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C664u;
    // 0x24c668: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24C664u, 0x24C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C66Cu;
label_24c66c:
    // 0x24c66c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24c66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c670: 0xc08b60c  jal         func_22D830
    ctx->pc = 0x24C670u;
    SET_GPR_U32(ctx, 31, 0x24C678u);
    ctx->pc = 0x24C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C670u;
    // 0x24c674: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24C670u, 0x24C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C678u;
label_24c678:
    // 0x24c678: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x24c678u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24c67c: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x24c67cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x24c680: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x24c680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x24c684: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x24c684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x24c688: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x24c688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x24c68c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x24c68cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x24c690: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x24c690u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x24c694: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x24c694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x24c698: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x24c698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24c69c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x24C69Cu;
    {
        const bool branch_taken_0x24c69c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C69Cu;
        // 0x24c6a0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c69c) {
            ctx->pc = 0x24C6E8u;
            goto label_24c6e8;
        }
    }
    ctx->pc = 0x24C6A4u;
    // 0x24c6a4: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x24c6a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c6a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24c6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c6ac: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x24c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_24c6b0:
    // 0x24c6b0: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x24C6B0u;
    {
        const bool branch_taken_0x24c6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x24c6b0) {
            ctx->pc = 0x24C6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C6B0u;
            // 0x24c6b4: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C6E0u;
            goto label_24c6e0;
        }
    }
    ctx->pc = 0x24C6B8u;
    // 0x24c6b8: 0x94a20018  lhu         $v0, 0x18($a1)
    ctx->pc = 0x24c6b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x24c6bc: 0x54550008  bnel        $v0, $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x24C6BCu;
    {
        const bool branch_taken_0x24c6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x24c6bc) {
            ctx->pc = 0x24C6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C6BCu;
            // 0x24c6c0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C6E0u;
            goto label_24c6e0;
        }
    }
    ctx->pc = 0x24C6C4u;
    // 0x24c6c4: 0x94a2001a  lhu         $v0, 0x1A($a1)
    ctx->pc = 0x24c6c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x24c6c8: 0x54540005  bnel        $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C6C8u;
    {
        const bool branch_taken_0x24c6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x24c6c8) {
            ctx->pc = 0x24C6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C6C8u;
            // 0x24c6cc: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C6E0u;
            goto label_24c6e0;
        }
    }
    ctx->pc = 0x24C6D0u;
    // 0x24c6d0: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x24c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x24c6d4: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24C6D4u;
    {
        const bool branch_taken_0x24c6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x24c6d4) {
            ctx->pc = 0x24C6F0u;
            goto label_24c6f0;
        }
    }
    ctx->pc = 0x24C6DCu;
    // 0x24c6dc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x24c6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24c6e0:
    // 0x24c6e0: 0x54a0fff3  bnel        $a1, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x24C6E0u;
    {
        const bool branch_taken_0x24c6e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c6e0) {
            ctx->pc = 0x24C6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C6E0u;
            // 0x24c6e4: 0x8ca20048  lw          $v0, 0x48($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C6B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24c6b0;
        }
    }
    ctx->pc = 0x24C6E8u;
label_24c6e8:
    // 0x24c6e8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x24C6E8u;
    {
        const bool branch_taken_0x24c6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6E8u;
        // 0x24c6ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6e8) {
            ctx->pc = 0x24C734u;
            goto label_24c734;
        }
    }
    ctx->pc = 0x24C6F0u;
label_24c6f0:
    // 0x24c6f0: 0x10a70010  beq         $a1, $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x24C6F0u;
    {
        const bool branch_taken_0x24c6f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x24C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6F0u;
        // 0x24c6f4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6f0) {
            ctx->pc = 0x24C734u;
            goto label_24c734;
        }
    }
    ctx->pc = 0x24C6F8u;
    // 0x24c6f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24c6fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C6FCu;
    {
        const bool branch_taken_0x24c6fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C6FCu;
        // 0x24c700: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c6fc) {
            ctx->pc = 0x24C710u;
            goto label_24c710;
        }
    }
    ctx->pc = 0x24C704u;
    // 0x24c704: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x24c704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x24c708: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24c708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24c70c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x24c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_24c710:
    // 0x24c710: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x24c710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24c714: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x24c714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24c718: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C718u;
    {
        const bool branch_taken_0x24c718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C718u;
        // 0x24c71c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c718) {
            ctx->pc = 0x24C728u;
            goto label_24c728;
        }
    }
    ctx->pc = 0x24C720u;
    // 0x24c720: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x24c720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24c724: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x24c724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_24c728:
    // 0x24c728: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x24c728u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x24c72c: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x24c72cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x24c730: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x24c730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24c734:
    // 0x24c734: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24c734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24c738: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x24c738u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24c73c: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x24c73cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24c740: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x24c740u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x24c744: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x24c744u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24c748: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x24c748u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24c74c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x24c74cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24c750: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x24c750u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24c754: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x24c754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24c758: 0x3e00008  jr          $ra
    ctx->pc = 0x24C758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C758u;
        // 0x24c75c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C760u;
}
