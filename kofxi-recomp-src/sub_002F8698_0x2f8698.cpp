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

// Function: sub_002F8698
// Address: 0x2f8698 - 0x2f8948
void sub_002F8698_0x2f8698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8698_0x2f8698");
#endif

    switch (ctx->pc) {
        case 0x2f86d0u: goto label_2f86d0;
        case 0x2f86ecu: goto label_2f86ec;
        case 0x2f86fcu: goto label_2f86fc;
        case 0x2f873cu: goto label_2f873c;
        case 0x2f8760u: goto label_2f8760;
        case 0x2f877cu: goto label_2f877c;
        case 0x2f87b4u: goto label_2f87b4;
        case 0x2f87d4u: goto label_2f87d4;
        case 0x2f8804u: goto label_2f8804;
        case 0x2f8830u: goto label_2f8830;
        case 0x2f8858u: goto label_2f8858;
        case 0x2f8878u: goto label_2f8878;
        case 0x2f8910u: goto label_2f8910;
        default: break;
    }

    ctx->pc = 0x2f8698u;

    // 0x2f8698: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2f8698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2f869c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f869cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f86a0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2f86a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2f86a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f86a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f86a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f86a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f86ac: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2f86acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f86b0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f86b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f86b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f86b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f86b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f86b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f86bc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2f86bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2f86c0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2f86c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2f86c4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2f86c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f86c8: 0xc0bc79c  jal         func_2F1E70
    ctx->pc = 0x2F86C8u;
    SET_GPR_U32(ctx, 31, 0x2F86D0u);
    ctx->pc = 0x2F86CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F86C8u;
    // 0x2f86cc: 0xffb40040  sd          $s4, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1E70u, 0x2F86C8u, 0x2F86D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F86D0u;
label_2f86d0:
    // 0x2f86d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f86d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f86d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f86d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f86d8: 0x2708823  subu        $s1, $s3, $s0
    ctx->pc = 0x2f86d8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2f86dc: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F86DCu;
    {
        const bool branch_taken_0x2f86dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F86DCu;
        // 0x2f86e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f86dc) {
            ctx->pc = 0x2F86F4u;
            goto label_2f86f4;
        }
    }
    ctx->pc = 0x2F86E4u;
    // 0x2f86e4: 0xc0bdff4  jal         func_2F7FD0
    ctx->pc = 0x2F86E4u;
    SET_GPR_U32(ctx, 31, 0x2F86ECu);
    ctx->pc = 0x2F86E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F86E4u;
    // 0x2f86e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7FD0u, 0x2F86E4u, 0x2F86ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F86ECu;
label_2f86ec:
    // 0x2f86ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F86ECu;
    {
        const bool branch_taken_0x2f86ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f86ec) {
            ctx->pc = 0x2F86FCu;
            goto label_2f86fc;
        }
    }
    ctx->pc = 0x2F86F4u;
label_2f86f4:
    // 0x2f86f4: 0xc0be04c  jal         func_2F8130
    ctx->pc = 0x2F86F4u;
    SET_GPR_U32(ctx, 31, 0x2F86FCu);
    ctx->pc = 0x2F86F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F86F4u;
    // 0x2f86f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8130u, 0x2F86F4u, 0x2F86FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F86FCu;
