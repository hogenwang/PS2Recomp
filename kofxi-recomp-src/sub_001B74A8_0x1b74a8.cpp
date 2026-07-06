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

// Function: sub_001B74A8
// Address: 0x1b74a8 - 0x1b7750
void sub_001B74A8_0x1b74a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B74A8_0x1b74a8");
#endif

    switch (ctx->pc) {
        case 0x1b7510u: goto label_1b7510;
        case 0x1b7518u: goto label_1b7518;
        case 0x1b7524u: goto label_1b7524;
        case 0x1b752cu: goto label_1b752c;
        case 0x1b7554u: goto label_1b7554;
        case 0x1b7570u: goto label_1b7570;
        case 0x1b7588u: goto label_1b7588;
        case 0x1b75c8u: goto label_1b75c8;
        case 0x1b75f4u: goto label_1b75f4;
        case 0x1b75fcu: goto label_1b75fc;
        case 0x1b7614u: goto label_1b7614;
        case 0x1b7628u: goto label_1b7628;
        case 0x1b7688u: goto label_1b7688;
        case 0x1b7694u: goto label_1b7694;
        case 0x1b76b0u: goto label_1b76b0;
        case 0x1b76c4u: goto label_1b76c4;
        case 0x1b76e0u: goto label_1b76e0;
        default: break;
    }

    ctx->pc = 0x1b74a8u;

    // 0x1b74a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b74a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b74ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b74acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b74b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b74b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b74b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b74b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b74b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b74b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b74bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b74bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b74c0: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x1b74c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1b74c4: 0x5440008b  bnel        $v0, $zero, . + 4 + (0x8B << 2)
    ctx->pc = 0x1B74C4u;
    {
        const bool branch_taken_0x1b74c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b74c4) {
            ctx->pc = 0x1B74C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B74C4u;
            // 0x1b74c8: 0x82030001  lb          $v1, 0x1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B76F4u;
            goto label_1b76f4;
        }
    }
    ctx->pc = 0x1B74CCu;
    // 0x1b74cc: 0x82030048  lb          $v1, 0x48($s0)
    ctx->pc = 0x1b74ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1b74d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b74d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b74d4: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B74D4u;
    {
        const bool branch_taken_0x1b74d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b74d4) {
            ctx->pc = 0x1B74D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B74D4u;
            // 0x1b74d8: 0x82030046  lb          $v1, 0x46($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B74F4u;
            goto label_1b74f4;
        }
    }
    ctx->pc = 0x1B74DCu;
    // 0x1b74dc: 0x82020047  lb          $v0, 0x47($s0)
    ctx->pc = 0x1b74dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
    // 0x1b74e0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B74E0u;
    {
        const bool branch_taken_0x1b74e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B74E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B74E0u;
        // 0x1b74e4: 0xa2000048  sb          $zero, 0x48($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 72), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b74e0) {
            ctx->pc = 0x1B74ECu;
            goto label_1b74ec;
        }
    }
    ctx->pc = 0x1B74E8u;
    // 0x1b74e8: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x1b74e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_1b74ec:
    // 0x1b74ec: 0x82030046  lb          $v1, 0x46($s0)
    ctx->pc = 0x1b74ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x1b74f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b74f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b74f4:
    // 0x1b74f4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B74F4u;
    {
        const bool branch_taken_0x1b74f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b74f4) {
            ctx->pc = 0x1B7524u;
            goto label_1b7524;
        }
    }
    ctx->pc = 0x1B74FCu;
    // 0x1b74fc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b74fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b7500: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7500u;
    {
        const bool branch_taken_0x1b7500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7500) {
            ctx->pc = 0x1B7510u;
            goto label_1b7510;
        }
    }
    ctx->pc = 0x1B7508u;
    // 0x1b7508: 0xc06fab2  jal         func_1BEAC8
    ctx->pc = 0x1B7508u;
    SET_GPR_U32(ctx, 31, 0x1B7510u);
    ctx->pc = 0x1B750Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7508u;
    // 0x1b750c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAC8u, 0x1B7508u, 0x1B7510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7510u;
