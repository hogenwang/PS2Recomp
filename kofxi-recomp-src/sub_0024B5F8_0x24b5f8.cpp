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

// Function: sub_0024B5F8
// Address: 0x24b5f8 - 0x24b8c0
void sub_0024B5F8_0x24b5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B5F8_0x24b5f8");
#endif

    switch (ctx->pc) {
        case 0x24b638u: goto label_24b638;
        case 0x24b6c8u: goto label_24b6c8;
        case 0x24b768u: goto label_24b768;
        case 0x24b7c8u: goto label_24b7c8;
        case 0x24b870u: goto label_24b870;
        default: break;
    }

    ctx->pc = 0x24b5f8u;

    // 0x24b5f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24b5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24b5fc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x24b5fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b600: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x24b600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x24b604: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x24b604u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b608: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b60c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24b60cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b610: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x24b610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24b614: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24b614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b618: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x24b618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x24b61c: 0x10e0008f  beqz        $a3, . + 4 + (0x8F << 2)
    ctx->pc = 0x24B61Cu;
    {
        const bool branch_taken_0x24b61c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B61Cu;
        // 0x24b620: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b61c) {
            ctx->pc = 0x24B85Cu;
            goto label_24b85c;
        }
    }
    ctx->pc = 0x24B624u;
    // 0x24b624: 0x11000092  beqz        $t0, . + 4 + (0x92 << 2)
    ctx->pc = 0x24B624u;
    {
        const bool branch_taken_0x24b624 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B624u;
        // 0x24b628: 0x240bffff  addiu       $t3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b624) {
            ctx->pc = 0x24B870u;
            goto label_24b870;
        }
    }
    ctx->pc = 0x24B62Cu;
    // 0x24b62c: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x24b62cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b630: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x24b630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x24b634: 0x0  nop
    ctx->pc = 0x24b634u;
    // NOP
label_24b638:
    // 0x24b638: 0x50800083  beql        $a0, $zero, . + 4 + (0x83 << 2)
    ctx->pc = 0x24B638u;
    {
        const bool branch_taken_0x24b638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b638) {
            ctx->pc = 0x24B63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B638u;
            // 0x24b63c: 0x8ce50000  lw          $a1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B848u;
            goto label_24b848;
        }
    }
    ctx->pc = 0x24B640u;
    // 0x24b640: 0x162b000a  bne         $s1, $t3, . + 4 + (0xA << 2)
    ctx->pc = 0x24B640u;
    {
        const bool branch_taken_0x24b640 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 11));
        ctx->pc = 0x24B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B640u;
        // 0x24b644: 0x8ce60008  lw          $a2, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b640) {
            ctx->pc = 0x24B66Cu;
            goto label_24b66c;
        }
    }
    ctx->pc = 0x24B648u;
    // 0x24b648: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x24b648u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24b64c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x24b64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x24b650: 0x2491ffff  addiu       $s1, $a0, -0x1
    ctx->pc = 0x24b650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x24b654: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x24b654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24b658: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x24b658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x24b65c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x24b65cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x24b660: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x24b660u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24b664: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24B664u;
    {
        const bool branch_taken_0x24b664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B664u;
        // 0x24b668: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b664) {
            ctx->pc = 0x24B670u;
            goto label_24b670;
        }
    }
    ctx->pc = 0x24B66Cu;
