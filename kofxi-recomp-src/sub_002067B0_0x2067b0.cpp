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

// Function: sub_002067B0
// Address: 0x2067b0 - 0x206b30
void sub_002067B0_0x2067b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002067B0_0x2067b0");
#endif

    switch (ctx->pc) {
        case 0x206a40u: goto label_206a40;
        case 0x206a6cu: goto label_206a6c;
        case 0x206a98u: goto label_206a98;
        case 0x206ac4u: goto label_206ac4;
        case 0x206af0u: goto label_206af0;
        case 0x206b1cu: goto label_206b1c;
        default: break;
    }

    ctx->pc = 0x2067b0u;

    // 0x2067b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2067b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2067b4: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x2067b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x2067b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2067b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2067bc: 0x8c639bf8  lw          $v1, -0x6408($v1)
    ctx->pc = 0x2067bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x2067c0: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x2067c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2067c4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2067C4u;
    {
        const bool branch_taken_0x2067c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2067c4) {
            ctx->pc = 0x2067C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2067C4u;
            // 0x2067c8: 0x65100  sll         $t2, $a2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2067E4u;
            goto label_2067e4;
        }
    }
    ctx->pc = 0x2067CCu;
    // 0x2067cc: 0x650c0  sll         $t2, $a2, 3
    ctx->pc = 0x2067ccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2067d0: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x2067d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2067d4: 0x8a7821  addu        $t7, $a0, $t2
    ctx->pc = 0x2067d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2067d8: 0xa37021  addu        $t6, $a1, $v1
    ctx->pc = 0x2067d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2067dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2067DCu;
    {
        const bool branch_taken_0x2067dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2067E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067DCu;
        // 0x2067e0: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2067dc) {
            ctx->pc = 0x2067F4u;
            goto label_2067f4;
        }
    }
    ctx->pc = 0x2067E4u;
label_2067e4:
    // 0x2067e4: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x2067e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2067e8: 0x8a7821  addu        $t7, $a0, $t2
    ctx->pc = 0x2067e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2067ec: 0xa37021  addu        $t6, $a1, $v1
    ctx->pc = 0x2067ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2067f0: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x2067f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2067f4:
    // 0x2067f4: 0x312300ff  andi        $v1, $t1, 0xFF
    ctx->pc = 0x2067f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x2067f8: 0x30690002  andi        $t1, $v1, 0x2
    ctx->pc = 0x2067f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2067fc: 0x51200021  beql        $t1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x2067FCu;
    {
        const bool branch_taken_0x2067fc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2067fc) {
            ctx->pc = 0x206800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2067FCu;
            // 0x206800: 0x28810130  slti        $at, $a0, 0x130 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)304) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206884u;
            goto label_206884;
        }
    }
    ctx->pc = 0x206804u;
    // 0x206804: 0x29e10041  slti        $at, $t7, 0x41
    ctx->pc = 0x206804u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x206808: 0x648c0  sll         $t1, $a2, 3
    ctx->pc = 0x206808u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20680c: 0x142000c3  bnez        $at, . + 4 + (0xC3 << 2)
    ctx->pc = 0x20680Cu;
    {
        const bool branch_taken_0x20680c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x206810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20680Cu;
        // 0x206810: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20680c) {
            ctx->pc = 0x206B1Cu;
            goto label_206b1c;
        }
    }
    ctx->pc = 0x206814u;
    // 0x206814: 0x28810130  slti        $at, $a0, 0x130
    ctx->pc = 0x206814u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)304) ? 1 : 0);
    // 0x206818: 0x502000c1  beql        $at, $zero, . + 4 + (0xC1 << 2)
    ctx->pc = 0x206818u;
    {
        const bool branch_taken_0x206818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x206818) {
            ctx->pc = 0x20681Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206818u;
            // 0x20681c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206B20u;
            goto label_206b20;
        }
    }
    ctx->pc = 0x206820u;
    // 0x206820: 0x29e60130  slti        $a2, $t7, 0x130
    ctx->pc = 0x206820u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)304) ? 1 : 0);
    // 0x206824: 0x54c00008  bnel        $a2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x206824u;
    {
        const bool branch_taken_0x206824 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x206824) {
            ctx->pc = 0x206828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206824u;
            // 0x206828: 0x28810040  slti        $at, $a0, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206848u;
            goto label_206848;
        }
    }
    ctx->pc = 0x20682Cu;
    // 0x20682c: 0x25e6fed0  addiu       $a2, $t7, -0x130
    ctx->pc = 0x20682cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966992));
    // 0x206830: 0x15a00002  bnez        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x206830u;
    {
        const bool branch_taken_0x206830 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x206834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206830u;
        // 0x206834: 0xcd001a  div         $zero, $a2, $t5 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x206830) {
            ctx->pc = 0x20683Cu;
            goto label_20683c;
        }
    }
    ctx->pc = 0x206838u;
    // 0x206838: 0x1cd  break       0, 7
    ctx->pc = 0x206838u;
    runtime->handleBreak(rdram, ctx);
