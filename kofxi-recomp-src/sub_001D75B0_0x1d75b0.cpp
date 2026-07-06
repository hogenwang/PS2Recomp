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

// Function: sub_001D75B0
// Address: 0x1d75b0 - 0x1d8218
void sub_001D75B0_0x1d75b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D75B0_0x1d75b0");
#endif

    switch (ctx->pc) {
        case 0x1d7868u: goto label_1d7868;
        default: break;
    }

    ctx->pc = 0x1d75b0u;

    // 0x1d75b0: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x1d75b0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d75b4: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1d75b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1d75b8: 0x25820003  addiu       $v0, $t4, 0x3
    ctx->pc = 0x1d75b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 3));
    // 0x1d75bc: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x1d75bcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d75c0: 0x434824  and         $t1, $v0, $v1
    ctx->pc = 0x1d75c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d75c4: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x1d75c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d75c8: 0x1891823  subu        $v1, $t4, $t1
    ctx->pc = 0x1d75c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x1d75cc: 0x812a0000  lb          $t2, 0x0($t1)
    ctx->pc = 0x1d75ccu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d75d0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d75d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d75d4: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x1d75d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1d75d8: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x1d75d8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d75dc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d75dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d75e0: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x1d75e0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d75e4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d75e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d75e8: 0x91270000  lbu         $a3, 0x0($t1)
    ctx->pc = 0x1d75e8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d75ec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d75ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d75f0: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d75f0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d75f4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d75f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d75f8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d75f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d75fc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d75fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7600: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d7600u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1d7604: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7604u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7608: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x1d7608u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x1d760c: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x1d760cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7610: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7610u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d7614: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d7614u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1d7618: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d761c: 0x1465025  or          $t2, $t2, $a2
    ctx->pc = 0x1d761cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 6));
    // 0x1d7620: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7620u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7624: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d7624u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1d7628: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x1d7628u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1d762c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d762cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7630: 0x1054025  or          $t0, $t0, $a1
    ctx->pc = 0x1d7630u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x1d7634: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x1d7634u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
    // 0x1d7638: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7638u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d763c: 0x28c20018  slti        $v0, $a2, 0x18
    ctx->pc = 0x1d763cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d7640: 0x248700a8  addiu       $a3, $a0, 0xA8
    ctx->pc = 0x1d7640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 168));
    // 0x1d7644: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d7644u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d7648: 0xca5004  sllv        $t2, $t2, $a2
    ctx->pc = 0x1d7648u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d764c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D764Cu;
    {
        const bool branch_taken_0x1d764c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D764Cu;
        // 0x1d7650: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d764c) {
            ctx->pc = 0x1D76C0u;
            goto label_1d76c0;
        }
    }
    ctx->pc = 0x1D7654u;
    // 0x1d7654: 0x24c6ffe8  addiu       $a2, $a2, -0x18
    ctx->pc = 0x1d7654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x1d7658: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7658u;
    {
        const bool branch_taken_0x1d7658 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7658u;
        // 0x1d765c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7658) {
            ctx->pc = 0x1D7678u;
            goto label_1d7678;
        }
    }
    ctx->pc = 0x1D7660u;
    // 0x1d7660: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d7660u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d7664: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d7664u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d7668: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d7668u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d766c: 0xa2e02  srl         $a1, $t2, 24
    ctx->pc = 0x1d766cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x1d7670: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7670u;
    {
        const bool branch_taken_0x1d7670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7670u;
        // 0x1d7674: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7670) {
            ctx->pc = 0x1D7680u;
            goto label_1d7680;
        }
    }
    ctx->pc = 0x1D7678u;
label_1d7678:
    // 0x1d7678: 0xa2e02  srl         $a1, $t2, 24
    ctx->pc = 0x1d7678u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x1d767c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1d767cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d7680:
    // 0x1d7680: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7680u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7684: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7684u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7688: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7688u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d768c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d768cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7690: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7690u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7694: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7694u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7698: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7698u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d769c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d769cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d76a0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d76a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d76a4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d76a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d76a8: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d76a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d76ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d76acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d76b0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d76b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d76b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D76B4u;
    {
        const bool branch_taken_0x1d76b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76B4u;
        // 0x1d76b8: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76b4) {
            ctx->pc = 0x1D76CCu;
            goto label_1d76cc;
        }
    }
    ctx->pc = 0x1D76BCu;
    // 0x1d76bc: 0x0  nop
    ctx->pc = 0x1d76bcu;
    // NOP
label_1d76c0:
    // 0x1d76c0: 0xa2e02  srl         $a1, $t2, 24
    ctx->pc = 0x1d76c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
    // 0x1d76c4: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d76c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1d76c8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1d76c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1d76cc:
    // 0x1d76cc: 0x24a3ff20  addiu       $v1, $a1, -0xE0
    ctx->pc = 0x1d76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967072));
    // 0x1d76d0: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x1d76d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
    // 0x1d76d4: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x1d76d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d76d8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D76D8u;
    {
        const bool branch_taken_0x1d76d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76D8u;
        // 0x1d76dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76d8) {
            ctx->pc = 0x1D7730u;
            goto label_1d7730;
        }
    }
    ctx->pc = 0x1D76E0u;
    // 0x1d76e0: 0x24a3ff40  addiu       $v1, $a1, -0xC0
    ctx->pc = 0x1d76e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967104));
    // 0x1d76e4: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x1d76e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d76e8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D76E8u;
    {
        const bool branch_taken_0x1d76e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D76ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76E8u;
        // 0x1d76ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76e8) {
            ctx->pc = 0x1D7730u;
            goto label_1d7730;
        }
    }
    ctx->pc = 0x1D76F0u;
    // 0x1d76f0: 0x240200bd  addiu       $v0, $zero, 0xBD
    ctx->pc = 0x1d76f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x1d76f4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D76F4u;
    {
        const bool branch_taken_0x1d76f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D76F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D76F4u;
        // 0x1d76f8: 0x240200bf  addiu       $v0, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d76f4) {
            ctx->pc = 0x1D7708u;
            goto label_1d7708;
        }
    }
    ctx->pc = 0x1D76FCu;
    // 0x1d76fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d76fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7700: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D7700u;
    {
        const bool branch_taken_0x1d7700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7700u;
        // 0x1d7704: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7700) {
            ctx->pc = 0x1D7730u;
            goto label_1d7730;
        }
    }
    ctx->pc = 0x1D7708u;
