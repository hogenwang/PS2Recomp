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

// Function: sub_0032E5E0
// Address: 0x32e5e0 - 0x32ea10
void sub_0032E5E0_0x32e5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032E5E0_0x32e5e0");
#endif

    switch (ctx->pc) {
        case 0x32e9c4u: goto label_32e9c4;
        case 0x32e9d8u: goto label_32e9d8;
        case 0x32e9dcu: goto label_32e9dc;
        default: break;
    }

    ctx->pc = 0x32e5e0u;

    // 0x32e5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32e5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32e5e4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x32e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x32e5e8: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x32e5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x32e5ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32e5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32e5f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32e5f4: 0x3c0f01de  lui         $t7, 0x1DE
    ctx->pc = 0x32e5f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)478 << 16));
    // 0x32e5f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32e5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e5fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32e5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32e600: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32e600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32e604: 0x25efe510  addiu       $t7, $t7, -0x1AF0
    ctx->pc = 0x32e604u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294960400));
    // 0x32e608: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32e608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32e60c: 0x8fae0020  lw          $t6, 0x20($sp)
    ctx->pc = 0x32e60cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32e610: 0xfde20000  sd          $v0, 0x0($t7)
    ctx->pc = 0x32e610u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 2));
    // 0x32e614: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x32e614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32e618: 0x8fad0028  lw          $t5, 0x28($sp)
    ctx->pc = 0x32e618u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32e61c: 0xfde20008  sd          $v0, 0x8($t7)
    ctx->pc = 0x32e61cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 2));
    // 0x32e620: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x32e620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x32e624: 0xfde00010  sd          $zero, 0x10($t7)
    ctx->pc = 0x32e624u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 16), GPR_U64(ctx, 0));
    // 0x32e628: 0xfde20018  sd          $v0, 0x18($t7)
    ctx->pc = 0x32e628u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 24), GPR_U64(ctx, 2));
    // 0x32e62c: 0x3c022007  lui         $v0, 0x2007
    ctx->pc = 0x32e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8199 << 16));
    // 0x32e630: 0xfde00030  sd          $zero, 0x30($t7)
    ctx->pc = 0x32e630u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 48), GPR_U64(ctx, 0));
    // 0x32e634: 0x3442d006  ori         $v0, $v0, 0xD006
    ctx->pc = 0x32e634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53254);
    // 0x32e638: 0xade80060  sw          $t0, 0x60($t7)
    ctx->pc = 0x32e638u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 96), GPR_U32(ctx, 8));
    // 0x32e63c: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x32e63cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e640: 0xade90064  sw          $t1, 0x64($t7)
    ctx->pc = 0x32e640u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 100), GPR_U32(ctx, 9));
    // 0x32e644: 0x3c026542  lui         $v0, 0x6542
    ctx->pc = 0x32e644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25922 << 16));
    // 0x32e648: 0xade00068  sw          $zero, 0x68($t7)
    ctx->pc = 0x32e648u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 104), GPR_U32(ctx, 0));
    // 0x32e64c: 0x34433480  ori         $v1, $v0, 0x3480
    ctx->pc = 0x32e64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x32e650: 0xade0006c  sw          $zero, 0x6C($t7)
    ctx->pc = 0x32e650u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 108), GPR_U32(ctx, 0));
    // 0x32e654: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32e654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32e658: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x32e658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x32e65c: 0xfde20028  sd          $v0, 0x28($t7)
    ctx->pc = 0x32e65cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 40), GPR_U64(ctx, 2));
    // 0x32e660: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x32e660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32e664: 0xfde30020  sd          $v1, 0x20($t7)
    ctx->pc = 0x32e664u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 32), GPR_U64(ctx, 3));
    // 0x32e668: 0xfde20038  sd          $v0, 0x38($t7)
    ctx->pc = 0x32e668u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 56), GPR_U64(ctx, 2));
    // 0x32e66c: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x32e66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x32e670: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32e670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32e674: 0xade40080  sw          $a0, 0x80($t7)
    ctx->pc = 0x32e674u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 128), GPR_U32(ctx, 4));
    // 0x32e678: 0xfde20040  sd          $v0, 0x40($t7)
    ctx->pc = 0x32e678u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 64), GPR_U64(ctx, 2));
    // 0x32e67c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x32e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32e680: 0xadee0070  sw          $t6, 0x70($t7)
    ctx->pc = 0x32e680u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 112), GPR_U32(ctx, 14));
    // 0x32e684: 0xfde20048  sd          $v0, 0x48($t7)
    ctx->pc = 0x32e684u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 72), GPR_U64(ctx, 2));
    // 0x32e688: 0x3c0260ab  lui         $v0, 0x60AB
    ctx->pc = 0x32e688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24747 << 16));
    // 0x32e68c: 0xaded0074  sw          $t5, 0x74($t7)
    ctx->pc = 0x32e68cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 116), GPR_U32(ctx, 13));
    // 0x32e690: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x32e690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x32e694: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x32e694u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e698: 0x6c6025  or          $t4, $v1, $t4
    ctx->pc = 0x32e698u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x32e69c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x32e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x32e6a0: 0x34433513  ori         $v1, $v0, 0x3513
    ctx->pc = 0x32e6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13587);
    // 0x32e6a4: 0xfdec0050  sd          $t4, 0x50($t7)
    ctx->pc = 0x32e6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 80), GPR_U64(ctx, 12));
    // 0x32e6a8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x32e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x32e6ac: 0xfde30058  sd          $v1, 0x58($t7)
    ctx->pc = 0x32e6acu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 88), GPR_U64(ctx, 3));
    // 0x32e6b0: 0x9043b280  lbu         $v1, -0x4D80($v0)
    ctx->pc = 0x32e6b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x32e6b4: 0x8fac0030  lw          $t4, 0x30($sp)
    ctx->pc = 0x32e6b4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32e6b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32e6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e6bc: 0xadec0078  sw          $t4, 0x78($t7)
    ctx->pc = 0x32e6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 120), GPR_U32(ctx, 12));
    // 0x32e6c0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x32E6C0u;
    {
        const bool branch_taken_0x32e6c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E6C0u;
        // 0x32e6c4: 0xade2007c  sw          $v0, 0x7C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e6c0) {
            ctx->pc = 0x32E718u;
            goto label_32e718;
        }
    }
    ctx->pc = 0x32E6C8u;
    // 0x32e6c8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x32e6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32e6cc: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x32e6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x32e6d0: 0x24b87000  addiu       $t8, $a1, 0x7000
    ctx->pc = 0x32e6d0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x32e6d4: 0x27198000  addiu       $t9, $t8, -0x8000
    ctx->pc = 0x32e6d4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 4294934528));
    // 0x32e6d8: 0x34658889  ori         $a1, $v1, 0x8889
    ctx->pc = 0x32e6d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x32e6dc: 0x1980c0  sll         $s0, $t9, 3
    ctx->pc = 0x32e6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x32e6e0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x32e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32e6e4: 0x2198023  subu        $s0, $s0, $t9
    ctx->pc = 0x32e6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x32e6e8: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x32e6e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x32e6ec: 0xb00018  mult        $zero, $a1, $s0
    ctx->pc = 0x32e6ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32e6f0: 0x10cfc2  srl         $t9, $s0, 31
    ctx->pc = 0x32e6f0u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x32e6f4: 0x0  nop
    ctx->pc = 0x32e6f4u;
    // NOP
    // 0x32e6f8: 0x2810  mfhi        $a1
    ctx->pc = 0x32e6f8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x32e6fc: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x32e6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x32e700: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x32e700u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x32e704: 0xb92821  addu        $a1, $a1, $t9
    ctx->pc = 0x32e704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x32e708: 0x24a57fff  addiu       $a1, $a1, 0x7FFF
    ctx->pc = 0x32e708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32767));
    // 0x32e70c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32e70cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x32e710: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32E710u;
    {
        const bool branch_taken_0x32e710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E710u;
        // 0x32e714: 0xa31824  and         $v1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e710) {
            ctx->pc = 0x32E724u;
            goto label_32e724;
        }
    }
    ctx->pc = 0x32E718u;
