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

// Function: sub_001745F0
// Address: 0x1745f0 - 0x174750
void sub_001745F0_0x1745f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001745F0_0x1745f0");
#endif

    switch (ctx->pc) {
        case 0x17460cu: goto label_17460c;
        case 0x174614u: goto label_174614;
        case 0x17463cu: goto label_17463c;
        case 0x17465cu: goto label_17465c;
        case 0x1746f8u: goto label_1746f8;
        case 0x174720u: goto label_174720;
        default: break;
    }

    ctx->pc = 0x1745f0u;

    // 0x1745f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1745f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1745f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1745f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1745f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1745f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1745fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1745fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174600: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x174600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x174604: 0xc067dbc  jal         func_19F6F0
    ctx->pc = 0x174604u;
    SET_GPR_U32(ctx, 31, 0x17460Cu);
    ctx->pc = 0x174608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174604u;
    // 0x174608: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F6F0u, 0x174604u, 0x17460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17460Cu;
label_17460c:
    // 0x17460c: 0xc067dc0  jal         func_19F700
    ctx->pc = 0x17460Cu;
    SET_GPR_U32(ctx, 31, 0x174614u);
    ctx->pc = 0x174610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17460Cu;
    // 0x174610: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F700u, 0x17460Cu, 0x174614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174614u;
label_174614:
    // 0x174614: 0x93a20061  lbu         $v0, 0x61($sp)
    ctx->pc = 0x174614u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 97)));
    // 0x174618: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x174618u;
    {
        const bool branch_taken_0x174618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174618) {
            ctx->pc = 0x17461Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174618u;
            // 0x17461c: 0x323000ff  andi        $s0, $s1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x174644u;
            goto label_174644;
        }
    }
    ctx->pc = 0x174620u;
    // 0x174620: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x174620u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x174624: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x174624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174628: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x174628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x17462c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17462cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x174630: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x174630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x174634: 0xc067db8  jal         func_19F6E0
    ctx->pc = 0x174634u;
    SET_GPR_U32(ctx, 31, 0x17463Cu);
    ctx->pc = 0x174638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174634u;
    // 0x174638: 0x24450078  addiu       $a1, $v0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F6E0u, 0x174634u, 0x17463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17463Cu;
label_17463c:
    // 0x17463c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17463Cu;
    {
        const bool branch_taken_0x17463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17463c) {
            ctx->pc = 0x17465Cu;
            goto label_17465c;
        }
    }
    ctx->pc = 0x174644u;
label_174644:
    // 0x174644: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x174644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x174648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17464c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x17464cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x174650: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x174650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x174654: 0xc067db8  jal         func_19F6E0
    ctx->pc = 0x174654u;
    SET_GPR_U32(ctx, 31, 0x17465Cu);
    ctx->pc = 0x174658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174654u;
    // 0x174658: 0x24450078  addiu       $a1, $v0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F6E0u, 0x174654u, 0x17465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17465Cu;
