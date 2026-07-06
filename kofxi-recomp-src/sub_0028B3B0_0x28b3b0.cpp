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

// Function: sub_0028B3B0
// Address: 0x28b3b0 - 0x28b548
void sub_0028B3B0_0x28b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B3B0_0x28b3b0");
#endif

    switch (ctx->pc) {
        case 0x28b434u: goto label_28b434;
        case 0x28b450u: goto label_28b450;
        case 0x28b4e4u: goto label_28b4e4;
        case 0x28b4f8u: goto label_28b4f8;
        case 0x28b500u: goto label_28b500;
        default: break;
    }

    ctx->pc = 0x28b3b0u;

    // 0x28b3b0: 0x24caffff  addiu       $t2, $a2, -0x1
    ctx->pc = 0x28b3b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x28b3b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28b3b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28b3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28b3bc: 0x24c20006  addiu       $v0, $a2, 0x6
    ctx->pc = 0x28b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 6));
    // 0x28b3c0: 0x6a482a  slt         $t1, $v1, $t2
    ctx->pc = 0x28b3c0u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x28b3c4: 0x24cb0007  addiu       $t3, $a2, 0x7
    ctx->pc = 0x28b3c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x28b3c8: 0x149100b  movn        $v0, $t2, $t1
    ctx->pc = 0x28b3c8u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
    // 0x28b3cc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x28b3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x28b3d0: 0x288c3  sra         $s1, $v0, 3
    ctx->pc = 0x28b3d0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 3));
    // 0x28b3d4: 0x24c6000e  addiu       $a2, $a2, 0xE
    ctx->pc = 0x28b3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14));
    // 0x28b3d8: 0x6b182a  slt         $v1, $v1, $t3
    ctx->pc = 0x28b3d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x28b3dc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x28b3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x28b3e0: 0x163300b  movn        $a2, $t3, $v1
    ctx->pc = 0x28b3e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 11));
    // 0x28b3e4: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x28b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x28b3e8: 0x1428823  subu        $s1, $t2, $v0
    ctx->pc = 0x28b3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x28b3ec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x28b3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x28b3f0: 0x698c3  sra         $s3, $a2, 3
    ctx->pc = 0x28b3f0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 6), 3));
    // 0x28b3f4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x28b3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x28b3f8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x28b3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x28b3fc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x28b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28b400: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x28b400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x28b404: 0x26720001  addiu       $s2, $s3, 0x1
    ctx->pc = 0x28b404u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x28b408: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x28b408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x28b40c: 0x222b004  sllv        $s6, $v0, $s1
    ctx->pc = 0x28b40cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x28b410: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x28b410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x28b414: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28b414u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b418: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x28b418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x28b41c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x28b41cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b420: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x28b420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x28b424: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x28b424u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b428: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x28b428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x28b42c: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x28B42Cu;
    SET_GPR_U32(ctx, 31, 0x28B434u);
    ctx->pc = 0x28B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B42Cu;
    // 0x28b430: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x28B42Cu, 0x28B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B434u;
label_28b434:
    // 0x28b434: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b438: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
    ctx->pc = 0x28B438u;
    {
        const bool branch_taken_0x28b438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B438u;
        // 0x28b43c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b438) {
            ctx->pc = 0x28B500u;
            goto label_28b500;
        }
    }
    ctx->pc = 0x28B440u;
    // 0x28b440: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28b440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b444: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28b444u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b448: 0xc0a8d02  jal         func_2A3408
    ctx->pc = 0x28B448u;
    SET_GPR_U32(ctx, 31, 0x28B450u);
    ctx->pc = 0x28B44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B448u;
    // 0x28b44c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3408u, 0x28B448u, 0x28B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B450u;
