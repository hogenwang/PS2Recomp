#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B3A48
// Address: 0x2b3a48 - 0x2b3cb0
void sub_002B3A48_0x2b3a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3A48_0x2b3a48");
#endif

    switch (ctx->pc) {
        case 0x2b3ab4u: goto label_2b3ab4;
        case 0x2b3ac8u: goto label_2b3ac8;
        case 0x2b3ae4u: goto label_2b3ae4;
        case 0x2b3b08u: goto label_2b3b08;
        case 0x2b3b20u: goto label_2b3b20;
        case 0x2b3b28u: goto label_2b3b28;
        case 0x2b3bc0u: goto label_2b3bc0;
        case 0x2b3bccu: goto label_2b3bcc;
        case 0x2b3bdcu: goto label_2b3bdc;
        case 0x2b3c00u: goto label_2b3c00;
        case 0x2b3c80u: goto label_2b3c80;
        default: break;
    }

    ctx->pc = 0x2b3a48u;

    // 0x2b3a48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b3a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b3a4c: 0x24021110  addiu       $v0, $zero, 0x1110
    ctx->pc = 0x2b3a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4368));
    // 0x2b3a50: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2b3a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2b3a54: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2b3a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2b3a58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b3a58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3a5c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2b3a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2b3a60: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2b3a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2b3a64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b3a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b3a68: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2b3a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2b3a6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b3a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3a70: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x2b3a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2b3a74: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x2b3a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2b3a78: 0x1482007e  bne         $a0, $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x2B3A78u;
    {
        const bool branch_taken_0x2b3a78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B3A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3A78u;
            // 0x2b3a7c: 0x8c740004  lw          $s4, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3a78) {
            ctx->pc = 0x2B3C74u;
            goto label_2b3c74;
        }
    }
    ctx->pc = 0x2B3A80u;
    // 0x2b3a80: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x2b3a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x2b3a84: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B3A84u;
    {
        const bool branch_taken_0x2b3a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3a84) {
            ctx->pc = 0x2B3A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3A84u;
            // 0x2b3a88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B3AACu;
            goto label_2b3aac;
        }
    }
    ctx->pc = 0x2B3A8Cu;
    // 0x2b3a8c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b3a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b3a90: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b3a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b3a94: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3A94u;
    {
        const bool branch_taken_0x2b3a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b3a94) {
            ctx->pc = 0x2B3A98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3A94u;
            // 0x2b3a98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B3AACu;
            goto label_2b3aac;
        }
    }
    ctx->pc = 0x2B3A9Cu;
    // 0x2b3a9c: 0x8c82008c  lw          $v0, 0x8C($a0)
    ctx->pc = 0x2b3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x2b3aa0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3AA0u;
    {
        const bool branch_taken_0x2b3aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b3aa0) {
            ctx->pc = 0x2B3AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3AA0u;
            // 0x2b3aa4: 0x8e700054  lw          $s0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B3AC0u;
            goto label_2b3ac0;
        }
    }
    ctx->pc = 0x2B3AA8u;
    // 0x2b3aa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b3aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b3aac:
    // 0x2b3aac: 0xc0aeb94  jal         func_2BAE50
    ctx->pc = 0x2B3AACu;
    SET_GPR_U32(ctx, 31, 0x2B3AB4u);
    ctx->pc = 0x2B3AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3AACu;
            // 0x2b3ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAE50u;
    if (runtime->hasFunction(0x2BAE50u)) {
        auto targetFn = runtime->lookupFunction(0x2BAE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3AB4u; }
        if (ctx->pc != 0x2B3AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAE50_0x2bae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3AB4u; }
        if (ctx->pc != 0x2B3AB4u) { return; }
    }
    ctx->pc = 0x2B3AB4u;