label_20683c:
    // 0x20683c: 0x5012  mflo        $t2
    ctx->pc = 0x20683cu;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x206840: 0x240f0130  addiu       $t7, $zero, 0x130
    ctx->pc = 0x206840u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x206844: 0x28810040  slti        $at, $a0, 0x40
    ctx->pc = 0x206844u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
label_206848:
    // 0x206848: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x206848u;
    {
        const bool branch_taken_0x206848 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x206848) {
            ctx->pc = 0x20684Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206848u;
            // 0x20684c: 0x93100  sll         $a2, $t1, 4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206874u;
            goto label_206874;
        }
    }
    ctx->pc = 0x206850u;
    // 0x206850: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x206850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x206854: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x206854u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x206858: 0x15a00002  bnez        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x206858u;
    {
        const bool branch_taken_0x206858 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x20685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206858u;
        // 0x20685c: 0x8d001a  div         $zero, $a0, $t5 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x206858) {
            ctx->pc = 0x206864u;
            goto label_206864;
        }
    }
    ctx->pc = 0x206860u;
    // 0x206860: 0x1cd  break       0, 7
    ctx->pc = 0x206860u;
    runtime->handleBreak(rdram, ctx);
label_206864:
    // 0x206864: 0x3012  mflo        $a2
    ctx->pc = 0x206864u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x206868: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x206868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x20686c: 0x1264823  subu        $t1, $t1, $a2
    ctx->pc = 0x20686cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x206870: 0x93100  sll         $a2, $t1, 4
    ctx->pc = 0x206870u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_206874:
    // 0x206874: 0x25490001  addiu       $t1, $t2, 0x1
    ctx->pc = 0x206874u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x206878: 0x24ccfff8  addiu       $t4, $a2, -0x8
    ctx->pc = 0x206878u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x20687c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x20687Cu;
    {
        const bool branch_taken_0x20687c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20687Cu;
        // 0x206880: 0x95100  sll         $t2, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20687c) {
            ctx->pc = 0x2068F4u;
            goto label_2068f4;
        }
    }
    ctx->pc = 0x206884u;
label_206884:
    // 0x206884: 0x650c0  sll         $t2, $a2, 3
    ctx->pc = 0x206884u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x206888: 0x102000a4  beqz        $at, . + 4 + (0xA4 << 2)
    ctx->pc = 0x206888u;
    {
        const bool branch_taken_0x206888 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206888u;
        // 0x20688c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206888) {
            ctx->pc = 0x206B1Cu;
            goto label_206b1c;
        }
    }
    ctx->pc = 0x206890u;
    // 0x206890: 0x29e60040  slti        $a2, $t7, 0x40
    ctx->pc = 0x206890u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x206894: 0x14c000a1  bnez        $a2, . + 4 + (0xA1 << 2)
    ctx->pc = 0x206894u;
    {
        const bool branch_taken_0x206894 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x206894) {
            ctx->pc = 0x206B1Cu;
            goto label_206b1c;
        }
    }
    ctx->pc = 0x20689Cu;
    // 0x20689c: 0x28810040  slti        $at, $a0, 0x40
    ctx->pc = 0x20689cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2068a0: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2068A0u;
    {
        const bool branch_taken_0x2068a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2068a0) {
            ctx->pc = 0x2068A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2068A0u;
            // 0x2068a4: 0x29e10131  slti        $at, $t7, 0x131 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)305) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2068C8u;
            goto label_2068c8;
        }
    }
    ctx->pc = 0x2068A8u;
    // 0x2068a8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2068a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2068ac: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x2068acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2068b0: 0x15a00002  bnez        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x2068B0u;
    {
        const bool branch_taken_0x2068b0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2068B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068B0u;
        // 0x2068b4: 0x8d001a  div         $zero, $a0, $t5 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068b0) {
            ctx->pc = 0x2068BCu;
            goto label_2068bc;
        }
    }
    ctx->pc = 0x2068B8u;
    // 0x2068b8: 0x1cd  break       0, 7
    ctx->pc = 0x2068b8u;
    runtime->handleBreak(rdram, ctx);
