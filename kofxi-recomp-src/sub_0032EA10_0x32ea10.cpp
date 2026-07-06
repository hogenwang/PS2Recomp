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

// Function: sub_0032EA10
// Address: 0x32ea10 - 0x32ee30
void sub_0032EA10_0x32ea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EA10_0x32ea10");
#endif

    switch (ctx->pc) {
        case 0x32edecu: goto label_32edec;
        case 0x32ee00u: goto label_32ee00;
        case 0x32ee04u: goto label_32ee04;
        default: break;
    }

    ctx->pc = 0x32ea10u;

    // 0x32ea10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ea10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32ea14: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x32ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x32ea18: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x32ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x32ea1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32ea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32ea20: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32ea24: 0x3c0f01de  lui         $t7, 0x1DE
    ctx->pc = 0x32ea24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)478 << 16));
    // 0x32ea28: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32ea28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32ea2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32ea30: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32ea34: 0x25efe510  addiu       $t7, $t7, -0x1AF0
    ctx->pc = 0x32ea34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294960400));
    // 0x32ea38: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32ea38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32ea3c: 0x8fae0020  lw          $t6, 0x20($sp)
    ctx->pc = 0x32ea3cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32ea40: 0xfde20000  sd          $v0, 0x0($t7)
    ctx->pc = 0x32ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 2));
    // 0x32ea44: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x32ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32ea48: 0x8fad0028  lw          $t5, 0x28($sp)
    ctx->pc = 0x32ea48u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32ea4c: 0xfde20008  sd          $v0, 0x8($t7)
    ctx->pc = 0x32ea4cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 2));
    // 0x32ea50: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x32ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x32ea54: 0xfde00010  sd          $zero, 0x10($t7)
    ctx->pc = 0x32ea54u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 16), GPR_U64(ctx, 0));
    // 0x32ea58: 0xfde20018  sd          $v0, 0x18($t7)
    ctx->pc = 0x32ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 24), GPR_U64(ctx, 2));
    // 0x32ea5c: 0x3c022007  lui         $v0, 0x2007
    ctx->pc = 0x32ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8199 << 16));
    // 0x32ea60: 0xfde00030  sd          $zero, 0x30($t7)
    ctx->pc = 0x32ea60u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 48), GPR_U64(ctx, 0));
    // 0x32ea64: 0x3442d006  ori         $v0, $v0, 0xD006
    ctx->pc = 0x32ea64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53254);
    // 0x32ea68: 0xade80060  sw          $t0, 0x60($t7)
    ctx->pc = 0x32ea68u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 96), GPR_U32(ctx, 8));
    // 0x32ea6c: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x32ea6cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32ea70: 0xade90064  sw          $t1, 0x64($t7)
    ctx->pc = 0x32ea70u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 100), GPR_U32(ctx, 9));
    // 0x32ea74: 0x3c026542  lui         $v0, 0x6542
    ctx->pc = 0x32ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25922 << 16));
    // 0x32ea78: 0xade00068  sw          $zero, 0x68($t7)
    ctx->pc = 0x32ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 104), GPR_U32(ctx, 0));
    // 0x32ea7c: 0x34433480  ori         $v1, $v0, 0x3480
    ctx->pc = 0x32ea7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x32ea80: 0xade0006c  sw          $zero, 0x6C($t7)
    ctx->pc = 0x32ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 108), GPR_U32(ctx, 0));
    // 0x32ea84: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32ea88: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x32ea88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x32ea8c: 0xfde20028  sd          $v0, 0x28($t7)
    ctx->pc = 0x32ea8cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 40), GPR_U64(ctx, 2));
    // 0x32ea90: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x32ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32ea94: 0xfde30020  sd          $v1, 0x20($t7)
    ctx->pc = 0x32ea94u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 32), GPR_U64(ctx, 3));
    // 0x32ea98: 0xfde20038  sd          $v0, 0x38($t7)
    ctx->pc = 0x32ea98u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 56), GPR_U64(ctx, 2));
    // 0x32ea9c: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x32ea9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x32eaa0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32eaa4: 0xade40080  sw          $a0, 0x80($t7)
    ctx->pc = 0x32eaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 128), GPR_U32(ctx, 4));
    // 0x32eaa8: 0xfde20040  sd          $v0, 0x40($t7)
    ctx->pc = 0x32eaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 64), GPR_U64(ctx, 2));
    // 0x32eaac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x32eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32eab0: 0xadee0070  sw          $t6, 0x70($t7)
    ctx->pc = 0x32eab0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 112), GPR_U32(ctx, 14));
    // 0x32eab4: 0xfde20048  sd          $v0, 0x48($t7)
    ctx->pc = 0x32eab4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 72), GPR_U64(ctx, 2));
    // 0x32eab8: 0x3c0260ab  lui         $v0, 0x60AB
    ctx->pc = 0x32eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24747 << 16));
    // 0x32eabc: 0xaded0074  sw          $t5, 0x74($t7)
    ctx->pc = 0x32eabcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 116), GPR_U32(ctx, 13));
    // 0x32eac0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x32eac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x32eac4: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x32eac4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32eac8: 0x6c6025  or          $t4, $v1, $t4
    ctx->pc = 0x32eac8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x32eacc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x32eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x32ead0: 0x34433513  ori         $v1, $v0, 0x3513
    ctx->pc = 0x32ead0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13587);
    // 0x32ead4: 0xfdec0050  sd          $t4, 0x50($t7)
    ctx->pc = 0x32ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 80), GPR_U64(ctx, 12));
    // 0x32ead8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x32ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x32eadc: 0xfde30058  sd          $v1, 0x58($t7)
    ctx->pc = 0x32eadcu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 88), GPR_U64(ctx, 3));
    // 0x32eae0: 0x9043b280  lbu         $v1, -0x4D80($v0)
    ctx->pc = 0x32eae0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x32eae4: 0x8fac0030  lw          $t4, 0x30($sp)
    ctx->pc = 0x32eae4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32eae8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32eaec: 0xadec0078  sw          $t4, 0x78($t7)
    ctx->pc = 0x32eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 120), GPR_U32(ctx, 12));
    // 0x32eaf0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x32EAF0u;
    {
        const bool branch_taken_0x32eaf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EAF0u;
        // 0x32eaf4: 0xade2007c  sw          $v0, 0x7C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eaf0) {
            ctx->pc = 0x32EB48u;
            goto label_32eb48;
        }
    }
    ctx->pc = 0x32EAF8u;
    // 0x32eaf8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x32eaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32eafc: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x32eafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x32eb00: 0x24b87000  addiu       $t8, $a1, 0x7000
    ctx->pc = 0x32eb00u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x32eb04: 0x27198000  addiu       $t9, $t8, -0x8000
    ctx->pc = 0x32eb04u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 4294934528));
    // 0x32eb08: 0x34658889  ori         $a1, $v1, 0x8889
    ctx->pc = 0x32eb08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x32eb0c: 0x1980c0  sll         $s0, $t9, 3
    ctx->pc = 0x32eb0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x32eb10: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x32eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32eb14: 0x2198023  subu        $s0, $s0, $t9
    ctx->pc = 0x32eb14u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x32eb18: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x32eb18u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x32eb1c: 0xb00018  mult        $zero, $a1, $s0
    ctx->pc = 0x32eb1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32eb20: 0x10cfc2  srl         $t9, $s0, 31
    ctx->pc = 0x32eb20u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x32eb24: 0x0  nop
    ctx->pc = 0x32eb24u;
    // NOP
    // 0x32eb28: 0x2810  mfhi        $a1
    ctx->pc = 0x32eb28u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x32eb2c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x32eb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x32eb30: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x32eb30u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x32eb34: 0xb92821  addu        $a1, $a1, $t9
    ctx->pc = 0x32eb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x32eb38: 0x24a57fff  addiu       $a1, $a1, 0x7FFF
    ctx->pc = 0x32eb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32767));
    // 0x32eb3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32eb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x32eb40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32EB40u;
    {
        const bool branch_taken_0x32eb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB40u;
        // 0x32eb44: 0xa31824  and         $v1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eb40) {
            ctx->pc = 0x32EB54u;
            goto label_32eb54;
        }
    }
    ctx->pc = 0x32EB48u;
