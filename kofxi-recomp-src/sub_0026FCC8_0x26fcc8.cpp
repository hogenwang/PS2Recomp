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

// Function: sub_0026FCC8
// Address: 0x26fcc8 - 0x270050
void sub_0026FCC8_0x26fcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026FCC8_0x26fcc8");
#endif

    switch (ctx->pc) {
        case 0x26fd10u: goto label_26fd10;
        case 0x26fd24u: goto label_26fd24;
        case 0x26fd48u: goto label_26fd48;
        case 0x26fd60u: goto label_26fd60;
        case 0x26fd78u: goto label_26fd78;
        case 0x26fdb0u: goto label_26fdb0;
        case 0x26fdecu: goto label_26fdec;
        case 0x26fdfcu: goto label_26fdfc;
        case 0x26fe14u: goto label_26fe14;
        case 0x26fe28u: goto label_26fe28;
        case 0x26fe48u: goto label_26fe48;
        case 0x26feb0u: goto label_26feb0;
        case 0x26ff04u: goto label_26ff04;
        case 0x26ff28u: goto label_26ff28;
        case 0x26ff3cu: goto label_26ff3c;
        case 0x26ff50u: goto label_26ff50;
        case 0x26ff60u: goto label_26ff60;
        case 0x26ff74u: goto label_26ff74;
        case 0x26ff84u: goto label_26ff84;
        case 0x26ff98u: goto label_26ff98;
        case 0x26ffa8u: goto label_26ffa8;
        case 0x26ffb4u: goto label_26ffb4;
        case 0x26ffc4u: goto label_26ffc4;
        case 0x26fffcu: goto label_26fffc;
        case 0x270018u: goto label_270018;
        default: break;
    }

    ctx->pc = 0x26fcc8u;

    // 0x26fcc8: 0x27bdf120  addiu       $sp, $sp, -0xEE0
    ctx->pc = 0x26fcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963488));
    // 0x26fccc: 0xffb50e90  sd          $s5, 0xE90($sp)
    ctx->pc = 0x26fcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3728), GPR_U64(ctx, 21));
    // 0x26fcd0: 0xffb40e80  sd          $s4, 0xE80($sp)
    ctx->pc = 0x26fcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3712), GPR_U64(ctx, 20));
    // 0x26fcd4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x26fcd4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fcd8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x26fcd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fcdc: 0xafa40e34  sw          $a0, 0xE34($sp)
    ctx->pc = 0x26fcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3636), GPR_U32(ctx, 4));
    // 0x26fce0: 0xffbe0ec0  sd          $fp, 0xEC0($sp)
    ctx->pc = 0x26fce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3776), GPR_U64(ctx, 30));
    // 0x26fce4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26fce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fce8: 0xffb70eb0  sd          $s7, 0xEB0($sp)
    ctx->pc = 0x26fce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3760), GPR_U64(ctx, 23));
    // 0x26fcec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26fcecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fcf0: 0xffb60ea0  sd          $s6, 0xEA0($sp)
    ctx->pc = 0x26fcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3744), GPR_U64(ctx, 22));
    // 0x26fcf4: 0x24060e24  addiu       $a2, $zero, 0xE24
    ctx->pc = 0x26fcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3620));
    // 0x26fcf8: 0xffbf0ed0  sd          $ra, 0xED0($sp)
    ctx->pc = 0x26fcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3792), GPR_U64(ctx, 31));
    // 0x26fcfc: 0xffb30e70  sd          $s3, 0xE70($sp)
    ctx->pc = 0x26fcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3696), GPR_U64(ctx, 19));
    // 0x26fd00: 0xffb20e60  sd          $s2, 0xE60($sp)
    ctx->pc = 0x26fd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3680), GPR_U64(ctx, 18));
    // 0x26fd04: 0xffb10e50  sd          $s1, 0xE50($sp)
    ctx->pc = 0x26fd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3664), GPR_U64(ctx, 17));
    // 0x26fd08: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x26FD08u;
    SET_GPR_U32(ctx, 31, 0x26FD10u);
    ctx->pc = 0x26FD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD08u;
    // 0x26fd0c: 0xffb00e40  sd          $s0, 0xE40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 3648), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x26FD08u, 0x26FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD10u;
