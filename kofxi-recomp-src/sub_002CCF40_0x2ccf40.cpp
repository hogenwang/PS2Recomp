#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CCF40
// Address: 0x2ccf40 - 0x2cd0d8
void sub_002CCF40_0x2ccf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CCF40_0x2ccf40");
#endif

    ctx->pc = 0x2ccf40u;

    // 0x2ccf40: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2ccf40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccf44: 0x85240010  lh          $a0, 0x10($t1)
    ctx->pc = 0x2ccf44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2ccf48: 0x10800060  beqz        $a0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2CCF48u;
    {
        const bool branch_taken_0x2ccf48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF48u;
            // 0x2ccf4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf48) {
            ctx->pc = 0x2CD0CCu;
            goto label_2cd0cc;
        }
    }
    ctx->pc = 0x2CCF50u;
    // 0x2ccf50: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x2ccf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2ccf54: 0x952b0008  lhu         $t3, 0x8($t1)
    ctx->pc = 0x2ccf54u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2ccf58: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x2ccf58u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2ccf5c: 0x95280006  lhu         $t0, 0x6($t1)
    ctx->pc = 0x2ccf5cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x2ccf60: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x2ccf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2ccf64: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CCF64u;
    {
        const bool branch_taken_0x2ccf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccf64) {
            ctx->pc = 0x2CCF68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF64u;
            // 0x2ccf68: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CCF6Cu;
            goto label_2ccf6c;
        }
    }
    ctx->pc = 0x2CCF6Cu;
label_2ccf6c:
    // 0x2ccf6c: 0x952a0000  lhu         $t2, 0x0($t1)
    ctx->pc = 0x2ccf6cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2ccf70: 0x95260002  lhu         $a2, 0x2($t1)
    ctx->pc = 0x2ccf70u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x2ccf74: 0x95270004  lhu         $a3, 0x4($t1)
    ctx->pc = 0x2ccf74u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2ccf78: 0x2010  mfhi        $a0
    ctx->pc = 0x2ccf78u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2ccf7c: 0x2812  mflo        $a1
    ctx->pc = 0x2ccf7cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2ccf80: 0x1645823  subu        $t3, $t3, $a0
    ctx->pc = 0x2ccf80u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x2ccf84: 0x5610004  bgez        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCF84u;
    {
        const bool branch_taken_0x2ccf84 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x2CCF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF84u;
            // 0x2ccf88: 0x1054023  subu        $t0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf84) {
            ctx->pc = 0x2CCF98u;
            goto label_2ccf98;
        }
    }
    ctx->pc = 0x2CCF8Cu;
    // 0x2ccf8c: 0x256b003c  addiu       $t3, $t3, 0x3C
    ctx->pc = 0x2ccf8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 60));
    // 0x2ccf90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CCF90u;
    {
        const bool branch_taken_0x2ccf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCF90u;
            // 0x2ccf94: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccf90) {
            ctx->pc = 0x2CCFACu;
            goto label_2ccfac;
        }
    }
    ctx->pc = 0x2CCF98u;
label_2ccf98:
    // 0x2ccf98: 0x2962003c  slti        $v0, $t3, 0x3C
    ctx->pc = 0x2ccf98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2ccf9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CCF9Cu;
    {
        const bool branch_taken_0x2ccf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ccf9c) {
            ctx->pc = 0x2CCFACu;
            goto label_2ccfac;
        }
    }
    ctx->pc = 0x2CCFA4u;
    // 0x2ccfa4: 0x256bffc4  addiu       $t3, $t3, -0x3C
    ctx->pc = 0x2ccfa4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967236));
    // 0x2ccfa8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2ccfa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_2ccfac:
    // 0x2ccfac: 0x5010018  bgez        $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2CCFACu;
    {
        const bool branch_taken_0x2ccfac = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2CCFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCFACu;
            // 0x2ccfb0: 0x29020018  slti        $v0, $t0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccfac) {
            ctx->pc = 0x2CD010u;
            goto label_2cd010;
        }
    }
    ctx->pc = 0x2CCFB4u;
    // 0x2ccfb4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2ccfb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2ccfb8: 0x1ce0003d  bgtz        $a3, . + 4 + (0x3D << 2)
    ctx->pc = 0x2CCFB8u;
    {
        const bool branch_taken_0x2ccfb8 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2CCFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCFB8u;
            // 0x2ccfbc: 0x25080018  addiu       $t0, $t0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccfb8) {
            ctx->pc = 0x2CD0B0u;
            goto label_2cd0b0;
        }
    }
    ctx->pc = 0x2CCFC0u;
    // 0x2ccfc0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2ccfc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2ccfc4: 0x1cc00004  bgtz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCFC4u;
    {
        const bool branch_taken_0x2ccfc4 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x2CCFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCFC4u;
            // 0x2ccfc8: 0x31420003  andi        $v0, $t2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccfc4) {
            ctx->pc = 0x2CCFD8u;
            goto label_2ccfd8;
        }
    }
    ctx->pc = 0x2CCFCCu;
    // 0x2ccfcc: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x2ccfccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x2ccfd0: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2ccfd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2ccfd4: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x2ccfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