label_1b7510:
    // 0x1b7510: 0xc06e042  jal         func_1B8108
    ctx->pc = 0x1B7510u;
    SET_GPR_U32(ctx, 31, 0x1B7518u);
    ctx->pc = 0x1B8108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8108u, 0x1B7510u, 0x1B7518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7518u;
label_1b7518:
    // 0x1b7518: 0xa2000046  sb          $zero, 0x46($s0)
    ctx->pc = 0x1b7518u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b751c: 0xc06e048  jal         func_1B8120
    ctx->pc = 0x1B751Cu;
    SET_GPR_U32(ctx, 31, 0x1B7524u);
    ctx->pc = 0x1B7520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B751Cu;
    // 0x1b7520: 0xa2000049  sb          $zero, 0x49($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8120u, 0x1B751Cu, 0x1B7524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7524u;
label_1b7524:
    // 0x1b7524: 0xc06e042  jal         func_1B8108
    ctx->pc = 0x1B7524u;
    SET_GPR_U32(ctx, 31, 0x1B752Cu);
    ctx->pc = 0x1B7528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7524u;
    // 0x1b7528: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8108u, 0x1B7524u, 0x1B752Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B752Cu;
label_1b752c:
    // 0x1b752c: 0x82040045  lb          $a0, 0x45($s0)
    ctx->pc = 0x1b752cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x1b7530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7534: 0x14820068  bne         $a0, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x1B7534u;
    {
        const bool branch_taken_0x1b7534 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7534) {
            ctx->pc = 0x1B76D8u;
            goto label_1b76d8;
        }
    }
    ctx->pc = 0x1B753Cu;
    // 0x1b753c: 0x82020049  lb          $v0, 0x49($s0)
    ctx->pc = 0x1b753cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x1b7540: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B7540u;
    {
        const bool branch_taken_0x1b7540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7540u;
        // 0x1b7544: 0x92030049  lbu         $v1, 0x49($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7540) {
            ctx->pc = 0x1B75A4u;
            goto label_1b75a4;
        }
    }
    ctx->pc = 0x1B7548u;
    // 0x1b7548: 0xa2040049  sb          $a0, 0x49($s0)
    ctx->pc = 0x1b7548u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b754c: 0xc06e048  jal         func_1B8120
    ctx->pc = 0x1B754Cu;
    SET_GPR_U32(ctx, 31, 0x1B7554u);
    ctx->pc = 0x1B7550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B754Cu;
    // 0x1b7550: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8120u, 0x1B754Cu, 0x1B7554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7554u;
label_1b7554:
    // 0x1b7554: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b7554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b7558: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B7558u;
    {
        const bool branch_taken_0x1b7558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7558) {
            ctx->pc = 0x1B755Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7558u;
            // 0x1b755c: 0x92030049  lbu         $v1, 0x49($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B75A4u;
            goto label_1b75a4;
        }
    }
    ctx->pc = 0x1B7560u;
    // 0x1b7560: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x1b7560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1b7564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b7564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7568: 0xc06f9de  jal         func_1BE778
    ctx->pc = 0x1B7568u;
    SET_GPR_U32(ctx, 31, 0x1B7570u);
    ctx->pc = 0x1B756Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7568u;
    // 0x1b756c: 0x8e050054  lw          $a1, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE778u, 0x1B7568u, 0x1B7570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7570u;
