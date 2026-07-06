#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ADE30
// Address: 0x1ade30 - 0x1ae720
void sub_001ADE30_0x1ade30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADE30_0x1ade30");
#endif

    switch (ctx->pc) {
        case 0x1adea0u: goto label_1adea0;
        case 0x1adf00u: goto label_1adf00;
        case 0x1ae010u: goto label_1ae010;
        case 0x1ae0a0u: goto label_1ae0a0;
        case 0x1ae170u: goto label_1ae170;
        case 0x1ae3d8u: goto label_1ae3d8;
        case 0x1ae460u: goto label_1ae460;
        case 0x1ae530u: goto label_1ae530;
        default: break;
    }

    ctx->pc = 0x1ade30u;

    // 0x1ade30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ade30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ade34: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x1ade34u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1ade38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ade38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ade3c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x1ade3cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x1ade40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ade40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ade44: 0x88c03  sra         $s1, $t0, 16
    ctx->pc = 0x1ade44u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 8), 16));
    // 0x1ade48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ade48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ade4c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x1ade4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ade50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ade54: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ade54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ade58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ade5c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1ade5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade60: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ade60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ade64: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x1ade64u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x1ade68: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ade68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1ade6c: 0xbb403  sra         $s6, $t3, 16
    ctx->pc = 0x1ade6cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 11), 16));
    // 0x1ade70: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1ade70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1ade74: 0x98403  sra         $s0, $t1, 16
    ctx->pc = 0x1ade74u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 9), 16));
    // 0x1ade78: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1ade78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1ade7c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x1ade7cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade80: 0x87b50050  lh          $s5, 0x50($sp)
    ctx->pc = 0x1ade80u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ade84: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ade84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ade88: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x1ade88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ade8c: 0x1a600051  blez        $s3, . + 4 + (0x51 << 2)
    ctx->pc = 0x1ADE8Cu;
    {
        const bool branch_taken_0x1ade8c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1ADE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADE8Cu;
            // 0x1ade90: 0x868e0002  lh          $t6, 0x2($s4) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ade8c) {
            ctx->pc = 0x1ADFD4u;
            goto label_1adfd4;
        }
    }
    ctx->pc = 0x1ADE94u;
    // 0x1ade94: 0x241eff00  addiu       $fp, $zero, -0x100
    ctx->pc = 0x1ade94u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1ade98: 0x3c17003e  lui         $s7, 0x3E
    ctx->pc = 0x1ade98u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)62 << 16));
    // 0x1ade9c: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x1ade9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_1adea0:
    // 0x1adea0: 0x91a40001  lbu         $a0, 0x1($t5)
    ctx->pc = 0x1adea0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x1adea4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1adea4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1adea8: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x1adea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x1adeac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1adeacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1adeb0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1adeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1adeb4: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1adeb4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1adeb8: 0x30838000  andi        $v1, $a0, 0x8000
    ctx->pc = 0x1adeb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x1adebc: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1ADEBCu;
    {
        const bool branch_taken_0x1adebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADEBCu;
            // 0x1adec0: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adebc) {
            ctx->pc = 0x1ADFE0u;
            goto label_1adfe0;
        }
    }
    ctx->pc = 0x1ADEC4u;
    // 0x1adec4: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1adec4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1adec8: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x1adec8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x1adecc: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x1adeccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1aded0: 0x3408ffff  ori         $t0, $zero, 0xFFFF
    ctx->pc = 0x1aded0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1aded4: 0x563818  mult        $a3, $v0, $s6
    ctx->pc = 0x1aded4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1aded8: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x1aded8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x1adedc: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x1adedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x1adee0: 0x24197fff  addiu       $t9, $zero, 0x7FFF
    ctx->pc = 0x1adee0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1adee4: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x1adee4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1adee8: 0x26eb7338  addiu       $t3, $s7, 0x7338
    ctx->pc = 0x1adee8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 23), 29496));
    // 0x1adeec: 0xf51821  addu        $v1, $a3, $s5
    ctx->pc = 0x1adeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
    // 0x1adef0: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1adef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1adef4: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1adef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1adef8: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1adef8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1adefc: 0x0  nop
    ctx->pc = 0x1adefcu;
    // NOP
