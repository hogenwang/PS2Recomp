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

// Function: sub_002CBE48
// Address: 0x2cbe48 - 0x2cc6c8
void sub_002CBE48_0x2cbe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBE48_0x2cbe48");
#endif

    switch (ctx->pc) {
        case 0x2cbea8u: goto label_2cbea8;
        case 0x2cbef0u: goto label_2cbef0;
        case 0x2cc0b0u: goto label_2cc0b0;
        case 0x2cc630u: goto label_2cc630;
        case 0x2cc680u: goto label_2cc680;
        default: break;
    }

    ctx->pc = 0x2cbe48u;

    // 0x2cbe48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cbe48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cbe4c: 0x3c0301e1  lui         $v1, 0x1E1
    ctx->pc = 0x2cbe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)481 << 16));
    // 0x2cbe50: 0x34633380  ori         $v1, $v1, 0x3380
    ctx->pc = 0x2cbe50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13184);
    // 0x2cbe54: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2cbe54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2cbe58: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2cbe58u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe5c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2cbe5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe60: 0x3c0701e2  lui         $a3, 0x1E2
    ctx->pc = 0x2cbe60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)482 << 16));
    // 0x2cbe64: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x2cbe64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cbe68: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x2cbe68u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe6c: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x2cbe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2cbe70: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x2cbe70u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2cbe74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cbe78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cbe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cbe7c: 0x34e78500  ori         $a3, $a3, 0x8500
    ctx->pc = 0x2cbe7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)34048);
    // 0x2cbe80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cbe80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cbe84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cbe84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cbe88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cbe88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cbe8c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cbe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cbe90: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2cbe90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2cbe94: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2cbe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2cbe98: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CBE98u;
    {
        const bool branch_taken_0x2cbe98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBE98u;
        // 0x2cbe9c: 0xffb70038  sd          $s7, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe98) {
            ctx->pc = 0x2CBEC4u;
            goto label_2cbec4;
        }
    }
    ctx->pc = 0x2CBEA0u;
    // 0x2cbea0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2cbea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2cbea4: 0x0  nop
    ctx->pc = 0x2cbea4u;
    // NOP
label_2cbea8:
    // 0x2cbea8: 0x3c3f023  subu        $fp, $fp, $v1
    ctx->pc = 0x2cbea8u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2cbeac: 0x30850003  andi        $a1, $a0, 0x3
    ctx->pc = 0x2cbeacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2cbeb0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2cbeb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbeb4: 0xe5180a  movz        $v1, $a3, $a1
    ctx->pc = 0x2cbeb4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x2cbeb8: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x2cbeb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cbebc: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CBEBCu;
    {
        const bool branch_taken_0x2cbebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbebc) {
            ctx->pc = 0x2CBEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBEBCu;
            // 0x2cbec0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBEA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cbea8;
        }
    }
    ctx->pc = 0x2CBEC4u;
label_2cbec4:
    // 0x2cbec4: 0x288300aa  slti        $v1, $a0, 0xAA
    ctx->pc = 0x2cbec4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)170) ? 1 : 0);
    // 0x2cbec8: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x2CBEC8u;
    {
        const bool branch_taken_0x2cbec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBEC8u;
        // 0x2cbecc: 0x24020804  addiu       $v0, $zero, 0x804 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbec8) {
            ctx->pc = 0x2CC084u;
            goto label_2cc084;
        }
    }
    ctx->pc = 0x2CBED0u;
    // 0x2cbed0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2cbed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2cbed4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x2cbed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x2cbed8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2cbed8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbedc: 0x24458558  addiu       $a1, $v0, -0x7AA8
    ctx->pc = 0x2cbedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935896));
    // 0x2cbee0: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x2cbee0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbee4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x2cbee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cbee8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBEE8u;
    {
        const bool branch_taken_0x2cbee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBEE8u;
        // 0x2cbeec: 0x34c65180  ori         $a2, $a2, 0x5180 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20864);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbee8) {
            ctx->pc = 0x2CBEF8u;
            goto label_2cbef8;
        }
    }
    ctx->pc = 0x2CBEF0u;
label_2cbef0:
    // 0x2cbef0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2cbef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2cbef4: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2cbef4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_2cbef8:
    // 0x2cbef8: 0x54e00004  bnel        $a3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CBEF8u;
    {
        const bool branch_taken_0x2cbef8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cbef8) {
            ctx->pc = 0x2CBEFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBEF8u;
            // 0x2cbefc: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBF0Cu;
            goto label_2cbf0c;
        }
    }
    ctx->pc = 0x2CBF00u;
    // 0x2cbf00: 0x51880005  beql        $t4, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBF00u;
    {
        const bool branch_taken_0x2cbf00 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 8));
        if (branch_taken_0x2cbf00) {
            ctx->pc = 0x2CBF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBF00u;
            // 0x2cbf04: 0x3c030026  lui         $v1, 0x26 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBF18u;
            goto label_2cbf18;
        }
    }
    ctx->pc = 0x2CBF08u;
    // 0x2cbf08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2cbf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2cbf0c:
    // 0x2cbf0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBF0Cu;
    {
        const bool branch_taken_0x2cbf0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBF0Cu;
        // 0x2cbf10: 0x461818  mult        $v1, $v0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf0c) {
            ctx->pc = 0x2CBF1Cu;
            goto label_2cbf1c;
        }
    }
    ctx->pc = 0x2CBF14u;
    // 0x2cbf14: 0x0  nop
    ctx->pc = 0x2cbf14u;
    // NOP
label_2cbf18:
    // 0x2cbf18: 0x34633b80  ori         $v1, $v1, 0x3B80
    ctx->pc = 0x2cbf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15232);
label_2cbf1c:
    // 0x2cbf1c: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x2cbf1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2cbf20: 0x5040fff3  beql        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2CBF20u;
    {
        const bool branch_taken_0x2cbf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbf20) {
            ctx->pc = 0x2CBF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBF20u;
            // 0x2cbf24: 0x3c3f023  subu        $fp, $fp, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBEF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cbef0;
        }
    }
    ctx->pc = 0x2CBF28u;
    // 0x2cbf28: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x2cbf28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x2cbf2c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2cbf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cbf30: 0x34c65180  ori         $a2, $a2, 0x5180
    ctx->pc = 0x2cbf30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20864);
    // 0x2cbf34: 0x28830064  slti        $v1, $a0, 0x64
    ctx->pc = 0x2cbf34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x2cbf38: 0x3c6001b  divu        $zero, $fp, $a2
    ctx->pc = 0x2cbf38u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 30) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 30) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,30); } }
    // 0x2cbf3c: 0x2482ff9c  addiu       $v0, $a0, -0x64
    ctx->pc = 0x2cbf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
    // 0x2cbf40: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x2cbf40u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x2cbf44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cbf44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf48: 0x24090e10  addiu       $t1, $zero, 0xE10
    ctx->pc = 0x2cbf48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x2cbf4c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CBF4Cu;
    {
        const bool branch_taken_0x2cbf4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbf4c) {
            ctx->pc = 0x2CBF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CBF4Cu;
            // 0x2cbf50: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CBF54u;
            goto label_2cbf54;
        }
    }
    ctx->pc = 0x2CBF54u;