label_32e718:
    // 0x32e718: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x32e718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32e71c: 0x24787000  addiu       $t8, $v1, 0x7000
    ctx->pc = 0x32e71cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32e720: 0x300182d  daddu       $v1, $t8, $zero
    ctx->pc = 0x32e720u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_32e724:
    // 0x32e724: 0xade200ac  sw          $v0, 0xAC($t7)
    ctx->pc = 0x32e724u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 172), GPR_U32(ctx, 2));
    // 0x32e728: 0x2402a833  addiu       $v0, $zero, -0x57CD
    ctx->pc = 0x32e728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32e72c: 0xade30084  sw          $v1, 0x84($t7)
    ctx->pc = 0x32e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 132), GPR_U32(ctx, 3));
    // 0x32e730: 0xade20088  sw          $v0, 0x88($t7)
    ctx->pc = 0x32e730u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 136), GPR_U32(ctx, 2));
    // 0x32e734: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x32e734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x32e738: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x32e738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x32e73c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x32e73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x32e740: 0x9042b280  lbu         $v0, -0x4D80($v0)
    ctx->pc = 0x32e740u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x32e744: 0xade0008c  sw          $zero, 0x8C($t7)
    ctx->pc = 0x32e744u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 140), GPR_U32(ctx, 0));
    // 0x32e748: 0xadea0090  sw          $t2, 0x90($t7)
    ctx->pc = 0x32e748u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 144), GPR_U32(ctx, 10));
    // 0x32e74c: 0xadeb0094  sw          $t3, 0x94($t7)
    ctx->pc = 0x32e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 148), GPR_U32(ctx, 11));
    // 0x32e750: 0xade00098  sw          $zero, 0x98($t7)
    ctx->pc = 0x32e750u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 152), GPR_U32(ctx, 0));
    // 0x32e754: 0xade0009c  sw          $zero, 0x9C($t7)
    ctx->pc = 0x32e754u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 156), GPR_U32(ctx, 0));
    // 0x32e758: 0xadee00a0  sw          $t6, 0xA0($t7)
    ctx->pc = 0x32e758u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 160), GPR_U32(ctx, 14));
    // 0x32e75c: 0xaded00a4  sw          $t5, 0xA4($t7)
    ctx->pc = 0x32e75cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 164), GPR_U32(ctx, 13));
    // 0x32e760: 0xadec00a8  sw          $t4, 0xA8($t7)
    ctx->pc = 0x32e760u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 168), GPR_U32(ctx, 12));
    // 0x32e764: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x32E764u;
    {
        const bool branch_taken_0x32e764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E764u;
        // 0x32e768: 0xade300b0  sw          $v1, 0xB0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e764) {
            ctx->pc = 0x32E7BCu;
            goto label_32e7bc;
        }
    }
    ctx->pc = 0x32E76Cu;
    // 0x32e76c: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x32e76cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x32e770: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x32e770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x32e774: 0x24a57000  addiu       $a1, $a1, 0x7000
    ctx->pc = 0x32e774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x32e778: 0x34468889  ori         $a2, $v0, 0x8889
    ctx->pc = 0x32e778u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x32e77c: 0x24b98000  addiu       $t9, $a1, -0x8000
    ctx->pc = 0x32e77cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x32e780: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x32e780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32e784: 0x1938c0  sll         $a3, $t9, 3
    ctx->pc = 0x32e784u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x32e788: 0xf93823  subu        $a3, $a3, $t9
    ctx->pc = 0x32e788u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 25)));
    // 0x32e78c: 0x7c980  sll         $t9, $a3, 6
    ctx->pc = 0x32e78cu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x32e790: 0xd90018  mult        $zero, $a2, $t9
    ctx->pc = 0x32e790u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32e794: 0x193fc2  srl         $a3, $t9, 31
    ctx->pc = 0x32e794u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 25), 31));
    // 0x32e798: 0x0  nop
    ctx->pc = 0x32e798u;
    // NOP
    // 0x32e79c: 0x3010  mfhi        $a2
    ctx->pc = 0x32e79cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x32e7a0: 0xd93021  addu        $a2, $a2, $t9
    ctx->pc = 0x32e7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
    // 0x32e7a4: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x32e7a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x32e7a8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x32e7a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x32e7ac: 0x24c67fff  addiu       $a2, $a2, 0x7FFF
    ctx->pc = 0x32e7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32767));
    // 0x32e7b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x32e7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x32e7b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32E7B4u;
    {
        const bool branch_taken_0x32e7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E7B4u;
        // 0x32e7b8: 0xc21024  and         $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e7b4) {
            ctx->pc = 0x32E7C8u;
            goto label_32e7c8;
        }
    }
    ctx->pc = 0x32E7BCu;
