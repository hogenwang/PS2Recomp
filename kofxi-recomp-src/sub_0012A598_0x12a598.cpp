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

// Function: sub_0012A598
// Address: 0x12a598 - 0x12a758
void sub_0012A598_0x12a598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A598_0x12a598");
#endif

    switch (ctx->pc) {
        case 0x12a6c8u: goto label_12a6c8;
        case 0x12a700u: goto label_12a700;
        case 0x12a730u: goto label_12a730;
        default: break;
    }

    ctx->pc = 0x12a598u;

    // 0x12a598: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x12a598u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a59c: 0xa43825  or          $a3, $a1, $a0
    ctx->pc = 0x12a59cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x12a5a0: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x12a5a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x12a5a4: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x12a5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x12a5a8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x12a5a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12a5ac: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x12A5ACu;
    {
        const bool branch_taken_0x12a5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5ACu;
        // 0x12a5b0: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5ac) {
            ctx->pc = 0x12A700u;
            goto label_12a700;
        }
    }
    ctx->pc = 0x12A5B4u;
    // 0x12a5b4: 0x142480a  movz        $t1, $t2, $v0
    ctx->pc = 0x12a5b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 10));
    // 0x12a5b8: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x12A5B8u;
    {
        const bool branch_taken_0x12a5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5B8u;
        // 0x12a5bc: 0xc9102b  sltu        $v0, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a5b8) {
            ctx->pc = 0x12A66Cu;
            goto label_12a66c;
        }
    }
    ctx->pc = 0x12A5C0u;
    // 0x12a5c0: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x12A5C0u;
    {
        const bool branch_taken_0x12a5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a5c0) {
            ctx->pc = 0x12A700u;
            goto label_12a700;
        }
    }
    ctx->pc = 0x12A5C8u;
    // 0x12a5c8: 0x3c070101  lui         $a3, 0x101
    ctx->pc = 0x12a5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)257 << 16));
    // 0x12a5cc: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x12a5ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x12a5d0: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x12a5d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x12a5d4: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x12a5d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x12a5d8: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x12a5d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x12a5dc: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x12a5dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x12a5e0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x12a5e0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a5e4: 0x70e74b89  pcpyld      $t1, $a3, $a3
    ctx->pc = 0x12a5e4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x12a5e8: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x12a5e8u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x12a5ec: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x12a5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
    // 0x12a5f0: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x12a5f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x12a5f4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x12a5f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x12a5f8: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x12a5f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x12a5fc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x12a5fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x12a600: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x12a600u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x12a604: 0x70691248  psubb       $v0, $v1, $t1
    ctx->pc = 0x12a604u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x12a608: 0x70e75389  pcpyld      $t2, $a3, $a3
    ctx->pc = 0x12a608u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x12a60c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x12a60cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12a610: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x12a610u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x12a614: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x12a614u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x12a618: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x12a618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12a61c: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x12A61Cu;
    {
        const bool branch_taken_0x12a61c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A61Cu;
        // 0x12a620: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a61c) {
            ctx->pc = 0x12A6FCu;
            goto label_12a6fc;
        }
    }
    ctx->pc = 0x12A624u;
    // 0x12a624: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x12a624u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a628: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x12a628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x12a62c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x12a62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x12a630: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x12a630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x12a634: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x12a634u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x12a638: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x12A638u;
    {
        const bool branch_taken_0x12a638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A638u;
        // 0x12a63c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a638) {
            ctx->pc = 0x12A6FCu;
            goto label_12a6fc;
        }
    }
    ctx->pc = 0x12A640u;
    // 0x12a640: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x12a640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a644: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x12a644u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x12a648: 0x70491248  psubb       $v0, $v0, $t1
    ctx->pc = 0x12a648u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x12a64c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x12a64cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12a650: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x12a650u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x12a654: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x12a654u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x12a658: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12a658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12a65c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x12A65Cu;
    {
        const bool branch_taken_0x12a65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a65c) {
            ctx->pc = 0x12A660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A65Cu;
            // 0x12a660: 0x78a30000  lq          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A6C8u;
            goto label_12a6c8;
        }
    }
    ctx->pc = 0x12A664u;
    // 0x12a664: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x12A664u;
    {
        const bool branch_taken_0x12a664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A664u;
        // 0x12a668: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a664) {
            ctx->pc = 0x12A700u;
            goto label_12a700;
        }
    }
    ctx->pc = 0x12A66Cu;