label_2ccfd8:
    // 0x2ccfd8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CCFD8u;
    {
        const bool branch_taken_0x2ccfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CCFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCFD8u;
            // 0x2ccfdc: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccfd8) {
            ctx->pc = 0x2CCFF8u;
            goto label_2ccff8;
        }
    }
    ctx->pc = 0x2CCFE0u;
    // 0x2ccfe0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ccfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ccfe4: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CCFE4u;
    {
        const bool branch_taken_0x2ccfe4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ccfe4) {
            ctx->pc = 0x2CCFE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCFE4u;
            // 0x2ccfe8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CCFF8u;
            goto label_2ccff8;
        }
    }
    ctx->pc = 0x2CCFECu;
    // 0x2ccfec: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2CCFECu;
    {
        const bool branch_taken_0x2ccfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CCFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CCFECu;
            // 0x2ccff0: 0x24e7001d  addiu       $a3, $a3, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ccfec) {
            ctx->pc = 0x2CD0B0u;
            goto label_2cd0b0;
        }
    }
    ctx->pc = 0x2CCFF4u;
    // 0x2ccff4: 0x0  nop
    ctx->pc = 0x2ccff4u;
    // NOP
label_2ccff8:
    // 0x2ccff8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2ccff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2ccffc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ccffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cd000: 0x8c638554  lw          $v1, -0x7AAC($v1)
    ctx->pc = 0x2cd000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935892)));
    // 0x2cd004: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2CD004u;
    {
        const bool branch_taken_0x2cd004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD004u;
            // 0x2cd008: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd004) {
            ctx->pc = 0x2CD0B0u;
            goto label_2cd0b0;
        }
    }
    ctx->pc = 0x2CD00Cu;
    // 0x2cd00c: 0x0  nop
    ctx->pc = 0x2cd00cu;
    // NOP
label_2cd010:
    // 0x2cd010: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2CD010u;
    {
        const bool branch_taken_0x2cd010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd010) {
            ctx->pc = 0x2CD014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD010u;
            // 0x2cd014: 0xa52a0000  sh          $t2, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD0B4u;
            goto label_2cd0b4;
        }
    }
    ctx->pc = 0x2CD018u;
    // 0x2cd018: 0x31440003  andi        $a0, $t2, 0x3
    ctx->pc = 0x2cd018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x2cd01c: 0x2508ffe8  addiu       $t0, $t0, -0x18
    ctx->pc = 0x2cd01cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967272));
    // 0x2cd020: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD020u;
    {
        const bool branch_taken_0x2cd020 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD020u;
            // 0x2cd024: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd020) {
            ctx->pc = 0x2CD034u;
            goto label_2cd034;
        }
    }
    ctx->pc = 0x2CD028u;
    // 0x2cd028: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cd028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd02c: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CD02Cu;
    {
        const bool branch_taken_0x2cd02c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CD030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD02Cu;
            // 0x2cd030: 0x28e2001e  slti        $v0, $a3, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd02c) {
            ctx->pc = 0x2CD058u;
            goto label_2cd058;
        }
    }
    ctx->pc = 0x2CD034u;
label_2cd034:
    // 0x2cd034: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2cd034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2cd038: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2cd038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2cd03c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cd03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cd040: 0x8c428554  lw          $v0, -0x7AAC($v0)
    ctx->pc = 0x2cd040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935892)));
    // 0x2cd044: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x2cd044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2cd048: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD048u;
    {
        const bool branch_taken_0x2cd048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd048) {
            ctx->pc = 0x2CD060u;
            goto label_2cd060;
        }
    }
    ctx->pc = 0x2CD050u;
    // 0x2cd050: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2CD050u;
    {
        const bool branch_taken_0x2cd050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD050u;
            // 0x2cd054: 0xa52a0000  sh          $t2, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd050) {
            ctx->pc = 0x2CD0B4u;
            goto label_2cd0b4;
        }
    }
    ctx->pc = 0x2CD058u;