label_26fd10:
    // 0x26fd10: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26fd10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26fd14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26fd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd18: 0x24a598f0  addiu       $a1, $a1, -0x6710
    ctx->pc = 0x26fd18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940912));
    // 0x26fd1c: 0xc04a966  jal         func_12A598
    ctx->pc = 0x26FD1Cu;
    SET_GPR_U32(ctx, 31, 0x26FD24u);
    ctx->pc = 0x26FD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD1Cu;
    // 0x26fd20: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x26FD1Cu, 0x26FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD24u;
label_26fd24:
    // 0x26fd24: 0x27b70e30  addiu       $s7, $sp, 0xE30
    ctx->pc = 0x26fd24u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 3632));
    // 0x26fd28: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26fd2c: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x26fd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x26fd30: 0x3405897c  ori         $a1, $zero, 0x897C
    ctx->pc = 0x26fd30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35196);
    // 0x26fd34: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x26fd34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd38: 0xafa20e30  sw          $v0, 0xE30($sp)
    ctx->pc = 0x26fd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3632), GPR_U32(ctx, 2));
    // 0x26fd3c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x26fd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x26fd40: 0xc09beda  jal         func_26FB68
    ctx->pc = 0x26FD40u;
    SET_GPR_U32(ctx, 31, 0x26FD48u);
    ctx->pc = 0x26FD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD40u;
    // 0x26fd44: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FB68u, 0x26FD40u, 0x26FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD48u;
label_26fd48:
    // 0x26fd48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26fd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd4c: 0x108000b2  beqz        $a0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x26FD4Cu;
    {
        const bool branch_taken_0x26fd4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD4Cu;
        // 0x26fd50: 0x2e0f02d  daddu       $fp, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd4c) {
            ctx->pc = 0x270018u;
            goto label_270018;
        }
    }
    ctx->pc = 0x26FD54u;
    // 0x26fd54: 0x26857b41  addiu       $a1, $s4, 0x7B41
    ctx->pc = 0x26fd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 31553));
    // 0x26fd58: 0xc09beda  jal         func_26FB68
    ctx->pc = 0x26FD58u;
    SET_GPR_U32(ctx, 31, 0x26FD60u);
    ctx->pc = 0x26FD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD58u;
    // 0x26fd5c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FB68u, 0x26FD58u, 0x26FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD60u;
label_26fd60:
    // 0x26fd60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26fd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd64: 0x108000ac  beqz        $a0, . + 4 + (0xAC << 2)
    ctx->pc = 0x26FD64u;
    {
        const bool branch_taken_0x26fd64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD64u;
        // 0x26fd68: 0x34058a7c  ori         $a1, $zero, 0x8A7C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35452);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd64) {
            ctx->pc = 0x270018u;
            goto label_270018;
        }
    }
    ctx->pc = 0x26FD6Cu;
    // 0x26fd6c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x26fd6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd70: 0xc09beda  jal         func_26FB68
    ctx->pc = 0x26FD70u;
    SET_GPR_U32(ctx, 31, 0x26FD78u);
    ctx->pc = 0x26FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FD70u;
    // 0x26fd74: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FB68u, 0x26FD70u, 0x26FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FD78u;