label_1d7708:
    // 0x1d7708: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7708u;
    {
        const bool branch_taken_0x1d7708 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7708u;
        // 0x1d770c: 0x240200be  addiu       $v0, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7708) {
            ctx->pc = 0x1D7720u;
            goto label_1d7720;
        }
    }
    ctx->pc = 0x1D7710u;
    // 0x1d7710: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1d7710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7714: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7714u;
    {
        const bool branch_taken_0x1d7714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7714u;
        // 0x1d7718: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7714) {
            ctx->pc = 0x1D7730u;
            goto label_1d7730;
        }
    }
    ctx->pc = 0x1D771Cu;
    // 0x1d771c: 0x0  nop
    ctx->pc = 0x1d771cu;
    // NOP
label_1d7720:
    // 0x1d7720: 0x54a20002  bnel        $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7720u;
    {
        const bool branch_taken_0x1d7720 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d7720) {
            ctx->pc = 0x1D7724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7720u;
            // 0x1d7724: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D772Cu;
            goto label_1d772c;
        }
    }
    ctx->pc = 0x1D7728u;
    // 0x1d7728: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1d7728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d772c:
    // 0x1d772c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d772cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7730:
    // 0x1d7730: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d7730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7734: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x1d7734u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
    // 0x1d7738: 0x15620027  bne         $t3, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D7738u;
    {
        const bool branch_taken_0x1d7738 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7738u;
        // 0x1d773c: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7738) {
            ctx->pc = 0x1D77D8u;
            goto label_1d77d8;
        }
    }
    ctx->pc = 0x1D7740u;
    // 0x1d7740: 0x28c20010  slti        $v0, $a2, 0x10
    ctx->pc = 0x1d7740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d7744: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D7744u;
    {
        const bool branch_taken_0x1d7744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7744u;
        // 0x1d7748: 0xa1402  srl         $v0, $t2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7744) {
            ctx->pc = 0x1D77C0u;
            goto label_1d77c0;
        }
    }
    ctx->pc = 0x1D774Cu;
    // 0x1d774c: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x1d774cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x1d7750: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D7750u;
    {
        const bool branch_taken_0x1d7750 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7750u;
        // 0x1d7754: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7750) {
            ctx->pc = 0x1D7778u;
            goto label_1d7778;
        }
    }
    ctx->pc = 0x1D7758u;
    // 0x1d7758: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d7758u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d775c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d775cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d7760: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d7760u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d7764: 0xa1c02  srl         $v1, $t2, 16
    ctx->pc = 0x1d7764u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1d7768: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1d7768u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d776c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D776Cu;
    {
        const bool branch_taken_0x1d776c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D776Cu;
        // 0x1d7770: 0xace3001c  sw          $v1, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d776c) {
            ctx->pc = 0x1D7784u;
            goto label_1d7784;
        }
    }
    ctx->pc = 0x1D7774u;
    // 0x1d7774: 0x0  nop
    ctx->pc = 0x1d7774u;
    // NOP
label_1d7778:
    // 0x1d7778: 0xa1402  srl         $v0, $t2, 16
    ctx->pc = 0x1d7778u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1d777c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1d777cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7780: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x1d7780u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_1d7784:
    // 0x1d7784: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7784u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7788: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7788u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d778c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d778cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7790: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7790u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7794: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7794u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7798: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7798u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d779c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d779cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d77a0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d77a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d77a4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d77a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d77a8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d77a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d77ac: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d77acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d77b0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d77b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d77b4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d77b4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d77b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D77B8u;
    {
        const bool branch_taken_0x1d77b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77B8u;
        // 0x1d77bc: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77b8) {
            ctx->pc = 0x1D77CCu;
            goto label_1d77cc;
        }
    }
    ctx->pc = 0x1D77C0u;
label_1d77c0:
    // 0x1d77c0: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x1d77c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x1d77c4: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x1d77c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
    // 0x1d77c8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1d77c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1d77cc:
    // 0x1d77cc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D77CCu;
    {
        const bool branch_taken_0x1d77cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D77D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77CCu;
        // 0x1d77d0: 0x240d0006  addiu       $t5, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77cc) {
            ctx->pc = 0x1D783Cu;
            goto label_1d783c;
        }
    }
    ctx->pc = 0x1D77D4u;
    // 0x1d77d4: 0x0  nop
    ctx->pc = 0x1d77d4u;
    // NOP
label_1d77d8:
    // 0x1d77d8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D77D8u;
    {
        const bool branch_taken_0x1d77d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D77DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77D8u;
        // 0x1d77dc: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77d8) {
            ctx->pc = 0x1D77F8u;
            goto label_1d77f8;
        }
    }
    ctx->pc = 0x1D77E0u;
    // 0x1d77e0: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d77e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d77e4: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x1d77e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d77e8: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1d77e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d77ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D77ECu;
    {
        const bool branch_taken_0x1d77ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D77F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D77ECu;
        // 0x1d77f0: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d77ec) {
            ctx->pc = 0x1D7800u;
            goto label_1d7800;
        }
    }
    ctx->pc = 0x1D77F4u;
    // 0x1d77f4: 0x0  nop
    ctx->pc = 0x1d77f4u;
    // NOP
label_1d77f8:
    // 0x1d77f8: 0xacea001c  sw          $t2, 0x1C($a3)
    ctx->pc = 0x1d77f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 10));
    // 0x1d77fc: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1d77fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d7800:
    // 0x1d7800: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7800u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7804: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7804u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7808: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7808u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d780c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d780cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7810: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7810u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7814: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7814u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7818: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7818u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d781c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d781cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7820: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7820u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7824: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7824u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7828: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d7828u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d782c: 0x240d0008  addiu       $t5, $zero, 0x8
    ctx->pc = 0x1d782cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d7830: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7830u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7834: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7838: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7838u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1d783c:
    // 0x1d783c: 0x24a2ff42  addiu       $v0, $a1, -0xBE
    ctx->pc = 0x1d783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967106));
    // 0x1d7840: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d7840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d7844: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D7844u;
    {
        const bool branch_taken_0x1d7844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7844) {
            ctx->pc = 0x1D7848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7844u;
            // 0x1d7848: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7860u;
            goto label_1d7860;
        }
    }
    ctx->pc = 0x1D784Cu;
    // 0x1d784c: 0xadcd0000  sw          $t5, 0x0($t6)
    ctx->pc = 0x1d784cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 13));
    // 0x1d7850: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x1d7850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1d7854: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7854u;
        // 0x1d7858: 0xace20024  sw          $v0, 0x24($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D785Cu;
    // 0x1d785c: 0x0  nop
    ctx->pc = 0x1d785cu;
    // NOP