label_2068bc:
    // 0x2068bc: 0x6012  mflo        $t4
    ctx->pc = 0x2068bcu;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x2068c0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2068c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2068c4: 0x29e10131  slti        $at, $t7, 0x131
    ctx->pc = 0x2068c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)305) ? 1 : 0);
label_2068c8:
    // 0x2068c8: 0x54200009  bnel        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2068C8u;
    {
        const bool branch_taken_0x2068c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2068c8) {
            ctx->pc = 0x2068CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2068C8u;
            // 0x2068cc: 0xc6100  sll         $t4, $t4, 4 (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2068F0u;
            goto label_2068f0;
        }
    }
    ctx->pc = 0x2068D0u;
    // 0x2068d0: 0x25e6fed0  addiu       $a2, $t7, -0x130
    ctx->pc = 0x2068d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 4294966992));
    // 0x2068d4: 0x15a00002  bnez        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x2068D4u;
    {
        const bool branch_taken_0x2068d4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2068D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2068D4u;
        // 0x2068d8: 0xcd001a  div         $zero, $a2, $t5 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068d4) {
            ctx->pc = 0x2068E0u;
            goto label_2068e0;
        }
    }
    ctx->pc = 0x2068DCu;
    // 0x2068dc: 0x1cd  break       0, 7
    ctx->pc = 0x2068dcu;
    runtime->handleBreak(rdram, ctx);
label_2068e0:
    // 0x2068e0: 0x3012  mflo        $a2
    ctx->pc = 0x2068e0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2068e4: 0x240f0130  addiu       $t7, $zero, 0x130
    ctx->pc = 0x2068e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x2068e8: 0x1465023  subu        $t2, $t2, $a2
    ctx->pc = 0x2068e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x2068ec: 0xc6100  sll         $t4, $t4, 4
    ctx->pc = 0x2068ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_2068f0:
    // 0x2068f0: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x2068f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_2068f4:
    // 0x2068f4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2068f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2068f8: 0x5060001e  beql        $v1, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x2068F8u;
    {
        const bool branch_taken_0x2068f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2068f8) {
            ctx->pc = 0x2068FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2068F8u;
            // 0x2068fc: 0x28a101a1  slti        $at, $a1, 0x1A1 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)417) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206974u;
            goto label_206974;
        }
    }
    ctx->pc = 0x206900u;
    // 0x206900: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x206900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x206904: 0x29c101a1  slti        $at, $t6, 0x1A1
    ctx->pc = 0x206904u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)417) ? 1 : 0);
    // 0x206908: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x206908u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20690c: 0x10200083  beqz        $at, . + 4 + (0x83 << 2)
    ctx->pc = 0x20690Cu;
    {
        const bool branch_taken_0x20690c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x206910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20690Cu;
        // 0x206910: 0x2466fff8  addiu       $a2, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20690c) {
            ctx->pc = 0x206B1Cu;
            goto label_206b1c;
        }
    }
    ctx->pc = 0x206914u;
    // 0x206914: 0x28a10082  slti        $at, $a1, 0x82
    ctx->pc = 0x206914u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x206918: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x206918u;
    {
        const bool branch_taken_0x206918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x206918) {
            ctx->pc = 0x20691Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206918u;
            // 0x20691c: 0x29c10191  slti        $at, $t6, 0x191 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)401) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x206944u;
            goto label_206944;
        }
    }
    ctx->pc = 0x206920u;
    // 0x206920: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x206920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x206924: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x206924u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x206928: 0x15a00002  bnez        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x206928u;
    {
        const bool branch_taken_0x206928 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x20692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206928u;
        // 0x20692c: 0x6d001a  div         $zero, $v1, $t5 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x206928) {
            ctx->pc = 0x206934u;
            goto label_206934;
        }
    }
    ctx->pc = 0x206930u;
    // 0x206930: 0x1cd  break       0, 7
    ctx->pc = 0x206930u;
    runtime->handleBreak(rdram, ctx);