label_26fd78:
    // 0x26fd78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26fd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fd7c: 0x108000a7  beqz        $a0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x26FD7Cu;
    {
        const bool branch_taken_0x26fd7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD7Cu;
        // 0x26fd80: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd7c) {
            ctx->pc = 0x27001Cu;
            goto label_27001c;
        }
    }
    ctx->pc = 0x26FD84u;
    // 0x26fd84: 0x2c4102b  sltu        $v0, $s6, $a0
    ctx->pc = 0x26fd84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x26fd88: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26FD88u;
    {
        const bool branch_taken_0x26fd88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD88u;
        // 0x26fd8c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd88) {
            ctx->pc = 0x26FDD4u;
            goto label_26fdd4;
        }
    }
    ctx->pc = 0x26FD90u;
    // 0x26fd90: 0x9083ffff  lbu         $v1, -0x1($a0)
    ctx->pc = 0x26fd90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x26fd94: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26FD94u;
    {
        const bool branch_taken_0x26fd94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26FD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD94u;
        // 0x26fd98: 0x27b30410  addiu       $s3, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd94) {
            ctx->pc = 0x26FDD8u;
            goto label_26fdd8;
        }
    }
    ctx->pc = 0x26FD9Cu;
    // 0x26fd9c: 0x26907d41  addiu       $s0, $s4, 0x7D41
    ctx->pc = 0x26fd9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 32065));
    // 0x26fda0: 0x27b20510  addiu       $s2, $sp, 0x510
    ctx->pc = 0x26fda0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
    // 0x26fda4: 0x26917614  addiu       $s1, $s4, 0x7614
    ctx->pc = 0x26fda4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 30228));
    // 0x26fda8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x26fda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x26fdac: 0x0  nop
    ctx->pc = 0x26fdacu;
    // NOP
label_26fdb0:
    // 0x26fdb0: 0x2c4102b  sltu        $v0, $s6, $a0
    ctx->pc = 0x26fdb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x26fdb4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26FDB4u;
    {
        const bool branch_taken_0x26fdb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDB4u;
        // 0x26fdb8: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdb4) {
            ctx->pc = 0x26FDE4u;
            goto label_26fde4;
        }
    }
    ctx->pc = 0x26FDBCu;
    // 0x26fdbc: 0x9083ffff  lbu         $v1, -0x1($a0)
    ctx->pc = 0x26fdbcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x26fdc0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x26fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26fdc4: 0x1062fffa  beq         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26FDC4u;
    {
        const bool branch_taken_0x26fdc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26FDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDC4u;
        // 0x26fdc8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdc4) {
            ctx->pc = 0x26FDB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26fdb0;
        }
    }
    ctx->pc = 0x26FDCCu;
    // 0x26fdcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26FDCCu;
    {
        const bool branch_taken_0x26fdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fdcc) {
            ctx->pc = 0x26FDE4u;
            goto label_26fde4;
        }
    }
    ctx->pc = 0x26FDD4u;
label_26fdd4:
    // 0x26fdd4: 0x27b30410  addiu       $s3, $sp, 0x410
    ctx->pc = 0x26fdd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_26fdd8:
    // 0x26fdd8: 0x26907d41  addiu       $s0, $s4, 0x7D41
    ctx->pc = 0x26fdd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 32065));
    // 0x26fddc: 0x27b20510  addiu       $s2, $sp, 0x510
    ctx->pc = 0x26fddcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
    // 0x26fde0: 0x26917614  addiu       $s1, $s4, 0x7614
    ctx->pc = 0x26fde0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 30228));
label_26fde4:
    // 0x26fde4: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26FDE4u;
    SET_GPR_U32(ctx, 31, 0x26FDECu);
    ctx->pc = 0x26FDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FDE4u;
    // 0x26fde8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x26FDE4u, 0x26FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FDECu;
label_26fdec:
    // 0x26fdec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26fdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fdf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26fdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fdf4: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26FDF4u;
    SET_GPR_U32(ctx, 31, 0x26FDFCu);
    ctx->pc = 0x26FDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FDF4u;
    // 0x26fdf8: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26FDF4u, 0x26FDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FDFCu;
label_26fdfc:
    // 0x26fdfc: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x26fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x26fe00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26fe00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe04: 0xafa30e30  sw          $v1, 0xE30($sp)
    ctx->pc = 0x26fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3632), GPR_U32(ctx, 3));
    // 0x26fe08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26fe08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe0c: 0xc09bf08  jal         func_26FC20
    ctx->pc = 0x26FE0Cu;
    SET_GPR_U32(ctx, 31, 0x26FE14u);
    ctx->pc = 0x26FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FE0Cu;
    // 0x26fe10: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FC20u, 0x26FE0Cu, 0x26FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE14u;