label_1adf00:
    // 0x1adf00: 0x91a30000  lbu         $v1, 0x0($t5)
    ctx->pc = 0x1adf00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1adf04: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x1adf04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x1adf08: 0x20e1018  mult        $v0, $s0, $t6
    ctx->pc = 0x1adf08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1adf0c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x1adf0cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf10: 0x72252018  mult1       $a0, $s1, $a1
    ctx->pc = 0x1adf10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1adf14: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1adf14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1adf18: 0x32f03  sra         $a1, $v1, 28
    ctx->pc = 0x1adf18u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 28));
    // 0x1adf1c: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x1adf1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x1adf20: 0xaf2818  mult        $a1, $a1, $t7
    ctx->pc = 0x1adf20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1adf24: 0x20ec018  mult        $t8, $s0, $t6
    ctx->pc = 0x1adf24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
    // 0x1adf28: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1adf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1adf2c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1adf2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1adf30: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x1adf30u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x1adf34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1adf34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1adf38: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1adf38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1adf3c: 0x4b6021  addu        $t4, $v0, $t3
    ctx->pc = 0x1adf3cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1adf40: 0x891021  addu        $v0, $a0, $t1
    ctx->pc = 0x1adf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1adf44: 0x28838000  slti        $v1, $a0, -0x8000
    ctx->pc = 0x1adf44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1adf48: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x1adf48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1adf4c: 0x324282a  slt         $a1, $t9, $a0
    ctx->pc = 0x1adf4cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1adf50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADF50u;
    {
        const bool branch_taken_0x1adf50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF50u;
            // 0x1adf54: 0x38630000  xori        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf50) {
            ctx->pc = 0x1ADF64u;
            goto label_1adf64;
        }
    }
    ctx->pc = 0x1ADF58u;
    // 0x1adf58: 0x325200b  movn        $a0, $t9, $a1
    ctx->pc = 0x1adf58u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 25));
    // 0x1adf5c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1adf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1adf60: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1adf60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_1adf64:
    // 0x1adf64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1adf64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf68: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1adf68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1adf6c: 0x2251018  mult        $v0, $s1, $a1
    ctx->pc = 0x1adf6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1adf70: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x1adf70u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1adf74: 0x6f2018  mult        $a0, $v1, $t7
    ctx->pc = 0x1adf74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1adf78: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x1adf78u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adf7c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1adf7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x1adf80: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x1adf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x1adf84: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x1adf84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x1adf88: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1adf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1adf8c: 0x891821  addu        $v1, $a0, $t1
    ctx->pc = 0x1adf8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1adf90: 0x28828000  slti        $v0, $a0, -0x8000
    ctx->pc = 0x1adf90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1adf94: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x1adf94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1adf98: 0x324282a  slt         $a1, $t9, $a0
    ctx->pc = 0x1adf98u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1adf9c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADF9Cu;
    {
        const bool branch_taken_0x1adf9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADF9Cu;
            // 0x1adfa0: 0x384c0000  xori        $t4, $v0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adf9c) {
            ctx->pc = 0x1ADFB0u;
            goto label_1adfb0;
        }
    }
    ctx->pc = 0x1ADFA4u;
    // 0x1adfa4: 0x325200b  movn        $a0, $t9, $a1
    ctx->pc = 0x1adfa4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 25));
    // 0x1adfa8: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1adfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1adfac: 0x4c200b  movn        $a0, $v0, $t4
    ctx->pc = 0x1adfacu;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_1adfb0:
    // 0x1adfb0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1adfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfb4: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x1adfb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x1adfb8: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x1adfb8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x1adfbc: 0x4e1ffd0  bgez        $a3, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1ADFBCu;
    {
        const bool branch_taken_0x1adfbc = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1ADFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADFBCu;
            // 0x1adfc0: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adfbc) {
            ctx->pc = 0x1ADF00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1adf00;
        }
    }
    ctx->pc = 0x1ADFC4u;
    // 0x1adfc4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1adfc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1adfc8: 0x153102a  slt         $v0, $t2, $s3
    ctx->pc = 0x1adfc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1adfcc: 0x5440ffb4  bnel        $v0, $zero, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1ADFCCu;
    {
        const bool branch_taken_0x1adfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1adfcc) {
            ctx->pc = 0x1ADFD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ADFCCu;
            // 0x1adfd0: 0x95a30000  lhu         $v1, 0x0($t5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ADEA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1adea0;
        }
    }
    ctx->pc = 0x1ADFD4u;
label_1adfd4:
    // 0x1adfd4: 0xa68e0002  sh          $t6, 0x2($s4)
    ctx->pc = 0x1adfd4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 14));
    // 0x1adfd8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1adfd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adfdc: 0xa6850000  sh          $a1, 0x0($s4)
    ctx->pc = 0x1adfdcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 5));
label_1adfe0:
    // 0x1adfe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adfe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adfe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1adfe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1adfe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1adfe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adfec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1adfecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1adff0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1adff0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adff4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1adff4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1adff8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1adff8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1adffc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1adffcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae000: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1ae000u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae004: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE004u;
            // 0x1ae008: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE00Cu;
    // 0x1ae00c: 0x0  nop
    ctx->pc = 0x1ae00cu;
    // NOP