label_206934:
    // 0x206934: 0x1812  mflo        $v1
    ctx->pc = 0x206934u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x206938: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x206938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x20693c: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x20693cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x206940: 0x29c10191  slti        $at, $t6, 0x191
    ctx->pc = 0x206940u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)401) ? 1 : 0);
label_206944:
    // 0x206944: 0x54200008  bnel        $at, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x206944u;
    {
        const bool branch_taken_0x206944 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x206944) {
            ctx->pc = 0x206948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206944u;
            // 0x206948: 0x61900  sll         $v1, $a2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206968u;
            goto label_206968;
        }
    }
    ctx->pc = 0x20694Cu;
    // 0x20694c: 0x25c3fe70  addiu       $v1, $t6, -0x190
    ctx->pc = 0x20694cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966896));
    // 0x206950: 0x15a00002  bnez        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x206950u;
    {
        const bool branch_taken_0x206950 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x206954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206950u;
        // 0x206954: 0x6d001a  div         $zero, $v1, $t5 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x206950) {
            ctx->pc = 0x20695Cu;
            goto label_20695c;
        }
    }
    ctx->pc = 0x206958u;
    // 0x206958: 0x1cd  break       0, 7
    ctx->pc = 0x206958u;
    runtime->handleBreak(rdram, ctx);
label_20695c:
    // 0x20695c: 0x5812  mflo        $t3
    ctx->pc = 0x20695cu;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x206960: 0x240e0190  addiu       $t6, $zero, 0x190
    ctx->pc = 0x206960u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x206964: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x206964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_206968:
    // 0x206968: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x206968u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x20696c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20696Cu;
    {
        const bool branch_taken_0x20696c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20696Cu;
        // 0x206970: 0x2469fff8  addiu       $t1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20696c) {
            ctx->pc = 0x2069E8u;
            goto label_2069e8;
        }
    }
    ctx->pc = 0x206974u;
label_206974:
    // 0x206974: 0x758c0  sll         $t3, $a3, 3
    ctx->pc = 0x206974u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x206978: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
    ctx->pc = 0x206978u;
    {
        const bool branch_taken_0x206978 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206978u;
        // 0x20697c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206978) {
            ctx->pc = 0x206B1Cu;
            goto label_206b1c;
        }
    }
    ctx->pc = 0x206980u;
    // 0x206980: 0x29c30082  slti        $v1, $t6, 0x82
    ctx->pc = 0x206980u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x206984: 0x14600065  bnez        $v1, . + 4 + (0x65 << 2)
    ctx->pc = 0x206984u;
    {
        const bool branch_taken_0x206984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x206984) {
            ctx->pc = 0x206B1Cu;
            goto label_206b1c;
        }
    }
    ctx->pc = 0x20698Cu;
    // 0x20698c: 0x28a10082  slti        $at, $a1, 0x82
    ctx->pc = 0x20698cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x206990: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x206990u;
    {
        const bool branch_taken_0x206990 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x206990) {
            ctx->pc = 0x206994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206990u;
            // 0x206994: 0x29c101a1  slti        $at, $t6, 0x1A1 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)417) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2069B8u;
            goto label_2069b8;
        }
    }
    ctx->pc = 0x206998u;
    // 0x206998: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x206998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x20699c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x20699cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2069a0: 0x15a00002  bnez        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x2069A0u;
    {
        const bool branch_taken_0x2069a0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2069A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069A0u;
        // 0x2069a4: 0x6d001a  div         $zero, $v1, $t5 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069a0) {
            ctx->pc = 0x2069ACu;
            goto label_2069ac;
        }
    }
    ctx->pc = 0x2069A8u;
    // 0x2069a8: 0x1cd  break       0, 7
    ctx->pc = 0x2069a8u;
    runtime->handleBreak(rdram, ctx);