label_26fe14:
    // 0x26fe14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26fe14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe18: 0x1080007f  beqz        $a0, . + 4 + (0x7F << 2)
    ctx->pc = 0x26FE18u;
    {
        const bool branch_taken_0x26fe18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE18u;
        // 0x26fe1c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe18) {
            ctx->pc = 0x270018u;
            goto label_270018;
        }
    }
    ctx->pc = 0x26FE20u;
    // 0x26fe20: 0xc09bf08  jal         func_26FC20
    ctx->pc = 0x26FE20u;
    SET_GPR_U32(ctx, 31, 0x26FE28u);
    ctx->pc = 0x26FE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FE20u;
    // 0x26fe24: 0x26857c41  addiu       $a1, $s4, 0x7C41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 31809));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FC20u, 0x26FE20u, 0x26FE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE28u;
label_26fe28:
    // 0x26fe28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26fe28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe2c: 0x1080007b  beqz        $a0, . + 4 + (0x7B << 2)
    ctx->pc = 0x26FE2Cu;
    {
        const bool branch_taken_0x26fe2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE2Cu;
        // 0x26fe30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe2c) {
            ctx->pc = 0x27001Cu;
            goto label_27001c;
        }
    }
    ctx->pc = 0x26FE34u;
    // 0x26fe34: 0x92826c14  lbu         $v0, 0x6C14($s4)
    ctx->pc = 0x26fe34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 27668)));
    // 0x26fe38: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26FE38u;
    {
        const bool branch_taken_0x26fe38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE38u;
        // 0x26fe3c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe38) {
            ctx->pc = 0x26FE60u;
            goto label_26fe60;
        }
    }
    ctx->pc = 0x26FE40u;
    // 0x26fe40: 0x26836c14  addiu       $v1, $s4, 0x6C14
    ctx->pc = 0x26fe40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 27668));
    // 0x26fe44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26fe44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_26fe48:
    // 0x26fe48: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x26fe48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x26fe4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FE4Cu;
    {
        const bool branch_taken_0x26fe4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE4Cu;
        // 0x26fe50: 0x24630100  addiu       $v1, $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe4c) {
            ctx->pc = 0x26FE60u;
            goto label_26fe60;
        }
    }
    ctx->pc = 0x26FE54u;
    // 0x26fe54: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x26fe54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26fe58: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x26FE58u;
    {
        const bool branch_taken_0x26fe58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fe58) {
            ctx->pc = 0x26FE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FE58u;
            // 0x26fe5c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FE48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26fe48;
        }
    }
    ctx->pc = 0x26FE60u;
label_26fe60:
    // 0x26fe60: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x26fe60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26fe64: 0x14a70005  bne         $a1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x26FE64u;
    {
        const bool branch_taken_0x26fe64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        ctx->pc = 0x26FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE64u;
        // 0x26fe68: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe64) {
            ctx->pc = 0x26FE7Cu;
            goto label_26fe7c;
        }
    }
    ctx->pc = 0x26FE6Cu;
    // 0x26fe6c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26fe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x26fe70: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x26fe70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26fe74: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x26FE74u;
    {
        const bool branch_taken_0x26fe74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE74u;
        // 0x26fe78: 0x24a59978  addiu       $a1, $a1, -0x6688 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe74) {
            ctx->pc = 0x270010u;
            goto label_270010;
        }
    }
    ctx->pc = 0x26FE7Cu;
label_26fe7c:
    // 0x26fe7c: 0x26866c14  addiu       $a2, $s4, 0x6C14
    ctx->pc = 0x26fe7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 27668));
    // 0x26fe80: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26FE80u;
    {
        const bool branch_taken_0x26fe80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fe80) {
            ctx->pc = 0x26FE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FE80u;
            // 0x26fe84: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FE88u;
            goto label_26fe88;
        }
    }
    ctx->pc = 0x26FE88u;