label_1ae010:
    // 0x1ae010: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x1ae010u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1ae014: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ae014u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ae018: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ae018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ae01c: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x1ae01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x1ae020: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1ae020u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1ae024: 0x87a30078  lh          $v1, 0x78($sp)
    ctx->pc = 0x1ae024u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ae028: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1ae028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1ae02c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1ae02cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae030: 0x87a20080  lh          $v0, 0x80($sp)
    ctx->pc = 0x1ae030u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ae034: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x1ae034u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x1ae038: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ae038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ae03c: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x1ae03cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x1ae040: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1ae040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1ae044: 0xa9c03  sra         $s3, $t2, 16
    ctx->pc = 0x1ae044u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 10), 16));
    // 0x1ae048: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1ae048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1ae04c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1ae04cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae050: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1ae050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1ae054: 0xb9403  sra         $s2, $t3, 16
    ctx->pc = 0x1ae054u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 11), 16));
    // 0x1ae058: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ae058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ae05c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x1ae05cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae060: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1ae060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1ae064: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ae064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ae068: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1ae068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1ae06c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1ae06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1ae070: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1ae070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1ae074: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x1ae074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x1ae078: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1ae078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1ae07c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1ae07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1ae080: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1ae080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ae084: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1ae084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ae088: 0x84f80000  lh          $t8, 0x0($a3)
    ctx->pc = 0x1ae088u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ae08c: 0x84ec0002  lh          $t4, 0x2($a3)
    ctx->pc = 0x1ae08cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1ae090: 0x84b90000  lh          $t9, 0x0($a1)
    ctx->pc = 0x1ae090u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ae094: 0x18c000bd  blez        $a2, . + 4 + (0xBD << 2)
    ctx->pc = 0x1AE094u;
    {
        const bool branch_taken_0x1ae094 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1AE098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE094u;
            // 0x1ae098: 0x84b10002  lh          $s1, 0x2($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae094) {
            ctx->pc = 0x1AE38Cu;
            goto label_1ae38c;
        }
    }
    ctx->pc = 0x1AE09Cu;
    // 0x1ae09c: 0x0  nop
    ctx->pc = 0x1ae09cu;
    // NOP
label_1ae0a0:
    // 0x1ae0a0: 0x95e30000  lhu         $v1, 0x0($t7)
    ctx->pc = 0x1ae0a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ae0a4: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1ae0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1ae0a8: 0x91e40001  lbu         $a0, 0x1($t7)
    ctx->pc = 0x1ae0a8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x1ae0ac: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1ae0acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ae0b0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1ae0b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1ae0b4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ae0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ae0b8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ae0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ae0bc: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x1ae0bcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1ae0c0: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x1ae0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x1ae0c4: 0x146000b8  bnez        $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x1AE0C4u;
    {
        const bool branch_taken_0x1ae0c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE0C4u;
            // 0x1ae0c8: 0x171040  sll         $v0, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae0c4) {
            ctx->pc = 0x1AE3A8u;
            goto label_1ae3a8;
        }
    }
    ctx->pc = 0x1AE0CCu;
    // 0x1ae0cc: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1ae0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae0d0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x1ae0d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ae0d4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1ae0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae0d8: 0xc00013  mtlo        $a2
    ctx->pc = 0x1ae0d8u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x1ae0dc: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x1ae0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1ae0e0: 0x70662000  madd        $a0, $v1, $a2
    ctx->pc = 0x1ae0e0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ae0e4: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x1ae0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x1ae0e8: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x1ae0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x1ae0ec: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1ae0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1ae0f0: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x1ae0f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ae0f4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1ae0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae0f8: 0x30867fff  andi        $a2, $a0, 0x7FFF
    ctx->pc = 0x1ae0f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x1ae0fc: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x1ae0fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ae100: 0x95e30012  lhu         $v1, 0x12($t7)
    ctx->pc = 0x1ae100u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x1ae104: 0x91e40013  lbu         $a0, 0x13($t7)
    ctx->pc = 0x1ae104u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 19)));
    // 0x1ae108: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1ae108u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ae10c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1ae10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1ae110: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ae110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ae114: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ae114u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ae118: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x1ae118u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1ae11c: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x1ae11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x1ae120: 0x146000a1  bnez        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x1AE120u;
    {
        const bool branch_taken_0x1ae120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE120u;
            // 0x1ae124: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae120) {
            ctx->pc = 0x1AE3A8u;
            goto label_1ae3a8;
        }
    }
    ctx->pc = 0x1AE128u;
    // 0x1ae128: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1ae128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1ae12c: 0x249e7338  addiu       $fp, $a0, 0x7338
    ctx->pc = 0x1ae12cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 29496));
    // 0x1ae130: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x1ae130u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x1ae134: 0x600013  mtlo        $v1
    ctx->pc = 0x1ae134u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x1ae138: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1ae138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1ae13c: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x1ae13cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ae140: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x1ae140u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ae144: 0x70661000  madd        $v0, $v1, $a2
    ctx->pc = 0x1ae144u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ae148: 0xa61826  xor         $v1, $a1, $a2
    ctx->pc = 0x1ae148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
    // 0x1ae14c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1ae14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae150: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x1ae150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x1ae154: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x1ae154u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ae158: 0x240d7fff  addiu       $t5, $zero, 0x7FFF
    ctx->pc = 0x1ae158u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1ae15c: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x1ae15cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ae160: 0x2416001e  addiu       $s6, $zero, 0x1E
    ctx->pc = 0x1ae160u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ae164: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1ae164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1ae168: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x1ae168u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ae16c: 0x0  nop
    ctx->pc = 0x1ae16cu;
    // NOP