label_24b66c:
    // 0x24b66c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24b66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24b670:
    // 0x24b670: 0x111102a  slt         $v0, $t0, $s1
    ctx->pc = 0x24b670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x24b674: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x24b674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x24b678: 0x102880b  movn        $s1, $t0, $v0
    ctx->pc = 0x24b678u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 8));
    // 0x24b67c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x24B67Cu;
    {
        const bool branch_taken_0x24b67c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B67Cu;
        // 0x24b680: 0x1114023  subu        $t0, $t0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b67c) {
            ctx->pc = 0x24B6BCu;
            goto label_24b6bc;
        }
    }
    ctx->pc = 0x24B684u;
    // 0x24b684: 0x1a20000d  blez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x24B684u;
    {
        const bool branch_taken_0x24b684 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x24B688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B684u;
        // 0x24b688: 0x101c02  srl         $v1, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b684) {
            ctx->pc = 0x24B6BCu;
            goto label_24b6bc;
        }
    }
    ctx->pc = 0x24B68Cu;
    // 0x24b68c: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x24b68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x24b690: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x24b690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24b694: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x24b694u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24b698: 0x2092023  subu        $a0, $s0, $t1
    ctx->pc = 0x24b698u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x24b69c: 0x130102a  slt         $v0, $t1, $s0
    ctx->pc = 0x24b69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x24b6a0: 0x82800b  movn        $s0, $a0, $v0
    ctx->pc = 0x24b6a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x24b6a4: 0x3243ff00  andi        $v1, $s2, 0xFF00
    ctx->pc = 0x24b6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65280);
    // 0x24b6a8: 0xa39025  or          $s2, $a1, $v1
    ctx->pc = 0x24b6a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x24b6ac: 0x108200  sll         $s0, $s0, 8
    ctx->pc = 0x24b6acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
    // 0x24b6b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x24b6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x24b6b4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x24b6b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x24b6b8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x24b6b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24b6bc:
    // 0x24b6bc: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x24b6bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x24b6c0: 0x6200026  bltz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x24B6C0u;
    {
        const bool branch_taken_0x24b6c0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x24B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6C0u;
        // 0x24b6c4: 0x8ce50000  lw          $a1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b6c0) {
            ctx->pc = 0x24B75Cu;
            goto label_24b75c;
        }
    }
    ctx->pc = 0x24B6C8u;
label_24b6c8:
    // 0x24b6c8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x24b6c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24b6cc: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x24b6ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x24b6d0: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x24b6d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x24b6d4: 0x94c40004  lhu         $a0, 0x4($a2)
    ctx->pc = 0x24b6d4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x24b6d8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b6d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b6dc: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x24b6dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x24b6e0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24b6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24b6e4: 0x94c30008  lhu         $v1, 0x8($a2)
    ctx->pc = 0x24b6e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x24b6e8: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x24b6e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24b6ec: 0x94c4000a  lhu         $a0, 0xA($a2)
    ctx->pc = 0x24b6ecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x24b6f0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b6f4: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x24b6f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x24b6f8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24b6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24b6fc: 0x94c3000e  lhu         $v1, 0xE($a2)
    ctx->pc = 0x24b6fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x24b700: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x24b700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24b704: 0x94c40010  lhu         $a0, 0x10($a2)
    ctx->pc = 0x24b704u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x24b708: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b70c: 0x94c20012  lhu         $v0, 0x12($a2)
    ctx->pc = 0x24b70cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x24b710: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24b710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24b714: 0x94c30014  lhu         $v1, 0x14($a2)
    ctx->pc = 0x24b714u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x24b718: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x24b718u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24b71c: 0x94c40016  lhu         $a0, 0x16($a2)
    ctx->pc = 0x24b71cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x24b720: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b724: 0x94c20018  lhu         $v0, 0x18($a2)
    ctx->pc = 0x24b724u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x24b728: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24b728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24b72c: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x24b72cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24b730: 0x94c3001a  lhu         $v1, 0x1A($a2)
    ctx->pc = 0x24b730u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x24b734: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b738: 0x94c4001c  lhu         $a0, 0x1C($a2)
    ctx->pc = 0x24b738u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x24b73c: 0x94c2001e  lhu         $v0, 0x1E($a2)
    ctx->pc = 0x24b73cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 30)));
    // 0x24b740: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24b740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24b744: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x24b744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24b748: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x24b748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x24b74c: 0x621ffde  bgez        $s1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x24B74Cu;
    {
        const bool branch_taken_0x24b74c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x24B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B74Cu;
        // 0x24b750: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b74c) {
            ctx->pc = 0x24B6C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b6c8;
        }
    }
    ctx->pc = 0x24B754u;
    // 0x24b754: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24B754u;
    {
        const bool branch_taken_0x24b754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B754u;
        // 0x24b758: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b754) {
            ctx->pc = 0x24B760u;
            goto label_24b760;
        }
    }
    ctx->pc = 0x24B75Cu;