label_2f86fc:
    // 0x2f86fc: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F86FCu;
    {
        const bool branch_taken_0x2f86fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F8700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F86FCu;
        // 0x2f8700: 0x2519023  subu        $s2, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f86fc) {
            ctx->pc = 0x2F8760u;
            goto label_2f8760;
        }
    }
    ctx->pc = 0x2F8704u;
    // 0x2f8704: 0x2a420018  slti        $v0, $s2, 0x18
    ctx->pc = 0x2f8704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2f8708: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x2F8708u;
    {
        const bool branch_taken_0x2f8708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8708u;
        // 0x2f870c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8708) {
            ctx->pc = 0x2F8918u;
            goto label_2f8918;
        }
    }
    ctx->pc = 0x2F8710u;
    // 0x2f8710: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2f8710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8714: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x2f8714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2f8718: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2f8718u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f871c: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F871Cu;
    {
        const bool branch_taken_0x2f871c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F8720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F871Cu;
        // 0x2f8720: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f871c) {
            ctx->pc = 0x2F8760u;
            goto label_2f8760;
        }
    }
    ctx->pc = 0x2F8724u;
    // 0x2f8724: 0x82110000  lb          $s1, 0x0($s0)
    ctx->pc = 0x2f8724u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8728: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2f8728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f872c: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F872Cu;
    {
        const bool branch_taken_0x2f872c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F872Cu;
        // 0x2f8730: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f872c) {
            ctx->pc = 0x2F8760u;
            goto label_2f8760;
        }
    }
    ctx->pc = 0x2F8734u;
    // 0x2f8734: 0xc0be134  jal         func_2F84D0
    ctx->pc = 0x2F8734u;
    SET_GPR_U32(ctx, 31, 0x2F873Cu);
    ctx->pc = 0x2F8738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8734u;
    // 0x2f8738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F84D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F84D0u, 0x2F8734u, 0x2F873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F873Cu;
label_2f873c:
    // 0x2f873c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2f873cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8740: 0x1ac00007  blez        $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F8740u;
    {
        const bool branch_taken_0x2f8740 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2F8744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8740u;
        // 0x2f8744: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8740) {
            ctx->pc = 0x2F8760u;
            goto label_2f8760;
        }
    }
    ctx->pc = 0x2F8748u;
    // 0x2f8748: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2f8748u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f874c: 0x10710006  beq         $v1, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F874Cu;
    {
        const bool branch_taken_0x2f874c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F8750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F874Cu;
        // 0x2f8750: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f874c) {
            ctx->pc = 0x2F8768u;
            goto label_2f8768;
        }
    }
    ctx->pc = 0x2F8754u;
    // 0x2f8754: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2f8754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2f8758: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F8758u;
    {
        const bool branch_taken_0x2f8758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8758u;
        // 0x2f875c: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8758) {
            ctx->pc = 0x2F876Cu;
            goto label_2f876c;
        }
    }
    ctx->pc = 0x2F8760u;
label_2f8760:
    // 0x2f8760: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2F8760u;
    {
        const bool branch_taken_0x2f8760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8760u;
        // 0x2f8764: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8760) {
            ctx->pc = 0x2F8918u;
            goto label_2f8918;
        }
    }
    ctx->pc = 0x2F8768u;
label_2f8768:
    // 0x2f8768: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x2f8768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_2f876c:
    // 0x2f876c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f876cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f8770: 0x28e03  sra         $s1, $v0, 24
    ctx->pc = 0x2f8770u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f8774: 0xc0be0b6  jal         func_2F82D8
    ctx->pc = 0x2F8774u;
    SET_GPR_U32(ctx, 31, 0x2F877Cu);
    ctx->pc = 0x2F8778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8774u;
    // 0x2f8778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F82D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F82D8u, 0x2F8774u, 0x2F877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F877Cu;
label_2f877c:
    // 0x2f877c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2f877cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8780: 0x1aa0fff7  blez        $s5, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F8780u;
    {
        const bool branch_taken_0x2f8780 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2F8784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8780u;
        // 0x2f8784: 0x2aa2000d  slti        $v0, $s5, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8780) {
            ctx->pc = 0x2F8760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8760;
        }
    }
    ctx->pc = 0x2F8788u;
    // 0x2f8788: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2F8788u;
    {
        const bool branch_taken_0x2f8788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8788u;
        // 0x2f878c: 0x26100003  addiu       $s0, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8788) {
            ctx->pc = 0x2F8760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8760;
        }
    }
    ctx->pc = 0x2F8790u;
    // 0x2f8790: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2f8790u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8794: 0x1451fff2  bne         $v0, $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2F8794u;
    {
        const bool branch_taken_0x2f8794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2F8798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8794u;
        // 0x2f8798: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8794) {
            ctx->pc = 0x2F8760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8760;
        }
    }
    ctx->pc = 0x2F879Cu;
    // 0x2f879c: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x2f879cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2f87a0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2f87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f87a4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F87A4u;
    {
        const bool branch_taken_0x2f87a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f87a4) {
            ctx->pc = 0x2F87CCu;
            goto label_2f87cc;
        }
    }
    ctx->pc = 0x2F87ACu;
    // 0x2f87ac: 0xc0be14a  jal         func_2F8528
    ctx->pc = 0x2F87ACu;
    SET_GPR_U32(ctx, 31, 0x2F87B4u);
    ctx->pc = 0x2F87B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F87ACu;
    // 0x2f87b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8528u, 0x2F87ACu, 0x2F87B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F87B4u;