label_32e7bc:
    // 0x32e7bc: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x32e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x32e7c0: 0x24457000  addiu       $a1, $v0, 0x7000
    ctx->pc = 0x32e7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32e7c4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x32e7c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32e7c8:
    // 0x32e7c8: 0xade200b4  sw          $v0, 0xB4($t7)
    ctx->pc = 0x32e7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 180), GPR_U32(ctx, 2));
    // 0x32e7cc: 0x2402a833  addiu       $v0, $zero, -0x57CD
    ctx->pc = 0x32e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32e7d0: 0xade80120  sw          $t0, 0x120($t7)
    ctx->pc = 0x32e7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 288), GPR_U32(ctx, 8));
    // 0x32e7d4: 0xade200b8  sw          $v0, 0xB8($t7)
    ctx->pc = 0x32e7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 184), GPR_U32(ctx, 2));
    // 0x32e7d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32e7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32e7dc: 0xade90124  sw          $t1, 0x124($t7)
    ctx->pc = 0x32e7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 292), GPR_U32(ctx, 9));
    // 0x32e7e0: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x32e7e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e7e4: 0xade000bc  sw          $zero, 0xBC($t7)
    ctx->pc = 0x32e7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 188), GPR_U32(ctx, 0));
    // 0x32e7e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32e7ec: 0xfde000d0  sd          $zero, 0xD0($t7)
    ctx->pc = 0x32e7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 208), GPR_U64(ctx, 0));
    // 0x32e7f0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32e7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x32e7f4: 0xade00128  sw          $zero, 0x128($t7)
    ctx->pc = 0x32e7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 296), GPR_U32(ctx, 0));
    // 0x32e7f8: 0xfde200c0  sd          $v0, 0xC0($t7)
    ctx->pc = 0x32e7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 192), GPR_U64(ctx, 2));
    // 0x32e7fc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x32e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32e800: 0xade0012c  sw          $zero, 0x12C($t7)
    ctx->pc = 0x32e800u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 300), GPR_U32(ctx, 0));
    // 0x32e804: 0xfde200c8  sd          $v0, 0xC8($t7)
    ctx->pc = 0x32e804u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 200), GPR_U64(ctx, 2));
    // 0x32e808: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x32e808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x32e80c: 0xadee0130  sw          $t6, 0x130($t7)
    ctx->pc = 0x32e80cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 304), GPR_U32(ctx, 14));
    // 0x32e810: 0xfde200d8  sd          $v0, 0xD8($t7)
    ctx->pc = 0x32e810u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 216), GPR_U64(ctx, 2));
    // 0x32e814: 0x3c022007  lui         $v0, 0x2007
    ctx->pc = 0x32e814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8199 << 16));
    // 0x32e818: 0xaded0134  sw          $t5, 0x134($t7)
    ctx->pc = 0x32e818u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 308), GPR_U32(ctx, 13));
    // 0x32e81c: 0x3442d006  ori         $v0, $v0, 0xD006
    ctx->pc = 0x32e81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53254);
    // 0x32e820: 0xadec0138  sw          $t4, 0x138($t7)
    ctx->pc = 0x32e820u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 312), GPR_U32(ctx, 12));
    // 0x32e824: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x32e824u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e828: 0x3c026542  lui         $v0, 0x6542
    ctx->pc = 0x32e828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25922 << 16));
    // 0x32e82c: 0x34423480  ori         $v0, $v0, 0x3480
    ctx->pc = 0x32e82cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x32e830: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32e830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x32e834: 0xfde200e0  sd          $v0, 0xE0($t7)
    ctx->pc = 0x32e834u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 224), GPR_U64(ctx, 2));
    // 0x32e838: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32e838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32e83c: 0xfde200e8  sd          $v0, 0xE8($t7)
    ctx->pc = 0x32e83cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 232), GPR_U64(ctx, 2));
    // 0x32e840: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x32e840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x32e844: 0xfde200f0  sd          $v0, 0xF0($t7)
    ctx->pc = 0x32e844u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 240), GPR_U64(ctx, 2));
    // 0x32e848: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x32e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32e84c: 0xfde200f8  sd          $v0, 0xF8($t7)
    ctx->pc = 0x32e84cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 248), GPR_U64(ctx, 2));
    // 0x32e850: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32e850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32e854: 0xfde20100  sd          $v0, 0x100($t7)
    ctx->pc = 0x32e854u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 256), GPR_U64(ctx, 2));
    // 0x32e858: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x32e858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32e85c: 0xfde20108  sd          $v0, 0x108($t7)
    ctx->pc = 0x32e85cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 264), GPR_U64(ctx, 2));
    // 0x32e860: 0x3c0260ab  lui         $v0, 0x60AB
    ctx->pc = 0x32e860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24747 << 16));
    // 0x32e864: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x32e864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x32e868: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x32e868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32e86c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x32e86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x32e870: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x32e870u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x32e874: 0xfde60110  sd          $a2, 0x110($t7)
    ctx->pc = 0x32e874u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 272), GPR_U64(ctx, 6));
    // 0x32e878: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x32e878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x32e87c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x32e87cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32e880: 0x34423513  ori         $v0, $v0, 0x3513
    ctx->pc = 0x32e880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13587);
    // 0x32e884: 0xfde20118  sd          $v0, 0x118($t7)
    ctx->pc = 0x32e884u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 280), GPR_U64(ctx, 2));
    // 0x32e888: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x32e888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x32e88c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x32e88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x32e890: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x32e890u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x32e894: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x32E894u;
    {
        const bool branch_taken_0x32e894 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x32E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E894u;
        // 0x32e898: 0x611c3  sra         $v0, $a2, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e894) {
            ctx->pc = 0x32E8A4u;
            goto label_32e8a4;
        }
    }
    ctx->pc = 0x32E89Cu;
    // 0x32e89c: 0x24c2007f  addiu       $v0, $a2, 0x7F
    ctx->pc = 0x32e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
    // 0x32e8a0: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x32e8a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_32e8a4:
    // 0x32e8a4: 0xade40140  sw          $a0, 0x140($t7)
    ctx->pc = 0x32e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 320), GPR_U32(ctx, 4));
    // 0x32e8a8: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x32e8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x32e8ac: 0x9084b280  lbu         $a0, -0x4D80($a0)
    ctx->pc = 0x32e8acu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947456)));
    // 0x32e8b0: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32E8B0u;
    {
        const bool branch_taken_0x32e8b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E8B0u;
        // 0x32e8b4: 0xade2013c  sw          $v0, 0x13C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e8b0) {
            ctx->pc = 0x32E8FCu;
            goto label_32e8fc;
        }
    }
    ctx->pc = 0x32E8B8u;
    // 0x32e8b8: 0x3c048888  lui         $a0, 0x8888
    ctx->pc = 0x32e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34952 << 16));
    // 0x32e8bc: 0x27078000  addiu       $a3, $t8, -0x8000
    ctx->pc = 0x32e8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 4294934528));
    // 0x32e8c0: 0x34868889  ori         $a2, $a0, 0x8889
    ctx->pc = 0x32e8c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x32e8c4: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x32e8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x32e8c8: 0x873823  subu        $a3, $a0, $a3
    ctx->pc = 0x32e8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x32e8cc: 0x74180  sll         $t0, $a3, 6
    ctx->pc = 0x32e8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x32e8d0: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x32e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32e8d4: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x32e8d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32e8d8: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x32e8d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x32e8dc: 0x0  nop
    ctx->pc = 0x32e8dcu;
    // NOP
    // 0x32e8e0: 0x3010  mfhi        $a2
    ctx->pc = 0x32e8e0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x32e8e4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x32e8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x32e8e8: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x32e8e8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x32e8ec: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x32e8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x32e8f0: 0x24c67fff  addiu       $a2, $a2, 0x7FFF
    ctx->pc = 0x32e8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32767));
    // 0x32e8f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x32e8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x32e8f8: 0xc4c024  and         $t8, $a2, $a0
    ctx->pc = 0x32e8f8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_32e8fc:
    // 0x32e8fc: 0x2404a833  addiu       $a0, $zero, -0x57CD
    ctx->pc = 0x32e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32e900: 0xade2016c  sw          $v0, 0x16C($t7)
    ctx->pc = 0x32e900u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 364), GPR_U32(ctx, 2));
    // 0x32e904: 0xade40148  sw          $a0, 0x148($t7)
    ctx->pc = 0x32e904u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 328), GPR_U32(ctx, 4));
    // 0x32e908: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x32e908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x32e90c: 0xadf80144  sw          $t8, 0x144($t7)
    ctx->pc = 0x32e90cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 324), GPR_U32(ctx, 24));
    // 0x32e910: 0x9082b280  lbu         $v0, -0x4D80($a0)
    ctx->pc = 0x32e910u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947456)));
    // 0x32e914: 0xadea0150  sw          $t2, 0x150($t7)
    ctx->pc = 0x32e914u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 336), GPR_U32(ctx, 10));
    // 0x32e918: 0xadeb0154  sw          $t3, 0x154($t7)
    ctx->pc = 0x32e918u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 340), GPR_U32(ctx, 11));
    // 0x32e91c: 0xadee0160  sw          $t6, 0x160($t7)
    ctx->pc = 0x32e91cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 352), GPR_U32(ctx, 14));
    // 0x32e920: 0xaded0164  sw          $t5, 0x164($t7)
    ctx->pc = 0x32e920u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 356), GPR_U32(ctx, 13));
    // 0x32e924: 0xadec0168  sw          $t4, 0x168($t7)
    ctx->pc = 0x32e924u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 360), GPR_U32(ctx, 12));
    // 0x32e928: 0xade30170  sw          $v1, 0x170($t7)
    ctx->pc = 0x32e928u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 368), GPR_U32(ctx, 3));
    // 0x32e92c: 0xade0014c  sw          $zero, 0x14C($t7)
    ctx->pc = 0x32e92cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 332), GPR_U32(ctx, 0));
    // 0x32e930: 0xade00158  sw          $zero, 0x158($t7)
    ctx->pc = 0x32e930u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 344), GPR_U32(ctx, 0));
    // 0x32e934: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32E934u;
    {
        const bool branch_taken_0x32e934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E934u;
        // 0x32e938: 0xade0015c  sw          $zero, 0x15C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e934) {
            ctx->pc = 0x32E980u;
            goto label_32e980;
        }
    }
    ctx->pc = 0x32E93Cu;
    // 0x32e93c: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x32e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x32e940: 0x24a48000  addiu       $a0, $a1, -0x8000
    ctx->pc = 0x32e940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x32e944: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x32e944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x32e948: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x32e948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x32e94c: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32e950: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x32e950u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x32e954: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x32e954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32e958: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x32e958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32e95c: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x32e95cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32e960: 0x0  nop
    ctx->pc = 0x32e960u;
    // NOP
    // 0x32e964: 0x1810  mfhi        $v1
    ctx->pc = 0x32e964u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32e968: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32e968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32e96c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x32e96cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x32e970: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32e970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32e974: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x32e974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x32e978: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32e978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32e97c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x32e97cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_32e980:
    // 0x32e980: 0x2402a833  addiu       $v0, $zero, -0x57CD
    ctx->pc = 0x32e980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32e984: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32e984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32e988: 0xade20178  sw          $v0, 0x178($t7)
    ctx->pc = 0x32e988u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 376), GPR_U32(ctx, 2));
    // 0x32e98c: 0x34640018  ori         $a0, $v1, 0x18
    ctx->pc = 0x32e98cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
    // 0x32e990: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32e990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32e994: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x32e994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x32e998: 0x7c40e500  sq          $zero, -0x1B00($v0)
    ctx->pc = 0x32e998u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294960384), GPR_VEC(ctx, 0));
    // 0x32e99c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32e9a0: 0xac64e500  sw          $a0, -0x1B00($v1)
    ctx->pc = 0x32e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960384), GPR_U32(ctx, 4));
    // 0x32e9a4: 0x7c40e690  sq          $zero, -0x1970($v0)
    ctx->pc = 0x32e9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294960784), GPR_VEC(ctx, 0));
    // 0x32e9a8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x32e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x32e9ac: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32e9b0: 0xade50174  sw          $a1, 0x174($t7)
    ctx->pc = 0x32e9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 372), GPR_U32(ctx, 5));
    // 0x32e9b4: 0xade0017c  sw          $zero, 0x17C($t7)
    ctx->pc = 0x32e9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 380), GPR_U32(ctx, 0));
    // 0x32e9b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32e9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32e9bc: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x32E9BCu;
    SET_GPR_U32(ctx, 31, 0x32E9C4u);
    ctx->pc = 0x32E9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E9BCu;
    // 0x32e9c0: 0xac43e690  sw          $v1, -0x1970($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960784), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x32E9BCu, 0x32E9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E9C4u;