label_2cbf54:
    // 0x2cbf54: 0x240a003c  addiu       $t2, $zero, 0x3C
    ctx->pc = 0x2cbf54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2cbf58: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x2cbf58u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cbf5c: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x2cbf5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cbf60: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x2cbf60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cbf64: 0x2411000a  addiu       $s1, $zero, 0xA
    ctx->pc = 0x2cbf64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cbf68: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x2cbf68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cbf6c: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x2cbf6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cbf70: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x2cbf70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cbf74: 0x2417000a  addiu       $s7, $zero, 0xA
    ctx->pc = 0x2cbf74u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cbf78: 0x2415000a  addiu       $s5, $zero, 0xA
    ctx->pc = 0x2cbf78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cbf7c: 0x2416000a  addiu       $s6, $zero, 0xA
    ctx->pc = 0x2cbf7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2cbf80: 0x3812  mflo        $a3
    ctx->pc = 0x2cbf80u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2cbf84: 0x185001a  div         $zero, $t4, $a1
    ctx->pc = 0x2cbf84u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cbf88: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2cbf88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2cbf8c: 0x6012  mflo        $t4
    ctx->pc = 0x2cbf8cu;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x2cbf90: 0x6810  mfhi        $t5
    ctx->pc = 0x2cbf90u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x2cbf94: 0x85001a  div         $zero, $a0, $a1
    ctx->pc = 0x2cbf94u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cbf98: 0x258c0030  addiu       $t4, $t4, 0x30
    ctx->pc = 0x2cbf98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 48));
    // 0x2cbf9c: 0x25ad0030  addiu       $t5, $t5, 0x30
    ctx->pc = 0x2cbf9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 48));
    // 0x2cbfa0: 0x2012  mflo        $a0
    ctx->pc = 0x2cbfa0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2cbfa4: 0x4010  mfhi        $t0
    ctx->pc = 0x2cbfa4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x2cbfa8: 0xe61818  mult        $v1, $a3, $a2
    ctx->pc = 0x2cbfa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2cbfac: 0xe5001a  div         $zero, $a3, $a1
    ctx->pc = 0x2cbfacu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cbfb0: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2cbfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2cbfb4: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x2cbfb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x2cbfb8: 0xa3240000  sb          $a0, 0x0($t9)
    ctx->pc = 0x2cbfb8u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cbfbc: 0xa3280001  sb          $t0, 0x1($t9)
    ctx->pc = 0x2cbfbcu;
    WRITE8(ADD32(GPR_U32(ctx, 25), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x2cbfc0: 0x3c31823  subu        $v1, $fp, $v1
    ctx->pc = 0x2cbfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2cbfc4: 0xa32c0002  sb          $t4, 0x2($t9)
    ctx->pc = 0x2cbfc4u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 2), (uint8_t)GPR_U32(ctx, 12));
    // 0x2cbfc8: 0x66f021  addu        $fp, $v1, $a2
    ctx->pc = 0x2cbfc8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2cbfcc: 0xa32d0003  sb          $t5, 0x3($t9)
    ctx->pc = 0x2cbfccu;
    WRITE8(ADD32(GPR_U32(ctx, 25), 3), (uint8_t)GPR_U32(ctx, 13));
    // 0x2cbfd0: 0x3812  mflo        $a3
    ctx->pc = 0x2cbfd0u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2cbfd4: 0x5810  mfhi        $t3
    ctx->pc = 0x2cbfd4u;
    SET_GPR_U64(ctx, 11, ctx->hi);
    // 0x2cbfd8: 0x3c9001b  divu        $zero, $fp, $t1
    ctx->pc = 0x2cbfd8u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 30) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 30) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,30); } }
    // 0x2cbfdc: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x2cbfdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x2cbfe0: 0x256b0030  addiu       $t3, $t3, 0x30
    ctx->pc = 0x2cbfe0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
    // 0x2cbfe4: 0xa3270004  sb          $a3, 0x4($t9)
    ctx->pc = 0x2cbfe4u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 4), (uint8_t)GPR_U32(ctx, 7));
    // 0x2cbfe8: 0xa32b0005  sb          $t3, 0x5($t9)
    ctx->pc = 0x2cbfe8u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 5), (uint8_t)GPR_U32(ctx, 11));
    // 0x2cbfec: 0x4812  mflo        $t1
    ctx->pc = 0x2cbfecu;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x2cbff0: 0x125001a  div         $zero, $t1, $a1
    ctx->pc = 0x2cbff0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cbff4: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x2cbff4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x2cbff8: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x2cbff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2cbffc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2cbffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2cc000: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2cc000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2cc004: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2cc004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2cc008: 0x3c3f023  subu        $fp, $fp, $v1
    ctx->pc = 0x2cc008u;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2cc00c: 0x2012  mflo        $a0
    ctx->pc = 0x2cc00cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2cc010: 0x3010  mfhi        $a2
    ctx->pc = 0x2cc010u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2cc014: 0x3ca001b  divu        $zero, $fp, $t2
    ctx->pc = 0x2cc014u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 30) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 30) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,30); } }
    // 0x2cc018: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2cc018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2cc01c: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x2cc01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x2cc020: 0xa3240006  sb          $a0, 0x6($t9)
    ctx->pc = 0x2cc020u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 6), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cc024: 0xa3260007  sb          $a2, 0x7($t9)
    ctx->pc = 0x2cc024u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 7), (uint8_t)GPR_U32(ctx, 6));
    // 0x2cc028: 0x5012  mflo        $t2
    ctx->pc = 0x2cc028u;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x2cc02c: 0x145001a  div         $zero, $t2, $a1
    ctx->pc = 0x2cc02cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cc030: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x2cc030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x2cc034: 0x6a1823  subu        $v1, $v1, $t2
    ctx->pc = 0x2cc034u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2cc038: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cc038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cc03c: 0x3c3f023  subu        $fp, $fp, $v1
    ctx->pc = 0x2cc03cu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x2cc040: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x2cc040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x2cc044: 0x2012  mflo        $a0
    ctx->pc = 0x2cc044u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2cc048: 0x3010  mfhi        $a2
    ctx->pc = 0x2cc048u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2cc04c: 0x3c5001a  div         $zero, $fp, $a1
    ctx->pc = 0x2cc04cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 30);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cc050: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2cc050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2cc054: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x2cc054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x2cc058: 0xa3240008  sb          $a0, 0x8($t9)
    ctx->pc = 0x2cc058u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x2cc05c: 0xa3260009  sb          $a2, 0x9($t9)
    ctx->pc = 0x2cc05cu;
    WRITE8(ADD32(GPR_U32(ctx, 25), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x2cc060: 0x2812  mflo        $a1
    ctx->pc = 0x2cc060u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2cc064: 0x3810  mfhi        $a3
    ctx->pc = 0x2cc064u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2cc068: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2cc068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x2cc06c: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x2cc06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x2cc070: 0xa325000a  sb          $a1, 0xA($t9)
    ctx->pc = 0x2cc070u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 10), (uint8_t)GPR_U32(ctx, 5));
    // 0x2cc074: 0xa323000c  sb          $v1, 0xC($t9)
    ctx->pc = 0x2cc074u;
    WRITE8(ADD32(GPR_U32(ctx, 25), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x2cc078: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2cc078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2cc07c: 0xa327000b  sb          $a3, 0xB($t9)
    ctx->pc = 0x2cc07cu;
    WRITE8(ADD32(GPR_U32(ctx, 25), 11), (uint8_t)GPR_U32(ctx, 7));
    // 0x2cc080: 0xaf030000  sw          $v1, 0x0($t8)
    ctx->pc = 0x2cc080u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
label_2cc084:
    // 0x2cc084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cc084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc088: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cc088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cc08c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cc08cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc090: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cc090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cc094: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cc094u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc098: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2cc098u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cc09c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2cc09cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc0a0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2cc0a0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cc0a4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2cc0a4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cc0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0A8u;
        // 0x2cc0ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC0B0u;
label_2cc0b0:
    // 0x2cc0b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cc0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cc0b4: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x2cc0b4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cc0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cc0bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2cc0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cc0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cc0c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cc0c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cc0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cc0cc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2cc0ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cc0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cc0d4: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x2cc0d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2cc0d8: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cc0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cc0dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cc0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cc0e0: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cc0e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cc0e4: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2CC0E4u;
    {
        const bool branch_taken_0x2cc0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0E4u;
        // 0x2cc0e8: 0x80c82d  daddu       $t9, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc0e4) {
            ctx->pc = 0x2CC440u;
            goto label_2cc440;
        }
    }
    ctx->pc = 0x2CC0ECu;
    // 0x2cc0ec: 0x91a20001  lbu         $v0, 0x1($t5)
    ctx->pc = 0x2cc0ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x2cc0f0: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cc0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cc0f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cc0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cc0f8: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cc0f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cc0fc: 0x1040016b  beqz        $v0, . + 4 + (0x16B << 2)
    ctx->pc = 0x2CC0FCu;
    {
        const bool branch_taken_0x2cc0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0FCu;
        // 0x2cc100: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc0fc) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC104u;
    // 0x2cc104: 0x91a20002  lbu         $v0, 0x2($t5)
    ctx->pc = 0x2cc104u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x2cc108: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cc108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cc10c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cc10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cc110: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cc110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cc114: 0x10400165  beqz        $v0, . + 4 + (0x165 << 2)
    ctx->pc = 0x2CC114u;
    {
        const bool branch_taken_0x2cc114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC114u;
        // 0x2cc118: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc114) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC11Cu;
    // 0x2cc11c: 0x91a20003  lbu         $v0, 0x3($t5)
    ctx->pc = 0x2cc11cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x2cc120: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cc120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cc124: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cc124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cc128: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cc128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cc12c: 0x1040015f  beqz        $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x2CC12Cu;
    {
        const bool branch_taken_0x2cc12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC12Cu;
        // 0x2cc130: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc12c) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC134u;
    // 0x2cc134: 0x91a20004  lbu         $v0, 0x4($t5)
    ctx->pc = 0x2cc134u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x2cc138: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cc138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cc13c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cc13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cc140: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cc140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cc144: 0x10400159  beqz        $v0, . + 4 + (0x159 << 2)
    ctx->pc = 0x2CC144u;
    {
        const bool branch_taken_0x2cc144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC144u;
        // 0x2cc148: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc144) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC14Cu;
    // 0x2cc14c: 0x91a20005  lbu         $v0, 0x5($t5)
    ctx->pc = 0x2cc14cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 5)));
    // 0x2cc150: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cc150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cc154: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cc154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cc158: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cc158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cc15c: 0x10400153  beqz        $v0, . + 4 + (0x153 << 2)
    ctx->pc = 0x2CC15Cu;
    {
        const bool branch_taken_0x2cc15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC15Cu;
        // 0x2cc160: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc15c) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC164u;
    // 0x2cc164: 0x91a20006  lbu         $v0, 0x6($t5)
    ctx->pc = 0x2cc164u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x2cc168: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cc168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cc16c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cc16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cc170: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cc170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cc174: 0x1040014d  beqz        $v0, . + 4 + (0x14D << 2)
    ctx->pc = 0x2CC174u;
    {
        const bool branch_taken_0x2cc174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC174u;
        // 0x2cc178: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc174) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC17Cu;
    // 0x2cc17c: 0x91a20007  lbu         $v0, 0x7($t5)
    ctx->pc = 0x2cc17cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 7)));
    // 0x2cc180: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cc180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cc184: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cc184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cc188: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cc188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cc18c: 0x10400147  beqz        $v0, . + 4 + (0x147 << 2)
    ctx->pc = 0x2CC18Cu;
    {
        const bool branch_taken_0x2cc18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC18Cu;
        // 0x2cc190: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc18c) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC194u;
    // 0x2cc194: 0x91a20008  lbu         $v0, 0x8($t5)
    ctx->pc = 0x2cc194u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x2cc198: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cc198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cc19c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cc19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cc1a0: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cc1a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cc1a4: 0x10400141  beqz        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x2CC1A4u;
    {
        const bool branch_taken_0x2cc1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1A4u;
        // 0x2cc1a8: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1a4) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC1ACu;
    // 0x2cc1ac: 0x91a20009  lbu         $v0, 0x9($t5)
    ctx->pc = 0x2cc1acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 9)));
    // 0x2cc1b0: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cc1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cc1b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cc1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cc1b8: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cc1b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cc1bc: 0x1040013b  beqz        $v0, . + 4 + (0x13B << 2)
    ctx->pc = 0x2CC1BCu;
    {
        const bool branch_taken_0x2cc1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC1BCu;
        // 0x2cc1c0: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc1bc) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC1C4u;
    // 0x2cc1c4: 0x91aa0000  lbu         $t2, 0x0($t5)
    ctx->pc = 0x2cc1c4u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2cc1c8: 0x91ab0002  lbu         $t3, 0x2($t5)
    ctx->pc = 0x2cc1c8u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 2)));
    // 0x2cc1cc: 0x91ac0004  lbu         $t4, 0x4($t5)
    ctx->pc = 0x2cc1ccu;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x2cc1d0: 0xa3080  sll         $a2, $t2, 2
    ctx->pc = 0x2cc1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x2cc1d4: 0x91a90006  lbu         $t1, 0x6($t5)
    ctx->pc = 0x2cc1d4u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 6)));
    // 0x2cc1d8: 0xb2880  sll         $a1, $t3, 2
    ctx->pc = 0x2cc1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x2cc1dc: 0x91a80008  lbu         $t0, 0x8($t5)
    ctx->pc = 0x2cc1dcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x2cc1e0: 0xc2080  sll         $a0, $t4, 2
    ctx->pc = 0x2cc1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x2cc1e4: 0x91a7000a  lbu         $a3, 0xA($t5)
    ctx->pc = 0x2cc1e4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x2cc1e8: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2cc1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2cc1ec: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x2cc1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2cc1f0: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x2cc1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x2cc1f4: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x2cc1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x2cc1f8: 0x91ab0001  lbu         $t3, 0x1($t5)
    ctx->pc = 0x2cc1f8u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x2cc1fc: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x2cc1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x2cc200: 0x91ac0003  lbu         $t4, 0x3($t5)
    ctx->pc = 0x2cc200u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 3)));
    // 0x2cc204: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2cc204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2cc208: 0x91a90007  lbu         $t1, 0x7($t5)
    ctx->pc = 0x2cc208u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 7)));
    // 0x2cc20c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2cc20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2cc210: 0x91a80009  lbu         $t0, 0x9($t5)
    ctx->pc = 0x2cc210u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 9)));
    // 0x2cc214: 0x91aa0005  lbu         $t2, 0x5($t5)
    ctx->pc = 0x2cc214u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 5)));
    // 0x2cc218: 0x24e700d0  addiu       $a3, $a3, 0xD0
    ctx->pc = 0x2cc218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 208));
    // 0x2cc21c: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x2cc21cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2cc220: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x2cc220u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2cc224: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x2cc224u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2cc228: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2cc228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2cc22c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2cc22cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2cc230: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x2cc230u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2cc234: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x2cc234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x2cc238: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x2cc238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2cc23c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2cc23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2cc240: 0x24a9fdf0  addiu       $t1, $a1, -0x210
    ctx->pc = 0x2cc240u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966768));
    // 0x2cc244: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x2cc244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x2cc248: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2cc248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2cc24c: 0x2ce7000a  sltiu       $a3, $a3, 0xA
    ctx->pc = 0x2cc24cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cc250: 0x24ccfdf0  addiu       $t4, $a2, -0x210
    ctx->pc = 0x2cc250u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966768));
    // 0x2cc254: 0x248afdf0  addiu       $t2, $a0, -0x210
    ctx->pc = 0x2cc254u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966768));
    // 0x2cc258: 0x244bfdf0  addiu       $t3, $v0, -0x210
    ctx->pc = 0x2cc258u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966768));
    // 0x2cc25c: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CC25Cu;
    {
        const bool branch_taken_0x2cc25c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC25Cu;
        // 0x2cc260: 0x246ffdf0  addiu       $t7, $v1, -0x210 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc25c) {
            ctx->pc = 0x2CC2A0u;
            goto label_2cc2a0;
        }
    }
    ctx->pc = 0x2CC264u;
    // 0x2cc264: 0x91a3000b  lbu         $v1, 0xB($t5)
    ctx->pc = 0x2cc264u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 11)));
    // 0x2cc268: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x2cc268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x2cc26c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cc26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cc270: 0x2c63000a  sltiu       $v1, $v1, 0xA
    ctx->pc = 0x2cc270u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cc274: 0x1060010d  beqz        $v1, . + 4 + (0x10D << 2)
    ctx->pc = 0x2CC274u;
    {
        const bool branch_taken_0x2cc274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC274u;
        // 0x2cc278: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc274) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC27Cu;
    // 0x2cc27c: 0x91a2000a  lbu         $v0, 0xA($t5)
    ctx->pc = 0x2cc27cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 10)));
    // 0x2cc280: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x2cc280u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2cc284: 0x91a4000b  lbu         $a0, 0xB($t5)
    ctx->pc = 0x2cc284u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 11)));
    // 0x2cc288: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2cc288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cc28c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cc28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cc290: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2cc290u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2cc294: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cc294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cc298: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC298u;
    {
        const bool branch_taken_0x2cc298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC298u;
        // 0x2cc29c: 0x2470fdf0  addiu       $s0, $v1, -0x210 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc298) {
            ctx->pc = 0x2CC2A8u;
            goto label_2cc2a8;
        }
    }
    ctx->pc = 0x2CC2A0u;