label_2b3ab4:
    // 0x2b3ab4: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x2B3AB4u;
    {
        const bool branch_taken_0x2b3ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3AB4u;
            // 0x2b3ab8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ab4) {
            ctx->pc = 0x2B3C88u;
            goto label_2b3c88;
        }
    }
    ctx->pc = 0x2B3ABCu;
    // 0x2b3abc: 0x8e700054  lw          $s0, 0x54($s3)
    ctx->pc = 0x2b3abcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_2b3ac0:
    // 0x2b3ac0: 0xc0a8df2  jal         func_2A37C8
    ctx->pc = 0x2B3AC0u;
    SET_GPR_U32(ctx, 31, 0x2B3AC8u);
    ctx->pc = 0x2B3AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3AC0u;
            // 0x2b3ac4: 0x26950004  addiu       $s5, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A37C8u;
    if (runtime->hasFunction(0x2A37C8u)) {
        auto targetFn = runtime->lookupFunction(0x2A37C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3AC8u; }
        if (ctx->pc != 0x2B3AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A37C8_0x2a37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3AC8u; }
        if (ctx->pc != 0x2B3AC8u) { return; }
    }
    ctx->pc = 0x2B3AC8u;
label_2b3ac8:
    // 0x2b3ac8: 0x26120064  addiu       $s2, $s0, 0x64
    ctx->pc = 0x2b3ac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x2b3acc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b3accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ad0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b3ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ad4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b3ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ad8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2b3ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b3adc: 0xc0a8e7a  jal         func_2A39E8
    ctx->pc = 0x2B3ADCu;
    SET_GPR_U32(ctx, 31, 0x2B3AE4u);
    ctx->pc = 0x2B3AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3ADCu;
            // 0x2b3ae0: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A39E8u;
    if (runtime->hasFunction(0x2A39E8u)) {
        auto targetFn = runtime->lookupFunction(0x2A39E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3AE4u; }
        if (ctx->pc != 0x2B3AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A39E8_0x2a39e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3AE4u; }
        if (ctx->pc != 0x2B3AE4u) { return; }
    }
    ctx->pc = 0x2B3AE4u;
label_2b3ae4:
    // 0x2b3ae4: 0x92430004  lbu         $v1, 0x4($s2)
    ctx->pc = 0x2b3ae4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b3ae8: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x2b3ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b3aec: 0x92440005  lbu         $a0, 0x5($s2)
    ctx->pc = 0x2b3aecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x2b3af0: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x2b3af0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x2b3af4: 0x92420007  lbu         $v0, 0x7($s2)
    ctx->pc = 0x2b3af4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
    // 0x2b3af8: 0xa2440001  sb          $a0, 0x1($s2)
    ctx->pc = 0x2b3af8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3afc: 0xa2420003  sb          $v0, 0x3($s2)
    ctx->pc = 0x2b3afcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3b00: 0xc0a8d8a  jal         func_2A3628
    ctx->pc = 0x2B3B00u;
    SET_GPR_U32(ctx, 31, 0x2B3B08u);
    ctx->pc = 0x2B3B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3B00u;
            // 0x2b3b04: 0xa2430002  sb          $v1, 0x2($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3628u;
    if (runtime->hasFunction(0x2A3628u)) {
        auto targetFn = runtime->lookupFunction(0x2A3628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3B08u; }
        if (ctx->pc != 0x2B3B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3628_0x2a3628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3B08u; }
        if (ctx->pc != 0x2B3B08u) { return; }
    }
    ctx->pc = 0x2B3B08u;
label_2b3b08:
    // 0x2b3b08: 0x26120068  addiu       $s2, $s0, 0x68
    ctx->pc = 0x2b3b08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x2b3b0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b3b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b3b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3b14: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x2b3b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2b3b18: 0xc0a8d02  jal         func_2A3408
    ctx->pc = 0x2B3B18u;
    SET_GPR_U32(ctx, 31, 0x2B3B20u);
    ctx->pc = 0x2B3B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3B18u;
            // 0x2b3b1c: 0x26920026  addiu       $s2, $s4, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 38));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3408u;
    if (runtime->hasFunction(0x2A3408u)) {
        auto targetFn = runtime->lookupFunction(0x2A3408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3B20u; }
        if (ctx->pc != 0x2B3B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3408_0x2a3408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3B20u; }
        if (ctx->pc != 0x2B3B20u) { return; }
    }
    ctx->pc = 0x2B3B20u;