label_26fe88:
    // 0x26fe88: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x26fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x26fe8c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x26fe8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x26fe90: 0x62a80b  movn        $s5, $v1, $v0
    ctx->pc = 0x26fe90u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
    // 0x26fe94: 0x6a00011  bltz        $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x26FE94u;
    {
        const bool branch_taken_0x26fe94 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x26FE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE94u;
        // 0x26fe98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe94) {
            ctx->pc = 0x26FEDCu;
            goto label_26fedc;
        }
    }
    ctx->pc = 0x26FE9Cu;
    // 0x26fe9c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x26fe9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fea0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26fea0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fea4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x26fea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26fea8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26fea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26feac: 0x0  nop
    ctx->pc = 0x26feacu;
    // NOP
label_26feb0:
    // 0x26feb0: 0x50c80001  beql        $a2, $t0, . + 4 + (0x1 << 2)
    ctx->pc = 0x26FEB0u;
    {
        const bool branch_taken_0x26feb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x26feb0) {
            ctx->pc = 0x26FEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FEB0u;
            // 0x26feb4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FEB8u;
            goto label_26feb8;
        }
    }
    ctx->pc = 0x26FEB8u;
label_26feb8:
    // 0x26feb8: 0xa6001a  div         $zero, $a1, $a2
    ctx->pc = 0x26feb8u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x26febc: 0x26a3ffff  addiu       $v1, $s5, -0x1
    ctx->pc = 0x26febcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x26fec0: 0x1010  mfhi        $v0
    ctx->pc = 0x26fec0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x26fec4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x26fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x26fec8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x26fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x26fecc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x26feccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26fed0: 0x62a80b  movn        $s5, $v1, $v0
    ctx->pc = 0x26fed0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
    // 0x26fed4: 0x6a3fff6  bgezl       $s5, . + 4 + (-0xA << 2)
    ctx->pc = 0x26FED4u;
    {
        const bool branch_taken_0x26fed4 = (GPR_S32(ctx, 21) >= 0);
        if (branch_taken_0x26fed4) {
            ctx->pc = 0x26FED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FED4u;
            // 0x26fed8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FEB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26feb0;
        }
    }
    ctx->pc = 0x26FEDCu;
label_26fedc:
    // 0x26fedc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x26fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26fee0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x26fee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fee4: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x26fee4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x26fee8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26FEE8u;
    {
        const bool branch_taken_0x26fee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26fee8) {
            ctx->pc = 0x26FEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FEE8u;
            // 0x26feec: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FEF0u;
            goto label_26fef0;
        }
    }
    ctx->pc = 0x26FEF0u;
label_26fef0:
    // 0x26fef0: 0x2810  mfhi        $a1
    ctx->pc = 0x26fef0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x26fef4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x26fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x26fef8: 0x24a56c14  addiu       $a1, $a1, 0x6C14
    ctx->pc = 0x26fef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27668));
    // 0x26fefc: 0xc09bf08  jal         func_26FC20
    ctx->pc = 0x26FEFCu;
    SET_GPR_U32(ctx, 31, 0x26FF04u);
    ctx->pc = 0x26FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FEFCu;
    // 0x26ff00: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FC20u, 0x26FEFCu, 0x26FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF04u;
label_26ff04:
    // 0x26ff04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ff04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff08: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x26FF08u;
    {
        const bool branch_taken_0x26ff08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FF08u;
        // 0x26ff0c: 0x3410867c  ori         $s0, $zero, 0x867C (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34428);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ff08) {
            ctx->pc = 0x270018u;
            goto label_270018;
        }
    }
    ctx->pc = 0x26FF10u;
    // 0x26ff10: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x26ff10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26ff14: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x26ff14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x26ff18: 0x27b10910  addiu       $s1, $sp, 0x910
    ctx->pc = 0x26ff18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 2320));
    // 0x26ff1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ff1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff20: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26FF20u;
    SET_GPR_U32(ctx, 31, 0x26FF28u);
    ctx->pc = 0x26FF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF20u;
    // 0x26ff24: 0x26927714  addiu       $s2, $s4, 0x7714 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 30484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x26FF20u, 0x26FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF28u;
label_26ff28:
    // 0x26ff28: 0x26937814  addiu       $s3, $s4, 0x7814
    ctx->pc = 0x26ff28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 30740));
    // 0x26ff2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ff2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff30: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ff30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff34: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26FF34u;
    SET_GPR_U32(ctx, 31, 0x26FF3Cu);
    ctx->pc = 0x26FF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF34u;
    // 0x26ff38: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26FF34u, 0x26FF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF3Cu;
