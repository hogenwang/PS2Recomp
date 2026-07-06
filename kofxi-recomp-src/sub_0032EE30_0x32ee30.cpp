#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032EE30
// Address: 0x32ee30 - 0x32f250
void sub_0032EE30_0x32ee30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032EE30_0x32ee30");
#endif

    switch (ctx->pc) {
        case 0x32f20cu: goto label_32f20c;
        case 0x32f220u: goto label_32f220;
        case 0x32f224u: goto label_32f224;
        default: break;
    }

    ctx->pc = 0x32ee30u;

    // 0x32ee30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32ee30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32ee34: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x32ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x32ee38: 0x24446c00  addiu       $a0, $v0, 0x6C00
    ctx->pc = 0x32ee38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x32ee3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32ee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32ee40: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32ee44: 0x3c0f01de  lui         $t7, 0x1DE
    ctx->pc = 0x32ee44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)478 << 16));
    // 0x32ee48: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x32ee48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32ee4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ee4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32ee50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32ee54: 0x25efe510  addiu       $t7, $t7, -0x1AF0
    ctx->pc = 0x32ee54u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294960400));
    // 0x32ee58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32ee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32ee5c: 0x8fae0020  lw          $t6, 0x20($sp)
    ctx->pc = 0x32ee5cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32ee60: 0xfde20000  sd          $v0, 0x0($t7)
    ctx->pc = 0x32ee60u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 2));
    // 0x32ee64: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x32ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32ee68: 0x8fad0028  lw          $t5, 0x28($sp)
    ctx->pc = 0x32ee68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32ee6c: 0xfde20008  sd          $v0, 0x8($t7)
    ctx->pc = 0x32ee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 2));
    // 0x32ee70: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x32ee70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x32ee74: 0xfde00010  sd          $zero, 0x10($t7)
    ctx->pc = 0x32ee74u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 16), GPR_U64(ctx, 0));
    // 0x32ee78: 0xfde20018  sd          $v0, 0x18($t7)
    ctx->pc = 0x32ee78u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 24), GPR_U64(ctx, 2));
    // 0x32ee7c: 0x3c022007  lui         $v0, 0x2007
    ctx->pc = 0x32ee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8199 << 16));
    // 0x32ee80: 0xfde00030  sd          $zero, 0x30($t7)
    ctx->pc = 0x32ee80u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 48), GPR_U64(ctx, 0));
    // 0x32ee84: 0x3442d006  ori         $v0, $v0, 0xD006
    ctx->pc = 0x32ee84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53254);
    // 0x32ee88: 0xade80060  sw          $t0, 0x60($t7)
    ctx->pc = 0x32ee88u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 96), GPR_U32(ctx, 8));
    // 0x32ee8c: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x32ee8cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32ee90: 0xade90064  sw          $t1, 0x64($t7)
    ctx->pc = 0x32ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 100), GPR_U32(ctx, 9));
    // 0x32ee94: 0x3c026542  lui         $v0, 0x6542
    ctx->pc = 0x32ee94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25922 << 16));
    // 0x32ee98: 0xade00068  sw          $zero, 0x68($t7)
    ctx->pc = 0x32ee98u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 104), GPR_U32(ctx, 0));
    // 0x32ee9c: 0x34433480  ori         $v1, $v0, 0x3480
    ctx->pc = 0x32ee9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x32eea0: 0xade0006c  sw          $zero, 0x6C($t7)
    ctx->pc = 0x32eea0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 108), GPR_U32(ctx, 0));
    // 0x32eea4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32eea8: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x32eea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x32eeac: 0xfde20028  sd          $v0, 0x28($t7)
    ctx->pc = 0x32eeacu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 40), GPR_U64(ctx, 2));
    // 0x32eeb0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x32eeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32eeb4: 0xfde30020  sd          $v1, 0x20($t7)
    ctx->pc = 0x32eeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 32), GPR_U64(ctx, 3));
    // 0x32eeb8: 0xfde20038  sd          $v0, 0x38($t7)
    ctx->pc = 0x32eeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 56), GPR_U64(ctx, 2));
    // 0x32eebc: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x32eebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x32eec0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32eec4: 0xade40080  sw          $a0, 0x80($t7)
    ctx->pc = 0x32eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 128), GPR_U32(ctx, 4));
    // 0x32eec8: 0xfde20040  sd          $v0, 0x40($t7)
    ctx->pc = 0x32eec8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 64), GPR_U64(ctx, 2));
    // 0x32eecc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x32eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32eed0: 0xadee0070  sw          $t6, 0x70($t7)
    ctx->pc = 0x32eed0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 112), GPR_U32(ctx, 14));
    // 0x32eed4: 0xfde20048  sd          $v0, 0x48($t7)
    ctx->pc = 0x32eed4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 72), GPR_U64(ctx, 2));
    // 0x32eed8: 0x3c0260ab  lui         $v0, 0x60AB
    ctx->pc = 0x32eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24747 << 16));
    // 0x32eedc: 0xaded0074  sw          $t5, 0x74($t7)
    ctx->pc = 0x32eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 116), GPR_U32(ctx, 13));
    // 0x32eee0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x32eee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x32eee4: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x32eee4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32eee8: 0x6c6025  or          $t4, $v1, $t4
    ctx->pc = 0x32eee8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x32eeec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x32eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x32eef0: 0x34433513  ori         $v1, $v0, 0x3513
    ctx->pc = 0x32eef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13587);
    // 0x32eef4: 0xfdec0050  sd          $t4, 0x50($t7)
    ctx->pc = 0x32eef4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 80), GPR_U64(ctx, 12));
    // 0x32eef8: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x32eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x32eefc: 0xfde30058  sd          $v1, 0x58($t7)
    ctx->pc = 0x32eefcu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 88), GPR_U64(ctx, 3));
    // 0x32ef00: 0x9043b280  lbu         $v1, -0x4D80($v0)
    ctx->pc = 0x32ef00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x32ef04: 0x8fac0030  lw          $t4, 0x30($sp)
    ctx->pc = 0x32ef04u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32ef08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32ef08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32ef0c: 0xadec0078  sw          $t4, 0x78($t7)
    ctx->pc = 0x32ef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 120), GPR_U32(ctx, 12));
    // 0x32ef10: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x32EF10u;
    {
        const bool branch_taken_0x32ef10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EF10u;
            // 0x32ef14: 0xade2007c  sw          $v0, 0x7C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ef10) {
            ctx->pc = 0x32EF68u;
            goto label_32ef68;
        }
    }
    ctx->pc = 0x32EF18u;
    // 0x32ef18: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x32ef18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32ef1c: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x32ef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x32ef20: 0x24b87000  addiu       $t8, $a1, 0x7000
    ctx->pc = 0x32ef20u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x32ef24: 0x27198000  addiu       $t9, $t8, -0x8000
    ctx->pc = 0x32ef24u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 4294934528));
    // 0x32ef28: 0x34658889  ori         $a1, $v1, 0x8889
    ctx->pc = 0x32ef28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x32ef2c: 0x1980c0  sll         $s0, $t9, 3
    ctx->pc = 0x32ef2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x32ef30: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x32ef30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32ef34: 0x2198023  subu        $s0, $s0, $t9
    ctx->pc = 0x32ef34u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 25)));
    // 0x32ef38: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x32ef38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x32ef3c: 0xb00018  mult        $zero, $a1, $s0
    ctx->pc = 0x32ef3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32ef40: 0x10cfc2  srl         $t9, $s0, 31
    ctx->pc = 0x32ef40u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x32ef44: 0x0  nop
    ctx->pc = 0x32ef44u;
    // NOP
    // 0x32ef48: 0x2810  mfhi        $a1
    ctx->pc = 0x32ef48u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x32ef4c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x32ef4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x32ef50: 0x52a03  sra         $a1, $a1, 8
    ctx->pc = 0x32ef50u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    // 0x32ef54: 0xb92821  addu        $a1, $a1, $t9
    ctx->pc = 0x32ef54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x32ef58: 0x24a57fff  addiu       $a1, $a1, 0x7FFF
    ctx->pc = 0x32ef58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32767));
    // 0x32ef5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32ef5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x32ef60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32EF60u;
    {
        const bool branch_taken_0x32ef60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EF60u;
            // 0x32ef64: 0xa31824  and         $v1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ef60) {
            ctx->pc = 0x32EF74u;
            goto label_32ef74;
        }
    }
    ctx->pc = 0x32EF68u;
