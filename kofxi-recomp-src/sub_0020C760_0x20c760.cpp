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

// Function: sub_0020C760
// Address: 0x20c760 - 0x20cb50
void sub_0020C760_0x20c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C760_0x20c760");
#endif

    ctx->pc = 0x20c760u;

    // 0x20c760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20c764: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x20c764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x20c768: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20c768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20c76c: 0x28610110  slti        $at, $v1, 0x110
    ctx->pc = 0x20c76cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)272) ? 1 : 0);
    // 0x20c770: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20c770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20c774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20c774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20c778: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x20C778u;
    {
        const bool branch_taken_0x20c778 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C778u;
        // 0x20c77c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c778) {
            ctx->pc = 0x20C7A4u;
            goto label_20c7a4;
        }
    }
    ctx->pc = 0x20C780u;
    // 0x20c780: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C780u;
    {
        const bool branch_taken_0x20c780 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C780u;
        // 0x20c784: 0x3067000f  andi        $a3, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c780) {
            ctx->pc = 0x20C794u;
            goto label_20c794;
        }
    }
    ctx->pc = 0x20C788u;
    // 0x20c788: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C788u;
    {
        const bool branch_taken_0x20c788 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c788) {
            ctx->pc = 0x20C78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C788u;
            // 0x20c78c: 0x30c3ffff  andi        $v1, $a2, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C798u;
            goto label_20c798;
        }
    }
    ctx->pc = 0x20C790u;
    // 0x20c790: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x20c790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_20c794:
    // 0x20c794: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x20c794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_20c798:
    // 0x20c798: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x20c798u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x20c79c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x20C79Cu;
    {
        const bool branch_taken_0x20c79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C79Cu;
        // 0x20c7a0: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c79c) {
            ctx->pc = 0x20C7E8u;
            goto label_20c7e8;
        }
    }
    ctx->pc = 0x20C7A4u;
label_20c7a4:
    // 0x20c7a4: 0x28610120  slti        $at, $v1, 0x120
    ctx->pc = 0x20c7a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)288) ? 1 : 0);
    // 0x20c7a8: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20C7A8u;
    {
        const bool branch_taken_0x20c7a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c7a8) {
            ctx->pc = 0x20C7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C7A8u;
            // 0x20c7ac: 0x3067000f  andi        $a3, $v1, 0xF (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C7D0u;
            goto label_20c7d0;
        }
    }
    ctx->pc = 0x20C7B0u;
    // 0x20c7b0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C7B0u;
    {
        const bool branch_taken_0x20c7b0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7B0u;
        // 0x20c7b4: 0x3067000f  andi        $a3, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7b0) {
            ctx->pc = 0x20C7C4u;
            goto label_20c7c4;
        }
    }
    ctx->pc = 0x20C7B8u;
    // 0x20c7b8: 0x50e0000b  beql        $a3, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20C7B8u;
    {
        const bool branch_taken_0x20c7b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c7b8) {
            ctx->pc = 0x20C7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C7B8u;
            // 0x20c7bc: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C7E8u;
            goto label_20c7e8;
        }
    }
    ctx->pc = 0x20C7C0u;
    // 0x20c7c0: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x20c7c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_20c7c4:
    // 0x20c7c4: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x20c7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x20c7c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20C7C8u;
    {
        const bool branch_taken_0x20c7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c7c8) {
            ctx->pc = 0x20C7E8u;
            goto label_20c7e8;
        }
    }
    ctx->pc = 0x20C7D0u;
label_20c7d0:
    // 0x20c7d0: 0x4630005  bgezl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C7D0u;
    {
        const bool branch_taken_0x20c7d0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x20c7d0) {
            ctx->pc = 0x20C7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C7D0u;
            // 0x20c7d4: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C7E8u;
            goto label_20c7e8;
        }
    }
    ctx->pc = 0x20C7D8u;
    // 0x20c7d8: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x20C7D8u;
    {
        const bool branch_taken_0x20c7d8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c7d8) {
            ctx->pc = 0x20C7E4u;
            goto label_20c7e4;
        }
    }
    ctx->pc = 0x20C7E0u;
    // 0x20c7e0: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x20c7e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