label_32eb48:
    // 0x32eb48: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x32eb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32eb4c: 0x24787000  addiu       $t8, $v1, 0x7000
    ctx->pc = 0x32eb4cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32eb50: 0x300182d  daddu       $v1, $t8, $zero
    ctx->pc = 0x32eb50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_32eb54:
    // 0x32eb54: 0xade200ac  sw          $v0, 0xAC($t7)
    ctx->pc = 0x32eb54u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 172), GPR_U32(ctx, 2));
    // 0x32eb58: 0x2402a833  addiu       $v0, $zero, -0x57CD
    ctx->pc = 0x32eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32eb5c: 0xade30084  sw          $v1, 0x84($t7)
    ctx->pc = 0x32eb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 132), GPR_U32(ctx, 3));
    // 0x32eb60: 0xade20088  sw          $v0, 0x88($t7)
    ctx->pc = 0x32eb60u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 136), GPR_U32(ctx, 2));
    // 0x32eb64: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x32eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x32eb68: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x32eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x32eb6c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x32eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x32eb70: 0x9042b280  lbu         $v0, -0x4D80($v0)
    ctx->pc = 0x32eb70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x32eb74: 0xade0008c  sw          $zero, 0x8C($t7)
    ctx->pc = 0x32eb74u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 140), GPR_U32(ctx, 0));
    // 0x32eb78: 0xadea0090  sw          $t2, 0x90($t7)
    ctx->pc = 0x32eb78u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 144), GPR_U32(ctx, 10));
    // 0x32eb7c: 0xadeb0094  sw          $t3, 0x94($t7)
    ctx->pc = 0x32eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 148), GPR_U32(ctx, 11));
    // 0x32eb80: 0xade00098  sw          $zero, 0x98($t7)
    ctx->pc = 0x32eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 152), GPR_U32(ctx, 0));
    // 0x32eb84: 0xade0009c  sw          $zero, 0x9C($t7)
    ctx->pc = 0x32eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 156), GPR_U32(ctx, 0));
    // 0x32eb88: 0xadee00a0  sw          $t6, 0xA0($t7)
    ctx->pc = 0x32eb88u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 160), GPR_U32(ctx, 14));
    // 0x32eb8c: 0xaded00a4  sw          $t5, 0xA4($t7)
    ctx->pc = 0x32eb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 164), GPR_U32(ctx, 13));
    // 0x32eb90: 0xadec00a8  sw          $t4, 0xA8($t7)
    ctx->pc = 0x32eb90u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 168), GPR_U32(ctx, 12));
    // 0x32eb94: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x32EB94u;
    {
        const bool branch_taken_0x32eb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EB94u;
        // 0x32eb98: 0xade300b0  sw          $v1, 0xB0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32eb94) {
            ctx->pc = 0x32EBECu;
            goto label_32ebec;
        }
    }
    ctx->pc = 0x32EB9Cu;
    // 0x32eb9c: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x32eb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x32eba0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x32eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x32eba4: 0x24a57000  addiu       $a1, $a1, 0x7000
    ctx->pc = 0x32eba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x32eba8: 0x34468889  ori         $a2, $v0, 0x8889
    ctx->pc = 0x32eba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x32ebac: 0x24b98000  addiu       $t9, $a1, -0x8000
    ctx->pc = 0x32ebacu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x32ebb0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x32ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32ebb4: 0x1938c0  sll         $a3, $t9, 3
    ctx->pc = 0x32ebb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x32ebb8: 0xf93823  subu        $a3, $a3, $t9
    ctx->pc = 0x32ebb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 25)));
    // 0x32ebbc: 0x7c980  sll         $t9, $a3, 6
    ctx->pc = 0x32ebbcu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x32ebc0: 0xd90018  mult        $zero, $a2, $t9
    ctx->pc = 0x32ebc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32ebc4: 0x193fc2  srl         $a3, $t9, 31
    ctx->pc = 0x32ebc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 25), 31));
    // 0x32ebc8: 0x0  nop
    ctx->pc = 0x32ebc8u;
    // NOP
    // 0x32ebcc: 0x3010  mfhi        $a2
    ctx->pc = 0x32ebccu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x32ebd0: 0xd93021  addu        $a2, $a2, $t9
    ctx->pc = 0x32ebd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
    // 0x32ebd4: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x32ebd4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x32ebd8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x32ebd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x32ebdc: 0x24c67fff  addiu       $a2, $a2, 0x7FFF
    ctx->pc = 0x32ebdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32767));
    // 0x32ebe0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x32ebe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x32ebe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32EBE4u;
    {
        const bool branch_taken_0x32ebe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EBE4u;
        // 0x32ebe8: 0xc21024  and         $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ebe4) {
            ctx->pc = 0x32EBF8u;
            goto label_32ebf8;
        }
    }
    ctx->pc = 0x32EBECu;