label_32e9c4:
    // 0x32e9c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32e9c8: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x32e9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x32e9cc: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x32e9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x32e9d0: 0xc040a04  jal         func_102810
    ctx->pc = 0x32E9D0u;
    SET_GPR_U32(ctx, 31, 0x32E9D8u);
    ctx->pc = 0x32E9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E9D0u;
    // 0x32e9d4: 0x24a5e500  addiu       $a1, $a1, -0x1B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x32E9D0u, 0x32E9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E9D8u;
label_32e9d8:
    // 0x32e9d8: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x32e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_32e9dc:
    // 0x32e9dc: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x32e9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x32e9e0: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x32e9e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x32e9e4: 0x0  nop
    ctx->pc = 0x32e9e4u;
    // NOP
    // 0x32e9e8: 0x0  nop
    ctx->pc = 0x32e9e8u;
    // NOP
    // 0x32e9ec: 0x0  nop
    ctx->pc = 0x32e9ecu;
    // NOP
    // 0x32e9f0: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32E9F0u;
    {
        const bool branch_taken_0x32e9f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x32e9f0) {
            ctx->pc = 0x32E9DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32e9dc;
        }
    }
    ctx->pc = 0x32E9F8u;
    // 0x32e9f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32e9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32e9fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32e9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ea00: 0x3e00008  jr          $ra
    ctx->pc = 0x32EA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EA00u;
        // 0x32ea04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EA08u;
    // 0x32ea08: 0x0  nop
    ctx->pc = 0x32ea08u;
    // NOP
    // 0x32ea0c: 0x0  nop
    ctx->pc = 0x32ea0cu;
    // NOP
    if (ctx->pc == 0x32ea0cu) { ctx->pc = 0x32ea10u; }
}