label_2b3b20:
    // 0x2b3b20: 0xc0a8e0a  jal         func_2A3828
    ctx->pc = 0x2B3B20u;
    SET_GPR_U32(ctx, 31, 0x2B3B28u);
    ctx->pc = 0x2B3B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3B20u;
            // 0x2b3b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3828u;
    if (runtime->hasFunction(0x2A3828u)) {
        auto targetFn = runtime->lookupFunction(0x2A3828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3B28u; }
        if (ctx->pc != 0x2B3B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3828_0x2a3828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3B28u; }
        if (ctx->pc != 0x2B3B28u) { return; }
    }
    ctx->pc = 0x2B3B28u;
label_2b3b28:
    // 0x2b3b28: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b3b2c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2b3b2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2b3b30: 0xa2820004  sb          $v0, 0x4($s4)
    ctx->pc = 0x2b3b30u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3b34: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2b3b34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b3b38: 0xa2830005  sb          $v1, 0x5($s4)
    ctx->pc = 0x2b3b38u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b3b3c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b3b40: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x2b3b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2b3b44: 0xae62010c  sw          $v0, 0x10C($s3)
    ctx->pc = 0x2b3b44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 268), GPR_U32(ctx, 2));
    // 0x2b3b48: 0x6862006b  ldl         $v0, 0x6B($v1)
    ctx->pc = 0x2b3b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b3b4c: 0x6c620064  ldr         $v0, 0x64($v1)
    ctx->pc = 0x2b3b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b3b50: 0x68640073  ldl         $a0, 0x73($v1)
    ctx->pc = 0x2b3b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2b3b54: 0x6c64006c  ldr         $a0, 0x6C($v1)
    ctx->pc = 0x2b3b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2b3b58: 0x6865007b  ldl         $a1, 0x7B($v1)
    ctx->pc = 0x2b3b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2b3b5c: 0x6c650074  ldr         $a1, 0x74($v1)
    ctx->pc = 0x2b3b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2b3b60: 0x68660083  ldl         $a2, 0x83($v1)
    ctx->pc = 0x2b3b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b3b64: 0x6c66007c  ldr         $a2, 0x7C($v1)
    ctx->pc = 0x2b3b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b3b68: 0xb282000d  sdl         $v0, 0xD($s4)
    ctx->pc = 0x2b3b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 13); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3b6c: 0xb6820006  sdr         $v0, 0x6($s4)
    ctx->pc = 0x2b3b6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 6); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3b70: 0xb2840015  sdl         $a0, 0x15($s4)
    ctx->pc = 0x2b3b70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 21); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3b74: 0xb684000e  sdr         $a0, 0xE($s4)
    ctx->pc = 0x2b3b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 14); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3b78: 0xb285001d  sdl         $a1, 0x1D($s4)
    ctx->pc = 0x2b3b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 29); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3b7c: 0xb6850016  sdr         $a1, 0x16($s4)
    ctx->pc = 0x2b3b7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 22); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3b80: 0xb2860025  sdl         $a2, 0x25($s4)
    ctx->pc = 0x2b3b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 37); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3b84: 0xb686001e  sdr         $a2, 0x1E($s4)
    ctx->pc = 0x2b3b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 30); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b3b88: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x2b3b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x2b3b8c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B3B8Cu;
    {
        const bool branch_taken_0x2b3b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3B8Cu;
            // 0x2b3b90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b8c) {
            ctx->pc = 0x2B3B9Cu;
            goto label_2b3b9c;
        }
    }
    ctx->pc = 0x2B3B94u;
    // 0x2b3b94: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x2b3b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x2b3b98: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x2b3b98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_2b3b9c:
    // 0x2b3b9c: 0xa2500000  sb          $s0, 0x0($s2)
    ctx->pc = 0x2b3b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x2b3ba0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3BA0u;
    {
        const bool branch_taken_0x2b3ba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3BA0u;
            // 0x2b3ba4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ba0) {
            ctx->pc = 0x2B3BC0u;
            goto label_2b3bc0;
        }
    }
    ctx->pc = 0x2B3BA8u;
    // 0x2b3ba8: 0x8e6500b0  lw          $a1, 0xB0($s3)
    ctx->pc = 0x2b3ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x2b3bac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b3bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3bb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b3bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3bb4: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x2b3bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2b3bb8: 0xc049c48  jal         func_127120
    ctx->pc = 0x2B3BB8u;
    SET_GPR_U32(ctx, 31, 0x2B3BC0u);
    ctx->pc = 0x2B3BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3BB8u;
            // 0x2b3bbc: 0x24a50048  addiu       $a1, $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3BC0u; }
        if (ctx->pc != 0x2B3BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3BC0u; }
        if (ctx->pc != 0x2B3BC0u) { return; }
    }
    ctx->pc = 0x2B3BC0u;