label_20c7e4:
    // 0x20c7e4: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x20c7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_20c7e8:
    // 0x20c7e8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20c7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20c7ec: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x20c7ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x20c7f0: 0x8c6aa480  lw          $t2, -0x5B80($v1)
    ctx->pc = 0x20c7f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943872)));
    // 0x20c7f4: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x20c7f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x20c7f8: 0x48100  sll         $s0, $a0, 4
    ctx->pc = 0x20c7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20c7fc: 0x2408000e  addiu       $t0, $zero, 0xE
    ctx->pc = 0x20c7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20c800: 0x240e0014  addiu       $t6, $zero, 0x14
    ctx->pc = 0x20c800u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x20c804: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x20c804u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20c808: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x20c808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20c80c: 0x3c1801c1  lui         $t8, 0x1C1
    ctx->pc = 0x20c80cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)449 << 16));
    // 0x20c810: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x20c810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x20c814: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x20c814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20c818: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x20c818u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x20c81c: 0x2409003f  addiu       $t1, $zero, 0x3F
    ctx->pc = 0x20c81cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x20c820: 0x3c032007  lui         $v1, 0x2007
    ctx->pc = 0x20c820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8199 << 16));
    // 0x20c824: 0xfd480008  sd          $t0, 0x8($t2)
    ctx->pc = 0x20c824u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 8));
    // 0x20c828: 0x3463d006  ori         $v1, $v1, 0xD006
    ctx->pc = 0x20c828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53254);
    // 0x20c82c: 0xfd400010  sd          $zero, 0x10($t2)
    ctx->pc = 0x20c82cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 0));
    // 0x20c830: 0x3403c  dsll32      $t0, $v1, 0
    ctx->pc = 0x20c830u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20c834: 0xfd490018  sd          $t1, 0x18($t2)
    ctx->pc = 0x20c834u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 24), GPR_U64(ctx, 9));
    // 0x20c838: 0x3c036131  lui         $v1, 0x6131
    ctx->pc = 0x20c838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24881 << 16));
    // 0x20c83c: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x20c83cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x20c840: 0x34633480  ori         $v1, $v1, 0x3480
    ctx->pc = 0x20c840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13440);
    // 0x20c844: 0x26106c00  addiu       $s0, $s0, 0x6C00
    ctx->pc = 0x20c844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27648));
    // 0x20c848: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x20c848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x20c84c: 0xfd430020  sd          $v1, 0x20($t2)
    ctx->pc = 0x20c84cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 32), GPR_U64(ctx, 3));
    // 0x20c850: 0x3c08009d  lui         $t0, 0x9D
    ctx->pc = 0x20c850u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)157 << 16));
    // 0x20c854: 0xfd490028  sd          $t1, 0x28($t2)
    ctx->pc = 0x20c854u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 40), GPR_U64(ctx, 9));
    // 0x20c858: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20c858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20c85c: 0x910cb280  lbu         $t4, -0x4D80($t0)
    ctx->pc = 0x20c85cu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4294947456)));
    // 0x20c860: 0x3c0960ab  lui         $t1, 0x60AB
    ctx->pc = 0x20c860u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)24747 << 16));
    // 0x20c864: 0x35294000  ori         $t1, $t1, 0x4000
    ctx->pc = 0x20c864u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16384);
    // 0x20c868: 0x8c63a480  lw          $v1, -0x5B80($v1)
    ctx->pc = 0x20c868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943872)));
    // 0x20c86c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x20c86cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x20c870: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x20c870u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20c874: 0x34088001  ori         $t0, $zero, 0x8001
    ctx->pc = 0x20c874u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x20c878: 0xc782b  sltu        $t7, $zero, $t4
    ctx->pc = 0x20c878u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x20c87c: 0x1096825  or          $t5, $t0, $t1
    ctx->pc = 0x20c87cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x20c880: 0xf6178  dsll        $t4, $t7, 5
    ctx->pc = 0x20c880u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 15) << 5);
    // 0x20c884: 0xf49b8  dsll        $t1, $t7, 6
    ctx->pc = 0x20c884u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 15) << 6);
    // 0x20c888: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x20c888u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x20c88c: 0x1894825  or          $t1, $t4, $t1
    ctx->pc = 0x20c88cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) | GPR_U64(ctx, 9));
    // 0x20c890: 0x3c0f01c1  lui         $t7, 0x1C1
    ctx->pc = 0x20c890u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)449 << 16));
    // 0x20c894: 0xfc690030  sd          $t1, 0x30($v1)
    ctx->pc = 0x20c894u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 9));
    // 0x20c898: 0x350c3413  ori         $t4, $t0, 0x3413
    ctx->pc = 0x20c898u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)13331);
    // 0x20c89c: 0xfc6e0038  sd          $t6, 0x38($v1)
    ctx->pc = 0x20c89cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 14));
    // 0x20c8a0: 0x3c0901c1  lui         $t1, 0x1C1
    ctx->pc = 0x20c8a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
    // 0x20c8a4: 0xfc6a0040  sd          $t2, 0x40($v1)
    ctx->pc = 0x20c8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 10));
    // 0x20c8a8: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x20c8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x20c8ac: 0xfc6b0048  sd          $t3, 0x48($v1)
    ctx->pc = 0x20c8acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 11));
    // 0x20c8b0: 0x75200  sll         $t2, $a3, 8
    ctx->pc = 0x20c8b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x20c8b4: 0x254b0008  addiu       $t3, $t2, 0x8
    ctx->pc = 0x20c8b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x20c8b8: 0xfc6d0050  sd          $t5, 0x50($v1)
    ctx->pc = 0x20c8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 13));
    // 0x20c8bc: 0x65200  sll         $t2, $a2, 8
    ctx->pc = 0x20c8bcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x20c8c0: 0xfc6c0058  sd          $t4, 0x58($v1)
    ctx->pc = 0x20c8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 12));
    // 0x20c8c4: 0x25530008  addiu       $s3, $t2, 0x8
    ctx->pc = 0x20c8c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x20c8c8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20c8cc: 0x8d2aa480  lw          $t2, -0x5B80($t1)
    ctx->pc = 0x20c8ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294943872)));
    // 0x20c8d0: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x20c8d0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
    // 0x20c8d4: 0x3c0d01c1  lui         $t5, 0x1C1
    ctx->pc = 0x20c8d4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)449 << 16));
    // 0x20c8d8: 0x3c0c01c1  lui         $t4, 0x1C1
    ctx->pc = 0x20c8d8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)449 << 16));
    // 0x20c8dc: 0x25490060  addiu       $t1, $t2, 0x60
    ctx->pc = 0x20c8dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 96));
    // 0x20c8e0: 0xad09a480  sw          $t1, -0x5B80($t0)
    ctx->pc = 0x20c8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294943872), GPR_U32(ctx, 9));
    // 0x20c8e4: 0xad4b0060  sw          $t3, 0x60($t2)
    ctx->pc = 0x20c8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 96), GPR_U32(ctx, 11));
    // 0x20c8e8: 0x3c0901c1  lui         $t1, 0x1C1
    ctx->pc = 0x20c8e8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
    // 0x20c8ec: 0x8c72a480  lw          $s2, -0x5B80($v1)
    ctx->pc = 0x20c8ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943872)));
    // 0x20c8f0: 0x3c0b01c1  lui         $t3, 0x1C1
    ctx->pc = 0x20c8f0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)449 << 16));
    // 0x20c8f4: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x20c8f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x20c8f8: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x20c8f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x20c8fc: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x20c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x20c900: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x20c900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x20c904: 0x8f12a480  lw          $s2, -0x5B80($t8)
    ctx->pc = 0x20c904u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294943872)));
    // 0x20c908: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x20c908u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x20c90c: 0x8defa480  lw          $t7, -0x5B80($t7)
    ctx->pc = 0x20c90cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294943872)));
    // 0x20c910: 0xade0000c  sw          $zero, 0xC($t7)
    ctx->pc = 0x20c910u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 0));
    // 0x20c914: 0x8dcfa480  lw          $t7, -0x5B80($t6)
    ctx->pc = 0x20c914u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294943872)));
    // 0x20c918: 0x25ee0010  addiu       $t6, $t7, 0x10
    ctx->pc = 0x20c918u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x20c91c: 0xadaea480  sw          $t6, -0x5B80($t5)
    ctx->pc = 0x20c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294943872), GPR_U32(ctx, 14));
    // 0x20c920: 0xadf10010  sw          $s1, 0x10($t7)
    ctx->pc = 0x20c920u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 17));
    // 0x20c924: 0x8d8ca480  lw          $t4, -0x5B80($t4)
    ctx->pc = 0x20c924u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294943872)));
    // 0x20c928: 0xad910004  sw          $s1, 0x4($t4)
    ctx->pc = 0x20c928u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 17));
    // 0x20c92c: 0x8d6ba480  lw          $t3, -0x5B80($t3)
    ctx->pc = 0x20c92cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294943872)));
    // 0x20c930: 0xad710008  sw          $s1, 0x8($t3)
    ctx->pc = 0x20c930u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 17));
    // 0x20c934: 0x8d4aa480  lw          $t2, -0x5B80($t2)
    ctx->pc = 0x20c934u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294943872)));
    // 0x20c938: 0xad51000c  sw          $s1, 0xC($t2)
    ctx->pc = 0x20c938u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 17));
    // 0x20c93c: 0x8d2aa480  lw          $t2, -0x5B80($t1)
    ctx->pc = 0x20c93cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294943872)));
    // 0x20c940: 0x25490010  addiu       $t1, $t2, 0x10
    ctx->pc = 0x20c940u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x20c944: 0xad09a480  sw          $t1, -0x5B80($t0)
    ctx->pc = 0x20c944u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294943872), GPR_U32(ctx, 9));
    // 0x20c948: 0xad500010  sw          $s0, 0x10($t2)
    ctx->pc = 0x20c948u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 16));
    // 0x20c94c: 0x9063b280  lbu         $v1, -0x4D80($v1)
    ctx->pc = 0x20c94cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x20c950: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x20C950u;
    {
        const bool branch_taken_0x20c950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c950) {
            ctx->pc = 0x20C954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C950u;
            // 0x20c954: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C9A8u;
            goto label_20c9a8;
        }
    }
    ctx->pc = 0x20C958u;
    // 0x20c958: 0x54100  sll         $t0, $a1, 4
    ctx->pc = 0x20c958u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x20c95c: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x20c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x20c960: 0x25097100  addiu       $t1, $t0, 0x7100
    ctx->pc = 0x20c960u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 28928));
    // 0x20c964: 0x252a8000  addiu       $t2, $t1, -0x8000
    ctx->pc = 0x20c964u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4294934528));
    // 0x20c968: 0x34688889  ori         $t0, $v1, 0x8889
    ctx->pc = 0x20c968u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x20c96c: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x20c96cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x20c970: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x20c970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20c974: 0x12a4823  subu        $t1, $t1, $t2
    ctx->pc = 0x20c974u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x20c978: 0x95180  sll         $t2, $t1, 6
    ctx->pc = 0x20c978u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x20c97c: 0x10a0018  mult        $zero, $t0, $t2
    ctx->pc = 0x20c97cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20c980: 0xa4fc2  srl         $t1, $t2, 31
    ctx->pc = 0x20c980u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x20c984: 0x0  nop
    ctx->pc = 0x20c984u;
    // NOP
    // 0x20c988: 0x4010  mfhi        $t0
    ctx->pc = 0x20c988u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x20c98c: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x20c98cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x20c990: 0x84203  sra         $t0, $t0, 8
    ctx->pc = 0x20c990u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 8));
    // 0x20c994: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x20c994u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x20c998: 0x25087fff  addiu       $t0, $t0, 0x7FFF
    ctx->pc = 0x20c998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32767));
    // 0x20c99c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20c99cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20c9a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20C9A0u;
    {
        const bool branch_taken_0x20c9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9A0u;
        // 0x20c9a4: 0x1035824  and         $t3, $t0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9a0) {
            ctx->pc = 0x20C9ACu;
            goto label_20c9ac;
        }
    }
    ctx->pc = 0x20C9A8u;