label_1d7860:
    // 0x1d7860: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D7860u;
    {
        const bool branch_taken_0x1d7860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7860u;
        // 0x1d7864: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7860) {
            ctx->pc = 0x1D78B8u;
            goto label_1d78b8;
        }
    }
    ctx->pc = 0x1D7868u;
label_1d7868:
    // 0x1d7868: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1d7868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1d786c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1d786cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d7870: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7870u;
    {
        const bool branch_taken_0x1d7870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7870) {
            ctx->pc = 0x1D7874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7870u;
            // 0x1d7874: 0xa5200  sll         $t2, $t2, 8 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D78B8u;
            goto label_1d78b8;
        }
    }
    ctx->pc = 0x1D7878u;
    // 0x1d7878: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1d7878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1d787c: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1d787cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d7880: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7880u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7884: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7884u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7888: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7888u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d788c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d788cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7890: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7890u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7894: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7894u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7898: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7898u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d789c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d789cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d78a0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d78a0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d78a4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d78a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d78a8: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d78a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d78ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d78acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d78b0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d78b0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d78b4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d78b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1d78b8:
    // 0x1d78b8: 0x28c20019  slti        $v0, $a2, 0x19
    ctx->pc = 0x1d78b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x1d78bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D78BCu;
    {
        const bool branch_taken_0x1d78bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D78C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78BCu;
        // 0x1d78c0: 0xa1e02  srl         $v1, $t2, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78bc) {
            ctx->pc = 0x1D78D0u;
            goto label_1d78d0;
        }
    }
    ctx->pc = 0x1D78C4u;
    // 0x1d78c4: 0xa61023  subu        $v0, $a1, $a2
    ctx->pc = 0x1d78c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1d78c8: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d78cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d78ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d78d0:
    // 0x1d78d0: 0x1064ffe5  beq         $v1, $a0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D78D0u;
    {
        const bool branch_taken_0x1d78d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1D78D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78D0u;
        // 0x1d78d4: 0x28c2001f  slti        $v0, $a2, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78d0) {
            ctx->pc = 0x1D7868u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7868;
        }
    }
    ctx->pc = 0x1D78D8u;
    // 0x1d78d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D78D8u;
    {
        const bool branch_taken_0x1d78d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78D8u;
        // 0x1d78dc: 0xa1f82  srl         $v1, $t2, 30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78d8) {
            ctx->pc = 0x1D78F0u;
            goto label_1d78f0;
        }
    }
    ctx->pc = 0x1D78E0u;
    // 0x1d78e0: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x1d78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1d78e4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d78e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d78e8: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d78e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d78ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d78ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d78f0:
    // 0x1d78f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d78f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d78f4: 0x1462004f  bne         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1D78F4u;
    {
        const bool branch_taken_0x1d78f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D78F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78F4u;
        // 0x1d78f8: 0x28c2001d  slti        $v0, $a2, 0x1D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d78f4) {
            ctx->pc = 0x1D7A34u;
            goto label_1d7a34;
        }
    }
    ctx->pc = 0x1D78FCu;
    // 0x1d78fc: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1d78fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1d7900: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1d7900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d7904: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7904u;
    {
        const bool branch_taken_0x1d7904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7904) {
            ctx->pc = 0x1D7908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7904u;
            // 0x1d7908: 0xa5080  sll         $t2, $t2, 2 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D794Cu;
            goto label_1d794c;
        }
    }
    ctx->pc = 0x1D790Cu;
    // 0x1d790c: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1d790cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1d7910: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1d7910u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d7914: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7914u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7918: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7918u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d791c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d791cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7920: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7920u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7924: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7924u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7928: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7928u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d792c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d792cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d7930: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7934: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7934u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7938: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7938u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d793c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d793cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d7940: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7940u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7944: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7944u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7948: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7948u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1d794c:
    // 0x1d794c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1d794cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d7950: 0x14c20013  bne         $a2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D7950u;
    {
        const bool branch_taken_0x1d7950 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D7954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7950u;
        // 0x1d7954: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7950) {
            ctx->pc = 0x1D79A0u;
            goto label_1d79a0;
        }
    }
    ctx->pc = 0x1D7958u;
    // 0x1d7958: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1d7958u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d795c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d795cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7960: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7960u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d7964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7968: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7968u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d796c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d796cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7970: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7970u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7974: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7974u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7978: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7978u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d797c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d797cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7980: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7980u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7984: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7984u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7988: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d7988u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d798c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d798cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7990: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7990u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7994: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D7994u;
    {
        const bool branch_taken_0x1d7994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7994u;
        // 0x1d7998: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7994) {
            ctx->pc = 0x1D79A8u;
            goto label_1d79a8;
        }
    }
    ctx->pc = 0x1D799Cu;
    // 0x1d799c: 0x0  nop
    ctx->pc = 0x1d799cu;
    // NOP
label_1d79a0:
    // 0x1d79a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d79a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d79a4: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1d79a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1d79a8:
    // 0x1d79a8: 0x28c20013  slti        $v0, $a2, 0x13
    ctx->pc = 0x1d79a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x1d79ac: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D79ACu;
    {
        const bool branch_taken_0x1d79ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79ACu;
        // 0x1d79b0: 0xa24c2  srl         $a0, $t2, 19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79ac) {
            ctx->pc = 0x1D7A18u;
            goto label_1d7a18;
        }
    }
    ctx->pc = 0x1D79B4u;
    // 0x1d79b4: 0x24c6ffed  addiu       $a2, $a2, -0x13
    ctx->pc = 0x1d79b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967277));
    // 0x1d79b8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D79B8u;
    {
        const bool branch_taken_0x1d79b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79B8u;
        // 0x1d79bc: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79b8) {
            ctx->pc = 0x1D79D8u;
            goto label_1d79d8;
        }
    }
    ctx->pc = 0x1D79C0u;
    // 0x1d79c0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d79c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d79c4: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d79c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d79c8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d79c8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d79cc: 0xa24c2  srl         $a0, $t2, 19
    ctx->pc = 0x1d79ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 19));
    // 0x1d79d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D79D0u;
    {
        const bool branch_taken_0x1d79d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D79D0u;
        // 0x1d79d4: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d79d0) {
            ctx->pc = 0x1D79DCu;
            goto label_1d79dc;
        }
    }
    ctx->pc = 0x1D79D8u;