label_2cc2a0:
    // 0x2cc2a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cc2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc2a4: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x2cc2a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2cc2a8:
    // 0x2cc2a8: 0x2d820064  sltiu       $v0, $t4, 0x64
    ctx->pc = 0x2cc2a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x2cc2ac: 0x104000ff  beqz        $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x2CC2ACu;
    {
        const bool branch_taken_0x2cc2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2ACu;
        // 0x2cc2b0: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2ac) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC2B4u;
    // 0x2cc2b4: 0x592000fe  blezl       $t1, . + 4 + (0xFE << 2)
    ctx->pc = 0x2CC2B4u;
    {
        const bool branch_taken_0x2cc2b4 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x2cc2b4) {
            ctx->pc = 0x2CC2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC2B4u;
            // 0x2cc2b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC6B0u;
            goto label_2cc6b0;
        }
    }
    ctx->pc = 0x2CC2BCu;
    // 0x2cc2bc: 0x2922000d  slti        $v0, $t1, 0xD
    ctx->pc = 0x2cc2bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2cc2c0: 0x104000fa  beqz        $v0, . + 4 + (0xFA << 2)
    ctx->pc = 0x2CC2C0u;
    {
        const bool branch_taken_0x2cc2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2C0u;
        // 0x2cc2c4: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2c0) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC2C8u;
    // 0x2cc2c8: 0x594000f9  blezl       $t2, . + 4 + (0xF9 << 2)
    ctx->pc = 0x2CC2C8u;
    {
        const bool branch_taken_0x2cc2c8 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x2cc2c8) {
            ctx->pc = 0x2CC2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC2C8u;
            // 0x2cc2cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC6B0u;
            goto label_2cc6b0;
        }
    }
    ctx->pc = 0x2CC2D0u;
    // 0x2cc2d0: 0x31820003  andi        $v0, $t4, 0x3
    ctx->pc = 0x2cc2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
    // 0x2cc2d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC2D4u;
    {
        const bool branch_taken_0x2cc2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2D4u;
        // 0x2cc2d8: 0x91880  sll         $v1, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2d4) {
            ctx->pc = 0x2CC2E8u;
            goto label_2cc2e8;
        }
    }
    ctx->pc = 0x2CC2DCu;
    // 0x2cc2dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cc2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc2e0: 0x11220009  beq         $t1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CC2E0u;
    {
        const bool branch_taken_0x2cc2e0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CC2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2E0u;
        // 0x2cc2e4: 0x2942001e  slti        $v0, $t2, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2e0) {
            ctx->pc = 0x2CC308u;
            goto label_2cc308;
        }
    }
    ctx->pc = 0x2CC2E8u;