label_1ae170:
    // 0x1ae170: 0x91e20000  lbu         $v0, 0x0($t7)
    ctx->pc = 0x1ae170u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ae174: 0x24c3018  mult        $a2, $s2, $t4
    ctx->pc = 0x1ae174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1ae178: 0x72781818  mult1       $v1, $s3, $t8
    ctx->pc = 0x1ae178u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 24); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ae17c: 0x91e40012  lbu         $a0, 0x12($t7)
    ctx->pc = 0x1ae17cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x1ae180: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ae180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1ae184: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1ae184u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1ae188: 0x22f03  sra         $a1, $v0, 28
    ctx->pc = 0x1ae188u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 28));
    // 0x1ae18c: 0x27603  sra         $t6, $v0, 24
    ctx->pc = 0x1ae18cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1ae190: 0xb52818  mult        $a1, $a1, $s5
    ctx->pc = 0x1ae190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ae194: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1ae194u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1ae198: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1ae198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1ae19c: 0x46703  sra         $t4, $a0, 28
    ctx->pc = 0x1ae19cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 4), 28));
    // 0x1ae1a0: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x1ae1a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x1ae1a4: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1ae1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ae1a8: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x1ae1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1ae1ac: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x1ae1acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ae1b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE1B0u;
    {
        const bool branch_taken_0x1ae1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1B0u;
            // 0x1ae1b4: 0x43e03  sra         $a3, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1b0) {
            ctx->pc = 0x1AE1D0u;
            goto label_1ae1d0;
        }
    }
    ctx->pc = 0x1AE1B8u;
    // 0x1ae1b8: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x1ae1b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1ae1bc: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x1ae1bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ae1c0: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x1ae1c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x1ae1c4: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1ae1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1ae1c8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1ae1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1ae1cc: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1ae1ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1ae1d0:
    // 0x1ae1d0: 0x2511018  mult        $v0, $s2, $s1
    ctx->pc = 0x1ae1d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ae1d4: 0x72791818  mult1       $v1, $s3, $t9
    ctx->pc = 0x1ae1d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 25); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ae1d8: 0x1942018  mult        $a0, $t4, $s4
    ctx->pc = 0x1ae1d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ae1dc: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x1ae1dcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae1e0: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x1ae1e0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae1e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ae1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae1e8: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x1ae1e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x1ae1ec: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1ae1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ae1f0: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x1ae1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1ae1f4: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x1ae1f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ae1f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE1F8u;
    {
        const bool branch_taken_0x1ae1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE1F8u;
            // 0x1ae1fc: 0x320882d  daddu       $s1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae1f8) {
            ctx->pc = 0x1AE218u;
            goto label_1ae218;
        }
    }
    ctx->pc = 0x1AE200u;
    // 0x1ae200: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x1ae200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1ae204: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x1ae204u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ae208: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x1ae208u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x1ae20c: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1ae20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1ae210: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1ae210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1ae214: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1ae214u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1ae218:
    // 0x1ae218: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x1ae218u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae21c: 0x3191821  addu        $v1, $t8, $t9
    ctx->pc = 0x1ae21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x1ae220: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AE220u;
    {
        const bool branch_taken_0x1ae220 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae220) {
            ctx->pc = 0x1AE224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE220u;
            // 0x1ae224: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE228u;
            goto label_1ae228;
        }
    }
    ctx->pc = 0x1AE228u;
label_1ae228:
    // 0x1ae228: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1ae228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ae22c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ae22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae230: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x1ae230u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ae234: 0x1012  mflo        $v0
    ctx->pc = 0x1ae234u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ae238: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ae238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae23c: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x1ae23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1ae240: 0x163182b  sltu        $v1, $t3, $v1
    ctx->pc = 0x1ae240u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ae244: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE244u;
    {
        const bool branch_taken_0x1ae244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE244u;
            // 0x1ae248: 0x31c2000f  andi        $v0, $t6, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae244) {
            ctx->pc = 0x1AE268u;
            goto label_1ae268;
        }
    }
    ctx->pc = 0x1AE24Cu;
    // 0x1ae24c: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x1ae24cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1ae250: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x1ae250u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ae254: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x1ae254u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x1ae258: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1ae258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1ae25c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1ae25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1ae260: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1ae260u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x1ae264: 0x31c2000f  andi        $v0, $t6, 0xF
    ctx->pc = 0x1ae264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