label_1d79d8:
    // 0x1d79d8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1d79d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d79dc:
    // 0x1d79dc: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d79dcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d79e0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d79e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d79e4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d79e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d79e8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d79e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d79ec: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d79ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d79f0: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d79f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d79f4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d79f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d79f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d79f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d79fc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d79fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7a00: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7a00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7a04: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d7a04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d7a08: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7a08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7a0c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7a10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7A10u;
    {
        const bool branch_taken_0x1d7a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7A10u;
        // 0x1d7a14: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7a10) {
            ctx->pc = 0x1D7A20u;
            goto label_1d7a20;
        }
    }
    ctx->pc = 0x1D7A18u;
label_1d7a18:
    // 0x1d7a18: 0xa5340  sll         $t2, $t2, 13
    ctx->pc = 0x1d7a18u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 13));
    // 0x1d7a1c: 0x24c6000d  addiu       $a2, $a2, 0xD
    ctx->pc = 0x1d7a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13));
label_1d7a20:
    // 0x1d7a20: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x1d7a20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x1d7a24: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1d7a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1d7a28: 0x45200b  movn        $a0, $v0, $a1
    ctx->pc = 0x1d7a28u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x1d7a2c: 0xace40020  sw          $a0, 0x20($a3)
    ctx->pc = 0x1d7a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 4));
    // 0x1d7a30: 0x28c2001d  slti        $v0, $a2, 0x1D
    ctx->pc = 0x1d7a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
label_1d7a34:
    // 0x1d7a34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7A34u;
    {
        const bool branch_taken_0x1d7a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7A34u;
        // 0x1d7a38: 0xa1f02  srl         $v1, $t2, 28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7a34) {
            ctx->pc = 0x1D7A4Cu;
            goto label_1d7a4c;
        }
    }
    ctx->pc = 0x1D7A3Cu;
    // 0x1d7a3c: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1d7a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1d7a40: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d7a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d7a44: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d7a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d7a48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d7a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d7a4c:
    // 0x1d7a4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7a50: 0x14620095  bne         $v1, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x1D7A50u;
    {
        const bool branch_taken_0x1d7a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D7A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7A50u;
        // 0x1d7a54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7a50) {
            ctx->pc = 0x1D7CA8u;
            goto label_1d7ca8;
        }
    }
    ctx->pc = 0x1D7A58u;
    // 0x1d7a58: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1d7a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1d7a5c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1d7a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d7a60: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7A60u;
    {
        const bool branch_taken_0x1d7a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7a60) {
            ctx->pc = 0x1D7A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7A60u;
            // 0x1d7a64: 0xa5100  sll         $t2, $t2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7AA8u;
            goto label_1d7aa8;
        }
    }
    ctx->pc = 0x1D7A68u;
    // 0x1d7a68: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1d7a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1d7a6c: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1d7a6cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d7a70: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7a70u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7a74: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7a74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7a78: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7a78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7a7c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7a80: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7a80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7a84: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7a84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7a88: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7a88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d7a8c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7a90: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7a90u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7a94: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7a94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7a98: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d7a98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d7a9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7a9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7aa0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7aa4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7aa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1d7aa8:
    // 0x1d7aa8: 0x28c2001d  slti        $v0, $a2, 0x1D
    ctx->pc = 0x1d7aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1d7aac: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D7AACu;
    {
        const bool branch_taken_0x1d7aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7AACu;
        // 0x1d7ab0: 0xa5f42  srl         $t3, $t2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7aac) {
            ctx->pc = 0x1D7B18u;
            goto label_1d7b18;
        }
    }
    ctx->pc = 0x1D7AB4u;
    // 0x1d7ab4: 0x24c6ffe3  addiu       $a2, $a2, -0x1D
    ctx->pc = 0x1d7ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967267));
    // 0x1d7ab8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7AB8u;
    {
        const bool branch_taken_0x1d7ab8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7AB8u;
        // 0x1d7abc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ab8) {
            ctx->pc = 0x1D7AD8u;
            goto label_1d7ad8;
        }
    }
    ctx->pc = 0x1D7AC0u;
    // 0x1d7ac0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d7ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d7ac4: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d7ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d7ac8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d7ac8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d7acc: 0xa5f42  srl         $t3, $t2, 29
    ctx->pc = 0x1d7accu;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
    // 0x1d7ad0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7AD0u;
    {
        const bool branch_taken_0x1d7ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7AD0u;
        // 0x1d7ad4: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ad0) {
            ctx->pc = 0x1D7ADCu;
            goto label_1d7adc;
        }
    }
    ctx->pc = 0x1D7AD8u;
label_1d7ad8:
    // 0x1d7ad8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1d7ad8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d7adc:
    // 0x1d7adc: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7adcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7ae0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7ae0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7ae4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7ae4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7ae8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7ae8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7aec: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7aecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7af0: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7af0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7af4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7af4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d7af8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7af8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7afc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7afcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7b00: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7b00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7b04: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d7b04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d7b08: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7b08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7b0c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7b10: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7B10u;
    {
        const bool branch_taken_0x1d7b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B10u;
        // 0x1d7b14: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b10) {
            ctx->pc = 0x1D7B20u;
            goto label_1d7b20;
        }
    }
    ctx->pc = 0x1D7B18u;
label_1d7b18:
    // 0x1d7b18: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x1d7b18u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1d7b1c: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x1d7b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_1d7b20:
    // 0x1d7b20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d7b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d7b24: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1d7b24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d7b28: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7B28u;
    {
        const bool branch_taken_0x1d7b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7b28) {
            ctx->pc = 0x1D7B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7B28u;
            // 0x1d7b2c: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7B70u;
            goto label_1d7b70;
        }
    }
    ctx->pc = 0x1D7B30u;
    // 0x1d7b30: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1d7b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1d7b34: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1d7b34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d7b38: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7b38u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7b3c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7b40: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7b40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7b44: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7b44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7b48: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7b48u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7b4c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7b4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7b50: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7b50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d7b54: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7b54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7b58: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7b58u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7b5c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7b5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7b60: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d7b60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d7b64: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7b64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7b68: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7b68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7b6c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7b6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1d7b70:
    // 0x1d7b70: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x1d7b70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d7b74: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D7B74u;
    {
        const bool branch_taken_0x1d7b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B74u;
        // 0x1d7b78: 0xa2c42  srl         $a1, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b74) {
            ctx->pc = 0x1D7BE0u;
            goto label_1d7be0;
        }
    }
    ctx->pc = 0x1D7B7Cu;
    // 0x1d7b7c: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x1d7b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x1d7b80: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7B80u;
    {
        const bool branch_taken_0x1d7b80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B80u;
        // 0x1d7b84: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b80) {
            ctx->pc = 0x1D7BA0u;
            goto label_1d7ba0;
        }
    }
    ctx->pc = 0x1D7B88u;
    // 0x1d7b88: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d7b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d7b8c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d7b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d7b90: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d7b90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d7b94: 0xa2c42  srl         $a1, $t2, 17
    ctx->pc = 0x1d7b94u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x1d7b98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7B98u;
    {
        const bool branch_taken_0x1d7b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7B98u;
        // 0x1d7b9c: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7b98) {
            ctx->pc = 0x1D7BA4u;
            goto label_1d7ba4;
        }
    }
    ctx->pc = 0x1D7BA0u;