label_2cc2e8:
    // 0x2cc2e8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2cc2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2cc2ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cc2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc2f0: 0x8c428554  lw          $v0, -0x7AAC($v0)
    ctx->pc = 0x2cc2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935892)));
    // 0x2cc2f4: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x2cc2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2cc2f8: 0x144000ec  bnez        $v0, . + 4 + (0xEC << 2)
    ctx->pc = 0x2CC2F8u;
    {
        const bool branch_taken_0x2cc2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC2F8u;
        // 0x2cc2fc: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc2f8) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC300u;
    // 0x2cc300: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC300u;
    {
        const bool branch_taken_0x2cc300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc300) {
            ctx->pc = 0x2CC310u;
            goto label_2cc310;
        }
    }
    ctx->pc = 0x2CC308u;
label_2cc308:
    // 0x2cc308: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x2CC308u;
    {
        const bool branch_taken_0x2cc308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC308u;
        // 0x2cc30c: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc308) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC310u;
label_2cc310:
    // 0x2cc310: 0x56000e6  bltz        $t3, . + 4 + (0xE6 << 2)
    ctx->pc = 0x2CC310u;
    {
        const bool branch_taken_0x2cc310 = (GPR_S32(ctx, 11) < 0);
        ctx->pc = 0x2CC314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC310u;
        // 0x2cc314: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc310) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC318u;
    // 0x2cc318: 0x29620018  slti        $v0, $t3, 0x18
    ctx->pc = 0x2cc318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x2cc31c: 0x104000e3  beqz        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x2CC31Cu;
    {
        const bool branch_taken_0x2cc31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC31Cu;
        // 0x2cc320: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc31c) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC324u;
    // 0x2cc324: 0x5e200e2  bltzl       $t7, . + 4 + (0xE2 << 2)
    ctx->pc = 0x2CC324u;
    {
        const bool branch_taken_0x2cc324 = (GPR_S32(ctx, 15) < 0);
        if (branch_taken_0x2cc324) {
            ctx->pc = 0x2CC328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC324u;
            // 0x2cc328: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC6B0u;
            goto label_2cc6b0;
        }
    }
    ctx->pc = 0x2CC32Cu;
    // 0x2cc32c: 0x29e2003c  slti        $v0, $t7, 0x3C
    ctx->pc = 0x2cc32cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2cc330: 0x104000de  beqz        $v0, . + 4 + (0xDE << 2)
    ctx->pc = 0x2CC330u;
    {
        const bool branch_taken_0x2cc330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC330u;
        // 0x2cc334: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc330) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC338u;
    // 0x2cc338: 0x60200dd  bltzl       $s0, . + 4 + (0xDD << 2)
    ctx->pc = 0x2CC338u;
    {
        const bool branch_taken_0x2cc338 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2cc338) {
            ctx->pc = 0x2CC33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC338u;
            // 0x2cc33c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC6B0u;
            goto label_2cc6b0;
        }
    }
    ctx->pc = 0x2CC340u;
    // 0x2cc340: 0x2a02003c  slti        $v0, $s0, 0x3C
    ctx->pc = 0x2cc340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2cc344: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x2CC344u;
    {
        const bool branch_taken_0x2cc344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC344u;
        // 0x2cc348: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc344) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC34Cu;
    // 0x2cc34c: 0x1ae1821  addu        $v1, $t5, $t6
    ctx->pc = 0x2cc34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x2cc350: 0x80780000  lb          $t8, 0x0($v1)
    ctx->pc = 0x2cc350u;
    SET_GPR_S32(ctx, 24, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cc354: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x2cc354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2cc358: 0x13020004  beq         $t8, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC358u;
    {
        const bool branch_taken_0x2cc358 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CC35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC358u;
        // 0x2cc35c: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc358) {
            ctx->pc = 0x2CC36Cu;
            goto label_2cc36c;
        }
    }
    ctx->pc = 0x2CC360u;
    // 0x2cc360: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2cc360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2cc364: 0x17020038  bne         $t8, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2CC364u;
    {
        const bool branch_taken_0x2cc364 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC364u;
        // 0x2cc368: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc364) {
            ctx->pc = 0x2CC448u;
            goto label_2cc448;
        }
    }
    ctx->pc = 0x2CC36Cu;
label_2cc36c:
    // 0x2cc36c: 0x1ae1821  addu        $v1, $t5, $t6
    ctx->pc = 0x2cc36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x2cc370: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2cc370u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cc374: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cc374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cc378: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cc378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cc37c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cc37cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cc380: 0x104000ca  beqz        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x2CC380u;
    {
        const bool branch_taken_0x2cc380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC380u;
        // 0x2cc384: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc380) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC388u;
    // 0x2cc388: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x2cc388u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2cc38c: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cc38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cc390: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cc390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cc394: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cc394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cc398: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x2CC398u;
    {
        const bool branch_taken_0x2cc398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC398u;
        // 0x2cc39c: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc398) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC3A0u;
    // 0x2cc3a0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2cc3a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2cc3a4: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cc3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cc3a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cc3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cc3ac: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cc3acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cc3b0: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x2CC3B0u;
    {
        const bool branch_taken_0x2cc3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC3B0u;
        // 0x2cc3b4: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc3b0) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC3B8u;
    // 0x2cc3b8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x2cc3b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2cc3bc: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2cc3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2cc3c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cc3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cc3c4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2cc3c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2cc3c8: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x2CC3C8u;
    {
        const bool branch_taken_0x2cc3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC3C8u;
        // 0x2cc3cc: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc3c8) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC3D0u;
    // 0x2cc3d0: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2cc3d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2cc3d4: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2cc3d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cc3d8: 0x1ae4021  addu        $t0, $t5, $t6
    ctx->pc = 0x2cc3d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x2cc3dc: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2cc3dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2cc3e0: 0x1ae1021  addu        $v0, $t5, $t6
    ctx->pc = 0x2cc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x2cc3e4: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2cc3e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2cc3e8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x2cc3e8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc3ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cc3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cc3f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2cc3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cc3f4: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x2cc3f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2cc3f8: 0x1ae3821  addu        $a3, $t5, $t6
    ctx->pc = 0x2cc3f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x2cc3fc: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2cc3fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2cc400: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2cc400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2cc404: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2cc404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2cc408: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2cc408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cc40c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2cc40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2cc410: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x2cc410u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cc414: 0x2472fdf0  addiu       $s2, $v1, -0x210
    ctx->pc = 0x2cc414u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966768));
    // 0x2cc418: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2cc418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2cc41c: 0x2e430018  sltiu       $v1, $s2, 0x18
    ctx->pc = 0x2cc41cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x2cc420: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cc420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cc424: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC424u;
    {
        const bool branch_taken_0x2cc424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC424u;
        // 0x2cc428: 0x2451fdf0  addiu       $s1, $v0, -0x210 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc424) {
            ctx->pc = 0x2CC440u;
            goto label_2cc440;
        }
    }
    ctx->pc = 0x2CC42Cu;
    // 0x2cc42c: 0x620009f  bltz        $s1, . + 4 + (0x9F << 2)
    ctx->pc = 0x2CC42Cu;
    {
        const bool branch_taken_0x2cc42c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2CC430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC42Cu;
        // 0x2cc430: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc42c) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC434u;
    // 0x2cc434: 0x2a22003c  slti        $v0, $s1, 0x3C
    ctx->pc = 0x2cc434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2cc438: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC438u;
    {
        const bool branch_taken_0x2cc438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc438) {
            ctx->pc = 0x2CC450u;
            goto label_2cc450;
        }
    }
    ctx->pc = 0x2CC440u;
label_2cc440:
    // 0x2cc440: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x2CC440u;
    {
        const bool branch_taken_0x2cc440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC440u;
        // 0x2cc444: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc440) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC448u;
label_2cc448:
    // 0x2cc448: 0x17030098  bne         $t8, $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x2CC448u;
    {
        const bool branch_taken_0x2cc448 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CC44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC448u;
        // 0x2cc44c: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc448) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC450u;
label_2cc450:
    // 0x2cc450: 0x15d30096  bne         $t6, $s3, . + 4 + (0x96 << 2)
    ctx->pc = 0x2CC450u;
    {
        const bool branch_taken_0x2cc450 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 19));
        ctx->pc = 0x2CC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC450u;
        // 0x2cc454: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc450) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC458u;
    // 0x2cc458: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x2cc458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x2cc45c: 0x17020004  bne         $t8, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC45Cu;
    {
        const bool branch_taken_0x2cc45c = (GPR_U64(ctx, 24) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC45Cu;
        // 0x2cc460: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc45c) {
            ctx->pc = 0x2CC470u;
            goto label_2cc470;
        }
    }
    ctx->pc = 0x2CC464u;
    // 0x2cc464: 0x1725823  subu        $t3, $t3, $s2
    ctx->pc = 0x2cc464u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 18)));
    // 0x2cc468: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC468u;
    {
        const bool branch_taken_0x2cc468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC468u;
        // 0x2cc46c: 0x1f17823  subu        $t7, $t7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc468) {
            ctx->pc = 0x2CC480u;
            goto label_2cc480;
        }
    }
    ctx->pc = 0x2CC470u;
label_2cc470:
    // 0x2cc470: 0x17020004  bne         $t8, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC470u;
    {
        const bool branch_taken_0x2cc470 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC470u;
        // 0x2cc474: 0x29830046  slti        $v1, $t4, 0x46 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)70) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc470) {
            ctx->pc = 0x2CC484u;
            goto label_2cc484;
        }
    }
    ctx->pc = 0x2CC478u;
    // 0x2cc478: 0x1725821  addu        $t3, $t3, $s2
    ctx->pc = 0x2cc478u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 18)));
    // 0x2cc47c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x2cc47cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