label_1ae268:
    // 0x1ae268: 0x24c2818  mult        $a1, $s2, $t4
    ctx->pc = 0x1ae268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ae26c: 0x72782018  mult1       $a0, $s3, $t8
    ctx->pc = 0x1ae26cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 24); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ae270: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae274: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1ae274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1ae278: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x1ae278u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ae27c: 0x8c4e0000  lw          $t6, 0x0($v0)
    ctx->pc = 0x1ae27cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae280: 0x30e3000f  andi        $v1, $a3, 0xF
    ctx->pc = 0x1ae280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x1ae284: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x1ae284u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ae288: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x1ae288u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1ae28c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1ae28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ae290: 0x1d52818  mult        $a1, $t6, $s5
    ctx->pc = 0x1ae290u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ae294: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x1ae294u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x1ae298: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ae298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ae29c: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x1ae29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1ae2a0: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x1ae2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x1ae2a4: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x1ae2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ae2a8: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x1ae2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1ae2ac: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x1ae2acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ae2b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE2B0u;
    {
        const bool branch_taken_0x1ae2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2B0u;
            // 0x1ae2b4: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae2b0) {
            ctx->pc = 0x1AE2D0u;
            goto label_1ae2d0;
        }
    }
    ctx->pc = 0x1AE2B8u;
    // 0x1ae2b8: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x1ae2b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1ae2bc: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x1ae2bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ae2c0: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x1ae2c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x1ae2c4: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1ae2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1ae2c8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1ae2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1ae2cc: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1ae2ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1ae2d0:
    // 0x1ae2d0: 0x2511018  mult        $v0, $s2, $s1
    ctx->pc = 0x1ae2d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ae2d4: 0x72791818  mult1       $v1, $s3, $t9
    ctx->pc = 0x1ae2d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 25); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ae2d8: 0xf42018  mult        $a0, $a3, $s4
    ctx->pc = 0x1ae2d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ae2dc: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x1ae2dcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae2e0: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x1ae2e0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae2e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ae2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae2e8: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x1ae2e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x1ae2ec: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1ae2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ae2f0: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x1ae2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1ae2f4: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x1ae2f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ae2f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE2F8u;
    {
        const bool branch_taken_0x1ae2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE2F8u;
            // 0x1ae2fc: 0x320882d  daddu       $s1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae2f8) {
            ctx->pc = 0x1AE318u;
            goto label_1ae318;
        }
    }
    ctx->pc = 0x1AE300u;
    // 0x1ae300: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x1ae300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1ae304: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x1ae304u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ae308: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x1ae308u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x1ae30c: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1ae30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1ae310: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1ae310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1ae314: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1ae314u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1ae318:
    // 0x1ae318: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x1ae318u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae31c: 0x3191821  addu        $v1, $t8, $t9
    ctx->pc = 0x1ae31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x1ae320: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AE320u;
    {
        const bool branch_taken_0x1ae320 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae320) {
            ctx->pc = 0x1AE324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE320u;
            // 0x1ae324: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AE328u;
            goto label_1ae328;
        }
    }
    ctx->pc = 0x1AE328u;
label_1ae328:
    // 0x1ae328: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1ae328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ae32c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ae32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae330: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x1ae330u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ae334: 0x1012  mflo        $v0
    ctx->pc = 0x1ae334u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ae338: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ae338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae33c: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x1ae33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1ae340: 0x163182b  sltu        $v1, $t3, $v1
    ctx->pc = 0x1ae340u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ae344: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE344u;
    {
        const bool branch_taken_0x1ae344 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE344u;
            // 0x1ae348: 0x26d6fffe  addiu       $s6, $s6, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae344) {
            ctx->pc = 0x1AE364u;
            goto label_1ae364;
        }
    }
    ctx->pc = 0x1AE34Cu;
    // 0x1ae34c: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x1ae34cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1ae350: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x1ae350u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1ae354: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x1ae354u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x1ae358: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x1ae358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1ae35c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1ae35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1ae360: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1ae360u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1ae364:
    // 0x1ae364: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x1ae364u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ae368: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x1ae368u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ae36c: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x1ae36cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x1ae370: 0x6c1ff7f  bgez        $s6, . + 4 + (-0x81 << 2)
    ctx->pc = 0x1AE370u;
    {
        const bool branch_taken_0x1ae370 = (GPR_S32(ctx, 22) >= 0);
        ctx->pc = 0x1AE374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE370u;
            // 0x1ae374: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae370) {
            ctx->pc = 0x1AE170u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ae170;
        }
    }
    ctx->pc = 0x1AE378u;
    // 0x1ae378: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1ae378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ae37c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1ae37cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1ae380: 0x2e3102a  slt         $v0, $s7, $v1
    ctx->pc = 0x1ae380u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ae384: 0x1440ff46  bnez        $v0, . + 4 + (-0xBA << 2)
    ctx->pc = 0x1AE384u;
    {
        const bool branch_taken_0x1ae384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE384u;
            // 0x1ae388: 0x25ef0012  addiu       $t7, $t7, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae384) {
            ctx->pc = 0x1AE0A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ae0a0;
        }
    }
    ctx->pc = 0x1AE38Cu;
label_1ae38c:
    // 0x1ae38c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1ae38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ae390: 0xa4ac0002  sh          $t4, 0x2($a1)
    ctx->pc = 0x1ae390u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 12));
    // 0x1ae394: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ae394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae398: 0xa4b80000  sh          $t8, 0x0($a1)
    ctx->pc = 0x1ae398u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x1ae39c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1ae39cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ae3a0: 0xa4d10002  sh          $s1, 0x2($a2)
    ctx->pc = 0x1ae3a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x1ae3a4: 0xa4d90000  sh          $t9, 0x0($a2)
    ctx->pc = 0x1ae3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 25));