label_1d7ba0:
    // 0x1d7ba0: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1d7ba0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d7ba4:
    // 0x1d7ba4: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7ba4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7ba8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7bac: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7bacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7bb0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7bb4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7bb8: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7bb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7bbc: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7bbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d7bc0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7bc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7bc4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7bc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7bc8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7bc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7bcc: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d7bccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d7bd0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7bd4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7bd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7BD8u;
    {
        const bool branch_taken_0x1d7bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7BD8u;
        // 0x1d7bdc: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7bd8) {
            ctx->pc = 0x1D7BE8u;
            goto label_1d7be8;
        }
    }
    ctx->pc = 0x1D7BE0u;
label_1d7be0:
    // 0x1d7be0: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x1d7be0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x1d7be4: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1d7be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1d7be8:
    // 0x1d7be8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d7be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d7bec: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1d7becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d7bf0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7BF0u;
    {
        const bool branch_taken_0x1d7bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7bf0) {
            ctx->pc = 0x1D7BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7BF0u;
            // 0x1d7bf4: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7C38u;
            goto label_1d7c38;
        }
    }
    ctx->pc = 0x1D7BF8u;
    // 0x1d7bf8: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1d7bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1d7bfc: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1d7bfcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d7c00: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7c00u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7c04: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7c04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7c08: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7c08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7c0c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7c0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7c10: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7c10u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7c14: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7c14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7c18: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7c18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d7c1c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7c20: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7c20u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7c24: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7c24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7c28: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d7c28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d7c2c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7c30: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7c30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7c34: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7c34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1d7c38:
    // 0x1d7c38: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x1d7c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d7c3c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D7C3Cu;
    {
        const bool branch_taken_0x1d7c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C3Cu;
        // 0x1d7c40: 0xa2442  srl         $a0, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c3c) {
            ctx->pc = 0x1D7C68u;
            goto label_1d7c68;
        }
    }
    ctx->pc = 0x1D7C44u;
    // 0x1d7c44: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x1d7c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x1d7c48: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D7C48u;
    {
        const bool branch_taken_0x1d7c48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C48u;
        // 0x1d7c4c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c48) {
            ctx->pc = 0x1D7C60u;
            goto label_1d7c60;
        }
    }
    ctx->pc = 0x1D7C50u;
    // 0x1d7c50: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d7c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d7c54: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d7c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d7c58: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d7c58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d7c5c: 0xa2442  srl         $a0, $t2, 17
    ctx->pc = 0x1d7c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
label_1d7c60:
    // 0x1d7c60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7C60u;
    {
        const bool branch_taken_0x1d7c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C60u;
        // 0x1d7c64: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c60) {
            ctx->pc = 0x1D7C6Cu;
            goto label_1d7c6c;
        }
    }
    ctx->pc = 0x1D7C68u;
label_1d7c68:
    // 0x1d7c68: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1d7c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1d7c6c:
    // 0x1d7c6c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d7c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d7c70: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1d7c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d7c74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7C74u;
    {
        const bool branch_taken_0x1d7c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7C74u;
        // 0x1d7c78: 0x31620007  andi        $v0, $t3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c74) {
            ctx->pc = 0x1D7C84u;
            goto label_1d7c84;
        }
    }
    ctx->pc = 0x1D7C7Cu;
    // 0x1d7c7c: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1d7c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1d7c80: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1d7c80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_1d7c84:
    // 0x1d7c84: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x1d7c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x1d7c88: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x1d7c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x1d7c8c: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1d7c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1d7c90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d7c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d7c94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d7c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7c98: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x1d7c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x1d7c9c: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x1d7c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x1d7ca0: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x1D7CA0u;
    {
        const bool branch_taken_0x1d7ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CA0u;
        // 0x1d7ca4: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ca0) {
            ctx->pc = 0x1D81E8u;
            goto label_1d81e8;
        }
    }
    ctx->pc = 0x1D7CA8u;
label_1d7ca8:
    // 0x1d7ca8: 0x54620149  bnel        $v1, $v0, . + 4 + (0x149 << 2)
    ctx->pc = 0x1D7CA8u;
    {
        const bool branch_taken_0x1d7ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d7ca8) {
            ctx->pc = 0x1D7CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7CA8u;
            // 0x1d7cac: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D81D0u;
            goto label_1d81d0;
        }
    }
    ctx->pc = 0x1D7CB0u;
    // 0x1d7cb0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1d7cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1d7cb4: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1d7cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d7cb8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7CB8u;
    {
        const bool branch_taken_0x1d7cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7cb8) {
            ctx->pc = 0x1D7CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7CB8u;
            // 0x1d7cbc: 0xa5100  sll         $t2, $t2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7D00u;
            goto label_1d7d00;
        }
    }
    ctx->pc = 0x1D7CC0u;
    // 0x1d7cc0: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1d7cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1d7cc4: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1d7cc4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d7cc8: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7cc8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7ccc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7cccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7cd0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7cd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7cd4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7cd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7cd8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7cdc: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7cdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7ce0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7ce0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d7ce4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7ce8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7cec: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7cecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7cf0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d7cf0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d7cf4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7cf8: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7cfc: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7cfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1d7d00:
    // 0x1d7d00: 0x28c2001d  slti        $v0, $a2, 0x1D
    ctx->pc = 0x1d7d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1d7d04: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D7D04u;
    {
        const bool branch_taken_0x1d7d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D04u;
        // 0x1d7d08: 0xa5f42  srl         $t3, $t2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d04) {
            ctx->pc = 0x1D7D70u;
            goto label_1d7d70;
        }
    }
    ctx->pc = 0x1D7D0Cu;
    // 0x1d7d0c: 0x24c6ffe3  addiu       $a2, $a2, -0x1D
    ctx->pc = 0x1d7d0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967267));
    // 0x1d7d10: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7D10u;
    {
        const bool branch_taken_0x1d7d10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D10u;
        // 0x1d7d14: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d10) {
            ctx->pc = 0x1D7D30u;
            goto label_1d7d30;
        }
    }
    ctx->pc = 0x1D7D18u;
    // 0x1d7d18: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d7d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d7d1c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d7d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d7d20: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d7d20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d7d24: 0xa5f42  srl         $t3, $t2, 29
    ctx->pc = 0x1d7d24u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
    // 0x1d7d28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7D28u;
    {
        const bool branch_taken_0x1d7d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D28u;
        // 0x1d7d2c: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d28) {
            ctx->pc = 0x1D7D34u;
            goto label_1d7d34;
        }
    }
    ctx->pc = 0x1D7D30u;