label_17465c:
    // 0x17465c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17465cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x174660: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x174660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x174664: 0x9043dad8  lbu         $v1, -0x2528($v0)
    ctx->pc = 0x174664u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957784)));
    // 0x174668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17466c: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x17466cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x174670: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x174670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x174674: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x174674u;
    {
        const bool branch_taken_0x174674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174674) {
            ctx->pc = 0x174678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174674u;
            // 0x174678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174734u;
            goto label_174734;
        }
    }
    ctx->pc = 0x17467Cu;
    // 0x17467c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x17467cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x174680: 0x2442da58  addiu       $v0, $v0, -0x25A8
    ctx->pc = 0x174680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957656));
    // 0x174684: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x174684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x174688: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x174688u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17468c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x17468cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x174690: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x174690u;
    {
        const bool branch_taken_0x174690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174690) {
            ctx->pc = 0x174730u;
            goto label_174730;
        }
    }
    ctx->pc = 0x174698u;
    // 0x174698: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x174698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x17469c: 0x2442dab8  addiu       $v0, $v0, -0x2548
    ctx->pc = 0x17469cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957752));
    // 0x1746a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1746a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1746a4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1746a4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1746a8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1746A8u;
    {
        const bool branch_taken_0x1746a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1746a8) {
            ctx->pc = 0x1746D0u;
            goto label_1746d0;
        }
    }
    ctx->pc = 0x1746B0u;
    // 0x1746b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1746b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1746b4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1746B4u;
    {
        const bool branch_taken_0x1746b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1746b4) {
            ctx->pc = 0x1746D0u;
            goto label_1746d0;
        }
    }
    ctx->pc = 0x1746BCu;
    // 0x1746bc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1746bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1746c0: 0x24030303  addiu       $v1, $zero, 0x303
    ctx->pc = 0x1746c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 771));
    // 0x1746c4: 0x9442dab0  lhu         $v0, -0x2550($v0)
    ctx->pc = 0x1746c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957744)));
    // 0x1746c8: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1746C8u;
    {
        const bool branch_taken_0x1746c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1746c8) {
            ctx->pc = 0x174730u;
            goto label_174730;
        }
    }
    ctx->pc = 0x1746D0u;
label_1746d0:
    // 0x1746d0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1746d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1746d4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1746d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1746d8: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x1746d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x1746dc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1746DCu;
    {
        const bool branch_taken_0x1746dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1746dc) {
            ctx->pc = 0x174700u;
            goto label_174700;
        }
    }
    ctx->pc = 0x1746E4u;
    // 0x1746e4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1746e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1746e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1746e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1746ec: 0x90449480  lbu         $a0, -0x6B80($v0)
    ctx->pc = 0x1746ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294939776)));
    // 0x1746f0: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x1746F0u;
    SET_GPR_U32(ctx, 31, 0x1746F8u);
    ctx->pc = 0x1746F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1746F0u;
    // 0x1746f4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x1746F0u, 0x1746F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1746F8u;
label_1746f8:
    // 0x1746f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1746F8u;
    {
        const bool branch_taken_0x1746f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1746FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1746F8u;
        // 0x1746fc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746f8) {
            ctx->pc = 0x174734u;
            goto label_174734;
        }
    }
    ctx->pc = 0x174700u;
label_174700:
    // 0x174700: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x174700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x174704: 0x8c429478  lw          $v0, -0x6B88($v0)
    ctx->pc = 0x174704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939768)));
    // 0x174708: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x174708u;
    {
        const bool branch_taken_0x174708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174708) {
            ctx->pc = 0x17470Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x174708u;
            // 0x17470c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x174718u;
            goto label_174718;
        }
    }
    ctx->pc = 0x174710u;
    // 0x174710: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x174710u;
    {
        const bool branch_taken_0x174710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174710u;
        // 0x174714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174710) {
            ctx->pc = 0x174734u;
            goto label_174734;
        }
    }
    ctx->pc = 0x174718u;
label_174718:
    // 0x174718: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x174718u;
    SET_GPR_U32(ctx, 31, 0x174720u);
    ctx->pc = 0x17471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174718u;
    // 0x17471c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x174718u, 0x174720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174720u;
label_174720:
    // 0x174720: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174720u;
    {
        const bool branch_taken_0x174720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174720) {
            ctx->pc = 0x174730u;
            goto label_174730;
        }
    }
    ctx->pc = 0x174728u;
    // 0x174728: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x174728u;
    {
        const bool branch_taken_0x174728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174728u;
        // 0x17472c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174728) {
            ctx->pc = 0x174734u;
            goto label_174734;
        }
    }
    ctx->pc = 0x174730u;
label_174730:
    // 0x174730: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x174730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174734:
    // 0x174734: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x174734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174738: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174738u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17473c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17473cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174740: 0x3e00008  jr          $ra
    ctx->pc = 0x174740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174740u;
        // 0x174744: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174748u;
    // 0x174748: 0x0  nop
    ctx->pc = 0x174748u;
    // NOP
    // 0x17474c: 0x0  nop
    ctx->pc = 0x17474cu;
    // NOP
}