label_1ae3a8:
    // 0x1ae3a8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ae3a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae3ac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1ae3acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ae3b0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ae3b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae3b4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1ae3b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae3b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ae3b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae3bc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1ae3bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ae3c0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1ae3c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae3c4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1ae3c4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ae3c8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1ae3c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE3CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE3CCu;
            // 0x1ae3d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE3D4u;
    // 0x1ae3d4: 0x0  nop
    ctx->pc = 0x1ae3d4u;
    // NOP
label_1ae3d8:
    // 0x1ae3d8: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x1ae3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1ae3dc: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ae3dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ae3e0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1ae3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ae3e4: 0x87a30078  lh          $v1, 0x78($sp)
    ctx->pc = 0x1ae3e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ae3e8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1ae3e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1ae3ec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ae3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ae3f0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1ae3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1ae3f4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x1ae3f4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae3f8: 0x87a20080  lh          $v0, 0x80($sp)
    ctx->pc = 0x1ae3f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ae3fc: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x1ae3fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x1ae400: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1ae400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1ae404: 0xa9c03  sra         $s3, $t2, 16
    ctx->pc = 0x1ae404u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 10), 16));
    // 0x1ae408: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ae408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ae40c: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x1ae40cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x1ae410: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1ae410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1ae414: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x1ae414u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae418: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ae418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ae41c: 0xb9403  sra         $s2, $t3, 16
    ctx->pc = 0x1ae41cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 11), 16));
    // 0x1ae420: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1ae420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1ae424: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1ae424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1ae428: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1ae428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1ae42c: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x1ae42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x1ae430: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1ae430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1ae434: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x1ae434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x1ae438: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x1ae438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x1ae43c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1ae43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1ae440: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ae440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1ae444: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1ae444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1ae448: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1ae448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ae44c: 0x84ed0000  lh          $t5, 0x0($a3)
    ctx->pc = 0x1ae44cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ae450: 0x84ea0002  lh          $t2, 0x2($a3)
    ctx->pc = 0x1ae450u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1ae454: 0x852e0000  lh          $t6, 0x0($t1)
    ctx->pc = 0x1ae454u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1ae458: 0x1880009f  blez        $a0, . + 4 + (0x9F << 2)
    ctx->pc = 0x1AE458u;
    {
        const bool branch_taken_0x1ae458 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1AE45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE458u;
            // 0x1ae45c: 0x85300002  lh          $s0, 0x2($t1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae458) {
            ctx->pc = 0x1AE6D8u;
            goto label_1ae6d8;
        }
    }
    ctx->pc = 0x1AE460u;
label_1ae460:
    // 0x1ae460: 0x95e30000  lhu         $v1, 0x0($t7)
    ctx->pc = 0x1ae460u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ae464: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x1ae464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1ae468: 0x91e40001  lbu         $a0, 0x1($t7)
    ctx->pc = 0x1ae468u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x1ae46c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1ae46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ae470: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1ae470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ae474: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1ae474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1ae478: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ae478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ae47c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1ae47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ae480: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ae480u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ae484: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x1ae484u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1ae488: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x1ae488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x1ae48c: 0x14600099  bnez        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x1AE48Cu;
    {
        const bool branch_taken_0x1ae48c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE48Cu;
            // 0x1ae490: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae48c) {
            ctx->pc = 0x1AE6F4u;
            goto label_1ae6f4;
        }
    }
    ctx->pc = 0x1AE494u;
    // 0x1ae494: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1ae494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae498: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1ae498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae49c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1ae49cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae4a0: 0xc00013  mtlo        $a2
    ctx->pc = 0x1ae4a0u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x1ae4a4: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x1ae4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1ae4a8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1ae4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ae4ac: 0x70662000  madd        $a0, $v1, $a2
    ctx->pc = 0x1ae4acu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ae4b0: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x1ae4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x1ae4b4: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x1ae4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x1ae4b8: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1ae4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1ae4bc: 0x24770001  addiu       $s7, $v1, 0x1
    ctx->pc = 0x1ae4bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ae4c0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1ae4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae4c4: 0x30867fff  andi        $a2, $a0, 0x7FFF
    ctx->pc = 0x1ae4c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x1ae4c8: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x1ae4c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x1ae4cc: 0x95e30012  lhu         $v1, 0x12($t7)
    ctx->pc = 0x1ae4ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x1ae4d0: 0x91e40013  lbu         $a0, 0x13($t7)
    ctx->pc = 0x1ae4d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 19)));
    // 0x1ae4d4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1ae4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ae4d8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1ae4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1ae4dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ae4dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ae4e0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ae4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ae4e4: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x1ae4e4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1ae4e8: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x1ae4e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x1ae4ec: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x1AE4ECu;
    {
        const bool branch_taken_0x1ae4ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE4ECu;
            // 0x1ae4f0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4ec) {
            ctx->pc = 0x1AE6F4u;
            goto label_1ae6f4;
        }
    }
    ctx->pc = 0x1AE4F4u;
    // 0x1ae4f4: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x1ae4f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x1ae4f8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1ae4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae4fc: 0x34168000  ori         $s6, $zero, 0x8000
    ctx->pc = 0x1ae4fcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ae500: 0x600013  mtlo        $v1
    ctx->pc = 0x1ae500u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x1ae504: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1ae504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1ae508: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x1ae508u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ae50c: 0x24187fff  addiu       $t8, $zero, 0x7FFF
    ctx->pc = 0x1ae50cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x1ae510: 0x70661000  madd        $v0, $v1, $a2
    ctx->pc = 0x1ae510u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ae514: 0xa61826  xor         $v1, $a1, $a2
    ctx->pc = 0x1ae514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
    // 0x1ae518: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x1ae518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x1ae51c: 0x241e001e  addiu       $fp, $zero, 0x1E
    ctx->pc = 0x1ae51cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1ae520: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x1ae520u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ae524: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1ae524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1ae528: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1ae528u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ae52c: 0x0  nop
    ctx->pc = 0x1ae52cu;
    // NOP