label_24b75c:
    // 0x24b75c: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x24b75cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_24b760:
    // 0x24b760: 0x622000d  bltzl       $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x24B760u;
    {
        const bool branch_taken_0x24b760 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x24b760) {
            ctx->pc = 0x24B764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B760u;
            // 0x24b764: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B798u;
            goto label_24b798;
        }
    }
    ctx->pc = 0x24B768u;
label_24b768:
    // 0x24b768: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x24b768u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24b76c: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x24b76cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x24b770: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x24b770u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x24b774: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b778: 0x94c40004  lhu         $a0, 0x4($a2)
    ctx->pc = 0x24b778u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x24b77c: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x24b77cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x24b780: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x24b780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x24b784: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x24b784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x24b788: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x24b788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x24b78c: 0x621fff6  bgez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x24B78Cu;
    {
        const bool branch_taken_0x24b78c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x24B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B78Cu;
        // 0x24b790: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b78c) {
            ctx->pc = 0x24B768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b768;
        }
    }
    ctx->pc = 0x24B794u;
    // 0x24b794: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x24b794u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_24b798:
    // 0x24b798: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B798u;
    {
        const bool branch_taken_0x24b798 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B798u;
        // 0x24b79c: 0x101c02  srl         $v1, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b798) {
            ctx->pc = 0x24B7A8u;
            goto label_24b7a8;
        }
    }
    ctx->pc = 0x24B7A0u;
    // 0x24b7a0: 0x5140002a  beql        $t2, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x24B7A0u;
    {
        const bool branch_taken_0x24b7a0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b7a0) {
            ctx->pc = 0x24B7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B7A0u;
            // 0x24b7a4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B84Cu;
            goto label_24b84c;
        }
    }
    ctx->pc = 0x24B7A8u;
label_24b7a8:
    // 0x24b7a8: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x24b7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x24b7ac: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x24b7acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24b7b0: 0x2631fffe  addiu       $s1, $s1, -0x2
    ctx->pc = 0x24b7b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x24b7b4: 0x2091823  subu        $v1, $s0, $t1
    ctx->pc = 0x24b7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x24b7b8: 0x130102a  slt         $v0, $t1, $s0
    ctx->pc = 0x24b7b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x24b7bc: 0x6200009  bltz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x24B7BCu;
    {
        const bool branch_taken_0x24b7bc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x24B7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7BCu;
        // 0x24b7c0: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b7bc) {
            ctx->pc = 0x24B7E4u;
            goto label_24b7e4;
        }
    }
    ctx->pc = 0x24B7C4u;
    // 0x24b7c4: 0x0  nop
    ctx->pc = 0x24b7c4u;
    // NOP
label_24b7c8:
    // 0x24b7c8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x24b7c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24b7cc: 0x2631fffe  addiu       $s1, $s1, -0x2
    ctx->pc = 0x24b7ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
    // 0x24b7d0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x24b7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x24b7d4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b7d8: 0x0  nop
    ctx->pc = 0x24b7d8u;
    // NOP
    // 0x24b7dc: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24B7DCu;
    {
        const bool branch_taken_0x24b7dc = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x24b7dc) {
            ctx->pc = 0x24B7C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b7c8;
        }
    }
    ctx->pc = 0x24B7E4u;
label_24b7e4:
    // 0x24b7e4: 0x11400012  beqz        $t2, . + 4 + (0x12 << 2)
    ctx->pc = 0x24B7E4u;
    {
        const bool branch_taken_0x24b7e4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B7E4u;
        // 0x24b7e8: 0x101c02  srl         $v1, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b7e4) {
            ctx->pc = 0x24B830u;
            goto label_24b830;
        }
    }
    ctx->pc = 0x24B7ECu;
    // 0x24b7ec: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x24b7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x24b7f0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x24b7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24b7f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x24b7f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b7f8: 0x2091823  subu        $v1, $s0, $t1
    ctx->pc = 0x24b7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x24b7fc: 0x130102a  slt         $v0, $t1, $s0
    ctx->pc = 0x24b7fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x24b800: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x24b800u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x24b804: 0x162b0008  bne         $s1, $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x24B804u;
    {
        const bool branch_taken_0x24b804 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 11));
        ctx->pc = 0x24B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B804u;
        // 0x24b808: 0x108200  sll         $s0, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b804) {
            ctx->pc = 0x24B828u;
            goto label_24b828;
        }
    }
    ctx->pc = 0x24B80Cu;
    // 0x24b80c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x24b80cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24b810: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x24b810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x24b814: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24b814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b818: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x24b818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x24b81c: 0x629025  or          $s2, $v1, $v0
    ctx->pc = 0x24b81cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x24b820: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24B820u;
    {
        const bool branch_taken_0x24b820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B820u;
        // 0x24b824: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b820) {
            ctx->pc = 0x24B848u;
            goto label_24b848;
        }
    }
    ctx->pc = 0x24B828u;