label_2b3bc0:
    // 0x2b3bc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b3bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3bc4: 0xc0ac1c4  jal         func_2B0710
    ctx->pc = 0x2B3BC4u;
    SET_GPR_U32(ctx, 31, 0x2B3BCCu);
    ctx->pc = 0x2B3BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3BC4u;
            // 0x2b3bc8: 0x26510002  addiu       $s1, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0710u;
    if (runtime->hasFunction(0x2B0710u)) {
        auto targetFn = runtime->lookupFunction(0x2B0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3BCCu; }
        if (ctx->pc != 0x2B3BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B0710_0x2b0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3BCCu; }
        if (ctx->pc != 0x2B3BCCu) { return; }
    }
    ctx->pc = 0x2B3BCCu;
label_2b3bcc:
    // 0x2b3bcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b3bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3bd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b3bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3bd4: 0xc0ac1de  jal         func_2B0778
    ctx->pc = 0x2B3BD4u;
    SET_GPR_U32(ctx, 31, 0x2B3BDCu);
    ctx->pc = 0x2B3BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3BD4u;
            // 0x2b3bd8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B0778u;
    if (runtime->hasFunction(0x2B0778u)) {
        auto targetFn = runtime->lookupFunction(0x2B0778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3BDCu; }
        if (ctx->pc != 0x2B3BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B0778_0x2b0778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3BDCu; }
        if (ctx->pc != 0x2B3BDCu) { return; }
    }
    ctx->pc = 0x2B3BDCu;
label_2b3bdc:
    // 0x2b3bdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b3bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3be0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B3BE0u;
    {
        const bool branch_taken_0x2b3be0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3BE0u;
            // 0x2b3be4: 0x101203  sra         $v0, $s0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3be0) {
            ctx->pc = 0x2B3C08u;
            goto label_2b3c08;
        }
    }
    ctx->pc = 0x2B3BE8u;
    // 0x2b3be8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b3be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b3bec: 0x24050083  addiu       $a1, $zero, 0x83
    ctx->pc = 0x2b3becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x2b3bf0: 0x240600b5  addiu       $a2, $zero, 0xB5
    ctx->pc = 0x2b3bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
    // 0x2b3bf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b3bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3bf8: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2B3BF8u;
    SET_GPR_U32(ctx, 31, 0x2B3C00u);
    ctx->pc = 0x2B3BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3BF8u;
            // 0x2b3bfc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3C00u; }
        if (ctx->pc != 0x2B3C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3C00u; }
        if (ctx->pc != 0x2B3C00u) { return; }
    }
    ctx->pc = 0x2B3C00u;