label_2f87b4:
    // 0x2f87b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f87b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f87b8: 0x2a2207b2  slti        $v0, $s1, 0x7B2
    ctx->pc = 0x2f87b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1970) ? 1 : 0);
    // 0x2f87bc: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2F87BCu;
    {
        const bool branch_taken_0x2f87bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F87C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87BCu;
        // 0x2f87c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f87bc) {
            ctx->pc = 0x2F8918u;
            goto label_2f8918;
        }
    }
    ctx->pc = 0x2F87C4u;
    // 0x2f87c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F87C4u;
    {
        const bool branch_taken_0x2f87c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F87C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87C4u;
        // 0x2f87c8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f87c4) {
            ctx->pc = 0x2F87ECu;
            goto label_2f87ec;
        }
    }
    ctx->pc = 0x2F87CCu;
label_2f87cc:
    // 0x2f87cc: 0xc0be134  jal         func_2F84D0
    ctx->pc = 0x2F87CCu;
    SET_GPR_U32(ctx, 31, 0x2F87D4u);
    ctx->pc = 0x2F87D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F87CCu;
    // 0x2f87d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F84D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F84D0u, 0x2F87CCu, 0x2F87D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F87D4u;
label_2f87d4:
    // 0x2f87d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f87d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f87d8: 0x2a220046  slti        $v0, $s1, 0x46
    ctx->pc = 0x2f87d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)70) ? 1 : 0);
    // 0x2f87dc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F87DCu;
    {
        const bool branch_taken_0x2f87dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f87dc) {
            ctx->pc = 0x2F87E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F87DCu;
            // 0x2f87e0: 0x2631076c  addiu       $s1, $s1, 0x76C (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1900));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F87E8u;
            goto label_2f87e8;
        }
    }
    ctx->pc = 0x2F87E4u;
    // 0x2f87e4: 0x263107d0  addiu       $s1, $s1, 0x7D0
    ctx->pc = 0x2f87e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2000));
label_2f87e8:
    // 0x2f87e8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2f87e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2f87ec:
    // 0x2f87ec: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2f87ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f87f0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2f87f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2f87f4: 0x1462ffda  bne         $v1, $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2F87F4u;
    {
        const bool branch_taken_0x2f87f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F87F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F87F4u;
        // 0x2f87f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f87f4) {
            ctx->pc = 0x2F8760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8760;
        }
    }
    ctx->pc = 0x2F87FCu;
    // 0x2f87fc: 0xc0be134  jal         func_2F84D0
    ctx->pc = 0x2F87FCu;
    SET_GPR_U32(ctx, 31, 0x2F8804u);
    ctx->pc = 0x2F8800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F87FCu;
    // 0x2f8800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F84D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F84D0u, 0x2F87FCu, 0x2F8804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8804u;
