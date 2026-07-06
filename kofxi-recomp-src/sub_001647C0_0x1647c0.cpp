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

// Function: sub_001647C0
// Address: 0x1647c0 - 0x1649d0
void sub_001647C0_0x1647c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001647C0_0x1647c0");
#endif

    switch (ctx->pc) {
        case 0x16481cu: goto label_16481c;
        case 0x164868u: goto label_164868;
        case 0x164894u: goto label_164894;
        case 0x1648b4u: goto label_1648b4;
        case 0x1648c4u: goto label_1648c4;
        case 0x1648e0u: goto label_1648e0;
        case 0x16494cu: goto label_16494c;
        case 0x164968u: goto label_164968;
        default: break;
    }

    ctx->pc = 0x1647c0u;

    // 0x1647c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1647c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1647c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1647c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1647c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1647c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1647cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1647ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1647d0: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1647d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1647d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1647d8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1647d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1647dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1647e0: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x1647e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1647e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1647e8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1647e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1647ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1647f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1647f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1647f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1647f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1647f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1647f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1647fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1647fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164800: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x164800u;
    {
        const bool branch_taken_0x164800 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x164804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164800u;
        // 0x164804: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164800) {
            ctx->pc = 0x164834u;
            goto label_164834;
        }
    }
    ctx->pc = 0x164808u;
    // 0x164808: 0x8ea400dc  lw          $a0, 0xDC($s5)
    ctx->pc = 0x164808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    // 0x16480c: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x16480cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x164810: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x164810u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x164814: 0xc059130  jal         func_1644C0
    ctx->pc = 0x164814u;
    SET_GPR_U32(ctx, 31, 0x16481Cu);
    ctx->pc = 0x164818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164814u;
    // 0x164818: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1644C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1644C0u, 0x164814u, 0x16481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16481Cu;
label_16481c:
    // 0x16481c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x16481cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x164820: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x164820u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x164824: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x164824u;
    {
        const bool branch_taken_0x164824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x164824) {
            ctx->pc = 0x164838u;
            goto label_164838;
        }
    }
    ctx->pc = 0x16482Cu;
    // 0x16482c: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x16482Cu;
    {
        const bool branch_taken_0x16482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16482Cu;
        // 0x164830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16482c) {
            ctx->pc = 0x1649A0u;
            goto label_1649a0;
        }
    }
    ctx->pc = 0x164834u;
label_164834:
    // 0x164834: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x164834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_164838:
    // 0x164838: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x164838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x16483c: 0x327300ff  andi        $s3, $s3, 0xFF
    ctx->pc = 0x16483cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x164840: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x164840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164844: 0x24421f20  addiu       $v0, $v0, 0x1F20
    ctx->pc = 0x164844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7968));
    // 0x164848: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x164848u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x16484c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x16484cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x164850: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x164850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x164854: 0x24a5d440  addiu       $a1, $a1, -0x2BC0
    ctx->pc = 0x164854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956096));
    // 0x164858: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x164858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16485c: 0x2407060c  addiu       $a3, $zero, 0x60C
    ctx->pc = 0x16485cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1548));
    // 0x164860: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x164860u;
    SET_GPR_U32(ctx, 31, 0x164868u);
    ctx->pc = 0x164864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164860u;
    // 0x164864: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x164860u, 0x164868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164868u;
label_164868:
    // 0x164868: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x164868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16486c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x16486cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x164870: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x164870u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164874: 0x24a5d448  addiu       $a1, $a1, -0x2BB8
    ctx->pc = 0x164874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956104));
    // 0x164878: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x164878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x16487c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16487cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164880: 0x24421f30  addiu       $v0, $v0, 0x1F30
    ctx->pc = 0x164880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7984));
    // 0x164884: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x164884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x164888: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x164888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16488c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x16488Cu;
    SET_GPR_U32(ctx, 31, 0x164894u);
    ctx->pc = 0x164890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16488Cu;
    // 0x164890: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x16488Cu, 0x164894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164894u;
label_164894:
    // 0x164894: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x164894u;
    {
        const bool branch_taken_0x164894 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x164898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164894u;
        // 0x164898: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164894) {
            ctx->pc = 0x1648A4u;
            goto label_1648a4;
        }
    }
    ctx->pc = 0x16489Cu;
    // 0x16489c: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x16489Cu;
    {
        const bool branch_taken_0x16489c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x16489c) {
            ctx->pc = 0x1648D0u;
            goto label_1648d0;
        }
    }
    ctx->pc = 0x1648A4u;
label_1648a4:
    // 0x1648a4: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1648A4u;
    {
        const bool branch_taken_0x1648a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1648a4) {
            ctx->pc = 0x1648B4u;
            goto label_1648b4;
        }
    }
    ctx->pc = 0x1648ACu;
    // 0x1648ac: 0xc055728  jal         func_155CA0
    ctx->pc = 0x1648ACu;
    SET_GPR_U32(ctx, 31, 0x1648B4u);
    ctx->pc = 0x1648B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1648ACu;
    // 0x1648b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x1648ACu, 0x1648B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1648B4u;
label_1648b4:
    // 0x1648b4: 0x5240003a  beql        $s2, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x1648B4u;
    {
        const bool branch_taken_0x1648b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1648b4) {
            ctx->pc = 0x1648B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1648B4u;
            // 0x1648b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1649A0u;
            goto label_1649a0;
        }
    }
    ctx->pc = 0x1648BCu;
    // 0x1648bc: 0xc055728  jal         func_155CA0
    ctx->pc = 0x1648BCu;
    SET_GPR_U32(ctx, 31, 0x1648C4u);
    ctx->pc = 0x1648C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1648BCu;
    // 0x1648c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155CA0u, 0x1648BCu, 0x1648C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1648C4u;
