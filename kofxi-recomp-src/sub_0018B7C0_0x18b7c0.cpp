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

// Function: sub_0018B7C0
// Address: 0x18b7c0 - 0x18ba10
void sub_0018B7C0_0x18b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B7C0_0x18b7c0");
#endif

    ctx->pc = 0x18b7c0u;

    // 0x18b7c0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x18b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x18b7c4: 0x9042f35a  lbu         $v0, -0xCA6($v0)
    ctx->pc = 0x18b7c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964058)));
    // 0x18b7c8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x18B7C8u;
    {
        const bool branch_taken_0x18b7c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b7c8) {
            ctx->pc = 0x18B7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B7C8u;
            // 0x18b7cc: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B814u;
            goto label_18b814;
        }
    }
    ctx->pc = 0x18B7D0u;
    // 0x18b7d0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x18b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18b7d4: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x18b7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x18b7d8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x18b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18b7dc: 0x24a5dc9d  addiu       $a1, $a1, -0x2363
    ctx->pc = 0x18b7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958237));
    // 0x18b7e0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18b7e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18b7e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b7ec: 0x2442db51  addiu       $v0, $v0, -0x24AF
    ctx->pc = 0x18b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957905));
    // 0x18b7f0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18b7f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b7f8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x18b7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18b7fc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18b7fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b800: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x18b800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x18b804: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18b804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18b808: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18b808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x18b80c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18B80Cu;
    {
        const bool branch_taken_0x18b80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B80Cu;
        // 0x18b810: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b80c) {
            ctx->pc = 0x18B834u;
            goto label_18b834;
        }
    }
    ctx->pc = 0x18B814u;
