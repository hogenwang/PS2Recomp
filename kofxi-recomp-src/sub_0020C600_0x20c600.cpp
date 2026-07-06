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

// Function: sub_0020C600
// Address: 0x20c600 - 0x20c760
void sub_0020C600_0x20c600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C600_0x20c600");
#endif

    switch (ctx->pc) {
        case 0x20c630u: goto label_20c630;
        case 0x20c63cu: goto label_20c63c;
        case 0x20c6b4u: goto label_20c6b4;
        case 0x20c6c8u: goto label_20c6c8;
        case 0x20c72cu: goto label_20c72c;
        case 0x20c740u: goto label_20c740;
        default: break;
    }

    ctx->pc = 0x20c600u;

    // 0x20c600: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20c600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20c604: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c608: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x20c608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x20c60c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20c60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20c610: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20c610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20c614: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20c614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20c618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20c61c: 0x9042a450  lbu         $v0, -0x5BB0($v0)
    ctx->pc = 0x20c61cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294943824)));
    // 0x20c620: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20C620u;
    {
        const bool branch_taken_0x20c620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C620u;
        // 0x20c624: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c620) {
            ctx->pc = 0x20C650u;
            goto label_20c650;
        }
    }
    ctx->pc = 0x20C628u;
    // 0x20c628: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x20c628u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x20c62c: 0x2610a450  addiu       $s0, $s0, -0x5BB0
    ctx->pc = 0x20c62cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943824));
label_20c630:
    // 0x20c630: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x20c630u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20c634: 0xc083110  jal         func_20C440
    ctx->pc = 0x20C634u;
    SET_GPR_U32(ctx, 31, 0x20C63Cu);
    ctx->pc = 0x20C638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C634u;
    // 0x20c638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C440u, 0x20C634u, 0x20C63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C63Cu;
label_20c63c:
    // 0x20c63c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20c63cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20c640: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x20c640u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20c644: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20C644u;
    {
        const bool branch_taken_0x20c644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C644u;
        // 0x20c648: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c644) {
            ctx->pc = 0x20C630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20c630;
        }
    }
    ctx->pc = 0x20C64Cu;
    // 0x20c64c: 0x0  nop
    ctx->pc = 0x20c64cu;
    // NOP
label_20c650:
    // 0x20c650: 0x1640001f  bnez        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x20C650u;
    {
        const bool branch_taken_0x20c650 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c650) {
            ctx->pc = 0x20C6D0u;
            goto label_20c6d0;
        }
    }
    ctx->pc = 0x20C658u;
    // 0x20c658: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20c658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20c65c: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c660: 0x8c66a478  lw          $a2, -0x5B88($v1)
    ctx->pc = 0x20c660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943864)));
    // 0x20c664: 0x8c42a470  lw          $v0, -0x5B90($v0)
    ctx->pc = 0x20c664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943856)));
    // 0x20c668: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x20c668u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20c66c: 0x7cc00000  sq          $zero, 0x0($a2)
    ctx->pc = 0x20c66cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 0));
    // 0x20c670: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C670u;
    {
        const bool branch_taken_0x20c670 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C670u;
        // 0x20c674: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c670) {
            ctx->pc = 0x20C680u;
            goto label_20c680;
        }
    }
    ctx->pc = 0x20C678u;
    // 0x20c678: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x20c678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x20c67c: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x20c67cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_20c680:
    // 0x20c680: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x20c680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x20c684: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x20c684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20c688: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x20c688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20c68c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x20c68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20c690: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c694: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x20c694u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x20c698: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x20c698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x20c69c: 0x8c42a478  lw          $v0, -0x5B88($v0)
    ctx->pc = 0x20c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943864)));
    // 0x20c6a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c6a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20c6a8: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x20c6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x20c6ac: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x20C6ACu;
    SET_GPR_U32(ctx, 31, 0x20C6B4u);
    ctx->pc = 0x20C6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C6ACu;
    // 0x20c6b0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x20C6ACu, 0x20C6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C6B4u;
label_20c6b4:
    // 0x20c6b4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x20c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x20c6b8: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c6bc: 0x8c45a478  lw          $a1, -0x5B88($v0)
    ctx->pc = 0x20c6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943864)));
    // 0x20c6c0: 0xc040a04  jal         func_102810
    ctx->pc = 0x20C6C0u;
    SET_GPR_U32(ctx, 31, 0x20C6C8u);
    ctx->pc = 0x20C6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C6C0u;
    // 0x20c6c4: 0x8c64e688  lw          $a0, -0x1978($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x20C6C0u, 0x20C6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C6C8u;
label_20c6c8:
    // 0x20c6c8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20C6C8u;
    {
        const bool branch_taken_0x20c6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6C8u;
        // 0x20c6cc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6c8) {
            ctx->pc = 0x20C744u;
            goto label_20c744;
        }
    }
    ctx->pc = 0x20C6D0u;
label_20c6d0:
    // 0x20c6d0: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20c6d4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c6d8: 0x8c66a468  lw          $a2, -0x5B98($v1)
    ctx->pc = 0x20c6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943848)));
    // 0x20c6dc: 0x8c42a460  lw          $v0, -0x5BA0($v0)
    ctx->pc = 0x20c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943840)));
    // 0x20c6e0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x20c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20c6e4: 0x7cc00000  sq          $zero, 0x0($a2)
    ctx->pc = 0x20c6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 0));
    // 0x20c6e8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C6E8u;
    {
        const bool branch_taken_0x20c6e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6E8u;
        // 0x20c6ec: 0x22103  sra         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6e8) {
            ctx->pc = 0x20C6F8u;
            goto label_20c6f8;
        }
    }
    ctx->pc = 0x20C6F0u;
    // 0x20c6f0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x20c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x20c6f4: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x20c6f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
label_20c6f8:
    // 0x20c6f8: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x20c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x20c6fc: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x20c6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20c700: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x20c700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x20c704: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x20c704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20c708: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c70c: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x20c70cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x20c710: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x20c710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x20c714: 0x8c42a468  lw          $v0, -0x5B98($v0)
    ctx->pc = 0x20c714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943848)));
    // 0x20c718: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c71c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x20c720: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x20c720u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x20c724: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x20C724u;
    SET_GPR_U32(ctx, 31, 0x20C72Cu);
    ctx->pc = 0x20C728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C724u;
    // 0x20c728: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x20C724u, 0x20C72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C72Cu;
label_20c72c:
    // 0x20c72c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x20c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x20c730: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x20c730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
    // 0x20c734: 0x8c45a468  lw          $a1, -0x5B98($v0)
    ctx->pc = 0x20c734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943848)));
    // 0x20c738: 0xc040a04  jal         func_102810
    ctx->pc = 0x20C738u;
    SET_GPR_U32(ctx, 31, 0x20C740u);
    ctx->pc = 0x20C73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C738u;
    // 0x20c73c: 0x8c64e688  lw          $a0, -0x1978($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x20C738u, 0x20C740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C740u;
label_20c740:
    // 0x20c740: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x20c740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_20c744:
    // 0x20c744: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20c744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20c748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20c748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c74c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20c74cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c750: 0x3e00008  jr          $ra
    ctx->pc = 0x20C750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C750u;
        // 0x20c754: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C758u;
    // 0x20c758: 0x0  nop
    ctx->pc = 0x20c758u;
    // NOP
    // 0x20c75c: 0x0  nop
    ctx->pc = 0x20c75cu;
    // NOP
}