label_32ebec:
    // 0x32ebec: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x32ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x32ebf0: 0x24457000  addiu       $a1, $v0, 0x7000
    ctx->pc = 0x32ebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32ebf4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x32ebf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32ebf8:
    // 0x32ebf8: 0xade200b4  sw          $v0, 0xB4($t7)
    ctx->pc = 0x32ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 180), GPR_U32(ctx, 2));
    // 0x32ebfc: 0x2402a833  addiu       $v0, $zero, -0x57CD
    ctx->pc = 0x32ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32ec00: 0xade80120  sw          $t0, 0x120($t7)
    ctx->pc = 0x32ec00u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 288), GPR_U32(ctx, 8));
    // 0x32ec04: 0xade200b8  sw          $v0, 0xB8($t7)
    ctx->pc = 0x32ec04u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 184), GPR_U32(ctx, 2));
    // 0x32ec08: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32ec08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32ec0c: 0xade90124  sw          $t1, 0x124($t7)
    ctx->pc = 0x32ec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 292), GPR_U32(ctx, 9));
    // 0x32ec10: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x32ec10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32ec14: 0xade000bc  sw          $zero, 0xBC($t7)
    ctx->pc = 0x32ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 188), GPR_U32(ctx, 0));
    // 0x32ec18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32ec1c: 0xfde000d0  sd          $zero, 0xD0($t7)
    ctx->pc = 0x32ec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 208), GPR_U64(ctx, 0));
    // 0x32ec20: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32ec20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x32ec24: 0xade00128  sw          $zero, 0x128($t7)
    ctx->pc = 0x32ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 296), GPR_U32(ctx, 0));
    // 0x32ec28: 0xfde200c0  sd          $v0, 0xC0($t7)
    ctx->pc = 0x32ec28u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 192), GPR_U64(ctx, 2));
    // 0x32ec2c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x32ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32ec30: 0xade0012c  sw          $zero, 0x12C($t7)
    ctx->pc = 0x32ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 300), GPR_U32(ctx, 0));
    // 0x32ec34: 0xfde200c8  sd          $v0, 0xC8($t7)
    ctx->pc = 0x32ec34u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 200), GPR_U64(ctx, 2));
    // 0x32ec38: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x32ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x32ec3c: 0xadee0130  sw          $t6, 0x130($t7)
    ctx->pc = 0x32ec3cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 304), GPR_U32(ctx, 14));
    // 0x32ec40: 0xfde200d8  sd          $v0, 0xD8($t7)
    ctx->pc = 0x32ec40u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 216), GPR_U64(ctx, 2));
    // 0x32ec44: 0x3c022007  lui         $v0, 0x2007
    ctx->pc = 0x32ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8199 << 16));
    // 0x32ec48: 0xaded0134  sw          $t5, 0x134($t7)
    ctx->pc = 0x32ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 308), GPR_U32(ctx, 13));
    // 0x32ec4c: 0x3442d006  ori         $v0, $v0, 0xD006
    ctx->pc = 0x32ec4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53254);
    // 0x32ec50: 0xadec0138  sw          $t4, 0x138($t7)
    ctx->pc = 0x32ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 312), GPR_U32(ctx, 12));
    // 0x32ec54: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x32ec54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32ec58: 0x3c026542  lui         $v0, 0x6542
    ctx->pc = 0x32ec58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25922 << 16));
    // 0x32ec5c: 0x34423480  ori         $v0, $v0, 0x3480
    ctx->pc = 0x32ec5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x32ec60: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32ec60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x32ec64: 0xfde200e0  sd          $v0, 0xE0($t7)
    ctx->pc = 0x32ec64u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 224), GPR_U64(ctx, 2));
    // 0x32ec68: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32ec6c: 0xfde200e8  sd          $v0, 0xE8($t7)
    ctx->pc = 0x32ec6cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 232), GPR_U64(ctx, 2));
    // 0x32ec70: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x32ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x32ec74: 0xfde200f0  sd          $v0, 0xF0($t7)
    ctx->pc = 0x32ec74u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 240), GPR_U64(ctx, 2));
    // 0x32ec78: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x32ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32ec7c: 0xfde200f8  sd          $v0, 0xF8($t7)
    ctx->pc = 0x32ec7cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 248), GPR_U64(ctx, 2));
    // 0x32ec80: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32ec84: 0xfde20100  sd          $v0, 0x100($t7)
    ctx->pc = 0x32ec84u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 256), GPR_U64(ctx, 2));
    // 0x32ec88: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x32ec88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32ec8c: 0xfde20108  sd          $v0, 0x108($t7)
    ctx->pc = 0x32ec8cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 264), GPR_U64(ctx, 2));
    // 0x32ec90: 0x3c0260ab  lui         $v0, 0x60AB
    ctx->pc = 0x32ec90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24747 << 16));
    // 0x32ec94: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x32ec94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x32ec98: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x32ec98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32ec9c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x32ec9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x32eca0: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x32eca0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x32eca4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x32eca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x32eca8: 0xfde60110  sd          $a2, 0x110($t7)
    ctx->pc = 0x32eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 272), GPR_U64(ctx, 6));
    // 0x32ecac: 0x34423513  ori         $v0, $v0, 0x3513
    ctx->pc = 0x32ecacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13587);
    // 0x32ecb0: 0xfde20118  sd          $v0, 0x118($t7)
    ctx->pc = 0x32ecb0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 280), GPR_U64(ctx, 2));
    // 0x32ecb4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32ecb8: 0x23180  sll         $a2, $v0, 6
    ctx->pc = 0x32ecb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x32ecbc: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x32ECBCu;
    {
        const bool branch_taken_0x32ecbc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x32ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ECBCu;
        // 0x32ecc0: 0x611c3  sra         $v0, $a2, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ecbc) {
            ctx->pc = 0x32ECCCu;
            goto label_32eccc;
        }
    }
    ctx->pc = 0x32ECC4u;
    // 0x32ecc4: 0x24c2007f  addiu       $v0, $a2, 0x7F
    ctx->pc = 0x32ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
    // 0x32ecc8: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x32ecc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_32eccc:
    // 0x32eccc: 0xade40140  sw          $a0, 0x140($t7)
    ctx->pc = 0x32ecccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 320), GPR_U32(ctx, 4));
    // 0x32ecd0: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x32ecd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x32ecd4: 0x9084b280  lbu         $a0, -0x4D80($a0)
    ctx->pc = 0x32ecd4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947456)));
    // 0x32ecd8: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32ECD8u;
    {
        const bool branch_taken_0x32ecd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ECD8u;
        // 0x32ecdc: 0xade2013c  sw          $v0, 0x13C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ecd8) {
            ctx->pc = 0x32ED24u;
            goto label_32ed24;
        }
    }
    ctx->pc = 0x32ECE0u;
    // 0x32ece0: 0x3c048888  lui         $a0, 0x8888
    ctx->pc = 0x32ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34952 << 16));
    // 0x32ece4: 0x27078000  addiu       $a3, $t8, -0x8000
    ctx->pc = 0x32ece4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 4294934528));
    // 0x32ece8: 0x34868889  ori         $a2, $a0, 0x8889
    ctx->pc = 0x32ece8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x32ecec: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x32ececu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x32ecf0: 0x873823  subu        $a3, $a0, $a3
    ctx->pc = 0x32ecf0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x32ecf4: 0x74180  sll         $t0, $a3, 6
    ctx->pc = 0x32ecf4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x32ecf8: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x32ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32ecfc: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x32ecfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32ed00: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x32ed00u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x32ed04: 0x0  nop
    ctx->pc = 0x32ed04u;
    // NOP
    // 0x32ed08: 0x3010  mfhi        $a2
    ctx->pc = 0x32ed08u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x32ed0c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x32ed0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x32ed10: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x32ed10u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x32ed14: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x32ed14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x32ed18: 0x24c67fff  addiu       $a2, $a2, 0x7FFF
    ctx->pc = 0x32ed18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32767));
    // 0x32ed1c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x32ed1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x32ed20: 0xc4c024  and         $t8, $a2, $a0
    ctx->pc = 0x32ed20u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_32ed24:
    // 0x32ed24: 0x2404a833  addiu       $a0, $zero, -0x57CD
    ctx->pc = 0x32ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32ed28: 0xade2016c  sw          $v0, 0x16C($t7)
    ctx->pc = 0x32ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 364), GPR_U32(ctx, 2));
    // 0x32ed2c: 0xade40148  sw          $a0, 0x148($t7)
    ctx->pc = 0x32ed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 328), GPR_U32(ctx, 4));
    // 0x32ed30: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x32ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x32ed34: 0xadf80144  sw          $t8, 0x144($t7)
    ctx->pc = 0x32ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 324), GPR_U32(ctx, 24));
    // 0x32ed38: 0x9082b280  lbu         $v0, -0x4D80($a0)
    ctx->pc = 0x32ed38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947456)));
    // 0x32ed3c: 0xadea0150  sw          $t2, 0x150($t7)
    ctx->pc = 0x32ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 336), GPR_U32(ctx, 10));
    // 0x32ed40: 0xadeb0154  sw          $t3, 0x154($t7)
    ctx->pc = 0x32ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 340), GPR_U32(ctx, 11));
    // 0x32ed44: 0xadee0160  sw          $t6, 0x160($t7)
    ctx->pc = 0x32ed44u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 352), GPR_U32(ctx, 14));
    // 0x32ed48: 0xaded0164  sw          $t5, 0x164($t7)
    ctx->pc = 0x32ed48u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 356), GPR_U32(ctx, 13));
    // 0x32ed4c: 0xadec0168  sw          $t4, 0x168($t7)
    ctx->pc = 0x32ed4cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 360), GPR_U32(ctx, 12));
    // 0x32ed50: 0xade30170  sw          $v1, 0x170($t7)
    ctx->pc = 0x32ed50u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 368), GPR_U32(ctx, 3));
    // 0x32ed54: 0xade0014c  sw          $zero, 0x14C($t7)
    ctx->pc = 0x32ed54u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 332), GPR_U32(ctx, 0));
    // 0x32ed58: 0xade00158  sw          $zero, 0x158($t7)
    ctx->pc = 0x32ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 344), GPR_U32(ctx, 0));
    // 0x32ed5c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32ED5Cu;
    {
        const bool branch_taken_0x32ed5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32ED5Cu;
        // 0x32ed60: 0xade0015c  sw          $zero, 0x15C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ed5c) {
            ctx->pc = 0x32EDA8u;
            goto label_32eda8;
        }
    }
    ctx->pc = 0x32ED64u;
    // 0x32ed64: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x32ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x32ed68: 0x24a48000  addiu       $a0, $a1, -0x8000
    ctx->pc = 0x32ed68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x32ed6c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x32ed6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x32ed70: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x32ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x32ed74: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32ed74u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32ed78: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x32ed78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x32ed7c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x32ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32ed80: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x32ed80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32ed84: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x32ed84u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32ed88: 0x0  nop
    ctx->pc = 0x32ed88u;
    // NOP
    // 0x32ed8c: 0x1810  mfhi        $v1
    ctx->pc = 0x32ed8cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32ed90: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32ed94: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x32ed94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x32ed98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32ed98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32ed9c: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x32ed9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x32eda0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32eda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32eda4: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x32eda4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_32eda8:
    // 0x32eda8: 0x2402a833  addiu       $v0, $zero, -0x57CD
    ctx->pc = 0x32eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32edac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32edacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32edb0: 0xade20178  sw          $v0, 0x178($t7)
    ctx->pc = 0x32edb0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 376), GPR_U32(ctx, 2));
    // 0x32edb4: 0x34640018  ori         $a0, $v1, 0x18
    ctx->pc = 0x32edb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
    // 0x32edb8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32edbc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x32edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x32edc0: 0x7c40e500  sq          $zero, -0x1B00($v0)
    ctx->pc = 0x32edc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294960384), GPR_VEC(ctx, 0));
    // 0x32edc4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32edc8: 0xac64e500  sw          $a0, -0x1B00($v1)
    ctx->pc = 0x32edc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960384), GPR_U32(ctx, 4));
    // 0x32edcc: 0x7c40e690  sq          $zero, -0x1970($v0)
    ctx->pc = 0x32edccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294960784), GPR_VEC(ctx, 0));
    // 0x32edd0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x32edd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x32edd4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32edd8: 0xade50174  sw          $a1, 0x174($t7)
    ctx->pc = 0x32edd8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 372), GPR_U32(ctx, 5));
    // 0x32eddc: 0xade0017c  sw          $zero, 0x17C($t7)
    ctx->pc = 0x32eddcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 380), GPR_U32(ctx, 0));
    // 0x32ede0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32ede0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ede4: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x32EDE4u;
    SET_GPR_U32(ctx, 31, 0x32EDECu);
    ctx->pc = 0x32EDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EDE4u;
    // 0x32ede8: 0xac43e690  sw          $v1, -0x1970($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960784), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x32EDE4u, 0x32EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EDECu;