label_2069ac:
    // 0x2069ac: 0x3012  mflo        $a2
    ctx->pc = 0x2069acu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2069b0: 0x24050082  addiu       $a1, $zero, 0x82
    ctx->pc = 0x2069b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x2069b4: 0x29c101a1  slti        $at, $t6, 0x1A1
    ctx->pc = 0x2069b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)417) ? 1 : 0);
label_2069b8:
    // 0x2069b8: 0x54200009  bnel        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2069B8u;
    {
        const bool branch_taken_0x2069b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2069b8) {
            ctx->pc = 0x2069BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2069B8u;
            // 0x2069bc: 0x61900  sll         $v1, $a2, 4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2069E0u;
            goto label_2069e0;
        }
    }
    ctx->pc = 0x2069C0u;
    // 0x2069c0: 0x25c3fe60  addiu       $v1, $t6, -0x1A0
    ctx->pc = 0x2069c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966880));
    // 0x2069c4: 0x15a00002  bnez        $t5, . + 4 + (0x2 << 2)
    ctx->pc = 0x2069C4u;
    {
        const bool branch_taken_0x2069c4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x2069C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069C4u;
        // 0x2069c8: 0x6d001a  div         $zero, $v1, $t5 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069c4) {
            ctx->pc = 0x2069D0u;
            goto label_2069d0;
        }
    }
    ctx->pc = 0x2069CCu;
    // 0x2069cc: 0x1cd  break       0, 7
    ctx->pc = 0x2069ccu;
    runtime->handleBreak(rdram, ctx);
label_2069d0:
    // 0x2069d0: 0x1812  mflo        $v1
    ctx->pc = 0x2069d0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2069d4: 0x240e01a0  addiu       $t6, $zero, 0x1A0
    ctx->pc = 0x2069d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x2069d8: 0x1635823  subu        $t3, $t3, $v1
    ctx->pc = 0x2069d8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x2069dc: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2069dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_2069e0:
    // 0x2069e0: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x2069e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x2069e4: 0x24690008  addiu       $t1, $v1, 0x8
    ctx->pc = 0x2069e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2069e8:
    // 0x2069e8: 0x3c06009d  lui         $a2, 0x9D
    ctx->pc = 0x2069e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)157 << 16));
    // 0x2069ec: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x2069ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2069f0: 0x90c6b281  lbu         $a2, -0x4D7F($a2)
    ctx->pc = 0x2069f0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294947457)));
    // 0x2069f4: 0x2cc10006  sltiu       $at, $a2, 0x6
    ctx->pc = 0x2069f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2069f8: 0x10200048  beqz        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x2069F8u;
    {
        const bool branch_taken_0x2069f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2069FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2069F8u;
        // 0x2069fc: 0x31843  sra         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069f8) {
            ctx->pc = 0x206B1Cu;
            goto label_206b1c;
        }
    }
    ctx->pc = 0x206A00u;
    // 0x206a00: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x206a00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x206a04: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x206a04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x206a08: 0x24e7f7c0  addiu       $a3, $a3, -0x840
    ctx->pc = 0x206a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965184));
    // 0x206a0c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x206a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x206a10: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x206a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x206a14: 0xc00008  jr          $a2
    ctx->pc = 0x206A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206A1Cu: goto label_206a1c;
            case 0x206A48u: goto label_206a48;
            case 0x206A74u: goto label_206a74;
            case 0x206AA0u: goto label_206aa0;
            case 0x206ACCu: goto label_206acc;
            case 0x206AF8u: goto label_206af8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206A14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x206A1Cu;
label_206a1c:
    // 0x206a1c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x206a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x206a20: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x206a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a24: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x206a28: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x206a28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a2c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x206a30: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x206a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a34: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x206a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x206a38: 0xc0cb83c  jal         func_32E0F0
    ctx->pc = 0x206A38u;
    SET_GPR_U32(ctx, 31, 0x206A40u);
    ctx->pc = 0x206A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A38u;
    // 0x206a3c: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E0F0u, 0x206A38u, 0x206A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A40u;
label_206a40:
    // 0x206a40: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x206A40u;
    {
        const bool branch_taken_0x206a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206a40) {
            ctx->pc = 0x206B1Cu;
            goto label_206b1c;
        }
    }
    ctx->pc = 0x206A48u;