label_2cc480:
    // 0x2cc480: 0x29830046  slti        $v1, $t4, 0x46
    ctx->pc = 0x2cc480u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)70) ? 1 : 0);
label_2cc484:
    // 0x2cc484: 0x25820064  addiu       $v0, $t4, 0x64
    ctx->pc = 0x2cc484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 100));
    // 0x2cc488: 0x5e10005  bgez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CC488u;
    {
        const bool branch_taken_0x2cc488 = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x2CC48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC488u;
        // 0x2cc48c: 0x43600b  movn        $t4, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc488) {
            ctx->pc = 0x2CC4A0u;
            goto label_2cc4a0;
        }
    }
    ctx->pc = 0x2CC490u;
    // 0x2cc490: 0x25ef003c  addiu       $t7, $t7, 0x3C
    ctx->pc = 0x2cc490u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 60));
    // 0x2cc494: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CC494u;
    {
        const bool branch_taken_0x2cc494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC494u;
        // 0x2cc498: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc494) {
            ctx->pc = 0x2CC4B4u;
            goto label_2cc4b4;
        }
    }
    ctx->pc = 0x2CC49Cu;
    // 0x2cc49c: 0x0  nop
    ctx->pc = 0x2cc49cu;
    // NOP
label_2cc4a0:
    // 0x2cc4a0: 0x29e2003c  slti        $v0, $t7, 0x3C
    ctx->pc = 0x2cc4a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x2cc4a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC4A4u;
    {
        const bool branch_taken_0x2cc4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc4a4) {
            ctx->pc = 0x2CC4B4u;
            goto label_2cc4b4;
        }
    }
    ctx->pc = 0x2CC4ACu;
    // 0x2cc4ac: 0x25efffc4  addiu       $t7, $t7, -0x3C
    ctx->pc = 0x2cc4acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967236));
    // 0x2cc4b0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2cc4b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_2cc4b4:
    // 0x2cc4b4: 0x5610018  bgez        $t3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2CC4B4u;
    {
        const bool branch_taken_0x2cc4b4 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x2CC4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4B4u;
        // 0x2cc4b8: 0x29620018  slti        $v0, $t3, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc4b4) {
            ctx->pc = 0x2CC518u;
            goto label_2cc518;
        }
    }
    ctx->pc = 0x2CC4BCu;
    // 0x2cc4bc: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x2cc4bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x2cc4c0: 0x1d40003f  bgtz        $t2, . + 4 + (0x3F << 2)
    ctx->pc = 0x2CC4C0u;
    {
        const bool branch_taken_0x2cc4c0 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x2CC4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4C0u;
        // 0x2cc4c4: 0x256b0018  addiu       $t3, $t3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc4c0) {
            ctx->pc = 0x2CC5C0u;
            goto label_2cc5c0;
        }
    }
    ctx->pc = 0x2CC4C8u;
    // 0x2cc4c8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2cc4c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2cc4cc: 0x1d200004  bgtz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC4CCu;
    {
        const bool branch_taken_0x2cc4cc = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x2CC4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4CCu;
        // 0x2cc4d0: 0x31820003  andi        $v0, $t4, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc4cc) {
            ctx->pc = 0x2CC4E0u;
            goto label_2cc4e0;
        }
    }
    ctx->pc = 0x2CC4D4u;
    // 0x2cc4d4: 0x2529000c  addiu       $t1, $t1, 0xC
    ctx->pc = 0x2cc4d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x2cc4d8: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x2cc4d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x2cc4dc: 0x31820003  andi        $v0, $t4, 0x3
    ctx->pc = 0x2cc4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
