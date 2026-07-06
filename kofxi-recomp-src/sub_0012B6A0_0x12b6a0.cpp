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

// Function: sub_0012B6A0
// Address: 0x12b6a0 - 0x12b8e0
void sub_0012B6A0_0x12b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B6A0_0x12b6a0");
#endif

    switch (ctx->pc) {
        case 0x12b6ecu: goto label_12b6ec;
        case 0x12b720u: goto label_12b720;
        case 0x12b724u: goto label_12b724;
        case 0x12b7a4u: goto label_12b7a4;
        case 0x12b7b8u: goto label_12b7b8;
        case 0x12b7c8u: goto label_12b7c8;
        case 0x12b7e0u: goto label_12b7e0;
        case 0x12b814u: goto label_12b814;
        case 0x12b828u: goto label_12b828;
        case 0x12b834u: goto label_12b834;
        case 0x12b860u: goto label_12b860;
        default: break;
    }

    ctx->pc = 0x12b6a0u;

    // 0x12b6a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12b6a4: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12b6a4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12b6a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12b6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12b6ac: 0x25edb7c8  addiu       $t5, $t7, -0x4838
    ctx->pc = 0x12b6acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948808));
    // 0x12b6b0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12b6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12b6b4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x12b6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x12b6b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12b6b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b6bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12b6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12b6c0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x12b6c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b6c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12b6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12b6c8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x12b6c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b6cc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x12b6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12b6d0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x12b6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x12b6d4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x12b6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x12b6d8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x12b6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x12b6dc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x12b6dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x12b6e0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12b6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x12b6e4: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x12b6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x12b6e8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x12b6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_12b6ec:
    // 0x12b6ec: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x12b6ecu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12b6f0: 0x20d7021  addu        $t6, $s0, $t5
    ctx->pc = 0x12b6f0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 13)));
    // 0x12b6f4: 0x91cf0000  lbu         $t7, 0x0($t6)
    ctx->pc = 0x12b6f4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x12b6f8: 0x31ef0008  andi        $t7, $t7, 0x8
    ctx->pc = 0x12b6f8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
    // 0x12b6fc: 0x0  nop
    ctx->pc = 0x12b6fcu;
    // NOP
    // 0x12b700: 0x15e0fffa  bnez        $t7, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12B700u;
    {
        const bool branch_taken_0x12b700 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B700u;
        // 0x12b704: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b700) {
            ctx->pc = 0x12B6ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b6ec;
        }
    }
    ctx->pc = 0x12B708u;
    // 0x12b708: 0x240f002d  addiu       $t7, $zero, 0x2D
    ctx->pc = 0x12b708u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x12b70c: 0x160f0070  bne         $s0, $t7, . + 4 + (0x70 << 2)
    ctx->pc = 0x12B70Cu;
    {
        const bool branch_taken_0x12b70c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x12B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B70Cu;
        // 0x12b710: 0x240f002b  addiu       $t7, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b70c) {
            ctx->pc = 0x12B8D0u;
            goto label_12b8d0;
        }
    }
    ctx->pc = 0x12B714u;
    // 0x12b714: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x12b714u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12b718: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x12b718u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b71c: 0xafae0008  sw          $t6, 0x8($sp)
    ctx->pc = 0x12b71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
label_12b720:
    // 0x12b720: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12b720u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12b724:
    // 0x12b724: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B724u;
    {
        const bool branch_taken_0x12b724 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B724u;
        // 0x12b728: 0x240f0010  addiu       $t7, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b724) {
            ctx->pc = 0x12B734u;
            goto label_12b734;
        }
    }
    ctx->pc = 0x12B72Cu;
    // 0x12b72c: 0x166f000c  bne         $s3, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x12B72Cu;
    {
        const bool branch_taken_0x12b72c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 15));
        if (branch_taken_0x12b72c) {
            ctx->pc = 0x12B760u;
            goto label_12b760;
        }
    }
    ctx->pc = 0x12B734u;