label_1ae530:
    // 0x1ae530: 0x91e30000  lbu         $v1, 0x0($t7)
    ctx->pc = 0x1ae530u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ae534: 0x24a1018  mult        $v0, $s2, $t2
    ctx->pc = 0x1ae534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ae538: 0x726d2018  mult1       $a0, $s3, $t5
    ctx->pc = 0x1ae538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ae53c: 0x91e60012  lbu         $a2, 0x12($t7)
    ctx->pc = 0x1ae53cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x1ae540: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1ae540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1ae544: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x1ae544u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae548: 0x32f03  sra         $a1, $v1, 28
    ctx->pc = 0x1ae548u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 28));
    // 0x1ae54c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x1ae54cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x1ae550: 0xb72818  mult        $a1, $a1, $s7
    ctx->pc = 0x1ae550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ae554: 0x36603  sra         $t4, $v1, 24
    ctx->pc = 0x1ae554u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 24));
    // 0x1ae558: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1ae558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ae55c: 0x3182000f  andi        $v0, $t4, 0xF
    ctx->pc = 0x1ae55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
    // 0x1ae560: 0x61f03  sra         $v1, $a2, 28
    ctx->pc = 0x1ae560u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 28));
    // 0x1ae564: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x1ae564u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x1ae568: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x1ae568u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x1ae56c: 0x746018  mult        $t4, $v1, $s4
    ctx->pc = 0x1ae56cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x1ae570: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x1ae570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x1ae574: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1ae574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ae578: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ae578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ae57c: 0x24637338  addiu       $v1, $v1, 0x7338
    ctx->pc = 0x1ae57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29496));
    // 0x1ae580: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x1ae580u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ae584: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x1ae584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x1ae588: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x1ae588u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1ae58c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1ae58cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ae590: 0x24a8818  mult        $s1, $s2, $t2
    ctx->pc = 0x1ae590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x1ae594: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1ae594u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1ae598: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x1ae598u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ae59c: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x1ae59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x1ae5a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE5A0u;
    {
        const bool branch_taken_0x1ae5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE5A0u;
            // 0x1ae5a4: 0x30c9000f  andi        $t1, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5a0) {
            ctx->pc = 0x1AE5B4u;
            goto label_1ae5b4;
        }
    }
    ctx->pc = 0x1AE5A8u;
    // 0x1ae5a8: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x1ae5a8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x1ae5ac: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1ae5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1ae5b0: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1ae5b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_1ae5b4:
    // 0x1ae5b4: 0x2502018  mult        $a0, $s2, $s0
    ctx->pc = 0x1ae5b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ae5b8: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x1ae5b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5bc: 0x726e1018  mult1       $v0, $s3, $t6
    ctx->pc = 0x1ae5bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 14); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ae5c0: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1ae5c0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5c4: 0x26d1818  mult        $v1, $s3, $t5
    ctx->pc = 0x1ae5c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ae5c8: 0x2503818  mult        $a3, $s2, $s0
    ctx->pc = 0x1ae5c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1ae5cc: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x1ae5ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae5d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1ae5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ae5d4: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x1ae5d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x1ae5d8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1ae5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1ae5dc: 0x4c2821  addu        $a1, $v0, $t4
    ctx->pc = 0x1ae5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x1ae5e0: 0x33303  sra         $a2, $v1, 12
    ctx->pc = 0x1ae5e0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 12));
    // 0x1ae5e4: 0xb61821  addu        $v1, $a1, $s6
    ctx->pc = 0x1ae5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x1ae5e8: 0x28a28000  slti        $v0, $a1, -0x8000
    ctx->pc = 0x1ae5e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1ae5ec: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x1ae5ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ae5f0: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x1ae5f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ae5f4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE5F4u;
    {
        const bool branch_taken_0x1ae5f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE5F4u;
            // 0x1ae5f8: 0x384c0000  xori        $t4, $v0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae5f4) {
            ctx->pc = 0x1AE608u;
            goto label_1ae608;
        }
    }
    ctx->pc = 0x1AE5FCu;
    // 0x1ae5fc: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x1ae5fcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x1ae600: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1ae600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1ae604: 0x4c280b  movn        $a1, $v0, $t4
    ctx->pc = 0x1ae604u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_1ae608:
    // 0x1ae608: 0x8d6c0000  lw          $t4, 0x0($t3)
    ctx->pc = 0x1ae608u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1ae60c: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x1ae60cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae610: 0x26e1018  mult        $v0, $s3, $t6
    ctx->pc = 0x1ae610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1ae614: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x1ae614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x1ae618: 0x1972018  mult        $a0, $t4, $s7
    ctx->pc = 0x1ae618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1ae61c: 0x24a57338  addiu       $a1, $a1, 0x7338
    ctx->pc = 0x1ae61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29496));
    // 0x1ae620: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x1ae620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x1ae624: 0xa72d0000  sh          $t5, 0x0($t9)
    ctx->pc = 0x1ae624u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x1ae628: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ae628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ae62c: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x1ae62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae630: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1ae630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1ae634: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x1ae634u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x1ae638: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x1ae638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1ae63c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1ae63cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae640: 0x26303  sra         $t4, $v0, 12
    ctx->pc = 0x1ae640u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 2), 12));
    // 0x1ae644: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x1ae644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x1ae648: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x1ae648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1ae64c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1ae64cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ae650: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x1ae650u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x1ae654: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x1ae654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x1ae658: 0xd43018  mult        $a2, $a2, $s4
    ctx->pc = 0x1ae658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1ae65c: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x1ae65cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ae660: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE660u;
    {
        const bool branch_taken_0x1ae660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE660u;
            // 0x1ae664: 0x38630000  xori        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae660) {
            ctx->pc = 0x1AE674u;
            goto label_1ae674;
        }
    }
    ctx->pc = 0x1AE668u;
    // 0x1ae668: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x1ae668u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x1ae66c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1ae66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1ae670: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1ae670u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_1ae674:
    // 0x1ae674: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1ae674u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae678: 0x1862821  addu        $a1, $t4, $a2
    ctx->pc = 0x1ae678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x1ae67c: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x1ae67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x1ae680: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x1ae680u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x1ae684: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1ae684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ae688: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x1ae688u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ae68c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE68Cu;
    {
        const bool branch_taken_0x1ae68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE68Cu;
            // 0x1ae690: 0x38630000  xori        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae68c) {
            ctx->pc = 0x1AE6A0u;
            goto label_1ae6a0;
        }
    }
    ctx->pc = 0x1AE694u;
    // 0x1ae694: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x1ae694u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x1ae698: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x1ae698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x1ae69c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1ae69cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_1ae6a0:
    // 0x1ae6a0: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x1ae6a0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae6a4: 0x27defffe  addiu       $fp, $fp, -0x2
    ctx->pc = 0x1ae6a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967294));
    // 0x1ae6a8: 0xa72d0000  sh          $t5, 0x0($t9)
    ctx->pc = 0x1ae6a8u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x1ae6ac: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x1ae6acu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x1ae6b0: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x1ae6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x1ae6b4: 0x7c1ff9e  bgez        $fp, . + 4 + (-0x62 << 2)
    ctx->pc = 0x1AE6B4u;
    {
        const bool branch_taken_0x1ae6b4 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x1AE6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE6B4u;
            // 0x1ae6b8: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6b4) {
            ctx->pc = 0x1AE530u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ae530;
        }
    }
    ctx->pc = 0x1AE6BCu;
    // 0x1ae6bc: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1ae6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1ae6c0: 0x25ef0012  addiu       $t7, $t7, 0x12
    ctx->pc = 0x1ae6c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18));
    // 0x1ae6c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ae6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ae6c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1ae6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ae6cc: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x1ae6ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ae6d0: 0x1440ff63  bnez        $v0, . + 4 + (-0x9D << 2)
    ctx->pc = 0x1AE6D0u;
    {
        const bool branch_taken_0x1ae6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE6D0u;
            // 0x1ae6d4: 0xafa60014  sw          $a2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae6d0) {
            ctx->pc = 0x1AE460u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ae460;
        }
    }
    ctx->pc = 0x1AE6D8u;
label_1ae6d8:
    // 0x1ae6d8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1ae6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ae6dc: 0xa48a0002  sh          $t2, 0x2($a0)
    ctx->pc = 0x1ae6dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x1ae6e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ae6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae6e4: 0xa48d0000  sh          $t5, 0x0($a0)
    ctx->pc = 0x1ae6e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x1ae6e8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1ae6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ae6ec: 0xa4b00002  sh          $s0, 0x2($a1)
    ctx->pc = 0x1ae6ecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x1ae6f0: 0xa4ae0000  sh          $t6, 0x0($a1)
    ctx->pc = 0x1ae6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 14));
label_1ae6f4:
    // 0x1ae6f4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ae6f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae6f8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1ae6f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ae6fc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ae6fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae700: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1ae700u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ae704: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ae704u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae708: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1ae708u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ae70c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1ae70cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae710: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1ae710u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ae714: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x1ae714u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae718: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AE718u;
            // 0x1ae71c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AE720u;
    ctx->pc = 0x1ae720u;
}