label_28b450:
    // 0x28b450: 0x52a00014  beql        $s5, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x28B450u;
    {
        const bool branch_taken_0x28b450 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b450) {
            ctx->pc = 0x28B454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B450u;
            // 0x28b454: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B4A4u;
            goto label_28b4a4;
        }
    }
    ctx->pc = 0x28B458u;
    // 0x28b458: 0x56200009  bnel        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x28B458u;
    {
        const bool branch_taken_0x28b458 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b458) {
            ctx->pc = 0x28B45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B458u;
            // 0x28b45c: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B480u;
            goto label_28b480;
        }
    }
    ctx->pc = 0x28B460u;
    // 0x28b460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b464: 0x2a630002  slti        $v1, $s3, 0x2
    ctx->pc = 0x28b464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28b468: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x28B468u;
    {
        const bool branch_taken_0x28b468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B468u;
        // 0x28b46c: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b468) {
            ctx->pc = 0x28B4C0u;
            goto label_28b4c0;
        }
    }
    ctx->pc = 0x28B470u;
    // 0x28b470: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x28b470u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x28b474: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x28b474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x28b478: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x28B478u;
    {
        const bool branch_taken_0x28b478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B478u;
        // 0x28b47c: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b478) {
            ctx->pc = 0x28B4C0u;
            goto label_28b4c0;
        }
    }
    ctx->pc = 0x28B480u;
label_28b480:
    // 0x28b480: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x28b480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x28b484: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x28b484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28b488: 0x161840  sll         $v1, $s6, 1
    ctx->pc = 0x28b488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x28b48c: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x28b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x28b490: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x28b490u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x28b494: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x28b494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x28b498: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x28b498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x28b49c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28B49Cu;
    {
        const bool branch_taken_0x28b49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B49Cu;
        // 0x28b4a0: 0xa2040000  sb          $a0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b49c) {
            ctx->pc = 0x28B4C0u;
            goto label_28b4c0;
        }
    }
    ctx->pc = 0x28B4A4u;
label_28b4a4:
    // 0x28b4a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28b4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b4a8: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x28b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
    // 0x28b4ac: 0x162040  sll         $a0, $s6, 1
    ctx->pc = 0x28b4acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x28b4b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28b4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28b4b4: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x28b4b4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x28b4b8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x28b4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x28b4bc: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x28b4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_28b4c0:
    // 0x28b4c0: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B4C0u;
    {
        const bool branch_taken_0x28b4c0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4C0u;
        // 0x28b4c4: 0x2701821  addu        $v1, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4c0) {
            ctx->pc = 0x28B4D4u;
            goto label_28b4d4;
        }
    }
    ctx->pc = 0x28B4C8u;
    // 0x28b4c8: 0x9062ffff  lbu         $v0, -0x1($v1)
    ctx->pc = 0x28b4c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x28b4cc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28b4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28b4d0: 0xa062ffff  sb          $v0, -0x1($v1)
    ctx->pc = 0x28b4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 2));
label_28b4d4:
    // 0x28b4d4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x28b4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b4dc: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x28B4DCu;
    SET_GPR_U32(ctx, 31, 0x28B4E4u);
    ctx->pc = 0x28B4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B4DCu;
    // 0x28b4e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286E30u, 0x28B4DCu, 0x28B4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B4E4u;
label_28b4e4:
    // 0x28b4e4: 0x2b82b  sltu        $s7, $zero, $v0
    ctx->pc = 0x28b4e4u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28b4e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28b4e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b4ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b4f0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x28B4F0u;
    SET_GPR_U32(ctx, 31, 0x28B4F8u);
    ctx->pc = 0x28B4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B4F0u;
    // 0x28b4f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x28B4F0u, 0x28B4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B4F8u;
label_28b4f8:
    // 0x28b4f8: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x28B4F8u;
    SET_GPR_U32(ctx, 31, 0x28B500u);
    ctx->pc = 0x28B4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B4F8u;
    // 0x28b4fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x28B4F8u, 0x28B500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B500u;
label_28b500:
    // 0x28b500: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x28b500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b504: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x28b504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28b508: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x28b508u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28b50c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x28b50cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28b510: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x28b510u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28b514: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x28b514u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28b518: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x28b518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28b51c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x28b51cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b520: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x28b520u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b524: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x28b524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b528: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x28b528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b52c: 0x3e00008  jr          $ra
    ctx->pc = 0x28B52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B52Cu;
        // 0x28b530: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B534u;
    // 0x28b534: 0x0  nop
    ctx->pc = 0x28b534u;
    // NOP
    // 0x28b538: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28b538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28b53c: 0x3e00008  jr          $ra
    ctx->pc = 0x28B53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B53Cu;
        // 0x28b540: 0x2442a7f0  addiu       $v0, $v0, -0x5810 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B544u;
    // 0x28b544: 0x0  nop
    ctx->pc = 0x28b544u;
    // NOP
    if (ctx->pc == 0x28b544u) { ctx->pc = 0x28b548u; }
}