label_32edec:
    // 0x32edec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32edecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32edf0: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x32edf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x32edf4: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x32edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x32edf8: 0xc040a04  jal         func_102810
    ctx->pc = 0x32EDF8u;
    SET_GPR_U32(ctx, 31, 0x32EE00u);
    ctx->pc = 0x32EDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32EDF8u;
    // 0x32edfc: 0x24a5e500  addiu       $a1, $a1, -0x1B00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x32EDF8u, 0x32EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32EE00u;
label_32ee00:
    // 0x32ee00: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x32ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_32ee04:
    // 0x32ee04: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x32ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x32ee08: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x32ee08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x32ee0c: 0x0  nop
    ctx->pc = 0x32ee0cu;
    // NOP
    // 0x32ee10: 0x0  nop
    ctx->pc = 0x32ee10u;
    // NOP
    // 0x32ee14: 0x0  nop
    ctx->pc = 0x32ee14u;
    // NOP
    // 0x32ee18: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32EE18u;
    {
        const bool branch_taken_0x32ee18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x32ee18) {
            ctx->pc = 0x32EE04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32ee04;
        }
    }
    ctx->pc = 0x32EE20u;
    // 0x32ee20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32ee20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ee24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32ee24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ee28: 0x3e00008  jr          $ra
    ctx->pc = 0x32EE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32EE28u;
        // 0x32ee2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32EE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32EE30u;
}