label_32ef68:
    // 0x32ef68: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x32ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32ef6c: 0x24787000  addiu       $t8, $v1, 0x7000
    ctx->pc = 0x32ef6cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x32ef70: 0x300182d  daddu       $v1, $t8, $zero
    ctx->pc = 0x32ef70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_32ef74:
    // 0x32ef74: 0xade200ac  sw          $v0, 0xAC($t7)
    ctx->pc = 0x32ef74u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 172), GPR_U32(ctx, 2));
    // 0x32ef78: 0x2402a833  addiu       $v0, $zero, -0x57CD
    ctx->pc = 0x32ef78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32ef7c: 0xade30084  sw          $v1, 0x84($t7)
    ctx->pc = 0x32ef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 132), GPR_U32(ctx, 3));
    // 0x32ef80: 0xade20088  sw          $v0, 0x88($t7)
    ctx->pc = 0x32ef80u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 136), GPR_U32(ctx, 2));
    // 0x32ef84: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x32ef84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x32ef88: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x32ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x32ef8c: 0x24636c00  addiu       $v1, $v1, 0x6C00
    ctx->pc = 0x32ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27648));
    // 0x32ef90: 0x9042b280  lbu         $v0, -0x4D80($v0)
    ctx->pc = 0x32ef90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947456)));
    // 0x32ef94: 0xade0008c  sw          $zero, 0x8C($t7)
    ctx->pc = 0x32ef94u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 140), GPR_U32(ctx, 0));
    // 0x32ef98: 0xadea0090  sw          $t2, 0x90($t7)
    ctx->pc = 0x32ef98u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 144), GPR_U32(ctx, 10));
    // 0x32ef9c: 0xadeb0094  sw          $t3, 0x94($t7)
    ctx->pc = 0x32ef9cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 148), GPR_U32(ctx, 11));
    // 0x32efa0: 0xade00098  sw          $zero, 0x98($t7)
    ctx->pc = 0x32efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 152), GPR_U32(ctx, 0));
    // 0x32efa4: 0xade0009c  sw          $zero, 0x9C($t7)
    ctx->pc = 0x32efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 156), GPR_U32(ctx, 0));
    // 0x32efa8: 0xadee00a0  sw          $t6, 0xA0($t7)
    ctx->pc = 0x32efa8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 160), GPR_U32(ctx, 14));
    // 0x32efac: 0xaded00a4  sw          $t5, 0xA4($t7)
    ctx->pc = 0x32efacu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 164), GPR_U32(ctx, 13));
    // 0x32efb0: 0xadec00a8  sw          $t4, 0xA8($t7)
    ctx->pc = 0x32efb0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 168), GPR_U32(ctx, 12));
    // 0x32efb4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x32EFB4u;
    {
        const bool branch_taken_0x32efb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32EFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32EFB4u;
            // 0x32efb8: 0xade300b0  sw          $v1, 0xB0($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32efb4) {
            ctx->pc = 0x32F00Cu;
            goto label_32f00c;
        }
    }
    ctx->pc = 0x32EFBCu;
    // 0x32efbc: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x32efbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x32efc0: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x32efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x32efc4: 0x24a57000  addiu       $a1, $a1, 0x7000
    ctx->pc = 0x32efc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28672));
    // 0x32efc8: 0x34468889  ori         $a2, $v0, 0x8889
    ctx->pc = 0x32efc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x32efcc: 0x24b98000  addiu       $t9, $a1, -0x8000
    ctx->pc = 0x32efccu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x32efd0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x32efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32efd4: 0x1938c0  sll         $a3, $t9, 3
    ctx->pc = 0x32efd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x32efd8: 0xf93823  subu        $a3, $a3, $t9
    ctx->pc = 0x32efd8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 25)));
    // 0x32efdc: 0x7c980  sll         $t9, $a3, 6
    ctx->pc = 0x32efdcu;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x32efe0: 0xd90018  mult        $zero, $a2, $t9
    ctx->pc = 0x32efe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32efe4: 0x193fc2  srl         $a3, $t9, 31
    ctx->pc = 0x32efe4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 25), 31));
    // 0x32efe8: 0x0  nop
    ctx->pc = 0x32efe8u;
    // NOP
    // 0x32efec: 0x3010  mfhi        $a2
    ctx->pc = 0x32efecu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x32eff0: 0xd93021  addu        $a2, $a2, $t9
    ctx->pc = 0x32eff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
    // 0x32eff4: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x32eff4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x32eff8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x32eff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x32effc: 0x24c67fff  addiu       $a2, $a2, 0x7FFF
    ctx->pc = 0x32effcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32767));
    // 0x32f000: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x32f000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x32f004: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32F004u;
    {
        const bool branch_taken_0x32f004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F004u;
            // 0x32f008: 0xc21024  and         $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f004) {
            ctx->pc = 0x32F018u;
            goto label_32f018;
        }
    }
    ctx->pc = 0x32F00Cu;