label_12b734:
    // 0x12b734: 0x240f0030  addiu       $t7, $zero, 0x30
    ctx->pc = 0x12b734u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12b738: 0x160f0009  bne         $s0, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x12B738u;
    {
        const bool branch_taken_0x12b738 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x12B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B738u;
        // 0x12b73c: 0x240f0078  addiu       $t7, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b738) {
            ctx->pc = 0x12B760u;
            goto label_12b760;
        }
    }
    ctx->pc = 0x12B740u;
    // 0x12b740: 0x822e0000  lb          $t6, 0x0($s1)
    ctx->pc = 0x12b740u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12b744: 0x11cf0003  beq         $t6, $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B744u;
    {
        const bool branch_taken_0x12b744 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x12B748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B744u;
        // 0x12b748: 0x240f0058  addiu       $t7, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b744) {
            ctx->pc = 0x12B754u;
            goto label_12b754;
        }
    }
    ctx->pc = 0x12B74Cu;
    // 0x12b74c: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B74Cu;
    {
        const bool branch_taken_0x12b74c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x12b74c) {
            ctx->pc = 0x12B760u;
            goto label_12b760;
        }
    }
    ctx->pc = 0x12B754u;
label_12b754:
    // 0x12b754: 0x82300001  lb          $s0, 0x1($s1)
    ctx->pc = 0x12b754u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x12b758: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x12b758u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12b75c: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x12b75cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_12b760:
    // 0x12b760: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B760u;
    {
        const bool branch_taken_0x12b760 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B760u;
        // 0x12b764: 0x8fae0008  lw          $t6, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b760) {
            ctx->pc = 0x12B77Cu;
            goto label_12b77c;
        }
    }
    ctx->pc = 0x12B768u;
    // 0x12b768: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x12b768u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12b76c: 0x3a0e0030  xori        $t6, $s0, 0x30
    ctx->pc = 0x12b76cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)48);
    // 0x12b770: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x12b770u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x12b774: 0x1ee980b  movn        $s3, $t7, $t6
    ctx->pc = 0x12b774u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 15));
    // 0x12b778: 0x8fae0008  lw          $t6, 0x8($sp)
    ctx->pc = 0x12b778u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_12b77c:
    // 0x12b77c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x12b77cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12b780: 0x240ffffe  addiu       $t7, $zero, -0x2
    ctx->pc = 0x12b780u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x12b784: 0x1297fc  dsll32      $s2, $s2, 31
    ctx->pc = 0x12b784u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 31));
    // 0x12b788: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x12b788u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x12b78c: 0x260a82d  daddu       $s5, $s3, $zero
    ctx->pc = 0x12b78cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b790: 0x1ee900a  movz        $s2, $t7, $t6
    ctx->pc = 0x12b790u;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 15));
    // 0x12b794: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12b794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12b798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b79c: 0xc04872c  jal         func_121CB0
    ctx->pc = 0x12B79Cu;
    SET_GPR_U32(ctx, 31, 0x12B7A4u);
    ctx->pc = 0x12B7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B79Cu;
    // 0x12b7a0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121CB0u, 0x12B79Cu, 0x12B7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B7A4u;
label_12b7a4:
    // 0x12b7a4: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x12b7a4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12b7a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12b7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12b7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7b0: 0xc04857a  jal         func_1215E8
    ctx->pc = 0x12B7B0u;
    SET_GPR_U32(ctx, 31, 0x12B7B8u);
    ctx->pc = 0x12B7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B7B0u;
    // 0x12b7b4: 0x1ef03f  dsra32      $fp, $fp, 0 (Delay Slot)
    SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1215E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1215E8u, 0x12B7B0u, 0x12B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B7B8u;
label_12b7b8:
    // 0x12b7b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12b7b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7bc: 0x3c0f003e  lui         $t7, 0x3E
    ctx->pc = 0x12b7bcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)62 << 16));
    // 0x12b7c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12b7c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7c4: 0x25f6b7c8  addiu       $s6, $t7, -0x4838
    ctx->pc = 0x12b7c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948808));