label_1d7d30:
    // 0x1d7d30: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1d7d30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d7d34:
    // 0x1d7d34: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7d34u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7d38: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7d38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7d3c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7d3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7d40: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7d40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7d44: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7d44u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7d48: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7d48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7d4c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7d4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d7d50: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7d50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7d54: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7d54u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7d58: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7d58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7d5c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d7d5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d7d60: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7d60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7d64: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7d64u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7d68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7D68u;
    {
        const bool branch_taken_0x1d7d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D68u;
        // 0x1d7d6c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d68) {
            ctx->pc = 0x1D7D78u;
            goto label_1d7d78;
        }
    }
    ctx->pc = 0x1D7D70u;
label_1d7d70:
    // 0x1d7d70: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x1d7d70u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1d7d74: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x1d7d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_1d7d78:
    // 0x1d7d78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d7d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d7d7c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1d7d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d7d80: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7D80u;
    {
        const bool branch_taken_0x1d7d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7d80) {
            ctx->pc = 0x1D7D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7D80u;
            // 0x1d7d84: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7DC8u;
            goto label_1d7dc8;
        }
    }
    ctx->pc = 0x1D7D88u;
    // 0x1d7d88: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1d7d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1d7d8c: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1d7d8cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d7d90: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7d90u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7d94: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7d94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7d98: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7d98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7d9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7da0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7da0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7da4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7da4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7da8: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7da8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d7dac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7dacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7db0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7db0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7db4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7db4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7db8: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d7db8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d7dbc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7dc0: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7dc4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7dc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1d7dc8:
    // 0x1d7dc8: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x1d7dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d7dcc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D7DCCu;
    {
        const bool branch_taken_0x1d7dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DCCu;
        // 0x1d7dd0: 0xa2c42  srl         $a1, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7dcc) {
            ctx->pc = 0x1D7E38u;
            goto label_1d7e38;
        }
    }
    ctx->pc = 0x1D7DD4u;
    // 0x1d7dd4: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x1d7dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x1d7dd8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7DD8u;
    {
        const bool branch_taken_0x1d7dd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DD8u;
        // 0x1d7ddc: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7dd8) {
            ctx->pc = 0x1D7DF8u;
            goto label_1d7df8;
        }
    }
    ctx->pc = 0x1D7DE0u;
    // 0x1d7de0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d7de4: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d7de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d7de8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d7de8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d7dec: 0xa2c42  srl         $a1, $t2, 17
    ctx->pc = 0x1d7decu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x1d7df0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7DF0u;
    {
        const bool branch_taken_0x1d7df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DF0u;
        // 0x1d7df4: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7df0) {
            ctx->pc = 0x1D7DFCu;
            goto label_1d7dfc;
        }
    }
    ctx->pc = 0x1D7DF8u;
label_1d7df8:
    // 0x1d7df8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1d7df8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d7dfc:
    // 0x1d7dfc: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7dfcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7e00: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7e00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7e04: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7e04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7e08: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7e08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7e0c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7e10: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7e10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7e14: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7e14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d7e18: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7e18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7e1c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7e20: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7e20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7e24: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d7e24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d7e28: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7e28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7e2c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7e30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7E30u;
    {
        const bool branch_taken_0x1d7e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E30u;
        // 0x1d7e34: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e30) {
            ctx->pc = 0x1D7E40u;
            goto label_1d7e40;
        }
    }
    ctx->pc = 0x1D7E38u;
label_1d7e38:
    // 0x1d7e38: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x1d7e38u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x1d7e3c: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1d7e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1d7e40:
    // 0x1d7e40: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d7e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d7e44: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1d7e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d7e48: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7E48u;
    {
        const bool branch_taken_0x1d7e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e48) {
            ctx->pc = 0x1D7E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7E48u;
            // 0x1d7e4c: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7E90u;
            goto label_1d7e90;
        }
    }
    ctx->pc = 0x1D7E50u;
    // 0x1d7e50: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1d7e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1d7e54: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1d7e54u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d7e58: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7e58u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7e5c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7e5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7e60: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7e60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7e64: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7e64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7e68: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7e68u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7e6c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7e6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7e70: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7e70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d7e74: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7e74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7e78: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7e78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7e7c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7e7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7e80: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d7e80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d7e84: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7e84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7e88: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7e88u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7e8c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7e8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1d7e90:
    // 0x1d7e90: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x1d7e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d7e94: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D7E94u;
    {
        const bool branch_taken_0x1d7e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E94u;
        // 0x1d7e98: 0xa2442  srl         $a0, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e94) {
            ctx->pc = 0x1D7F00u;
            goto label_1d7f00;
        }
    }
    ctx->pc = 0x1D7E9Cu;
    // 0x1d7e9c: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x1d7e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x1d7ea0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7EA0u;
    {
        const bool branch_taken_0x1d7ea0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EA0u;
        // 0x1d7ea4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ea0) {
            ctx->pc = 0x1D7EC0u;
            goto label_1d7ec0;
        }
    }
    ctx->pc = 0x1D7EA8u;
    // 0x1d7ea8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d7ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d7eac: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d7eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d7eb0: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d7eb0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d7eb4: 0xa2442  srl         $a0, $t2, 17
    ctx->pc = 0x1d7eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x1d7eb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7EB8u;
    {
        const bool branch_taken_0x1d7eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EB8u;
        // 0x1d7ebc: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7eb8) {
            ctx->pc = 0x1D7EC4u;
            goto label_1d7ec4;
        }
    }
    ctx->pc = 0x1D7EC0u;