label_1b7570:
    // 0x1b7570: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B7570u;
    {
        const bool branch_taken_0x1b7570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7570u;
        // 0x1b7574: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7570) {
            ctx->pc = 0x1B75A0u;
            goto label_1b75a0;
        }
    }
    ctx->pc = 0x1B7578u;
    // 0x1b7578: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b7578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b757c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x1b757cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1b7580: 0xc06ba28  jal         func_1AE8A0
    ctx->pc = 0x1B7580u;
    SET_GPR_U32(ctx, 31, 0x1B7588u);
    ctx->pc = 0x1B7584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7580u;
    // 0x1b7584: 0x24847f48  addiu       $a0, $a0, 0x7F48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8A0u, 0x1B7580u, 0x1B7588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7588u;
label_1b7588:
    // 0x1b7588: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b7588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b758c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1b758cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b7590: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x1b7590u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b7594: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1B7594u;
    {
        const bool branch_taken_0x1b7594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7594u;
        // 0x1b7598: 0xa2000049  sb          $zero, 0x49($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7594) {
            ctx->pc = 0x1B7738u;
            goto label_1b7738;
        }
    }
    ctx->pc = 0x1B759Cu;
    // 0x1b759c: 0x0  nop
    ctx->pc = 0x1b759cu;
    // NOP
label_1b75a0:
    // 0x1b75a0: 0x92030049  lbu         $v1, 0x49($s0)
    ctx->pc = 0x1b75a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
label_1b75a4:
    // 0x1b75a4: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1b75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1b75a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b75a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b75ac: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1b75acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1b75b0: 0x5443004c  bnel        $v0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1B75B0u;
    {
        const bool branch_taken_0x1b75b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b75b0) {
            ctx->pc = 0x1B75B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B75B0u;
            // 0x1b75b4: 0x82030047  lb          $v1, 0x47($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B76E4u;
            goto label_1b76e4;
        }
    }
    ctx->pc = 0x1B75B8u;
    // 0x1b75b8: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B75B8u;
    {
        const bool branch_taken_0x1b75b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b75b8) {
            ctx->pc = 0x1B75BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B75B8u;
            // 0x1b75bc: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B75CCu;
            goto label_1b75cc;
        }
    }
    ctx->pc = 0x1B75C0u;
    // 0x1b75c0: 0xc06e048  jal         func_1B8120
    ctx->pc = 0x1B75C0u;
    SET_GPR_U32(ctx, 31, 0x1B75C8u);
    ctx->pc = 0x1B8120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8120u, 0x1B75C0u, 0x1B75C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B75C8u;
label_1b75c8:
    // 0x1b75c8: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1b75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1b75cc:
    // 0x1b75cc: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1b75ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1b75d0: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x1b75d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x1b75d4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1b75d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1b75d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b75d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b75dc: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x1b75dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x1b75e0: 0x10440055  beq         $v0, $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1B75E0u;
    {
        const bool branch_taken_0x1b75e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1B75E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75E0u;
        // 0x1b75e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75e0) {
            ctx->pc = 0x1B7738u;
            goto label_1b7738;
        }
    }
    ctx->pc = 0x1B75E8u;
    // 0x1b75e8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b75e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b75ec: 0xc06faea  jal         func_1BEBA8
    ctx->pc = 0x1B75ECu;
    SET_GPR_U32(ctx, 31, 0x1B75F4u);
    ctx->pc = 0x1B75F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75ECu;
    // 0x1b75f0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBA8u, 0x1B75ECu, 0x1B75F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B75F4u;
label_1b75f4:
    // 0x1b75f4: 0xc06fad0  jal         func_1BEB40
    ctx->pc = 0x1B75F4u;
    SET_GPR_U32(ctx, 31, 0x1B75FCu);
    ctx->pc = 0x1B75F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B75F4u;
    // 0x1b75f8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEB40u, 0x1B75F4u, 0x1B75FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B75FCu;