label_2cc4e0:
    // 0x2cc4e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CC4E0u;
    {
        const bool branch_taken_0x2cc4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4E0u;
        // 0x2cc4e4: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc4e0) {
            ctx->pc = 0x2CC500u;
            goto label_2cc500;
        }
    }
    ctx->pc = 0x2CC4E8u;
    // 0x2cc4e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cc4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc4ec: 0x15220004  bne         $t1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC4ECu;
    {
        const bool branch_taken_0x2cc4ec = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CC4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4ECu;
        // 0x2cc4f0: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc4ec) {
            ctx->pc = 0x2CC500u;
            goto label_2cc500;
        }
    }
    ctx->pc = 0x2CC4F4u;
    // 0x2cc4f4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2CC4F4u;
    {
        const bool branch_taken_0x2cc4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC4F4u;
        // 0x2cc4f8: 0x254a001d  addiu       $t2, $t2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc4f4) {
            ctx->pc = 0x2CC5C0u;
            goto label_2cc5c0;
        }
    }
    ctx->pc = 0x2CC4FCu;
    // 0x2cc4fc: 0x0  nop
    ctx->pc = 0x2cc4fcu;
    // NOP
label_2cc500:
    // 0x2cc500: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2cc500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2cc504: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cc504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cc508: 0x8c638554  lw          $v1, -0x7AAC($v1)
    ctx->pc = 0x2cc508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935892)));
    // 0x2cc50c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2CC50Cu;
    {
        const bool branch_taken_0x2cc50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC50Cu;
        // 0x2cc510: 0x1435021  addu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc50c) {
            ctx->pc = 0x2CC5C0u;
            goto label_2cc5c0;
        }
    }
    ctx->pc = 0x2CC514u;
    // 0x2cc514: 0x0  nop
    ctx->pc = 0x2cc514u;
    // NOP