label_12b7c8:
    // 0x12b7c8: 0x2167821  addu        $t7, $s0, $s6
    ctx->pc = 0x12b7c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x12b7cc: 0x91ed0000  lbu         $t5, 0x0($t7)
    ctx->pc = 0x12b7ccu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x12b7d0: 0x31ae0004  andi        $t6, $t5, 0x4
    ctx->pc = 0x12b7d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)4);
    // 0x12b7d4: 0x11c00037  beqz        $t6, . + 4 + (0x37 << 2)
    ctx->pc = 0x12B7D4u;
    {
        const bool branch_taken_0x12b7d4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7D4u;
        // 0x12b7d8: 0x31af0003  andi        $t7, $t5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7d4) {
            ctx->pc = 0x12B8B4u;
            goto label_12b8b4;
        }
    }
    ctx->pc = 0x12B7DCu;
    // 0x12b7dc: 0x2610ffd0  addiu       $s0, $s0, -0x30
    ctx->pc = 0x12b7dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
label_12b7e0:
    // 0x12b7e0: 0x213782a  slt         $t7, $s0, $s3
    ctx->pc = 0x12b7e0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x12b7e4: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x12B7E4u;
    {
        const bool branch_taken_0x12b7e4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b7e4) {
            ctx->pc = 0x12B834u;
            goto label_12b834;
        }
    }
    ctx->pc = 0x12B7ECu;
    // 0x12b7ec: 0x6800008  bltz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B7ECu;
    {
        const bool branch_taken_0x12b7ec = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x12B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7ECu;
        // 0x12b7f0: 0x242782b  sltu        $t7, $s2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7ec) {
            ctx->pc = 0x12B810u;
            goto label_12b810;
        }
    }
    ctx->pc = 0x12B7F4u;
    // 0x12b7f4: 0x55e00007  bnel        $t7, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12B7F4u;
    {
        const bool branch_taken_0x12b7f4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b7f4) {
            ctx->pc = 0x12B7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B7F4u;
            // 0x12b7f8: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B814u;
            goto label_12b814;
        }
    }
    ctx->pc = 0x12B7FCu;
    // 0x12b7fc: 0x14520008  bne         $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x12B7FCu;
    {
        const bool branch_taken_0x12b7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x12B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7FCu;
        // 0x12b800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b7fc) {
            ctx->pc = 0x12B820u;
            goto label_12b820;
        }
    }
    ctx->pc = 0x12B804u;
    // 0x12b804: 0x3d0782a  slt         $t7, $fp, $s0
    ctx->pc = 0x12b804u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12b808: 0x11e00005  beqz        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B808u;
    {
        const bool branch_taken_0x12b808 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b808) {
            ctx->pc = 0x12B820u;
            goto label_12b820;
        }
    }
    ctx->pc = 0x12B810u;
label_12b810:
    // 0x12b810: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x12b810u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12b814:
    // 0x12b814: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x12b814u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12b818: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x12B818u;
    {
        const bool branch_taken_0x12b818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B818u;
        // 0x12b81c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b818) {
            ctx->pc = 0x12B7C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b7c8;
        }
    }
    ctx->pc = 0x12B820u;
label_12b820:
    // 0x12b820: 0xc048082  jal         func_120208
    ctx->pc = 0x12B820u;
    SET_GPR_U32(ctx, 31, 0x12B828u);
    ctx->pc = 0x12B824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B820u;
    // 0x12b824: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120208u, 0x12B820u, 0x12B828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B828u;
label_12b828:
    // 0x12b828: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x12b828u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b82c: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x12B82Cu;
    {
        const bool branch_taken_0x12b82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B82Cu;
        // 0x12b830: 0x202102d  daddu       $v0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b82c) {
            ctx->pc = 0x12B814u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b814;
        }
    }
    ctx->pc = 0x12B834u;