label_1d7ec0:
    // 0x1d7ec0: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1d7ec0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d7ec4:
    // 0x1d7ec4: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7ec4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7ec8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7ec8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7ecc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7eccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7ed0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7ed4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7ed8: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7ed8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7edc: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7edcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d7ee0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7ee0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7ee4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7ee8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7ee8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7eec: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d7eecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d7ef0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7ef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7ef4: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7ef4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7ef8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7EF8u;
    {
        const bool branch_taken_0x1d7ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EF8u;
        // 0x1d7efc: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ef8) {
            ctx->pc = 0x1D7F08u;
            goto label_1d7f08;
        }
    }
    ctx->pc = 0x1D7F00u;
label_1d7f00:
    // 0x1d7f00: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x1d7f00u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x1d7f04: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1d7f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1d7f08:
    // 0x1d7f08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d7f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d7f0c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1d7f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d7f10: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D7F10u;
    {
        const bool branch_taken_0x1d7f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7f10) {
            ctx->pc = 0x1D7F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7F10u;
            // 0x1d7f14: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7F58u;
            goto label_1d7f58;
        }
    }
    ctx->pc = 0x1D7F18u;
    // 0x1d7f18: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1d7f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1d7f1c: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1d7f1cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d7f20: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7f20u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7f24: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7f24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7f28: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7f28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7f2c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7f2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7f30: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7f30u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7f34: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7f34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7f38: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7f38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d7f3c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7f3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7f40: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7f40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7f44: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7f44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7f48: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d7f48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d7f4c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7f4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7f50: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7f50u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7f54: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7f54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1d7f58:
    // 0x1d7f58: 0x31620007  andi        $v0, $t3, 0x7
    ctx->pc = 0x1d7f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
    // 0x1d7f5c: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x1d7f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x1d7f60: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x1d7f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x1d7f64: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1d7f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1d7f68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d7f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d7f6c: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x1d7f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x1d7f70: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1d7f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1d7f74: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d7f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d7f78: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x1d7f78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d7f7c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D7F7Cu;
    {
        const bool branch_taken_0x1d7f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F7Cu;
        // 0x1d7f80: 0xfce20000  sd          $v0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f7c) {
            ctx->pc = 0x1D7FC8u;
            goto label_1d7fc8;
        }
    }
    ctx->pc = 0x1D7F84u;
    // 0x1d7f84: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1d7f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1d7f88: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1d7f88u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d7f8c: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d7f8cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7f90: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7f90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7f94: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7f94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7f98: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7f98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7f9c: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7fa0: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d7fa0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7fa4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d7fa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d7fa8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7fac: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7facu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7fb0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d7fb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d7fb4: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d7fb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d7fb8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d7fb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d7fbc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d7fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d7fc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7FC0u;
    {
        const bool branch_taken_0x1d7fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FC0u;
        // 0x1d7fc4: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fc0) {
            ctx->pc = 0x1D7FCCu;
            goto label_1d7fcc;
        }
    }
    ctx->pc = 0x1D7FC8u;
label_1d7fc8:
    // 0x1d7fc8: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x1d7fc8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_1d7fcc:
    // 0x1d7fcc: 0x28c2001d  slti        $v0, $a2, 0x1D
    ctx->pc = 0x1d7fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1d7fd0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D7FD0u;
    {
        const bool branch_taken_0x1d7fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FD0u;
        // 0x1d7fd4: 0xa5f42  srl         $t3, $t2, 29 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fd0) {
            ctx->pc = 0x1D8040u;
            goto label_1d8040;
        }
    }
    ctx->pc = 0x1D7FD8u;
    // 0x1d7fd8: 0x24c6ffe3  addiu       $a2, $a2, -0x1D
    ctx->pc = 0x1d7fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967267));
    // 0x1d7fdc: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7FDCu;
    {
        const bool branch_taken_0x1d7fdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FDCu;
        // 0x1d7fe0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fdc) {
            ctx->pc = 0x1D8000u;
            goto label_1d8000;
        }
    }
    ctx->pc = 0x1D7FE4u;
    // 0x1d7fe4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d7fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d7fe8: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d7fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d7fec: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d7fecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d7ff0: 0xa5f42  srl         $t3, $t2, 29
    ctx->pc = 0x1d7ff0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 10), 29));
    // 0x1d7ff4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D7FF4u;
    {
        const bool branch_taken_0x1d7ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FF4u;
        // 0x1d7ff8: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ff4) {
            ctx->pc = 0x1D8004u;
            goto label_1d8004;
        }
    }
    ctx->pc = 0x1D7FFCu;
    // 0x1d7ffc: 0x0  nop
    ctx->pc = 0x1d7ffcu;
    // NOP
label_1d8000:
    // 0x1d8000: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1d8000u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d8004:
    // 0x1d8004: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d8004u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d8008: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d8008u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d800c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d800cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d8010: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d8010u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d8014: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d8014u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d8018: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d8018u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d801c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d801cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d8020: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d8020u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d8024: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d8024u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d8028: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d8028u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d802c: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d802cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d8030: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d8030u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d8034: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d8034u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d8038: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8038u;
    {
        const bool branch_taken_0x1d8038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8038u;
        // 0x1d803c: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8038) {
            ctx->pc = 0x1D8048u;
            goto label_1d8048;
        }
    }
    ctx->pc = 0x1D8040u;
label_1d8040:
    // 0x1d8040: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x1d8040u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1d8044: 0x24c60003  addiu       $a2, $a2, 0x3
    ctx->pc = 0x1d8044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
label_1d8048:
    // 0x1d8048: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d8048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d804c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1d804cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d8050: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D8050u;
    {
        const bool branch_taken_0x1d8050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8050) {
            ctx->pc = 0x1D8054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8050u;
            // 0x1d8054: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8098u;
            goto label_1d8098;
        }
    }
    ctx->pc = 0x1D8058u;
    // 0x1d8058: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1d8058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1d805c: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1d805cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d8060: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d8060u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d8064: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d8064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d8068: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d8068u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d806c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d806cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d8070: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d8070u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d8074: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d8074u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d8078: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d8078u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d807c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d807cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d8080: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d8080u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d8084: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d8084u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d8088: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d8088u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d808c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d808cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d8090: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d8090u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d8094: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d8094u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1d8098:
    // 0x1d8098: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x1d8098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d809c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D809Cu;
    {
        const bool branch_taken_0x1d809c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D809Cu;
        // 0x1d80a0: 0xa2c42  srl         $a1, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d809c) {
            ctx->pc = 0x1D8108u;
            goto label_1d8108;
        }
    }
    ctx->pc = 0x1D80A4u;
    // 0x1d80a4: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x1d80a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x1d80a8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D80A8u;
    {
        const bool branch_taken_0x1d80a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80A8u;
        // 0x1d80ac: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80a8) {
            ctx->pc = 0x1D80C8u;
            goto label_1d80c8;
        }
    }
    ctx->pc = 0x1D80B0u;
    // 0x1d80b0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d80b4: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d80b8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d80b8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d80bc: 0xa2c42  srl         $a1, $t2, 17
    ctx->pc = 0x1d80bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
    // 0x1d80c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D80C0u;
    {
        const bool branch_taken_0x1d80c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80C0u;
        // 0x1d80c4: 0xc85004  sllv        $t2, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80c0) {
            ctx->pc = 0x1D80CCu;
            goto label_1d80cc;
        }
    }
    ctx->pc = 0x1D80C8u;