label_2cd058:
    // 0x2cd058: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CD058u;
    {
        const bool branch_taken_0x2cd058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd058) {
            ctx->pc = 0x2CD05Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD058u;
            // 0x2cd05c: 0xa52a0000  sh          $t2, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD0B4u;
            goto label_2cd0b4;
        }
    }
    ctx->pc = 0x2CD060u;
label_2cd060:
    // 0x2cd060: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD060u;
    {
        const bool branch_taken_0x2cd060 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD060u;
            // 0x2cd064: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd060) {
            ctx->pc = 0x2CD074u;
            goto label_2cd074;
        }
    }
    ctx->pc = 0x2CD068u;
    // 0x2cd068: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cd068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cd06c: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CD06Cu;
    {
        const bool branch_taken_0x2cd06c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CD070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD06Cu;
            // 0x2cd070: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd06c) {
            ctx->pc = 0x2CD088u;
            goto label_2cd088;
        }
    }
    ctx->pc = 0x2CD074u;
label_2cd074:
    // 0x2cd074: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2cd074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2cd078: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cd078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cd07c: 0x8c638554  lw          $v1, -0x7AAC($v1)
    ctx->pc = 0x2cd07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935892)));
    // 0x2cd080: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CD080u;
    {
        const bool branch_taken_0x2cd080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD080u;
            // 0x2cd084: 0xe33823  subu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd080) {
            ctx->pc = 0x2CD08Cu;
            goto label_2cd08c;
        }
    }
    ctx->pc = 0x2CD088u;
label_2cd088:
    // 0x2cd088: 0x24e7ffe3  addiu       $a3, $a3, -0x1D
    ctx->pc = 0x2cd088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967267));
label_2cd08c:
    // 0x2cd08c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2cd08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2cd090: 0x28c2000d  slti        $v0, $a2, 0xD
    ctx->pc = 0x2cd090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2cd094: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CD094u;
    {
        const bool branch_taken_0x2cd094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd094) {
            ctx->pc = 0x2CD098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD094u;
            // 0x2cd098: 0xa52a0000  sh          $t2, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CD0B4u;
            goto label_2cd0b4;
        }
    }
    ctx->pc = 0x2CD09Cu;
    // 0x2cd09c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2cd09cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2cd0a0: 0x24c6fff4  addiu       $a2, $a2, -0xC
    ctx->pc = 0x2cd0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967284));
    // 0x2cd0a4: 0x29432710  slti        $v1, $t2, 0x2710
    ctx->pc = 0x2cd0a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)10000) ? 1 : 0);
    // 0x2cd0a8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD0A8u;
    {
        const bool branch_taken_0x2cd0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CD0A8u;
            // 0x2cd0ac: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0a8) {
            ctx->pc = 0x2CD0CCu;
            goto label_2cd0cc;
        }
    }
    ctx->pc = 0x2CD0B0u;
label_2cd0b0:
    // 0x2cd0b0: 0xa52a0000  sh          $t2, 0x0($t1)
    ctx->pc = 0x2cd0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 10));
label_2cd0b4:
    // 0x2cd0b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cd0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd0b8: 0xa5260002  sh          $a2, 0x2($t1)
    ctx->pc = 0x2cd0b8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 2), (uint16_t)GPR_U32(ctx, 6));
    // 0x2cd0bc: 0xa5270004  sh          $a3, 0x4($t1)
    ctx->pc = 0x2cd0bcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x2cd0c0: 0xa5280006  sh          $t0, 0x6($t1)
    ctx->pc = 0x2cd0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 6), (uint16_t)GPR_U32(ctx, 8));
    // 0x2cd0c4: 0xa52b0008  sh          $t3, 0x8($t1)
    ctx->pc = 0x2cd0c4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 8), (uint16_t)GPR_U32(ctx, 11));
    // 0x2cd0c8: 0xa5200010  sh          $zero, 0x10($t1)
    ctx->pc = 0x2cd0c8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 16), (uint16_t)GPR_U32(ctx, 0));
label_2cd0cc:
    // 0x2cd0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD0D4u;
    // 0x2cd0d4: 0x0  nop
    ctx->pc = 0x2cd0d4u;
    // NOP
    ctx->pc = 0x2cd0d8u;
}
