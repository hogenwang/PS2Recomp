#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FCD68
// Address: 0x1fcd68 - 0x1fce80
void sub_001FCD68_0x1fcd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCD68_0x1fcd68");
#endif

    switch (ctx->pc) {
        case 0x1fcdb0u: goto label_1fcdb0;
        case 0x1fcde8u: goto label_1fcde8;
        case 0x1fce34u: goto label_1fce34;
        case 0x1fce50u: goto label_1fce50;
        default: break;
    }

    ctx->pc = 0x1fcd68u;

    // 0x1fcd68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fcd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fcd6c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1fcd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1fcd70: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1fcd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1fcd74: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fcd74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd78: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1fcd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1fcd7c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1fcd7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd80: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fcd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd84: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1fcd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1fcd88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fcd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1fcd8c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1fcd8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd90: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fcd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fcd94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fcd94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd98: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fcd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1fcd9c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1fcd9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcda0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1fcda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1fcda4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fcda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fcda8: 0xc07ef96  jal         func_1FBE58
    ctx->pc = 0x1FCDA8u;
    SET_GPR_U32(ctx, 31, 0x1FCDB0u);
    ctx->pc = 0x1FCDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCDA8u;
            // 0x1fcdac: 0x245516f0  addiu       $s5, $v0, 0x16F0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 5872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE58u;
    if (runtime->hasFunction(0x1FBE58u)) {
        auto targetFn = runtime->lookupFunction(0x1FBE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCDB0u; }
        if (ctx->pc != 0x1FCDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FBE58_0x1fbe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCDB0u; }
        if (ctx->pc != 0x1FCDB0u) { return; }
    }
    ctx->pc = 0x1FCDB0u;
label_1fcdb0:
    // 0x1fcdb0: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x1fcdb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fcdb4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fcdb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcdb8: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1fcdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1fcdbc: 0x1509000c  bne         $t0, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x1FCDBCu;
    {
        const bool branch_taken_0x1fcdbc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        ctx->pc = 0x1FCDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCDBCu;
            // 0x1fcdc0: 0x1102818  mult        $a1, $t0, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdbc) {
            ctx->pc = 0x1FCDF0u;
            goto label_1fcdf0;
        }
    }
    ctx->pc = 0x1FCDC4u;
    // 0x1fcdc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1fcdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcdc8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCDC8u;
    {
        const bool branch_taken_0x1fcdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FCDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCDC8u;
            // 0x1fcdcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdc8) {
            ctx->pc = 0x1FCDD8u;
            goto label_1fcdd8;
        }
    }
    ctx->pc = 0x1FCDD0u;
    // 0x1fcdd0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1FCDD0u;
    {
        const bool branch_taken_0x1fcdd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCDD0u;
            // 0x1fcdd4: 0xae480000  sw          $t0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdd0) {
            ctx->pc = 0x1FCE58u;
            goto label_1fce58;
        }
    }
    ctx->pc = 0x1FCDD8u;
label_1fcdd8:
    // 0x1fcdd8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fcdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcddc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1fcddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcde0: 0xc07f3a0  jal         func_1FCE80
    ctx->pc = 0x1FCDE0u;
    SET_GPR_U32(ctx, 31, 0x1FCDE8u);
    ctx->pc = 0x1FCDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCDE0u;
            // 0x1fcde4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCE80u;
    if (runtime->hasFunction(0x1FCE80u)) {
        auto targetFn = runtime->lookupFunction(0x1FCE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCDE8u; }
        if (ctx->pc != 0x1FCDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCE80_0x1fce80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCDE8u; }
        if (ctx->pc != 0x1FCDE8u) { return; }
    }
    ctx->pc = 0x1FCDE8u;
label_1fcde8:
    // 0x1fcde8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1FCDE8u;
    {
        const bool branch_taken_0x1fcde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCDE8u;
            // 0x1fcdec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcde8) {
            ctx->pc = 0x1FCE5Cu;
            goto label_1fce5c;
        }
    }
    ctx->pc = 0x1FCDF0u;
label_1fcdf0:
    // 0x1fcdf0: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x1fcdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1fcdf4: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1fcdf4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fcdf8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FCDF8u;
    {
        const bool branch_taken_0x1fcdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcdf8) {
            ctx->pc = 0x1FCDFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCDF8u;
            // 0x1fcdfc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FCE00u;
            goto label_1fce00;
        }
    }
    ctx->pc = 0x1FCE00u;
label_1fce00:
    // 0x1fce00: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1fce00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fce04: 0x8e240a48  lw          $a0, 0xA48($s1)
    ctx->pc = 0x1fce04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2632)));
    // 0x1fce08: 0x1012  mflo        $v0
    ctx->pc = 0x1fce08u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1fce0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fce0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fce10: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1fce10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce14: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1fce14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce18: 0x10890009  beq         $a0, $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FCE18u;
    {
        const bool branch_taken_0x1fce18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x1FCE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE18u;
            // 0x1fce1c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce18) {
            ctx->pc = 0x1FCE40u;
            goto label_1fce40;
        }
    }
    ctx->pc = 0x1FCE20u;
    // 0x1fce20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fce20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce24: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1fce24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce28: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1fce28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce2c: 0xc07f3bc  jal         func_1FCEF0
    ctx->pc = 0x1FCE2Cu;
    SET_GPR_U32(ctx, 31, 0x1FCE34u);
    ctx->pc = 0x1FCE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE2Cu;
            // 0x1fce30: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FCEF0u;
    if (runtime->hasFunction(0x1FCEF0u)) {
        auto targetFn = runtime->lookupFunction(0x1FCEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCE34u; }
        if (ctx->pc != 0x1FCE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCEF0_0x1fcef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCE34u; }
        if (ctx->pc != 0x1FCE34u) { return; }
    }
    ctx->pc = 0x1FCE34u;
label_1fce34:
    // 0x1fce34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1FCE34u;
    {
        const bool branch_taken_0x1fce34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE34u;
            // 0x1fce38: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce34) {
            ctx->pc = 0x1FCE5Cu;
            goto label_1fce5c;
        }
    }
    ctx->pc = 0x1FCE3Cu;
    // 0x1fce3c: 0x0  nop
    ctx->pc = 0x1fce3cu;
    // NOP
label_1fce40:
    // 0x1fce40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fce40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1fce44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce48: 0xc073fee  jal         func_1CFFB8
    ctx->pc = 0x1FCE48u;
    SET_GPR_U32(ctx, 31, 0x1FCE50u);
    ctx->pc = 0x1FCE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE48u;
            // 0x1fce4c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFB8u;
    if (runtime->hasFunction(0x1CFFB8u)) {
        auto targetFn = runtime->lookupFunction(0x1CFFB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCE50u; }
        if (ctx->pc != 0x1FCE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CFFB8_0x1cffb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCE50u; }
        if (ctx->pc != 0x1FCE50u) { return; }
    }
    ctx->pc = 0x1FCE50u;
label_1fce50:
    // 0x1fce50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1fce50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1fce54: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1fce54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1fce58:
    // 0x1fce58: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fce58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fce5c:
    // 0x1fce5c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fce5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fce60: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fce60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fce64: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1fce64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fce68: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1fce68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fce6c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1fce6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1fce70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fce70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fce74: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FCE74u;
            // 0x1fce78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FCE7Cu;
    // 0x1fce7c: 0x0  nop
    ctx->pc = 0x1fce7cu;
    // NOP
    ctx->pc = 0x1fce80u;
}