label_1b75fc:
    // 0x1b75fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b75fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7600: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1b7600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1b7604: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7604u;
    {
        const bool branch_taken_0x1b7604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7604u;
        // 0x1b7608: 0x1192c0  sll         $s2, $s1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7604) {
            ctx->pc = 0x1B7618u;
            goto label_1b7618;
        }
    }
    ctx->pc = 0x1B760Cu;
    // 0x1b760c: 0xc06fb9a  jal         func_1BEE68
    ctx->pc = 0x1B760Cu;
    SET_GPR_U32(ctx, 31, 0x1B7614u);
    ctx->pc = 0x1B7610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B760Cu;
    // 0x1b7610: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE68u, 0x1B760Cu, 0x1B7614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7614u;
label_1b7614:
    // 0x1b7614: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b7614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7618:
    // 0x1b7618: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b7618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b761c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b761cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7620: 0xc06faea  jal         func_1BEBA8
    ctx->pc = 0x1B7620u;
    SET_GPR_U32(ctx, 31, 0x1B7628u);
    ctx->pc = 0x1B7624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7620u;
    // 0x1b7624: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBA8u, 0x1B7620u, 0x1B7628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7628u;
label_1b7628:
    // 0x1b7628: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1b7628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b762c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b762cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1b7630: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x1b7630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x1b7634: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7634u;
    {
        const bool branch_taken_0x1b7634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7634) {
            ctx->pc = 0x1B7638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7634u;
            // 0x1b7638: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7648u;
            goto label_1b7648;
        }
    }
    ctx->pc = 0x1B763Cu;
    // 0x1b763c: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x1b763cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x1b7640: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x1b7640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x1b7644: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1b7644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1b7648:
    // 0x1b7648: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x1b7648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b764c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B764Cu;
    {
        const bool branch_taken_0x1b764c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b764c) {
            ctx->pc = 0x1B7650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B764Cu;
            // 0x1b7650: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7660u;
            goto label_1b7660;
        }
    }
    ctx->pc = 0x1B7654u;
    // 0x1b7654: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1b7654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1b7658: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1b7658u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b765c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b765cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1b7660:
    // 0x1b7660: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b7660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7664: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1b7664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b7668: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7668u;
    {
        const bool branch_taken_0x1b7668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7668u;
        // 0x1b766c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7668) {
            ctx->pc = 0x1B7680u;
            goto label_1b7680;
        }
    }
    ctx->pc = 0x1B7670u;
    // 0x1b7670: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x1b7670u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1b7674: 0x21ac0  sll         $v1, $v0, 11
    ctx->pc = 0x1b7674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x1b7678: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1b7678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1b767c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1b767cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_1b7680:
    // 0x1b7680: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1B7680u;
    SET_GPR_U32(ctx, 31, 0x1B7688u);
    ctx->pc = 0x1B7684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7680u;
    // 0x1b7684: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1B7680u, 0x1B7688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7688u;
label_1b7688:
    // 0x1b7688: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x1b7688u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b768c: 0xc06fb80  jal         func_1BEE00
    ctx->pc = 0x1B768Cu;
    SET_GPR_U32(ctx, 31, 0x1B7694u);
    ctx->pc = 0x1B7690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B768Cu;
    // 0x1b7690: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE00u, 0x1B768Cu, 0x1B7694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7694u;
label_1b7694:
    // 0x1b7694: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1b7694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b7698: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B7698u;
    {
        const bool branch_taken_0x1b7698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b7698) {
            ctx->pc = 0x1B769Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7698u;
            // 0x1b769c: 0x82030047  lb          $v1, 0x47($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B76E4u;
            goto label_1b76e4;
        }
    }
    ctx->pc = 0x1B76A0u;
    // 0x1b76a0: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1b76a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1b76a4: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x1b76a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1b76a8: 0xc06ba28  jal         func_1AE8A0
    ctx->pc = 0x1B76A8u;
    SET_GPR_U32(ctx, 31, 0x1B76B0u);
    ctx->pc = 0x1B76ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B76A8u;
    // 0x1b76ac: 0x24847f78  addiu       $a0, $a0, 0x7F78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8A0u, 0x1B76A8u, 0x1B76B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B76B0u;