label_32f00c:
    // 0x32f00c: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x32f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x32f010: 0x24457000  addiu       $a1, $v0, 0x7000
    ctx->pc = 0x32f010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32f014: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x32f014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_32f018:
    // 0x32f018: 0xade200b4  sw          $v0, 0xB4($t7)
    ctx->pc = 0x32f018u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 180), GPR_U32(ctx, 2));
    // 0x32f01c: 0x2402a833  addiu       $v0, $zero, -0x57CD
    ctx->pc = 0x32f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32f020: 0xade80120  sw          $t0, 0x120($t7)
    ctx->pc = 0x32f020u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 288), GPR_U32(ctx, 8));
    // 0x32f024: 0xade200b8  sw          $v0, 0xB8($t7)
    ctx->pc = 0x32f024u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 184), GPR_U32(ctx, 2));
    // 0x32f028: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x32f028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x32f02c: 0xade90124  sw          $t1, 0x124($t7)
    ctx->pc = 0x32f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 292), GPR_U32(ctx, 9));
    // 0x32f030: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x32f030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f034: 0xade000bc  sw          $zero, 0xBC($t7)
    ctx->pc = 0x32f034u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 188), GPR_U32(ctx, 0));
    // 0x32f038: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32f038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32f03c: 0xfde000d0  sd          $zero, 0xD0($t7)
    ctx->pc = 0x32f03cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 208), GPR_U64(ctx, 0));
    // 0x32f040: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32f040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x32f044: 0xade00128  sw          $zero, 0x128($t7)
    ctx->pc = 0x32f044u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 296), GPR_U32(ctx, 0));
    // 0x32f048: 0xfde200c0  sd          $v0, 0xC0($t7)
    ctx->pc = 0x32f048u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 192), GPR_U64(ctx, 2));
    // 0x32f04c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x32f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32f050: 0xade0012c  sw          $zero, 0x12C($t7)
    ctx->pc = 0x32f050u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 300), GPR_U32(ctx, 0));
    // 0x32f054: 0xfde200c8  sd          $v0, 0xC8($t7)
    ctx->pc = 0x32f054u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 200), GPR_U64(ctx, 2));
    // 0x32f058: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x32f058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x32f05c: 0xadee0130  sw          $t6, 0x130($t7)
    ctx->pc = 0x32f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 304), GPR_U32(ctx, 14));
    // 0x32f060: 0xfde200d8  sd          $v0, 0xD8($t7)
    ctx->pc = 0x32f060u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 216), GPR_U64(ctx, 2));
    // 0x32f064: 0x3c022007  lui         $v0, 0x2007
    ctx->pc = 0x32f064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8199 << 16));
    // 0x32f068: 0xaded0134  sw          $t5, 0x134($t7)
    ctx->pc = 0x32f068u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 308), GPR_U32(ctx, 13));
    // 0x32f06c: 0x3442d006  ori         $v0, $v0, 0xD006
    ctx->pc = 0x32f06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53254);
    // 0x32f070: 0xadec0138  sw          $t4, 0x138($t7)
    ctx->pc = 0x32f070u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 312), GPR_U32(ctx, 12));
    // 0x32f074: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x32f074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f078: 0x3c026542  lui         $v0, 0x6542
    ctx->pc = 0x32f078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25922 << 16));
    // 0x32f07c: 0x34423480  ori         $v0, $v0, 0x3480
    ctx->pc = 0x32f07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13440);
    // 0x32f080: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x32f080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x32f084: 0xfde200e0  sd          $v0, 0xE0($t7)
    ctx->pc = 0x32f084u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 224), GPR_U64(ctx, 2));
    // 0x32f088: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x32f088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x32f08c: 0xfde200e8  sd          $v0, 0xE8($t7)
    ctx->pc = 0x32f08cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 232), GPR_U64(ctx, 2));
    // 0x32f090: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x32f090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x32f094: 0xfde200f0  sd          $v0, 0xF0($t7)
    ctx->pc = 0x32f094u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 240), GPR_U64(ctx, 2));
    // 0x32f098: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x32f098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x32f09c: 0xfde200f8  sd          $v0, 0xF8($t7)
    ctx->pc = 0x32f09cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 248), GPR_U64(ctx, 2));
    // 0x32f0a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x32f0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x32f0a4: 0xfde20100  sd          $v0, 0x100($t7)
    ctx->pc = 0x32f0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 256), GPR_U64(ctx, 2));
    // 0x32f0a8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x32f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32f0ac: 0xfde20108  sd          $v0, 0x108($t7)
    ctx->pc = 0x32f0acu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 264), GPR_U64(ctx, 2));
    // 0x32f0b0: 0x3c0260ab  lui         $v0, 0x60AB
    ctx->pc = 0x32f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24747 << 16));
    // 0x32f0b4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x32f0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x32f0b8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x32f0b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f0bc: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x32f0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x32f0c0: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x32f0c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x32f0c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x32f0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x32f0c8: 0xfde60110  sd          $a2, 0x110($t7)
    ctx->pc = 0x32f0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 272), GPR_U64(ctx, 6));
    // 0x32f0cc: 0x34423513  ori         $v0, $v0, 0x3513
    ctx->pc = 0x32f0ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13587);
    // 0x32f0d0: 0xfde20118  sd          $v0, 0x118($t7)
    ctx->pc = 0x32f0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 280), GPR_U64(ctx, 2));
    // 0x32f0d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x32f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32f0d8: 0x23140  sll         $a2, $v0, 5
    ctx->pc = 0x32f0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x32f0dc: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F0DCu;
    {
        const bool branch_taken_0x32f0dc = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x32F0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F0DCu;
            // 0x32f0e0: 0x611c3  sra         $v0, $a2, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f0dc) {
            ctx->pc = 0x32F0ECu;
            goto label_32f0ec;
        }
    }
    ctx->pc = 0x32F0E4u;
    // 0x32f0e4: 0x24c2007f  addiu       $v0, $a2, 0x7F
    ctx->pc = 0x32f0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
    // 0x32f0e8: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x32f0e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_32f0ec:
    // 0x32f0ec: 0xade40140  sw          $a0, 0x140($t7)
    ctx->pc = 0x32f0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 320), GPR_U32(ctx, 4));
    // 0x32f0f0: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x32f0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x32f0f4: 0x9084b280  lbu         $a0, -0x4D80($a0)
    ctx->pc = 0x32f0f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947456)));
    // 0x32f0f8: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32F0F8u;
    {
        const bool branch_taken_0x32f0f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F0F8u;
            // 0x32f0fc: 0xade2013c  sw          $v0, 0x13C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f0f8) {
            ctx->pc = 0x32F144u;
            goto label_32f144;
        }
    }
    ctx->pc = 0x32F100u;
    // 0x32f100: 0x3c048888  lui         $a0, 0x8888
    ctx->pc = 0x32f100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34952 << 16));
    // 0x32f104: 0x27078000  addiu       $a3, $t8, -0x8000
    ctx->pc = 0x32f104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 4294934528));
    // 0x32f108: 0x34868889  ori         $a2, $a0, 0x8889
    ctx->pc = 0x32f108u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34953);
    // 0x32f10c: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x32f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x32f110: 0x873823  subu        $a3, $a0, $a3
    ctx->pc = 0x32f110u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x32f114: 0x74180  sll         $t0, $a3, 6
    ctx->pc = 0x32f114u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x32f118: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x32f118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32f11c: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x32f11cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32f120: 0x83fc2  srl         $a3, $t0, 31
    ctx->pc = 0x32f120u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x32f124: 0x0  nop
    ctx->pc = 0x32f124u;
    // NOP
    // 0x32f128: 0x3010  mfhi        $a2
    ctx->pc = 0x32f128u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x32f12c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x32f12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x32f130: 0x63203  sra         $a2, $a2, 8
    ctx->pc = 0x32f130u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 8));
    // 0x32f134: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x32f134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x32f138: 0x24c67fff  addiu       $a2, $a2, 0x7FFF
    ctx->pc = 0x32f138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32767));
    // 0x32f13c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x32f13cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x32f140: 0xc4c024  and         $t8, $a2, $a0
    ctx->pc = 0x32f140u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_32f144:
    // 0x32f144: 0x2404a833  addiu       $a0, $zero, -0x57CD
    ctx->pc = 0x32f144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32f148: 0xade2016c  sw          $v0, 0x16C($t7)
    ctx->pc = 0x32f148u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 364), GPR_U32(ctx, 2));
    // 0x32f14c: 0xade40148  sw          $a0, 0x148($t7)
    ctx->pc = 0x32f14cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 328), GPR_U32(ctx, 4));
    // 0x32f150: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x32f150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
    // 0x32f154: 0xadf80144  sw          $t8, 0x144($t7)
    ctx->pc = 0x32f154u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 324), GPR_U32(ctx, 24));
    // 0x32f158: 0x9082b280  lbu         $v0, -0x4D80($a0)
    ctx->pc = 0x32f158u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294947456)));
    // 0x32f15c: 0xadea0150  sw          $t2, 0x150($t7)
    ctx->pc = 0x32f15cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 336), GPR_U32(ctx, 10));
    // 0x32f160: 0xadeb0154  sw          $t3, 0x154($t7)
    ctx->pc = 0x32f160u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 340), GPR_U32(ctx, 11));
    // 0x32f164: 0xadee0160  sw          $t6, 0x160($t7)
    ctx->pc = 0x32f164u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 352), GPR_U32(ctx, 14));
    // 0x32f168: 0xaded0164  sw          $t5, 0x164($t7)
    ctx->pc = 0x32f168u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 356), GPR_U32(ctx, 13));
    // 0x32f16c: 0xadec0168  sw          $t4, 0x168($t7)
    ctx->pc = 0x32f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 360), GPR_U32(ctx, 12));
    // 0x32f170: 0xade30170  sw          $v1, 0x170($t7)
    ctx->pc = 0x32f170u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 368), GPR_U32(ctx, 3));
    // 0x32f174: 0xade0014c  sw          $zero, 0x14C($t7)
    ctx->pc = 0x32f174u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 332), GPR_U32(ctx, 0));
    // 0x32f178: 0xade00158  sw          $zero, 0x158($t7)
    ctx->pc = 0x32f178u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 344), GPR_U32(ctx, 0));
    // 0x32f17c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32F17Cu;
    {
        const bool branch_taken_0x32f17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F17Cu;
            // 0x32f180: 0xade0015c  sw          $zero, 0x15C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f17c) {
            ctx->pc = 0x32F1C8u;
            goto label_32f1c8;
        }
    }
    ctx->pc = 0x32F184u;
    // 0x32f184: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x32f184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
    // 0x32f188: 0x24a48000  addiu       $a0, $a1, -0x8000
    ctx->pc = 0x32f188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x32f18c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x32f18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x32f190: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x32f190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x32f194: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32f194u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x32f198: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x32f198u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x32f19c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x32f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x32f1a0: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x32f1a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x32f1a4: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x32f1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x32f1a8: 0x0  nop
    ctx->pc = 0x32f1a8u;
    // NOP
    // 0x32f1ac: 0x1810  mfhi        $v1
    ctx->pc = 0x32f1acu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32f1b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x32f1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x32f1b4: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x32f1b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x32f1b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32f1bc: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x32f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x32f1c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32f1c4: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x32f1c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_32f1c8:
    // 0x32f1c8: 0x2402a833  addiu       $v0, $zero, -0x57CD
    ctx->pc = 0x32f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x32f1cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x32f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x32f1d0: 0xade20178  sw          $v0, 0x178($t7)
    ctx->pc = 0x32f1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 376), GPR_U32(ctx, 2));
    // 0x32f1d4: 0x34640018  ori         $a0, $v1, 0x18
    ctx->pc = 0x32f1d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24);
    // 0x32f1d8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32f1dc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x32f1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x32f1e0: 0x7c40e500  sq          $zero, -0x1B00($v0)
    ctx->pc = 0x32f1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294960384), GPR_VEC(ctx, 0));
    // 0x32f1e4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32f1e8: 0xac64e500  sw          $a0, -0x1B00($v1)
    ctx->pc = 0x32f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960384), GPR_U32(ctx, 4));
    // 0x32f1ec: 0x7c40e690  sq          $zero, -0x1970($v0)
    ctx->pc = 0x32f1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294960784), GPR_VEC(ctx, 0));
    // 0x32f1f0: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x32f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x32f1f4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x32f1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x32f1f8: 0xade50174  sw          $a1, 0x174($t7)
    ctx->pc = 0x32f1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 372), GPR_U32(ctx, 5));
    // 0x32f1fc: 0xade0017c  sw          $zero, 0x17C($t7)
    ctx->pc = 0x32f1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 380), GPR_U32(ctx, 0));
    // 0x32f200: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x32f200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f204: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x32F204u;
    SET_GPR_U32(ctx, 31, 0x32F20Cu);
    ctx->pc = 0x32F208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F204u;
            // 0x32f208: 0xac43e690  sw          $v1, -0x1970($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960784), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F20Cu; }
        if (ctx->pc != 0x32F20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F20Cu; }
        if (ctx->pc != 0x32F20Cu) { return; }
    }
    ctx->pc = 0x32F20Cu;