label_2cc518:
    // 0x2cc518: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2CC518u;
    {
        const bool branch_taken_0x2cc518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC518u;
        // 0x2cc51c: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc518) {
            ctx->pc = 0x2CC5C4u;
            goto label_2cc5c4;
        }
    }
    ctx->pc = 0x2CC520u;
    // 0x2cc520: 0x31820003  andi        $v0, $t4, 0x3
    ctx->pc = 0x2cc520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
    // 0x2cc524: 0x256bffe8  addiu       $t3, $t3, -0x18
    ctx->pc = 0x2cc524u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967272));
    // 0x2cc528: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2cc528u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2cc52c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC52Cu;
    {
        const bool branch_taken_0x2cc52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC52Cu;
        // 0x2cc530: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc52c) {
            ctx->pc = 0x2CC540u;
            goto label_2cc540;
        }
    }
    ctx->pc = 0x2CC534u;
    // 0x2cc534: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cc534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc538: 0x1122000b  beq         $t1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CC538u;
    {
        const bool branch_taken_0x2cc538 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CC53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC538u;
        // 0x2cc53c: 0x2942001e  slti        $v0, $t2, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc538) {
            ctx->pc = 0x2CC568u;
            goto label_2cc568;
        }
    }
    ctx->pc = 0x2CC540u;
label_2cc540:
    // 0x2cc540: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x2cc540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2cc544: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2cc544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2cc548: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cc548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc54c: 0x8c428554  lw          $v0, -0x7AAC($v0)
    ctx->pc = 0x2cc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935892)));
    // 0x2cc550: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x2cc550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2cc554: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC554u;
    {
        const bool branch_taken_0x2cc554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc554) {
            ctx->pc = 0x2CC570u;
            goto label_2cc570;
        }
    }
    ctx->pc = 0x2CC55Cu;
    // 0x2cc55c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2CC55Cu;
    {
        const bool branch_taken_0x2cc55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC55Cu;
        // 0x2cc560: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc55c) {
            ctx->pc = 0x2CC5C4u;
            goto label_2cc5c4;
        }
    }
    ctx->pc = 0x2CC564u;
    // 0x2cc564: 0x0  nop
    ctx->pc = 0x2cc564u;
    // NOP
label_2cc568:
    // 0x2cc568: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CC568u;
    {
        const bool branch_taken_0x2cc568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc568) {
            ctx->pc = 0x2CC56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC568u;
            // 0x2cc56c: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC5C4u;
            goto label_2cc5c4;
        }
    }
    ctx->pc = 0x2CC570u;
label_2cc570:
    // 0x2cc570: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC570u;
    {
        const bool branch_taken_0x2cc570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC570u;
        // 0x2cc574: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc570) {
            ctx->pc = 0x2CC584u;
            goto label_2cc584;
        }
    }
    ctx->pc = 0x2CC578u;
    // 0x2cc578: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cc578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cc57c: 0x11220006  beq         $t1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC57Cu;
    {
        const bool branch_taken_0x2cc57c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC57Cu;
        // 0x2cc580: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc57c) {
            ctx->pc = 0x2CC598u;
            goto label_2cc598;
        }
    }
    ctx->pc = 0x2CC584u;
label_2cc584:
    // 0x2cc584: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2cc584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2cc588: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cc588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cc58c: 0x8c638554  lw          $v1, -0x7AAC($v1)
    ctx->pc = 0x2cc58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935892)));
    // 0x2cc590: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CC590u;
    {
        const bool branch_taken_0x2cc590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC590u;
        // 0x2cc594: 0x1435023  subu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc590) {
            ctx->pc = 0x2CC59Cu;
            goto label_2cc59c;
        }
    }
    ctx->pc = 0x2CC598u;
label_2cc598:
    // 0x2cc598: 0x254affe3  addiu       $t2, $t2, -0x1D
    ctx->pc = 0x2cc598u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967267));