label_1b76b0:
    // 0x1b76b0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1b76b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b76b4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B76B4u;
    {
        const bool branch_taken_0x1b76b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76B4u;
        // 0x1b76b8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76b4) {
            ctx->pc = 0x1B76C8u;
            goto label_1b76c8;
        }
    }
    ctx->pc = 0x1B76BCu;
    // 0x1b76bc: 0xc06fab2  jal         func_1BEAC8
    ctx->pc = 0x1B76BCu;
    SET_GPR_U32(ctx, 31, 0x1B76C4u);
    ctx->pc = 0x1B76C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B76BCu;
    // 0x1b76c0: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAC8u, 0x1B76BCu, 0x1B76C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B76C4u;
label_1b76c4:
    // 0x1b76c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b76c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b76c8:
    // 0x1b76c8: 0xa2000045  sb          $zero, 0x45($s0)
    ctx->pc = 0x1b76c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b76cc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1b76ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b76d0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1B76D0u;
    {
        const bool branch_taken_0x1b76d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B76D0u;
        // 0x1b76d4: 0xa2000049  sb          $zero, 0x49($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b76d0) {
            ctx->pc = 0x1B7738u;
            goto label_1b7738;
        }
    }
    ctx->pc = 0x1B76D8u;
label_1b76d8:
    // 0x1b76d8: 0xc06e048  jal         func_1B8120
    ctx->pc = 0x1B76D8u;
    SET_GPR_U32(ctx, 31, 0x1B76E0u);
    ctx->pc = 0x1B8120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8120u, 0x1B76D8u, 0x1B76E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B76E0u;
label_1b76e0:
    // 0x1b76e0: 0x82030047  lb          $v1, 0x47($s0)
    ctx->pc = 0x1b76e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 71)));
label_1b76e4:
    // 0x1b76e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b76e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b76e8: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B76E8u;
    {
        const bool branch_taken_0x1b76e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b76e8) {
            ctx->pc = 0x1B76ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B76E8u;
            // 0x1b76ec: 0xa2000047  sb          $zero, 0x47($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 71), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B76F0u;
            goto label_1b76f0;
        }
    }
    ctx->pc = 0x1B76F0u;
label_1b76f0:
    // 0x1b76f0: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x1b76f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b76f4:
    // 0x1b76f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b76f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b76f8: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B76F8u;
    {
        const bool branch_taken_0x1b76f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b76f8) {
            ctx->pc = 0x1B76FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B76F8u;
            // 0x1b76fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B773Cu;
            goto label_1b773c;
        }
    }
    ctx->pc = 0x1B7700u;
    // 0x1b7700: 0x82030049  lb          $v1, 0x49($s0)
    ctx->pc = 0x1b7700u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x1b7704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7708: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B7708u;
    {
        const bool branch_taken_0x1b7708 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7708) {
            ctx->pc = 0x1B770Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7708u;
            // 0x1b770c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B773Cu;
            goto label_1b773c;
        }
    }
    ctx->pc = 0x1B7710u;
    // 0x1b7710: 0x82020045  lb          $v0, 0x45($s0)
    ctx->pc = 0x1b7710u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x1b7714: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7714u;
    {
        const bool branch_taken_0x1b7714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7714) {
            ctx->pc = 0x1B7718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7714u;
            // 0x1b7718: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B773Cu;
            goto label_1b773c;
        }
    }
    ctx->pc = 0x1B771Cu;
    // 0x1b771c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b771cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b7724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7728: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b7728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b772c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b772cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b7730: 0x806dc20  j           func_1B7080
    ctx->pc = 0x1B7730u;
    ctx->pc = 0x1B7734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7730u;
    // 0x1b7734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7080u, 0x1B7730u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1B7738u;
label_1b7738:
    // 0x1b7738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b773c:
    // 0x1b773c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b773cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7740: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b7740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7744: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b7744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b7748: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7748u;
        // 0x1b774c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7750u;
}