label_2b3c00:
    // 0x2b3c00: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2B3C00u;
    {
        const bool branch_taken_0x2b3c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3C00u;
            // 0x2b3c04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c00) {
            ctx->pc = 0x2B3C88u;
            goto label_2b3c88;
        }
    }
    ctx->pc = 0x2B3C08u;
label_2b3c08:
    // 0x2b3c08: 0xa2500001  sb          $s0, 0x1($s2)
    ctx->pc = 0x2b3c08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x2b3c0c: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x2b3c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3c10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b3c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3c14: 0x2309021  addu        $s2, $s1, $s0
    ctx->pc = 0x2b3c14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2b3c18: 0x24061111  addiu       $a2, $zero, 0x1111
    ctx->pc = 0x2b3c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4369));
    // 0x2b3c1c: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x2b3c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b3c20: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b3c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b3c24: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x2b3c24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b3c28: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b3c28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2b3c2c: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x2b3c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b3c30: 0x2551023  subu        $v0, $s2, $s5
    ctx->pc = 0x2b3c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x2b3c34: 0x2542823  subu        $a1, $s2, $s4
    ctx->pc = 0x2b3c34u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x2b3c38: 0x21c3a  dsrl        $v1, $v0, 16
    ctx->pc = 0x2b3c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 16);
    // 0x2b3c3c: 0x2223a  dsrl        $a0, $v0, 8
    ctx->pc = 0x2b3c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 8);
    // 0x2b3c40: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b3c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3c44: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2b3c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2b3c48: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b3c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b3c4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b3c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b3c50: 0xa2830001  sb          $v1, 0x1($s4)
    ctx->pc = 0x2b3c50u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b3c54: 0x26950001  addiu       $s5, $s4, 0x1
    ctx->pc = 0x2b3c54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2b3c58: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2b3c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2b3c5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b3c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b3c60: 0xa2a20002  sb          $v0, 0x2($s5)
    ctx->pc = 0x2b3c60u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3c64: 0xa2a40001  sb          $a0, 0x1($s5)
    ctx->pc = 0x2b3c64u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3c68: 0xae660030  sw          $a2, 0x30($s3)
    ctx->pc = 0x2b3c68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 6));
    // 0x2b3c6c: 0xae650040  sw          $a1, 0x40($s3)
    ctx->pc = 0x2b3c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 5));
    // 0x2b3c70: 0xae600044  sw          $zero, 0x44($s3)
    ctx->pc = 0x2b3c70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 0));
label_2b3c74:
    // 0x2b3c74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b3c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c78: 0xc0adc0a  jal         func_2B7028
    ctx->pc = 0x2B3C78u;
    SET_GPR_U32(ctx, 31, 0x2B3C80u);
    ctx->pc = 0x2B3C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3C78u;
            // 0x2b3c7c: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7028u;
    if (runtime->hasFunction(0x2B7028u)) {
        auto targetFn = runtime->lookupFunction(0x2B7028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3C80u; }
        if (ctx->pc != 0x2B3C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7028_0x2b7028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B3C80u; }
        if (ctx->pc != 0x2B3C80u) { return; }
    }
    ctx->pc = 0x2B3C80u;
label_2b3c80:
    // 0x2b3c80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3C80u;
    {
        const bool branch_taken_0x2b3c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3C80u;
            // 0x2b3c84: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c80) {
            ctx->pc = 0x2B3C8Cu;
            goto label_2b3c8c;
        }
    }
    ctx->pc = 0x2B3C88u;
label_2b3c88:
    // 0x2b3c88: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2b3c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2b3c8c:
    // 0x2b3c8c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2b3c8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b3c90: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2b3c90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b3c94: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2b3c94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b3c98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b3c98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3c9c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2b3c9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3ca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B3CA4u;
            // 0x2b3ca8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B3CACu;
    // 0x2b3cac: 0x0  nop
    ctx->pc = 0x2b3cacu;
    // NOP
    ctx->pc = 0x2b3cb0u;
}