label_2f8804:
    // 0x2f8804: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2f8804u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8808: 0x680ffd5  bltz        $s4, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2F8808u;
    {
        const bool branch_taken_0x2f8808 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2F880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8808u;
        // 0x2f880c: 0x2a820018  slti        $v0, $s4, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8808) {
            ctx->pc = 0x2F8760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8760;
        }
    }
    ctx->pc = 0x2F8810u;
    // 0x2f8810: 0x1040ffd3  beqz        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2F8810u;
    {
        const bool branch_taken_0x2f8810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8810u;
        // 0x2f8814: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8810) {
            ctx->pc = 0x2F8760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8760;
        }
    }
    ctx->pc = 0x2F8818u;
    // 0x2f8818: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x2f8818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2f881c: 0x82120000  lb          $s2, 0x0($s0)
    ctx->pc = 0x2f881cu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8820: 0x1642ffcf  bne         $s2, $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2F8820u;
    {
        const bool branch_taken_0x2f8820 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F8824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8820u;
        // 0x2f8824: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8820) {
            ctx->pc = 0x2F8760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8760;
        }
    }
    ctx->pc = 0x2F8828u;
    // 0x2f8828: 0xc0be134  jal         func_2F84D0
    ctx->pc = 0x2F8828u;
    SET_GPR_U32(ctx, 31, 0x2F8830u);
    ctx->pc = 0x2F882Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8828u;
    // 0x2f882c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F84D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F84D0u, 0x2F8828u, 0x2F8830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8830u;
label_2f8830:
    // 0x2f8830: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f8830u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8834: 0x660ffca  bltz        $s3, . + 4 + (-0x36 << 2)
    ctx->pc = 0x2F8834u;
    {
        const bool branch_taken_0x2f8834 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2F8838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8834u;
        // 0x2f8838: 0x2a62003c  slti        $v0, $s3, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8834) {
            ctx->pc = 0x2F8760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8760;
        }
    }
    ctx->pc = 0x2F883Cu;
    // 0x2f883c: 0x1040ffc8  beqz        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x2F883Cu;
    {
        const bool branch_taken_0x2f883c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F883Cu;
        // 0x2f8840: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f883c) {
            ctx->pc = 0x2F8760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8760;
        }
    }
    ctx->pc = 0x2F8844u;
    // 0x2f8844: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2f8844u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8848: 0x1452ffc5  bne         $v0, $s2, . + 4 + (-0x3B << 2)
    ctx->pc = 0x2F8848u;
    {
        const bool branch_taken_0x2f8848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8848u;
        // 0x2f884c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8848) {
            ctx->pc = 0x2F8760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8760;
        }
    }
    ctx->pc = 0x2F8850u;
    // 0x2f8850: 0xc0be134  jal         func_2F84D0
    ctx->pc = 0x2F8850u;
    SET_GPR_U32(ctx, 31, 0x2F8858u);
    ctx->pc = 0x2F8854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8850u;
    // 0x2f8854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F84D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F84D0u, 0x2F8850u, 0x2F8858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8858u;
label_2f8858:
    // 0x2f8858: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f8858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f885c: 0x640ffc0  bltz        $s2, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2F885Cu;
    {
        const bool branch_taken_0x2f885c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2F8860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F885Cu;
        // 0x2f8860: 0x2a42003c  slti        $v0, $s2, 0x3C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)60) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f885c) {
            ctx->pc = 0x2F8760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8760;
        }
    }
    ctx->pc = 0x2F8864u;
    // 0x2f8864: 0x1040ffbe  beqz        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x2F8864u;
    {
        const bool branch_taken_0x2f8864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8864u;
        // 0x2f8868: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8864) {
            ctx->pc = 0x2F8760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f8760;
        }
    }
    ctx->pc = 0x2F886Cu;
    // 0x2f886c: 0x26040002  addiu       $a0, $s0, 0x2
    ctx->pc = 0x2f886cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x2f8870: 0xc0bda28  jal         func_2F68A0
    ctx->pc = 0x2F8870u;
    SET_GPR_U32(ctx, 31, 0x2F8878u);
    ctx->pc = 0x2F8874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8870u;
    // 0x2f8874: 0x24a526a0  addiu       $a1, $a1, 0x26A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F68A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F68A0u, 0x2F8870u, 0x2F8878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8878u;