label_12a66c:
    // 0x12a66c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x12A66Cu;
    {
        const bool branch_taken_0x12a66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a66c) {
            ctx->pc = 0x12A700u;
            goto label_12a700;
        }
    }
    ctx->pc = 0x12A674u;
    // 0x12a674: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x12a674u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a678: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x12a678u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
    // 0x12a67c: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x12a67cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x12a680: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x12a680u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x12a684: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x12a684u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x12a688: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x12a688u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x12a68c: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x12a68cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x12a690: 0x3c0a8080  lui         $t2, 0x8080
    ctx->pc = 0x12a690u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32896 << 16));
    // 0x12a694: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x12a694u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x12a698: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x12a698u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x12a69c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x12a69cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x12a6a0: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x12a6a0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x12a6a4: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x12a6a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x12a6a8: 0x69102f  dsubu       $v0, $v1, $t1
    ctx->pc = 0x12a6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x12a6ac: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x12a6acu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x12a6b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12a6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12a6b4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x12a6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x12a6b8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x12A6B8u;
    {
        const bool branch_taken_0x12a6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A6B8u;
        // 0x12a6bc: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a6b8) {
            ctx->pc = 0x12A6FCu;
            goto label_12a6fc;
        }
    }
    ctx->pc = 0x12A6C0u;
    // 0x12a6c0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x12a6c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a6c4: 0x0  nop
    ctx->pc = 0x12a6c4u;
    // NOP
label_12a6c8:
    // 0x12a6c8: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x12a6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x12a6cc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x12a6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x12a6d0: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x12a6d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x12a6d4: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x12a6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x12a6d8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12A6D8u;
    {
        const bool branch_taken_0x12a6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A6D8u;
        // 0x12a6dc: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a6d8) {
            ctx->pc = 0x12A6FCu;
            goto label_12a6fc;
        }
    }
    ctx->pc = 0x12A6E0u;
    // 0x12a6e0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x12a6e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a6e4: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x12a6e4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x12a6e8: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x12a6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x12a6ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12a6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12a6f0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x12a6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x12a6f4: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x12A6F4u;
    {
        const bool branch_taken_0x12a6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a6f4) {
            ctx->pc = 0x12A6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A6F4u;
            // 0x12a6f8: 0xdca30000  ld          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A6C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a6c8;
        }
    }
    ctx->pc = 0x12A6FCu;
label_12a6fc:
    // 0x12a6fc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x12a6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12a700:
    // 0x12a700: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x12A700u;
    {
        const bool branch_taken_0x12a700 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A700u;
        // 0x12a704: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a700) {
            ctx->pc = 0x12A74Cu;
            goto label_12a74c;
        }
    }
    ctx->pc = 0x12A708u;
    // 0x12a708: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x12a708u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a70c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x12a70cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12a710: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12a710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12a714: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x12a714u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x12a718: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x12a718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x12a71c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x12A71Cu;
    {
        const bool branch_taken_0x12a71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A71Cu;
        // 0x12a720: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a71c) {
            ctx->pc = 0x12A700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a700;
        }
    }
    ctx->pc = 0x12A724u;
    // 0x12a724: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x12a724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a728: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12A728u;
    {
        const bool branch_taken_0x12a728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A728u;
        // 0x12a72c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a728) {
            ctx->pc = 0x12A74Cu;
            goto label_12a74c;
        }
    }
    ctx->pc = 0x12A730u;
label_12a730:
    // 0x12a730: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x12a730u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12a734: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x12a734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a738: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12a738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12a73c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x12a73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12a740: 0x0  nop
    ctx->pc = 0x12a740u;
    // NOP
    // 0x12a744: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12A744u;
    {
        const bool branch_taken_0x12a744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a744) {
            ctx->pc = 0x12A730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12a730;
        }
    }
    ctx->pc = 0x12A74Cu;
label_12a74c:
    // 0x12a74c: 0x3e00008  jr          $ra
    ctx->pc = 0x12A74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A74Cu;
        // 0x12a750: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A754u;
    // 0x12a754: 0x0  nop
    ctx->pc = 0x12a754u;
    // NOP
}