label_12b834:
    // 0x12b834: 0x681001c  bgez        $s4, . + 4 + (0x1C << 2)
    ctx->pc = 0x12B834u;
    {
        const bool branch_taken_0x12b834 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x12B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B834u;
        // 0x12b838: 0x8fae0008  lw          $t6, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b834) {
            ctx->pc = 0x12B8A8u;
            goto label_12b8a8;
        }
    }
    ctx->pc = 0x12B83Cu;
    // 0x12b83c: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x12b83cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b840: 0x240f0022  addiu       $t7, $zero, 0x22
    ctx->pc = 0x12b840u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x12b844: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12b844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12b848: 0xadcf0000  sw          $t7, 0x0($t6)
    ctx->pc = 0x12b848u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 15));
    // 0x12b84c: 0x217fc  dsll32      $v0, $v0, 31
    ctx->pc = 0x12b84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 31));
    // 0x12b850: 0x240ffffe  addiu       $t7, $zero, -0x2
    ctx->pc = 0x12b850u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x12b854: 0x8fae0008  lw          $t6, 0x8($sp)
    ctx->pc = 0x12b854u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b858: 0xf787a  dsrl        $t7, $t7, 1
    ctx->pc = 0x12b858u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> 1);
    // 0x12b85c: 0x1ee100a  movz        $v0, $t7, $t6
    ctx->pc = 0x12b85cu;
    if (GPR_U64(ctx, 14) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
label_12b860:
    // 0x12b860: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x12b860u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12b864: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B864u;
    {
        const bool branch_taken_0x12b864 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B864u;
        // 0x12b868: 0x262fffff  addiu       $t7, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b864) {
            ctx->pc = 0x12B878u;
            goto label_12b878;
        }
    }
    ctx->pc = 0x12B86Cu;
    // 0x12b86c: 0x8fae0004  lw          $t6, 0x4($sp)
    ctx->pc = 0x12b86cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12b870: 0x1f4b80b  movn        $s7, $t7, $s4
    ctx->pc = 0x12b870u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 15));
    // 0x12b874: 0xadd70000  sw          $s7, 0x0($t6)
    ctx->pc = 0x12b874u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 23));
label_12b878:
    // 0x12b878: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12b878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b87c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12b87cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b880: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12b880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b884: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12b884u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12b888: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x12b888u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b88c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x12b88cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12b890: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x12b890u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b894: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x12b894u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b898: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x12b898u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12b89c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x12b89cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12b8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x12B8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8A0u;
        // 0x12b8a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B8A8u;
label_12b8a8:
    // 0x12b8a8: 0x2782f  dsubu       $t7, $zero, $v0
    ctx->pc = 0x12b8a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
    // 0x12b8ac: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x12B8ACu;
    {
        const bool branch_taken_0x12b8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8ACu;
        // 0x12b8b0: 0x1ee100b  movn        $v0, $t7, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8ac) {
            ctx->pc = 0x12B860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b860;
        }
    }
    ctx->pc = 0x12B8B4u;
label_12b8b4:
    // 0x12b8b4: 0x11e0ffdf  beqz        $t7, . + 4 + (-0x21 << 2)
    ctx->pc = 0x12B8B4u;
    {
        const bool branch_taken_0x12b8b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8B4u;
        // 0x12b8b8: 0x260effa9  addiu       $t6, $s0, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8b4) {
            ctx->pc = 0x12B834u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b834;
        }
    }
    ctx->pc = 0x12B8BCu;
    // 0x12b8bc: 0x260fffc9  addiu       $t7, $s0, -0x37
    ctx->pc = 0x12b8bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967241));
    // 0x12b8c0: 0x31ad0001  andi        $t5, $t5, 0x1
    ctx->pc = 0x12b8c0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)1);
    // 0x12b8c4: 0x1e0802d  daddu       $s0, $t7, $zero
    ctx->pc = 0x12b8c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b8c8: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x12B8C8u;
    {
        const bool branch_taken_0x12b8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8C8u;
        // 0x12b8cc: 0x1cd800a  movz        $s0, $t6, $t5 (Delay Slot)
        if (GPR_U64(ctx, 13) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8c8) {
            ctx->pc = 0x12B7E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b7e0;
        }
    }
    ctx->pc = 0x12B8D0u;
label_12b8d0:
    // 0x12b8d0: 0x160fff94  bne         $s0, $t7, . + 4 + (-0x6C << 2)
    ctx->pc = 0x12B8D0u;
    {
        const bool branch_taken_0x12b8d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        if (branch_taken_0x12b8d0) {
            ctx->pc = 0x12B724u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b724;
        }
    }
    ctx->pc = 0x12B8D8u;
    // 0x12b8d8: 0x1000ff91  b           . + 4 + (-0x6F << 2)
    ctx->pc = 0x12B8D8u;
    {
        const bool branch_taken_0x12b8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8D8u;
        // 0x12b8dc: 0x82300000  lb          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8d8) {
            ctx->pc = 0x12B720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12b720;
        }
    }
    ctx->pc = 0x12B8E0u;
}