label_1648c4:
    // 0x1648c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1648c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1648c8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1648C8u;
    {
        const bool branch_taken_0x1648c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1648c8) {
            ctx->pc = 0x1649A0u;
            goto label_1649a0;
        }
    }
    ctx->pc = 0x1648D0u;
label_1648d0:
    // 0x1648d0: 0x52a00015  beql        $s5, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1648D0u;
    {
        const bool branch_taken_0x1648d0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1648d0) {
            ctx->pc = 0x1648D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1648D0u;
            // 0x1648d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164928u;
            goto label_164928;
        }
    }
    ctx->pc = 0x1648D8u;
    // 0x1648d8: 0xc059154  jal         func_164550
    ctx->pc = 0x1648D8u;
    SET_GPR_U32(ctx, 31, 0x1648E0u);
    ctx->pc = 0x1648DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1648D8u;
    // 0x1648dc: 0x8ea400dc  lw          $a0, 0xDC($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164550u, 0x1648D8u, 0x1648E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1648E0u;
label_1648e0:
    // 0x1648e0: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x1648e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1648e4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1648e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1648e8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1648e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1648ec: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1648ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1648f0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1648f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1648f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1648f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1648f8: 0x732821  addu        $a1, $v1, $s3
    ctx->pc = 0x1648f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1648fc: 0x2484dc10  addiu       $a0, $a0, -0x23F0
    ctx->pc = 0x1648fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958096));
    // 0x164900: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x164900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x164904: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x164904u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x164908: 0x2463dc50  addiu       $v1, $v1, -0x23B0
    ctx->pc = 0x164908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958160));
    // 0x16490c: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x16490cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x164910: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x164910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x164914: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x164914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x164918: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x164918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x16491c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x16491cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x164920: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x164920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 20));
    // 0x164924: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x164924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_164928:
    // 0x164928: 0x8e930010  lw          $s3, 0x10($s4)
    ctx->pc = 0x164928u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x16492c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16492cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164930: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x164930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164934: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x164934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164938: 0xae530010  sw          $s3, 0x10($s2)
    ctx->pc = 0x164938u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 19));
    // 0x16493c: 0xae7205dc  sw          $s2, 0x5DC($s3)
    ctx->pc = 0x16493cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1500), GPR_U32(ctx, 18));
    // 0x164940: 0xa26205e4  sb          $v0, 0x5E4($s3)
    ctx->pc = 0x164940u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1508), (uint8_t)GPR_U32(ctx, 2));
    // 0x164944: 0xc05906c  jal         func_1641B0
    ctx->pc = 0x164944u;
    SET_GPR_U32(ctx, 31, 0x16494Cu);
    ctx->pc = 0x164948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164944u;
    // 0x164948: 0xa66005e0  sh          $zero, 0x5E0($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 1504), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1641B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1641B0u, 0x164944u, 0x16494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16494Cu;
label_16494c:
    // 0x16494c: 0x52a00014  beql        $s5, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x16494Cu;
    {
        const bool branch_taken_0x16494c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x16494c) {
            ctx->pc = 0x164950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16494Cu;
            // 0x164950: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1649A0u;
            goto label_1649a0;
        }
    }
    ctx->pc = 0x164954u;
    // 0x164954: 0xa67605ec  sh          $s6, 0x5EC($s3)
    ctx->pc = 0x164954u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1516), (uint16_t)GPR_U32(ctx, 22));
    // 0x164958: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16495c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x16495cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164960: 0xc0591d0  jal         func_164740
    ctx->pc = 0x164960u;
    SET_GPR_U32(ctx, 31, 0x164968u);
    ctx->pc = 0x164964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164960u;
    // 0x164964: 0xa67705ee  sh          $s7, 0x5EE($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 1518), (uint16_t)GPR_U32(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164740u, 0x164960u, 0x164968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164968u;
label_164968:
    // 0x164968: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x164968u;
    {
        const bool branch_taken_0x164968 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x164968) {
            ctx->pc = 0x16499Cu;
            goto label_16499c;
        }
    }
    ctx->pc = 0x164970u;
    // 0x164970: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x164970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x164974: 0x8ea300dc  lw          $v1, 0xDC($s5)
    ctx->pc = 0x164974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    // 0x164978: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x164978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x16497c: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x16497cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x164980: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x164980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x164984: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164984u;
    {
        const bool branch_taken_0x164984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x164984) {
            ctx->pc = 0x16499Cu;
            goto label_16499c;
        }
    }
    ctx->pc = 0x16498Cu;
    // 0x16498c: 0xa66305e2  sh          $v1, 0x5E2($s3)
    ctx->pc = 0x16498cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1506), (uint16_t)GPR_U32(ctx, 3));
    // 0x164990: 0x966205e2  lhu         $v0, 0x5E2($s3)
    ctx->pc = 0x164990u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1506)));
    // 0x164994: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x164994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x164998: 0xa66205e2  sh          $v0, 0x5E2($s3)
    ctx->pc = 0x164998u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 1506), (uint16_t)GPR_U32(ctx, 2));
label_16499c:
    // 0x16499c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x16499cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1649a0:
    // 0x1649a0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1649a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1649a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1649a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1649a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1649a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1649ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1649acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1649b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1649b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1649b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1649b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1649b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1649b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1649bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1649bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1649c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1649c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1649c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1649C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1649C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1649C4u;
        // 0x1649c8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1649C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1649CCu;
    // 0x1649cc: 0x0  nop
    ctx->pc = 0x1649ccu;
    // NOP
}