label_20c9a8:
    // 0x20c9a8: 0x246b7100  addiu       $t3, $v1, 0x7100
    ctx->pc = 0x20c9a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
label_20c9ac:
    // 0x20c9ac: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x20c9acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x20c9b0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x20c9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x20c9b4: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x20c9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x20c9b8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x20c9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x20c9bc: 0x24870010  addiu       $a3, $a0, 0x10
    ctx->pc = 0x20c9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x20c9c0: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x20c9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x20c9c4: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20c9c8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x20c9c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20c9cc: 0x8c8aa480  lw          $t2, -0x5B80($a0)
    ctx->pc = 0x20c9ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943872)));
    // 0x20c9d0: 0x3c1901c1  lui         $t9, 0x1C1
    ctx->pc = 0x20c9d0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)449 << 16));
    // 0x20c9d4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x20c9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x20c9d8: 0x3c1801c1  lui         $t8, 0x1C1
    ctx->pc = 0x20c9d8u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)449 << 16));
    // 0x20c9dc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20c9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20c9e0: 0x3c0f01c1  lui         $t7, 0x1C1
    ctx->pc = 0x20c9e0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)449 << 16));
    // 0x20c9e4: 0xad4b0004  sw          $t3, 0x4($t2)
    ctx->pc = 0x20c9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 11));
    // 0x20c9e8: 0x72100  sll         $a0, $a3, 4
    ctx->pc = 0x20c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x20c9ec: 0x8d08a480  lw          $t0, -0x5B80($t0)
    ctx->pc = 0x20c9ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294943872)));
    // 0x20c9f0: 0x24906c00  addiu       $s0, $a0, 0x6C00
    ctx->pc = 0x20c9f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x20c9f4: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x20c9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x20c9f8: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20c9fc: 0x3c0e01c1  lui         $t6, 0x1C1
    ctx->pc = 0x20c9fcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)449 << 16));
    // 0x20ca00: 0x3c0d01c1  lui         $t5, 0x1C1
    ctx->pc = 0x20ca00u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)449 << 16));
    // 0x20ca04: 0xad090008  sw          $t1, 0x8($t0)
    ctx->pc = 0x20ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 9));
    // 0x20ca08: 0x3c0c01c1  lui         $t4, 0x1C1
    ctx->pc = 0x20ca08u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)449 << 16));
    // 0x20ca0c: 0x8ce7a480  lw          $a3, -0x5B80($a3)
    ctx->pc = 0x20ca0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294943872)));
    // 0x20ca10: 0x24110080  addiu       $s1, $zero, 0x80
    ctx->pc = 0x20ca10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20ca14: 0x3c0b01c1  lui         $t3, 0x1C1
    ctx->pc = 0x20ca14u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)449 << 16));
    // 0x20ca18: 0x3c0a01c1  lui         $t2, 0x1C1
    ctx->pc = 0x20ca18u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)449 << 16));
    // 0x20ca1c: 0x3c0901c1  lui         $t1, 0x1C1
    ctx->pc = 0x20ca1cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)449 << 16));
    // 0x20ca20: 0x3c0801c1  lui         $t0, 0x1C1
    ctx->pc = 0x20ca20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)449 << 16));
    // 0x20ca24: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x20ca24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x20ca28: 0x8c93a480  lw          $s3, -0x5B80($a0)
    ctx->pc = 0x20ca28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943872)));
    // 0x20ca2c: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x20ca2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
    // 0x20ca30: 0x26720010  addiu       $s2, $s3, 0x10
    ctx->pc = 0x20ca30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x20ca34: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x20ca34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x20ca38: 0xaf32a480  sw          $s2, -0x5B80($t9)
    ctx->pc = 0x20ca38u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4294943872), GPR_U32(ctx, 18));
    // 0x20ca3c: 0xae660010  sw          $a2, 0x10($s3)
    ctx->pc = 0x20ca3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 6));
    // 0x20ca40: 0x8f06a480  lw          $a2, -0x5B80($t8)
    ctx->pc = 0x20ca40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4294943872)));
    // 0x20ca44: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x20ca44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x20ca48: 0x8de3a480  lw          $v1, -0x5B80($t7)
    ctx->pc = 0x20ca48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294943872)));
    // 0x20ca4c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x20ca4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x20ca50: 0x8dc3a480  lw          $v1, -0x5B80($t6)
    ctx->pc = 0x20ca50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294943872)));
    // 0x20ca54: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x20ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x20ca58: 0x8da6a480  lw          $a2, -0x5B80($t5)
    ctx->pc = 0x20ca58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294943872)));
    // 0x20ca5c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x20ca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x20ca60: 0xad83a480  sw          $v1, -0x5B80($t4)
    ctx->pc = 0x20ca60u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294943872), GPR_U32(ctx, 3));
    // 0x20ca64: 0xacd10010  sw          $s1, 0x10($a2)
    ctx->pc = 0x20ca64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 17));
    // 0x20ca68: 0x8d63a480  lw          $v1, -0x5B80($t3)
    ctx->pc = 0x20ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294943872)));
    // 0x20ca6c: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x20ca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x20ca70: 0x8d43a480  lw          $v1, -0x5B80($t2)
    ctx->pc = 0x20ca70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294943872)));
    // 0x20ca74: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x20ca74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x20ca78: 0x8d23a480  lw          $v1, -0x5B80($t1)
    ctx->pc = 0x20ca78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294943872)));
    // 0x20ca7c: 0xac71000c  sw          $s1, 0xC($v1)
    ctx->pc = 0x20ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 17));
    // 0x20ca80: 0x8d06a480  lw          $a2, -0x5B80($t0)
    ctx->pc = 0x20ca80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294943872)));
    // 0x20ca84: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x20ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x20ca88: 0xace3a480  sw          $v1, -0x5B80($a3)
    ctx->pc = 0x20ca88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294943872), GPR_U32(ctx, 3));
    // 0x20ca8c: 0xacd00010  sw          $s0, 0x10($a2)
    ctx->pc = 0x20ca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 16));
    // 0x20ca90: 0x9083b280  lbu         $v1, -0x4D80($a0)
    ctx->pc = 0x20ca90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947456)));
    // 0x20ca94: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x20CA94u;
    {
        const bool branch_taken_0x20ca94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ca94) {
            ctx->pc = 0x20CA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CA94u;
            // 0x20ca98: 0x24a30010  addiu       $v1, $a1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAF0u;
            goto label_20caf0;
        }
    }
    ctx->pc = 0x20CA9Cu;
    // 0x20ca9c: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x20ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x20caa0: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x20caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x20caa4: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x20caa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20caa8: 0x24a57100  addiu       $a1, $a1, 0x7100
    ctx->pc = 0x20caa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28928));
    // 0x20caac: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x20caacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x20cab0: 0x24a68000  addiu       $a2, $a1, -0x8000
    ctx->pc = 0x20cab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x20cab4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x20cab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20cab8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x20cab8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20cabc: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x20cabcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x20cac0: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x20cac0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x20cac4: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x20cac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x20cac8: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x20cac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x20cacc: 0x0  nop
    ctx->pc = 0x20caccu;
    // NOP
    // 0x20cad0: 0x2010  mfhi        $a0
    ctx->pc = 0x20cad0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x20cad4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x20cad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x20cad8: 0x42203  sra         $a0, $a0, 8
    ctx->pc = 0x20cad8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 8));
    // 0x20cadc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x20cadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20cae0: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x20cae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x20cae4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x20cae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20cae8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20CAE8u;
    {
        const bool branch_taken_0x20cae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAE8u;
        // 0x20caec: 0x834824  and         $t1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cae8) {
            ctx->pc = 0x20CAF8u;
            goto label_20caf8;
        }
    }
    ctx->pc = 0x20CAF0u;