label_26ff3c:
    // 0x26ff3c: 0x3410877c  ori         $s0, $zero, 0x877C
    ctx->pc = 0x26ff3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34684);
    // 0x26ff40: 0x27b10a10  addiu       $s1, $sp, 0xA10
    ctx->pc = 0x26ff40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 2576));
    // 0x26ff44: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x26ff44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x26ff48: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26FF48u;
    SET_GPR_U32(ctx, 31, 0x26FF50u);
    ctx->pc = 0x26FF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF48u;
    // 0x26ff4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x26FF48u, 0x26FF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF50u;
label_26ff50:
    // 0x26ff50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ff50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ff54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff58: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26FF58u;
    SET_GPR_U32(ctx, 31, 0x26FF60u);
    ctx->pc = 0x26FF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF58u;
    // 0x26ff5c: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26FF58u, 0x26FF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF60u;
label_26ff60:
    // 0x26ff60: 0x3410887c  ori         $s0, $zero, 0x887C
    ctx->pc = 0x26ff60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34940);
    // 0x26ff64: 0x27b10b10  addiu       $s1, $sp, 0xB10
    ctx->pc = 0x26ff64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 2832));
    // 0x26ff68: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x26ff68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x26ff6c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26FF6Cu;
    SET_GPR_U32(ctx, 31, 0x26FF74u);
    ctx->pc = 0x26FF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF6Cu;
    // 0x26ff70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x26FF6Cu, 0x26FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF74u;
label_26ff74:
    // 0x26ff74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26ff74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26ff78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff7c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26FF7Cu;
    SET_GPR_U32(ctx, 31, 0x26FF84u);
    ctx->pc = 0x26FF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF7Cu;
    // 0x26ff80: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26FF7Cu, 0x26FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF84u;
label_26ff84:
    // 0x26ff84: 0x92837b40  lbu         $v1, 0x7B40($s4)
    ctx->pc = 0x26ff84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 31552)));
    // 0x26ff88: 0x27b00c11  addiu       $s0, $sp, 0xC11
    ctx->pc = 0x26ff88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 3089));
    // 0x26ff8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26ff8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff90: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26FF90u;
    SET_GPR_U32(ctx, 31, 0x26FF98u);
    ctx->pc = 0x26FF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF90u;
    // 0x26ff94: 0xa3a30c10  sb          $v1, 0xC10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 3088), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x26FF90u, 0x26FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF98u;
label_26ff98:
    // 0x26ff98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ff98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26ff9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ffa0: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26FFA0u;
    SET_GPR_U32(ctx, 31, 0x26FFA8u);
    ctx->pc = 0x26FFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FFA0u;
    // 0x26ffa4: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26FFA0u, 0x26FFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFA8u;
label_26ffa8:
    // 0x26ffa8: 0x27b00d11  addiu       $s0, $sp, 0xD11
    ctx->pc = 0x26ffa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 3345));
    // 0x26ffac: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x26FFACu;
    SET_GPR_U32(ctx, 31, 0x26FFB4u);
    ctx->pc = 0x26FFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FFACu;
    // 0x26ffb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x26FFACu, 0x26FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFB4u;
label_26ffb4:
    // 0x26ffb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ffb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ffb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26ffb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ffbc: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x26FFBCu;
    SET_GPR_U32(ctx, 31, 0x26FFC4u);
    ctx->pc = 0x26FFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FFBCu;
    // 0x26ffc0: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x26FFBCu, 0x26FFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFC4u;