label_32f20c:
    // 0x32f20c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32f210: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x32f210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x32f214: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x32f214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x32f218: 0xc040a04  jal         func_102810
    ctx->pc = 0x32F218u;
    SET_GPR_U32(ctx, 31, 0x32F220u);
    ctx->pc = 0x32F21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32F218u;
            // 0x32f21c: 0x24a5e500  addiu       $a1, $a1, -0x1B00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (runtime->hasFunction(0x102810u)) {
        auto targetFn = runtime->lookupFunction(0x102810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F220u; }
        if (ctx->pc != 0x32F220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102810_0x102810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32F220u; }
        if (ctx->pc != 0x32F220u) { return; }
    }
    ctx->pc = 0x32F220u;
label_32f220:
    // 0x32f220: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x32f220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_32f224:
    // 0x32f224: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x32f224u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x32f228: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x32f228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x32f22c: 0x0  nop
    ctx->pc = 0x32f22cu;
    // NOP
    // 0x32f230: 0x0  nop
    ctx->pc = 0x32f230u;
    // NOP
    // 0x32f234: 0x0  nop
    ctx->pc = 0x32f234u;
    // NOP
    // 0x32f238: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32F238u;
    {
        const bool branch_taken_0x32f238 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f238) {
            ctx->pc = 0x32F224u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_32f224;
        }
    }
    ctx->pc = 0x32F240u;
    // 0x32f240: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32f240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f244: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32f244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f248: 0x3e00008  jr          $ra
    ctx->pc = 0x32F248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32F248u;
            // 0x32f24c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32F250u;
    ctx->pc = 0x32f250u;
}