label_206a48:
    // 0x206a48: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x206a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x206a4c: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x206a4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a50: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x206a54: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x206a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a58: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x206a5c: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x206a5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a60: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x206a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x206a64: 0xc0cb8d8  jal         func_32E360
    ctx->pc = 0x206A64u;
    SET_GPR_U32(ctx, 31, 0x206A6Cu);
    ctx->pc = 0x206A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A64u;
    // 0x206a68: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E360u, 0x206A64u, 0x206A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A6Cu;
label_206a6c:
    // 0x206a6c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x206A6Cu;
    {
        const bool branch_taken_0x206a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206a6c) {
            ctx->pc = 0x206B1Cu;
            goto label_206b1c;
        }
    }
    ctx->pc = 0x206A74u;
label_206a74:
    // 0x206a74: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x206a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x206a78: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x206a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a7c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x206a80: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x206a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a84: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x206a88: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x206a88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a8c: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x206a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x206a90: 0xc0cb978  jal         func_32E5E0
    ctx->pc = 0x206A90u;
    SET_GPR_U32(ctx, 31, 0x206A98u);
    ctx->pc = 0x206A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206A90u;
    // 0x206a94: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E5E0u, 0x206A90u, 0x206A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206A98u;
label_206a98:
    // 0x206a98: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x206A98u;
    {
        const bool branch_taken_0x206a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206a98) {
            ctx->pc = 0x206B1Cu;
            goto label_206b1c;
        }
    }
    ctx->pc = 0x206AA0u;
label_206aa0:
    // 0x206aa0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x206aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x206aa4: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x206aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206aa8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x206aac: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x206aacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ab0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x206ab4: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x206ab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ab8: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x206ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x206abc: 0xc0cba84  jal         func_32EA10
    ctx->pc = 0x206ABCu;
    SET_GPR_U32(ctx, 31, 0x206AC4u);
    ctx->pc = 0x206AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206ABCu;
    // 0x206ac0: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EA10u, 0x206ABCu, 0x206AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206AC4u;
label_206ac4:
    // 0x206ac4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x206AC4u;
    {
        const bool branch_taken_0x206ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206ac4) {
            ctx->pc = 0x206B1Cu;
            goto label_206b1c;
        }
    }
    ctx->pc = 0x206ACCu;
label_206acc:
    // 0x206acc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x206accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x206ad0: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x206ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ad4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x206ad8: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x206ad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206adc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x206ae0: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x206ae0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ae4: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x206ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x206ae8: 0xc0cbb8c  jal         func_32EE30
    ctx->pc = 0x206AE8u;
    SET_GPR_U32(ctx, 31, 0x206AF0u);
    ctx->pc = 0x206AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206AE8u;
    // 0x206aec: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EE30u, 0x206AE8u, 0x206AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206AF0u;
label_206af0:
    // 0x206af0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x206AF0u;
    {
        const bool branch_taken_0x206af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206af0) {
            ctx->pc = 0x206B1Cu;
            goto label_206b1c;
        }
    }
    ctx->pc = 0x206AF8u;
label_206af8:
    // 0x206af8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x206af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x206afc: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x206afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b00: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x206b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x206b04: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x206b04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b08: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x206b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x206b0c: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x206b0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b10: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x206b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x206b14: 0xc0cbc94  jal         func_32F250
    ctx->pc = 0x206B14u;
    SET_GPR_U32(ctx, 31, 0x206B1Cu);
    ctx->pc = 0x206B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206B14u;
    // 0x206b18: 0xffa30018  sd          $v1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F250u, 0x206B14u, 0x206B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x206B1Cu;
label_206b1c:
    // 0x206b1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x206b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_206b20:
    // 0x206b20: 0x3e00008  jr          $ra
    ctx->pc = 0x206B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206B20u;
        // 0x206b24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206B28u;
    // 0x206b28: 0x0  nop
    ctx->pc = 0x206b28u;
    // NOP
    // 0x206b2c: 0x0  nop
    ctx->pc = 0x206b2cu;
    // NOP
    if (ctx->pc == 0x206b2cu) { ctx->pc = 0x206b30u; }
}