label_2f8878:
    // 0x2f8878: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2F8878u;
    {
        const bool branch_taken_0x2f8878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8878u;
        // 0x2f887c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8878) {
            ctx->pc = 0x2F8918u;
            goto label_2f8918;
        }
    }
    ctx->pc = 0x2F8880u;
    // 0x2f8880: 0x32220003  andi        $v0, $s1, 0x3
    ctx->pc = 0x2f8880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x2f8884: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F8884u;
    {
        const bool branch_taken_0x2f8884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8884u;
        // 0x2f8888: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8884) {
            ctx->pc = 0x2F88C8u;
            goto label_2f88c8;
        }
    }
    ctx->pc = 0x2F888Cu;
    // 0x2f888c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2f888cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2f8890: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x2f8890u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f8894: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F8894u;
    {
        const bool branch_taken_0x2f8894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f8894) {
            ctx->pc = 0x2F8898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8894u;
            // 0x2f8898: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F889Cu;
            goto label_2f889c;
        }
    }
    ctx->pc = 0x2F889Cu;
label_2f889c:
    // 0x2f889c: 0x1810  mfhi        $v1
    ctx->pc = 0x2f889cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f88a0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F88A0u;
    {
        const bool branch_taken_0x2f88a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F88A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88A0u;
        // 0x2f88a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88a0) {
            ctx->pc = 0x2F88C8u;
            goto label_2f88c8;
        }
    }
    ctx->pc = 0x2F88A8u;
    // 0x2f88a8: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x2f88a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x2f88ac: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x2f88acu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2f88b0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F88B0u;
    {
        const bool branch_taken_0x2f88b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f88b0) {
            ctx->pc = 0x2F88B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F88B0u;
            // 0x2f88b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F88B8u;
            goto label_2f88b8;
        }
    }
    ctx->pc = 0x2F88B8u;
label_2f88b8:
    // 0x2f88b8: 0x1810  mfhi        $v1
    ctx->pc = 0x2f88b8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2f88bc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F88BCu;
    {
        const bool branch_taken_0x2f88bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F88C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88BCu;
        // 0x2f88c0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88bc) {
            ctx->pc = 0x2F88C8u;
            goto label_2f88c8;
        }
    }
    ctx->pc = 0x2F88C4u;
    // 0x2f88c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f88c8:
    // 0x2f88c8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f88cc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2f88ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2f88d0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2f88d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f88d4: 0x248405e0  addiu       $a0, $a0, 0x5E0
    ctx->pc = 0x2f88d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1504));
    // 0x2f88d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2f88d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2f88dc: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2f88dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2f88e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f88e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2f88e4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2f88e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f88e8: 0x76182a  slt         $v1, $v1, $s6
    ctx->pc = 0x2f88e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2f88ec: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F88ECu;
    {
        const bool branch_taken_0x2f88ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F88ECu;
        // 0x2f88f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f88ec) {
            ctx->pc = 0x2F8918u;
            goto label_2f8918;
        }
    }
    ctx->pc = 0x2F88F4u;
    // 0x2f88f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f88f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f88f8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2f88f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f88fc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2f88fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8900: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2f8900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8904: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2f8904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8908: 0xc0be174  jal         func_2F85D0
    ctx->pc = 0x2F8908u;
    SET_GPR_U32(ctx, 31, 0x2F8910u);
    ctx->pc = 0x2F890Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8908u;
    // 0x2f890c: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F85D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F85D0u, 0x2F8908u, 0x2F8910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8910u;
label_2f8910:
    // 0x2f8910: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x2f8910u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x2f8914: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f8914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8918:
    // 0x2f8918: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2f8918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f891c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2f891cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f8920: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2f8920u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f8924: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2f8924u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f8928: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f8928u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f892c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f892cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8930: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f8930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8934: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f8934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f8938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f893c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F893Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F893Cu;
        // 0x2f8940: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F893Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8944u;
    // 0x2f8944: 0x0  nop
    ctx->pc = 0x2f8944u;
    // NOP
}