label_24b828:
    // 0x24b828: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24B828u;
    {
        const bool branch_taken_0x24b828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B828u;
        // 0x24b82c: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b828) {
            ctx->pc = 0x24B848u;
            goto label_24b848;
        }
    }
    ctx->pc = 0x24B830u;
label_24b830:
    // 0x24b830: 0x162b0006  bne         $s1, $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B830u;
    {
        const bool branch_taken_0x24b830 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 11));
        ctx->pc = 0x24B834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B830u;
        // 0x24b834: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b830) {
            ctx->pc = 0x24B84Cu;
            goto label_24b84c;
        }
    }
    ctx->pc = 0x24B838u;
    // 0x24b838: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x24b838u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x24b83c: 0x3242ff00  andi        $v0, $s2, 0xFF00
    ctx->pc = 0x24b83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65280);
    // 0x24b840: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24B840u;
    {
        const bool branch_taken_0x24b840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B840u;
        // 0x24b844: 0x629025  or          $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b840) {
            ctx->pc = 0x24B84Cu;
            goto label_24b84c;
        }
    }
    ctx->pc = 0x24B848u;
label_24b848:
    // 0x24b848: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x24b848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24b84c:
    // 0x24b84c: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B84Cu;
    {
        const bool branch_taken_0x24b84c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b84c) {
            ctx->pc = 0x24B85Cu;
            goto label_24b85c;
        }
    }
    ctx->pc = 0x24B854u;
    // 0x24b854: 0x5500ff78  bnel        $t0, $zero, . + 4 + (-0x88 << 2)
    ctx->pc = 0x24B854u;
    {
        const bool branch_taken_0x24b854 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b854) {
            ctx->pc = 0x24B858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B854u;
            // 0x24b858: 0x8ce4000c  lw          $a0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B638u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24b638;
        }
    }
    ctx->pc = 0x24B85Cu;
label_24b85c:
    // 0x24b85c: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B85Cu;
    {
        const bool branch_taken_0x24b85c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B85Cu;
        // 0x24b860: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b85c) {
            ctx->pc = 0x24B870u;
            goto label_24b870;
        }
    }
    ctx->pc = 0x24B864u;
    // 0x24b864: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x24b864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x24b868: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x24B868u;
    SET_GPR_U32(ctx, 31, 0x24B870u);
    ctx->pc = 0x24B86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B868u;
    // 0x24b86c: 0x24a56b78  addiu       $a1, $a1, 0x6B78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x24B868u, 0x24B870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B870u;
label_24b870:
    // 0x24b870: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x24b870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24b874: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24B874u;
    {
        const bool branch_taken_0x24b874 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x24B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B874u;
        // 0x24b878: 0x102402  srl         $a0, $s0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b874) {
            ctx->pc = 0x24B888u;
            goto label_24b888;
        }
    }
    ctx->pc = 0x24B87Cu;
    // 0x24b87c: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x24b87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x24b880: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24b880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b884: 0x102402  srl         $a0, $s0, 16
    ctx->pc = 0x24b884u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
label_24b888:
    // 0x24b888: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x24b888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x24b88c: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x24b88cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24b890: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x24b890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24b894: 0x50182a  slt         $v1, $v0, $s0
    ctx->pc = 0x24b894u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x24b898: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24b898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24b89c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x24b89cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b8a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24b8a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24b8a4: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x24b8a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x24b8a8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24b8a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b8ac: 0x101027  nor         $v0, $zero, $s0
    ctx->pc = 0x24b8acu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x24b8b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b8b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24b8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x24b8b8: 0x3e00008  jr          $ra
    ctx->pc = 0x24B8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B8B8u;
        // 0x24b8bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B8C0u;
}