label_26ffc4:
    // 0x26ffc4: 0x8e887b34  lw          $t0, 0x7B34($s4)
    ctx->pc = 0x26ffc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31540)));
    // 0x26ffc8: 0x34058e24  ori         $a1, $zero, 0x8E24
    ctx->pc = 0x26ffc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36388);
    // 0x26ffcc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26ffccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26ffd0: 0x34a569d1  ori         $a1, $a1, 0x69D1
    ctx->pc = 0x26ffd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27089);
    // 0x26ffd4: 0x8e877b20  lw          $a3, 0x7B20($s4)
    ctx->pc = 0x26ffd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31520)));
    // 0x26ffd8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26ffd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ffdc: 0x8e837b2c  lw          $v1, 0x7B2C($s4)
    ctx->pc = 0x26ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 31532)));
    // 0x26ffe0: 0x92827b31  lbu         $v0, 0x7B31($s4)
    ctx->pc = 0x26ffe0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 31537)));
    // 0x26ffe4: 0x8fa40e34  lw          $a0, 0xE34($sp)
    ctx->pc = 0x26ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3636)));
    // 0x26ffe8: 0xafa70e14  sw          $a3, 0xE14($sp)
    ctx->pc = 0x26ffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3604), GPR_U32(ctx, 7));
    // 0x26ffec: 0xafa30e18  sw          $v1, 0xE18($sp)
    ctx->pc = 0x26ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3608), GPR_U32(ctx, 3));
    // 0x26fff0: 0xafa20e1c  sw          $v0, 0xE1C($sp)
    ctx->pc = 0x26fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3612), GPR_U32(ctx, 2));
    // 0x26fff4: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x26FFF4u;
    SET_GPR_U32(ctx, 31, 0x26FFFCu);
    ctx->pc = 0x26FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FFF4u;
    // 0x26fff8: 0xafa80e20  sw          $t0, 0xE20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 3616), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EFC8u, 0x26FFF4u, 0x26FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FFFCu;
label_26fffc:
    // 0x26fffc: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26FFFCu;
    {
        const bool branch_taken_0x26fffc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x270000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FFFCu;
        // 0x270000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fffc) {
            ctx->pc = 0x27001Cu;
            goto label_27001c;
        }
    }
    ctx->pc = 0x270004u;
    // 0x270004: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x270004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x270008: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x270008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x27000c: 0x24a59998  addiu       $a1, $a1, -0x6668
    ctx->pc = 0x27000cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941080));
label_270010:
    // 0x270010: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x270010u;
    SET_GPR_U32(ctx, 31, 0x270018u);
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x270010u, 0x270018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270018u;
label_270018:
    // 0x270018: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x270018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27001c:
    // 0x27001c: 0xdfbf0ed0  ld          $ra, 0xED0($sp)
    ctx->pc = 0x27001cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3792)));
    // 0x270020: 0xdfbe0ec0  ld          $fp, 0xEC0($sp)
    ctx->pc = 0x270020u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 3776)));
    // 0x270024: 0xdfb70eb0  ld          $s7, 0xEB0($sp)
    ctx->pc = 0x270024u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 3760)));
    // 0x270028: 0xdfb60ea0  ld          $s6, 0xEA0($sp)
    ctx->pc = 0x270028u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 3744)));
    // 0x27002c: 0xdfb50e90  ld          $s5, 0xE90($sp)
    ctx->pc = 0x27002cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 3728)));
    // 0x270030: 0xdfb40e80  ld          $s4, 0xE80($sp)
    ctx->pc = 0x270030u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 3712)));
    // 0x270034: 0xdfb30e70  ld          $s3, 0xE70($sp)
    ctx->pc = 0x270034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 3696)));
    // 0x270038: 0xdfb20e60  ld          $s2, 0xE60($sp)
    ctx->pc = 0x270038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 3680)));
    // 0x27003c: 0xdfb10e50  ld          $s1, 0xE50($sp)
    ctx->pc = 0x27003cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 3664)));
    // 0x270040: 0xdfb00e40  ld          $s0, 0xE40($sp)
    ctx->pc = 0x270040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 3648)));
    // 0x270044: 0x3e00008  jr          $ra
    ctx->pc = 0x270044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270044u;
        // 0x270048: 0x27bd0ee0  addiu       $sp, $sp, 0xEE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3808));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27004Cu;
    // 0x27004c: 0x0  nop
    ctx->pc = 0x27004cu;
    // NOP
    if (ctx->pc == 0x27004cu) { ctx->pc = 0x270050u; }
}