label_2cc59c:
    // 0x2cc59c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2cc59cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2cc5a0: 0x2922000d  slti        $v0, $t1, 0xD
    ctx->pc = 0x2cc5a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2cc5a4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CC5A4u;
    {
        const bool branch_taken_0x2cc5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5A4u;
        // 0x2cc5a8: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc5a4) {
            ctx->pc = 0x2CC5C4u;
            goto label_2cc5c4;
        }
    }
    ctx->pc = 0x2CC5ACu;
    // 0x2cc5ac: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2cc5acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2cc5b0: 0x2529fff4  addiu       $t1, $t1, -0xC
    ctx->pc = 0x2cc5b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967284));
    // 0x2cc5b4: 0x298300aa  slti        $v1, $t4, 0xAA
    ctx->pc = 0x2cc5b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)170) ? 1 : 0);
    // 0x2cc5b8: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2CC5B8u;
    {
        const bool branch_taken_0x2cc5b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC5B8u;
        // 0x2cc5bc: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc5b8) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC5C0u;
label_2cc5c0:
    // 0x2cc5c0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2cc5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_2cc5c4:
    // 0x2cc5c4: 0xb18c0  sll         $v1, $t3, 3
    ctx->pc = 0x2cc5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x2cc5c8: 0x34845180  ori         $a0, $a0, 0x5180
    ctx->pc = 0x2cc5c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20864);
    // 0x2cc5cc: 0x6b1823  subu        $v1, $v1, $t3
    ctx->pc = 0x2cc5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2cc5d0: 0x1442818  mult        $a1, $t2, $a0
    ctx->pc = 0x2cc5d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2cc5d4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2cc5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2cc5d8: 0xf1100  sll         $v0, $t7, 4
    ctx->pc = 0x2cc5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x2cc5dc: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2cc5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2cc5e0: 0x4f1023  subu        $v0, $v0, $t7
    ctx->pc = 0x2cc5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2cc5e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2cc5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2cc5e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2cc5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cc5ec: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2cc5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2cc5f0: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x2cc5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2cc5f4: 0x29260002  slti        $a2, $t1, 0x2
    ctx->pc = 0x2cc5f4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cc5f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cc5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cc5fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cc5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cc600: 0x14c00017  bnez        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CC600u;
    {
        const bool branch_taken_0x2cc600 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC600u;
        // 0x2cc604: 0xaf220000  sw          $v0, 0x0($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc600) {
            ctx->pc = 0x2CC660u;
            goto label_2cc660;
        }
    }
    ctx->pc = 0x2CC608u;
    // 0x2cc608: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x2cc608u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x2cc60c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x2cc60cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x2cc610: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2cc610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x2cc614: 0x31870003  andi        $a3, $t4, 0x3
    ctx->pc = 0x2cc614u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)3);
    // 0x2cc618: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2cc618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2cc61c: 0x24848550  addiu       $a0, $a0, -0x7AB0
    ctx->pc = 0x2cc61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935888));
    // 0x2cc620: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2cc620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cc624: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x2cc624u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cc628: 0x34c65180  ori         $a2, $a2, 0x5180
    ctx->pc = 0x2cc628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20864);
    // 0x2cc62c: 0x34a53b80  ori         $a1, $a1, 0x3B80
    ctx->pc = 0x2cc62cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15232);
label_2cc630:
    // 0x2cc630: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC630u;
    {
        const bool branch_taken_0x2cc630 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC630u;
        // 0x2cc634: 0x8f230000  lw          $v1, 0x0($t9) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc630) {
            ctx->pc = 0x2CC640u;
            goto label_2cc640;
        }
    }
    ctx->pc = 0x2CC638u;
    // 0x2cc638: 0x51280004  beql        $t1, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CC638u;
    {
        const bool branch_taken_0x2cc638 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 8));
        if (branch_taken_0x2cc638) {
            ctx->pc = 0x2CC63Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CC638u;
            // 0x2cc63c: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CC64Cu;
            goto label_2cc64c;
        }
    }
    ctx->pc = 0x2CC640u;
label_2cc640:
    // 0x2cc640: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cc640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cc644: 0x465018  mult        $t2, $v0, $a2
    ctx->pc = 0x2cc644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2cc648: 0x1431021  addu        $v0, $t2, $v1
    ctx->pc = 0x2cc648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_2cc64c:
    // 0x2cc64c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2cc64cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2cc650: 0xaf220000  sw          $v0, 0x0($t9)
    ctx->pc = 0x2cc650u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 2));
    // 0x2cc654: 0x29220002  slti        $v0, $t1, 0x2
    ctx->pc = 0x2cc654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cc658: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2CC658u;
    {
        const bool branch_taken_0x2cc658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC658u;
        // 0x2cc65c: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc658) {
            ctx->pc = 0x2CC630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cc630;
        }
    }
    ctx->pc = 0x2CC660u;
label_2cc660:
    // 0x2cc660: 0x29820047  slti        $v0, $t4, 0x47
    ctx->pc = 0x2cc660u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)71) ? 1 : 0);
    // 0x2cc664: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CC664u;
    {
        const bool branch_taken_0x2cc664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC664u;
        // 0x2cc668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc664) {
            ctx->pc = 0x2CC6ACu;
            goto label_2cc6ac;
        }
    }
    ctx->pc = 0x2CC66Cu;
    // 0x2cc66c: 0x3c0701e1  lui         $a3, 0x1E1
    ctx->pc = 0x2cc66cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)481 << 16));
    // 0x2cc670: 0x3c0601e2  lui         $a2, 0x1E2
    ctx->pc = 0x2cc670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)482 << 16));
    // 0x2cc674: 0x34e73380  ori         $a3, $a3, 0x3380
    ctx->pc = 0x2cc674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)13184);
    // 0x2cc678: 0x34c68500  ori         $a2, $a2, 0x8500
    ctx->pc = 0x2cc678u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)34048);
    // 0x2cc67c: 0x0  nop
    ctx->pc = 0x2cc67cu;
    // NOP
label_2cc680:
    // 0x2cc680: 0x8f230000  lw          $v1, 0x0($t9)
    ctx->pc = 0x2cc680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x2cc684: 0x2582ffff  addiu       $v0, $t4, -0x1
    ctx->pc = 0x2cc684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x2cc688: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x2cc688u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc68c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2cc68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2cc690: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x2cc690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2cc694: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2cc694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2cc698: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x2cc698u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x2cc69c: 0x29850047  slti        $a1, $t4, 0x47
    ctx->pc = 0x2cc69cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)71) ? 1 : 0);
    // 0x2cc6a0: 0x10a0fff7  beqz        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2CC6A0u;
    {
        const bool branch_taken_0x2cc6a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6A0u;
        // 0x2cc6a4: 0xaf230000  sw          $v1, 0x0($t9) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6a0) {
            ctx->pc = 0x2CC680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cc680;
        }
    }
    ctx->pc = 0x2CC6A8u;
    // 0x2cc6a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cc6a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cc6ac:
    // 0x2cc6ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cc6acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc6b0:
    // 0x2cc6b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cc6b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cc6b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cc6b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc6b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cc6b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cc6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6BCu;
        // 0x2cc6c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC6C4u;
    // 0x2cc6c4: 0x0  nop
    ctx->pc = 0x2cc6c4u;
    // NOP
    if (ctx->pc == 0x2cc6c4u) { ctx->pc = 0x2cc6c8u; }
}