label_1d80c8:
    // 0x1d80c8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1d80c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d80cc:
    // 0x1d80cc: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d80ccu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d80d0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d80d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d80d4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d80d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d80d8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d80d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d80dc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d80dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d80e0: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d80e0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d80e4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d80e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d80e8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d80e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d80ec: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d80ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d80f0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d80f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d80f4: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d80f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d80f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d80f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d80fc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d80fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d8100: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8100u;
    {
        const bool branch_taken_0x1d8100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8100u;
        // 0x1d8104: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8100) {
            ctx->pc = 0x1D8110u;
            goto label_1d8110;
        }
    }
    ctx->pc = 0x1D8108u;
label_1d8108:
    // 0x1d8108: 0xa53c0  sll         $t2, $t2, 15
    ctx->pc = 0x1d8108u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x1d810c: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1d810cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1d8110:
    // 0x1d8110: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d8110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d8114: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1d8114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d8118: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D8118u;
    {
        const bool branch_taken_0x1d8118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8118) {
            ctx->pc = 0x1D811Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8118u;
            // 0x1d811c: 0xa5040  sll         $t2, $t2, 1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8160u;
            goto label_1d8160;
        }
    }
    ctx->pc = 0x1D8120u;
    // 0x1d8120: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1d8120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1d8124: 0xc85004  sllv        $t2, $t0, $a2
    ctx->pc = 0x1d8124u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1d8128: 0x81280000  lb          $t0, 0x0($t1)
    ctx->pc = 0x1d8128u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d812c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d812cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d8130: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d8130u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d8134: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d8134u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d8138: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d8138u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d813c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1d813cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d8140: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d8140u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x1d8144: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d8144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d8148: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d8148u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d814c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1d814cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d8150: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1d8150u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1d8154: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d8154u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d8158: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x1d8158u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x1d815c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x1d815cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_1d8160:
    // 0x1d8160: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x1d8160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d8164: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D8164u;
    {
        const bool branch_taken_0x1d8164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8164u;
        // 0x1d8168: 0xa2442  srl         $a0, $t2, 17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8164) {
            ctx->pc = 0x1D8190u;
            goto label_1d8190;
        }
    }
    ctx->pc = 0x1D816Cu;
    // 0x1d816c: 0x24c6ffef  addiu       $a2, $a2, -0x11
    ctx->pc = 0x1d816cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967279));
    // 0x1d8170: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D8170u;
    {
        const bool branch_taken_0x1d8170 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8170u;
        // 0x1d8174: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8170) {
            ctx->pc = 0x1D8188u;
            goto label_1d8188;
        }
    }
    ctx->pc = 0x1D8178u;
    // 0x1d8178: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d8178u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d817c: 0x481006  srlv        $v0, $t0, $v0
    ctx->pc = 0x1d817cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d8180: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d8180u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d8184: 0xa2442  srl         $a0, $t2, 17
    ctx->pc = 0x1d8184u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 17));
label_1d8188:
    // 0x1d8188: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D8188u;
    {
        const bool branch_taken_0x1d8188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8188u;
        // 0x1d818c: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8188) {
            ctx->pc = 0x1D8194u;
            goto label_1d8194;
        }
    }
    ctx->pc = 0x1D8190u;
label_1d8190:
    // 0x1d8190: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1d8190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_1d8194:
    // 0x1d8194: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d8194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d8198: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1d8198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d819c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D819Cu;
    {
        const bool branch_taken_0x1d819c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D81A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D819Cu;
        // 0x1d81a0: 0x31620007  andi        $v0, $t3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d819c) {
            ctx->pc = 0x1D81ACu;
            goto label_1d81ac;
        }
    }
    ctx->pc = 0x1D81A4u;
    // 0x1d81a4: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1d81a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1d81a8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1d81a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_1d81ac:
    // 0x1d81ac: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x1d81acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x1d81b0: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1d81b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1d81b4: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x1d81b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x1d81b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d81b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d81bc: 0x30847fff  andi        $a0, $a0, 0x7FFF
    ctx->pc = 0x1d81bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x1d81c0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1d81c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1d81c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D81C4u;
    {
        const bool branch_taken_0x1d81c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D81C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81C4u;
        // 0x1d81c8: 0xfce20008  sd          $v0, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81c4) {
            ctx->pc = 0x1D81ECu;
            goto label_1d81ec;
        }
    }
    ctx->pc = 0x1D81CCu;
    // 0x1d81cc: 0x0  nop
    ctx->pc = 0x1d81ccu;
    // NOP
label_1d81d0:
    // 0x1d81d0: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1d81d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d81d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D81D4u;
    {
        const bool branch_taken_0x1d81d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D81D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81D4u;
        // 0x1d81d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81d4) {
            ctx->pc = 0x1D81E4u;
            goto label_1d81e4;
        }
    }
    ctx->pc = 0x1D81DCu;
    // 0x1d81dc: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x1d81dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x1d81e0: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1d81e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_1d81e4:
    // 0x1d81e4: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x1d81e4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
label_1d81e8:
    // 0x1d81e8: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x1d81e8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_1d81ec:
    // 0x1d81ec: 0x24c20007  addiu       $v0, $a2, 0x7
    ctx->pc = 0x1d81ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 7));
    // 0x1d81f0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1d81f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1d81f4: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1d81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x1d81f8: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x1d81f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1d81fc: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x1d81fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1d8200: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x1d8200u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x1d8204: 0x8ce3001c  lw          $v1, 0x1C($a3)
    ctx->pc = 0x1d8204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1d8208: 0x6d1821  addu        $v1, $v1, $t5
    ctx->pc = 0x1d8208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x1d820c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1d820cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d8210: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8210u;
        // 0x1d8214: 0xace30024  sw          $v1, 0x24($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8218u;
}