label_20caf0:
    // 0x20caf0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20caf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x20caf4: 0x24697100  addiu       $t1, $v1, 0x7100
    ctx->pc = 0x20caf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
label_20caf8:
    // 0x20caf8: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20cafc: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x20cafcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
    // 0x20cb00: 0x8c68a480  lw          $t0, -0x5B80($v1)
    ctx->pc = 0x20cb00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943872)));
    // 0x20cb04: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x20cb04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20cb08: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x20cb08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x20cb0c: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x20cb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x20cb10: 0xad090004  sw          $t1, 0x4($t0)
    ctx->pc = 0x20cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 9));
    // 0x20cb14: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x20cb14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x20cb18: 0x8cc6a480  lw          $a2, -0x5B80($a2)
    ctx->pc = 0x20cb18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294943872)));
    // 0x20cb1c: 0xacc70008  sw          $a3, 0x8($a2)
    ctx->pc = 0x20cb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 7));
    // 0x20cb20: 0x8ca5a480  lw          $a1, -0x5B80($a1)
    ctx->pc = 0x20cb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294943872)));
    // 0x20cb24: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x20cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x20cb28: 0x8c84a480  lw          $a0, -0x5B80($a0)
    ctx->pc = 0x20cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294943872)));
    // 0x20cb2c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x20cb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x20cb30: 0xac64a480  sw          $a0, -0x5B80($v1)
    ctx->pc = 0x20cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943872), GPR_U32(ctx, 4));
    // 0x20cb34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20cb34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20cb38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20cb38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20cb3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20cb3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cb40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20cb40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cb44: 0x3e00008  jr          $ra
    ctx->pc = 0x20CB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB44u;
        // 0x20cb48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CB4Cu;
    // 0x20cb4c: 0x0  nop
    ctx->pc = 0x20cb4cu;
    // NOP
    if (ctx->pc == 0x20cb4cu) { ctx->pc = 0x20cb50u; }
}