label_18b814:
    // 0x18b814: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18b814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18b818: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b81c: 0x2442dc9d  addiu       $v0, $v0, -0x2363
    ctx->pc = 0x18b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958237));
    // 0x18b820: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18b820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18b824: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b828: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18b828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18b82c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b830: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x18b830u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_18b834:
    // 0x18b834: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x18b834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b838: 0x3c090036  lui         $t1, 0x36
    ctx->pc = 0x18b838u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)54 << 16));
    // 0x18b83c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18b840: 0x25294120  addiu       $t1, $t1, 0x4120
    ctx->pc = 0x18b840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16672));
    // 0x18b844: 0x2442dc9d  addiu       $v0, $v0, -0x2363
    ctx->pc = 0x18b844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958237));
    // 0x18b848: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18b848u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b84c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b850: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x18b850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x18b854: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x18b854u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b858: 0x90470020  lbu         $a3, 0x20($v0)
    ctx->pc = 0x18b858u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x18b85c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x18b85cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x18b860: 0x90420040  lbu         $v0, 0x40($v0)
    ctx->pc = 0x18b860u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x18b864: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x18b864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x18b868: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x18b868u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x18b86c: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x18b86cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18b870: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x18b870u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x18b874: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18b874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18b878: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x18b878u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x18b87c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x18b87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x18b880: 0x1484025  or          $t0, $t2, $t0
    ctx->pc = 0x18b880u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x18b884: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18b884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b888: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x18b888u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x18b88c: 0x14c50003  bne         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B88Cu;
    {
        const bool branch_taken_0x18b88c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x18B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B88Cu;
        // 0x18b890: 0xe21025  or          $v0, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b88c) {
            ctx->pc = 0x18B89Cu;
            goto label_18b89c;
        }
    }
    ctx->pc = 0x18B894u;
    // 0x18b894: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x18B894u;
    {
        const bool branch_taken_0x18b894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B894u;
        // 0x18b898: 0x6404000b  daddiu      $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)11);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b894) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B89Cu;
label_18b89c:
    // 0x18b89c: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x18b89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x18b8a0: 0x54c50003  bnel        $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B8A0u;
    {
        const bool branch_taken_0x18b8a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b8a0) {
            ctx->pc = 0x18B8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B8A0u;
            // 0x18b8a4: 0x24050023  addiu       $a1, $zero, 0x23 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B8B0u;
            goto label_18b8b0;
        }
    }
    ctx->pc = 0x18B8A8u;
    // 0x18b8a8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x18B8A8u;
    {
        const bool branch_taken_0x18b8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8A8u;
        // 0x18b8ac: 0x6404000c  daddiu      $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8a8) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B8B0u;
label_18b8b0:
    // 0x18b8b0: 0x54c50003  bnel        $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B8B0u;
    {
        const bool branch_taken_0x18b8b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b8b0) {
            ctx->pc = 0x18B8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B8B0u;
            // 0x18b8b4: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B8C0u;
            goto label_18b8c0;
        }
    }
    ctx->pc = 0x18B8B8u;
    // 0x18b8b8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x18B8B8u;
    {
        const bool branch_taken_0x18b8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8B8u;
        // 0x18b8bc: 0x6404000d  daddiu      $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8b8) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B8C0u;
label_18b8c0:
    // 0x18b8c0: 0x54c50003  bnel        $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B8C0u;
    {
        const bool branch_taken_0x18b8c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b8c0) {
            ctx->pc = 0x18B8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B8C0u;
            // 0x18b8c4: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B8D0u;
            goto label_18b8d0;
        }
    }
    ctx->pc = 0x18B8C8u;
    // 0x18b8c8: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x18B8C8u;
    {
        const bool branch_taken_0x18b8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8C8u;
        // 0x18b8cc: 0x6404000e  daddiu      $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)14);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8c8) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B8D0u;
label_18b8d0:
    // 0x18b8d0: 0x54c50003  bnel        $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B8D0u;
    {
        const bool branch_taken_0x18b8d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b8d0) {
            ctx->pc = 0x18B8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B8D0u;
            // 0x18b8d4: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B8E0u;
            goto label_18b8e0;
        }
    }
    ctx->pc = 0x18B8D8u;
    // 0x18b8d8: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x18B8D8u;
    {
        const bool branch_taken_0x18b8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8D8u;
        // 0x18b8dc: 0x6404000f  daddiu      $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8d8) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B8E0u;
label_18b8e0:
    // 0x18b8e0: 0x54c50003  bnel        $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B8E0u;
    {
        const bool branch_taken_0x18b8e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b8e0) {
            ctx->pc = 0x18B8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B8E0u;
            // 0x18b8e4: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B8F0u;
            goto label_18b8f0;
        }
    }
    ctx->pc = 0x18B8E8u;
    // 0x18b8e8: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x18B8E8u;
    {
        const bool branch_taken_0x18b8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8E8u;
        // 0x18b8ec: 0x64040010  daddiu      $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8e8) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B8F0u;
label_18b8f0:
    // 0x18b8f0: 0x54c50003  bnel        $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B8F0u;
    {
        const bool branch_taken_0x18b8f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b8f0) {
            ctx->pc = 0x18B8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B8F0u;
            // 0x18b8f4: 0x2423c  dsll32      $t0, $v0, 8 (Delay Slot)
            SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B900u;
            goto label_18b900;
        }
    }
    ctx->pc = 0x18B8F8u;
    // 0x18b8f8: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x18B8F8u;
    {
        const bool branch_taken_0x18b8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B8F8u;
        // 0x18b8fc: 0x64040011  daddiu      $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)17);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b8f8) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B900u;
label_18b900:
    // 0x18b900: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18b900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b904: 0x8423e  dsrl32      $t0, $t0, 8
    ctx->pc = 0x18b904u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 8));
    // 0x18b908: 0x55060003  bnel        $t0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B908u;
    {
        const bool branch_taken_0x18b908 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x18b908) {
            ctx->pc = 0x18B90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B908u;
            // 0x18b90c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B918u;
            goto label_18b918;
        }
    }
    ctx->pc = 0x18B910u;
    // 0x18b910: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x18B910u;
    {
        const bool branch_taken_0x18b910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B910u;
        // 0x18b914: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b910) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B918u;
label_18b918:
    // 0x18b918: 0x55050003  bnel        $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B918u;
    {
        const bool branch_taken_0x18b918 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b918) {
            ctx->pc = 0x18B91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B918u;
            // 0x18b91c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B928u;
            goto label_18b928;
        }
    }
    ctx->pc = 0x18B920u;
    // 0x18b920: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x18B920u;
    {
        const bool branch_taken_0x18b920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B920u;
        // 0x18b924: 0x30c400ff  andi        $a0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b920) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B928u;
label_18b928:
    // 0x18b928: 0x55070003  bnel        $t0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B928u;
    {
        const bool branch_taken_0x18b928 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x18b928) {
            ctx->pc = 0x18B92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B928u;
            // 0x18b92c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B938u;
            goto label_18b938;
        }
    }
    ctx->pc = 0x18B930u;
    // 0x18b930: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x18B930u;
    {
        const bool branch_taken_0x18b930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B930u;
        // 0x18b934: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b930) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B938u;
label_18b938:
    // 0x18b938: 0x55060003  bnel        $t0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B938u;
    {
        const bool branch_taken_0x18b938 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x18b938) {
            ctx->pc = 0x18B93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B938u;
            // 0x18b93c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B948u;
            goto label_18b948;
        }
    }
    ctx->pc = 0x18B940u;
    // 0x18b940: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x18B940u;
    {
        const bool branch_taken_0x18b940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B940u;
        // 0x18b944: 0x64040003  daddiu      $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b940) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B948u;
label_18b948:
    // 0x18b948: 0x55050003  bnel        $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B948u;
    {
        const bool branch_taken_0x18b948 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b948) {
            ctx->pc = 0x18B94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B948u;
            // 0x18b94c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B958u;
            goto label_18b958;
        }
    }
    ctx->pc = 0x18B950u;
    // 0x18b950: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x18B950u;
    {
        const bool branch_taken_0x18b950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B950u;
        // 0x18b954: 0x30e400ff  andi        $a0, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b950) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B958u;
label_18b958:
    // 0x18b958: 0x55050003  bnel        $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B958u;
    {
        const bool branch_taken_0x18b958 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b958) {
            ctx->pc = 0x18B95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B958u;
            // 0x18b95c: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B968u;
            goto label_18b968;
        }
    }
    ctx->pc = 0x18B960u;
    // 0x18b960: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x18B960u;
    {
        const bool branch_taken_0x18b960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B960u;
        // 0x18b964: 0x64040005  daddiu      $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b960) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B968u;
label_18b968:
    // 0x18b968: 0x55050003  bnel        $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B968u;
    {
        const bool branch_taken_0x18b968 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b968) {
            ctx->pc = 0x18B96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B968u;
            // 0x18b96c: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B978u;
            goto label_18b978;
        }
    }
    ctx->pc = 0x18B970u;
    // 0x18b970: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x18B970u;
    {
        const bool branch_taken_0x18b970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B970u;
        // 0x18b974: 0x64040006  daddiu      $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b970) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B978u;
label_18b978:
    // 0x18b978: 0x55050003  bnel        $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B978u;
    {
        const bool branch_taken_0x18b978 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b978) {
            ctx->pc = 0x18B97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B978u;
            // 0x18b97c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B988u;
            goto label_18b988;
        }
    }
    ctx->pc = 0x18B980u;
    // 0x18b980: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x18B980u;
    {
        const bool branch_taken_0x18b980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B980u;
        // 0x18b984: 0x64040007  daddiu      $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b980) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B988u;
label_18b988:
    // 0x18b988: 0x55050003  bnel        $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B988u;
    {
        const bool branch_taken_0x18b988 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b988) {
            ctx->pc = 0x18B98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B988u;
            // 0x18b98c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B998u;
            goto label_18b998;
        }
    }
    ctx->pc = 0x18B990u;
    // 0x18b990: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18B990u;
    {
        const bool branch_taken_0x18b990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B990u;
        // 0x18b994: 0x30c400ff  andi        $a0, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b990) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B998u;
label_18b998:
    // 0x18b998: 0x55050003  bnel        $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B998u;
    {
        const bool branch_taken_0x18b998 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b998) {
            ctx->pc = 0x18B99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B998u;
            // 0x18b99c: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B9A8u;
            goto label_18b9a8;
        }
    }
    ctx->pc = 0x18B9A0u;
    // 0x18b9a0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18B9A0u;
    {
        const bool branch_taken_0x18b9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9A0u;
        // 0x18b9a4: 0x64040009  daddiu      $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)9);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9a0) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B9A8u;
label_18b9a8:
    // 0x18b9a8: 0x55050003  bnel        $t0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B9A8u;
    {
        const bool branch_taken_0x18b9a8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b9a8) {
            ctx->pc = 0x18B9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B9A8u;
            // 0x18b9ac: 0x3c06ff00  lui         $a2, 0xFF00 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B9B8u;
            goto label_18b9b8;
        }
    }
    ctx->pc = 0x18B9B0u;
    // 0x18b9b0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18B9B0u;
    {
        const bool branch_taken_0x18b9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9B0u;
        // 0x18b9b4: 0x6404000a  daddiu      $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9b0) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B9B8u;
label_18b9b8:
    // 0x18b9b8: 0x3c05c000  lui         $a1, 0xC000
    ctx->pc = 0x18b9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49152 << 16));
    // 0x18b9bc: 0x463024  and         $a2, $v0, $a2
    ctx->pc = 0x18b9bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x18b9c0: 0x54c50003  bnel        $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B9C0u;
    {
        const bool branch_taken_0x18b9c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x18b9c0) {
            ctx->pc = 0x18B9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B9C0u;
            // 0x18b9c4: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B9D0u;
            goto label_18b9d0;
        }
    }
    ctx->pc = 0x18B9C8u;
    // 0x18b9c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18B9C8u;
    {
        const bool branch_taken_0x18b9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9C8u;
        // 0x18b9cc: 0x64040012  daddiu      $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)18);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9c8) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B9D0u;
label_18b9d0:
    // 0x18b9d0: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B9D0u;
    {
        const bool branch_taken_0x18b9d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b9d0) {
            ctx->pc = 0x18B9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B9D0u;
            // 0x18b9d4: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B9E0u;
            goto label_18b9e0;
        }
    }
    ctx->pc = 0x18B9D8u;
    // 0x18b9d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18B9D8u;
    {
        const bool branch_taken_0x18b9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9D8u;
        // 0x18b9dc: 0x64040013  daddiu      $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b9d8) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B9E0u;
label_18b9e0:
    // 0x18b9e0: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18B9E0u;
    {
        const bool branch_taken_0x18b9e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b9e0) {
            ctx->pc = 0x18B9ECu;
            goto label_18b9ec;
        }
    }
    ctx->pc = 0x18B9E8u;
    // 0x18b9e8: 0x64040014  daddiu      $a0, $zero, 0x14
    ctx->pc = 0x18b9e8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)20);
label_18b9ec:
    // 0x18b9ec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18b9f0: 0x2442db54  addiu       $v0, $v0, -0x24AC
    ctx->pc = 0x18b9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957908));
    // 0x18b9f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b9f8: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x18b9f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18b9fc: 0x3e00008  jr          $ra
    ctx->pc = 0x18B9FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B9FCu;
        // 0x18ba00: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B9FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BA04u;
    // 0x18ba04: 0x0  nop
    ctx->pc = 0x18ba04u;
    // NOP
    // 0x18ba08: 0x0  nop
    ctx->pc = 0x18ba08u;
    // NOP
    // 0x18ba0c: 0x0  nop
    ctx->pc = 0x18ba0cu;
    // NOP
}
