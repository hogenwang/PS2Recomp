#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022BD00
// Address: 0x22bd00 - 0x22c148
void sub_0022BD00_0x22bd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BD00_0x22bd00");
#endif

    switch (ctx->pc) {
        case 0x22bd4cu: goto label_22bd4c;
        case 0x22bd60u: goto label_22bd60;
        case 0x22bd88u: goto label_22bd88;
        case 0x22bddcu: goto label_22bddc;
        case 0x22be10u: goto label_22be10;
        case 0x22bed8u: goto label_22bed8;
        case 0x22bef0u: goto label_22bef0;
        case 0x22bf84u: goto label_22bf84;
        case 0x22bf9cu: goto label_22bf9c;
        case 0x22bfc0u: goto label_22bfc0;
        case 0x22bfccu: goto label_22bfcc;
        case 0x22bfd8u: goto label_22bfd8;
        case 0x22bfecu: goto label_22bfec;
        case 0x22c000u: goto label_22c000;
        case 0x22c018u: goto label_22c018;
        case 0x22c024u: goto label_22c024;
        case 0x22c034u: goto label_22c034;
        case 0x22c03cu: goto label_22c03c;
        case 0x22c048u: goto label_22c048;
        case 0x22c090u: goto label_22c090;
        case 0x22c098u: goto label_22c098;
        case 0x22c0b4u: goto label_22c0b4;
        case 0x22c0e0u: goto label_22c0e0;
        case 0x22c0f8u: goto label_22c0f8;
        default: break;
    }

    ctx->pc = 0x22bd00u;

    // 0x22bd00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x22bd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x22bd04: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x22bd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x22bd08: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x22bd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x22bd0c: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x22bd0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd10: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x22bd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22bd14: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x22bd14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd18: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22bd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22bd1c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x22bd1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd20: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x22bd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x22bd24: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22bd24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bd28: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x22bd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x22bd2c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22bd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22bd30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22bd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22bd34: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22bd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22bd38: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x22BD38u;
    {
        const bool branch_taken_0x22bd38 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD38u;
            // 0x22bd3c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd38) {
            ctx->pc = 0x22BD4Cu;
            goto label_22bd4c;
        }
    }
    ctx->pc = 0x22BD40u;
    // 0x22bd40: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22bd40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22bd44: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x22BD44u;
    SET_GPR_U32(ctx, 31, 0x22BD4Cu);
    ctx->pc = 0x22BD48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD44u;
            // 0x22bd48: 0x248445c8  addiu       $a0, $a0, 0x45C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BD4Cu; }
        if (ctx->pc != 0x22BD4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BD4Cu; }
        if (ctx->pc != 0x22BD4Cu) { return; }
    }
    ctx->pc = 0x22BD4Cu;
label_22bd4c:
    // 0x22bd4c: 0x2ae20801  slti        $v0, $s7, 0x801
    ctx->pc = 0x22bd4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x22bd50: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x22BD50u;
    {
        const bool branch_taken_0x22bd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD50u;
            // 0x22bd54: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bd50) {
            ctx->pc = 0x22BFF8u;
            goto label_22bff8;
        }
    }
    ctx->pc = 0x22BD58u;
    // 0x22bd58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22BD58u;
    {
        const bool branch_taken_0x22bd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bd58) {
            ctx->pc = 0x22BD64u;
            goto label_22bd64;
        }
    }
    ctx->pc = 0x22BD60u;
label_22bd60:
    // 0x22bd60: 0x2639823  subu        $s3, $s3, $v1
    ctx->pc = 0x22bd60u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_22bd64:
    // 0x22bd64: 0x124000a4  beqz        $s2, . + 4 + (0xA4 << 2)
    ctx->pc = 0x22BD64u;
    {
        const bool branch_taken_0x22bd64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bd64) {
            ctx->pc = 0x22BFF8u;
            goto label_22bff8;
        }
    }
    ctx->pc = 0x22BD6Cu;
    // 0x22bd6c: 0x1a600006  blez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x22BD6Cu;
    {
        const bool branch_taken_0x22bd6c = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x22bd6c) {
            ctx->pc = 0x22BD88u;
            goto label_22bd88;
        }
    }
    ctx->pc = 0x22BD74u;
    // 0x22bd74: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x22bd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22bd78: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x22bd78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22bd7c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x22BD7Cu;
    {
        const bool branch_taken_0x22bd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bd7c) {
            ctx->pc = 0x22BD80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD7Cu;
            // 0x22bd80: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22BD60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22bd60;
        }
    }
    ctx->pc = 0x22BD84u;
    // 0x22bd84: 0x0  nop
    ctx->pc = 0x22bd84u;
    // NOP
label_22bd88:
    // 0x22bd88: 0x1240009b  beqz        $s2, . + 4 + (0x9B << 2)
    ctx->pc = 0x22BD88u;
    {
        const bool branch_taken_0x22bd88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bd88) {
            ctx->pc = 0x22BFF8u;
            goto label_22bff8;
        }
    }
    ctx->pc = 0x22BD90u;
    // 0x22bd90: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x22bd90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22bd94: 0x50a0fffc  beql        $a1, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x22BD94u;
    {
        const bool branch_taken_0x22bd94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bd94) {
            ctx->pc = 0x22BD98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22BD94u;
            // 0x22bd98: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22BD88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22bd88;
        }
    }
    ctx->pc = 0x22BD9Cu;
    // 0x22bd9c: 0x12400096  beqz        $s2, . + 4 + (0x96 << 2)
    ctx->pc = 0x22BD9Cu;
    {
        const bool branch_taken_0x22bd9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bd9c) {
            ctx->pc = 0x22BFF8u;
            goto label_22bff8;
        }
    }
    ctx->pc = 0x22BDA4u;
    // 0x22bda4: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BDA4u;
    {
        const bool branch_taken_0x22bda4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BDA4u;
            // 0x22bda8: 0xb31023  subu        $v0, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bda4) {
            ctx->pc = 0x22BDB4u;
            goto label_22bdb4;
        }
    }
    ctx->pc = 0x22BDACu;
    // 0x22bdac: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x22BDACu;
    {
        const bool branch_taken_0x22bdac = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BDACu;
            // 0x22bdb0: 0xb3a023  subu        $s4, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bdac) {
            ctx->pc = 0x22BDC0u;
            goto label_22bdc0;
        }
    }
    ctx->pc = 0x22BDB4u;
label_22bdb4:
    // 0x22bdb4: 0x57102a  slt         $v0, $v0, $s7
    ctx->pc = 0x22bdb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x22bdb8: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x22BDB8u;
    {
        const bool branch_taken_0x22bdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BDB8u;
            // 0x22bdbc: 0xb3a023  subu        $s4, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bdb8) {
            ctx->pc = 0x22C108u;
            goto label_22c108;
        }
    }
    ctx->pc = 0x22BDC0u;
label_22bdc0:
    // 0x22bdc0: 0x2f4102a  slt         $v0, $s7, $s4
    ctx->pc = 0x22bdc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x22bdc4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22BDC4u;
    {
        const bool branch_taken_0x22bdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BDC4u;
            // 0x22bdc8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bdc4) {
            ctx->pc = 0x22BDFCu;
            goto label_22bdfc;
        }
    }
    ctx->pc = 0x22BDCCu;
    // 0x22bdcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22bdccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bdd0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22bdd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bdd4: 0xc08aa68  jal         func_22A9A0
    ctx->pc = 0x22BDD4u;
    SET_GPR_U32(ctx, 31, 0x22BDDCu);
    ctx->pc = 0x22BDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BDD4u;
            // 0x22bdd8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A9A0u;
    if (runtime->hasFunction(0x22A9A0u)) {
        auto targetFn = runtime->lookupFunction(0x22A9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BDDCu; }
        if (ctx->pc != 0x22BDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A9A0_0x22a9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BDDCu; }
        if (ctx->pc != 0x22BDDCu) { return; }
    }
    ctx->pc = 0x22BDDCu;
label_22bddc:
    // 0x22bddc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22bddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bde0: 0x12200085  beqz        $s1, . + 4 + (0x85 << 2)
    ctx->pc = 0x22BDE0u;
    {
        const bool branch_taken_0x22bde0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bde0) {
            ctx->pc = 0x22BFF8u;
            goto label_22bff8;
        }
    }
    ctx->pc = 0x22BDE8u;
    // 0x22bde8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x22bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22bdec: 0xae53000c  sw          $s3, 0xC($s2)
    ctx->pc = 0x22bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
    // 0x22bdf0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22bdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x22bdf4: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x22BDF4u;
    {
        const bool branch_taken_0x22bdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BDF4u;
            // 0x22bdf8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bdf4) {
            ctx->pc = 0x22C100u;
            goto label_22c100;
        }
    }
    ctx->pc = 0x22BDFCu;
label_22bdfc:
    // 0x22bdfc: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x22bdfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22be00: 0x2f4b023  subu        $s6, $s7, $s4
    ctx->pc = 0x22be00u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x22be04: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22be04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22be08: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22BE08u;
    {
        const bool branch_taken_0x22be08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE08u;
            // 0x22be0c: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be08) {
            ctx->pc = 0x22BE2Cu;
            goto label_22be2c;
        }
    }
    ctx->pc = 0x22BE10u;
label_22be10:
    // 0x22be10: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x22be10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22be14: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x22be14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22be18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22be18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22be1c: 0x0  nop
    ctx->pc = 0x22be1cu;
    // NOP
    // 0x22be20: 0x0  nop
    ctx->pc = 0x22be20u;
    // NOP
    // 0x22be24: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22BE24u;
    {
        const bool branch_taken_0x22be24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be24) {
            ctx->pc = 0x22BE10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22be10;
        }
    }
    ctx->pc = 0x22BE2Cu;
label_22be2c:
    // 0x22be2c: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x22be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x22be30: 0x57102a  slt         $v0, $v0, $s7
    ctx->pc = 0x22be30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x22be34: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x22BE34u;
    {
        const bool branch_taken_0x22be34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be34) {
            ctx->pc = 0x22BFF8u;
            goto label_22bff8;
        }
    }
    ctx->pc = 0x22BE3Cu;
    // 0x22be3c: 0x96430012  lhu         $v1, 0x12($s2)
    ctx->pc = 0x22be3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x22be40: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22be40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22be44: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BE44u;
    {
        const bool branch_taken_0x22be44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be44) {
            ctx->pc = 0x22BE48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE44u;
            // 0x22be48: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22BE54u;
            goto label_22be54;
        }
    }
    ctx->pc = 0x22BE4Cu;
    // 0x22be4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22BE4Cu;
    {
        const bool branch_taken_0x22be4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE4Cu;
            // 0x22be50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be4c) {
            ctx->pc = 0x22BE68u;
            goto label_22be68;
        }
    }
    ctx->pc = 0x22BE54u;
label_22be54:
    // 0x22be54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22BE54u;
    {
        const bool branch_taken_0x22be54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE54u;
            // 0x22be58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be54) {
            ctx->pc = 0x22BE68u;
            goto label_22be68;
        }
    }
    ctx->pc = 0x22BE5Cu;
    // 0x22be5c: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x22be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x22be60: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x22be60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x22be64: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x22be64u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_22be68:
    // 0x22be68: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BE68u;
    {
        const bool branch_taken_0x22be68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE68u;
            // 0x22be6c: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be68) {
            ctx->pc = 0x22BE78u;
            goto label_22be78;
        }
    }
    ctx->pc = 0x22BE70u;
    // 0x22be70: 0x13c00021  beqz        $fp, . + 4 + (0x21 << 2)
    ctx->pc = 0x22BE70u;
    {
        const bool branch_taken_0x22be70 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x22be70) {
            ctx->pc = 0x22BEF8u;
            goto label_22bef8;
        }
    }
    ctx->pc = 0x22BE78u;
label_22be78:
    // 0x22be78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22BE78u;
    {
        const bool branch_taken_0x22be78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BE78u;
            // 0x22be7c: 0x8e470008  lw          $a3, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be78) {
            ctx->pc = 0x22BEA8u;
            goto label_22bea8;
        }
    }
    ctx->pc = 0x22BE80u;
    // 0x22be80: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x22be80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x22be84: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x22be84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x22be88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x22be88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22be8c: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x22be8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x22be90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x22be90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22be94: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x22be94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x22be98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22BE98u;
    {
        const bool branch_taken_0x22be98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22be98) {
            ctx->pc = 0x22BEC0u;
            goto label_22bec0;
        }
    }
    ctx->pc = 0x22BEA0u;
    // 0x22bea0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x22BEA0u;
    {
        const bool branch_taken_0x22bea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bea0) {
            ctx->pc = 0x22BEF8u;
            goto label_22bef8;
        }
    }
    ctx->pc = 0x22BEA8u;
label_22bea8:
    // 0x22bea8: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x22bea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x22beac: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x22beacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x22beb0: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x22beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22beb4: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x22beb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x22beb8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22BEB8u;
    {
        const bool branch_taken_0x22beb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22beb8) {
            ctx->pc = 0x22BEF8u;
            goto label_22bef8;
        }
    }
    ctx->pc = 0x22BEC0u;
label_22bec0:
    // 0x22bec0: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x22BEC0u;
    {
        const bool branch_taken_0x22bec0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BEC0u;
            // 0x22bec4: 0xe53821  addu        $a3, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bec0) {
            ctx->pc = 0x22BEF8u;
            goto label_22bef8;
        }
    }
    ctx->pc = 0x22BEC8u;
    // 0x22bec8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x22bec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22becc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22beccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bed0: 0xc08ac18  jal         func_22B060
    ctx->pc = 0x22BED0u;
    SET_GPR_U32(ctx, 31, 0x22BED8u);
    ctx->pc = 0x22BED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BED0u;
            // 0x22bed4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B060u;
    if (runtime->hasFunction(0x22B060u)) {
        auto targetFn = runtime->lookupFunction(0x22B060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BED8u; }
        if (ctx->pc != 0x22BED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B060_0x22b060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BED8u; }
        if (ctx->pc != 0x22BED8u) { return; }
    }
    ctx->pc = 0x22BED8u;
label_22bed8:
    // 0x22bed8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x22bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22bedc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x22bedcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bee0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x22bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22bee4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x22bee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x22bee8: 0xc08ac88  jal         func_22B220
    ctx->pc = 0x22BEE8u;
    SET_GPR_U32(ctx, 31, 0x22BEF0u);
    ctx->pc = 0x22BEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BEE8u;
            // 0x22beec: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (runtime->hasFunction(0x22B220u)) {
        auto targetFn = runtime->lookupFunction(0x22B220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BEF0u; }
        if (ctx->pc != 0x22BEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B220_0x22b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BEF0u; }
        if (ctx->pc != 0x22BEF0u) { return; }
    }
    ctx->pc = 0x22BEF0u;
label_22bef0:
    // 0x22bef0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x22BEF0u;
    {
        const bool branch_taken_0x22bef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bef0) {
            ctx->pc = 0x22C108u;
            goto label_22c108;
        }
    }
    ctx->pc = 0x22BEF8u;
label_22bef8:
    // 0x22bef8: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22BEF8u;
    {
        const bool branch_taken_0x22bef8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bef8) {
            ctx->pc = 0x22BEFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22BEF8u;
            // 0x22befc: 0x95030012  lhu         $v1, 0x12($t0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22BF0Cu;
            goto label_22bf0c;
        }
    }
    ctx->pc = 0x22BF00u;
    // 0x22bf00: 0x13c0002d  beqz        $fp, . + 4 + (0x2D << 2)
    ctx->pc = 0x22BF00u;
    {
        const bool branch_taken_0x22bf00 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bf00) {
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BF08u;
    // 0x22bf08: 0x95030012  lhu         $v1, 0x12($t0)
    ctx->pc = 0x22bf08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 18)));
label_22bf0c:
    // 0x22bf0c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x22bf0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x22bf10: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22BF10u;
    {
        const bool branch_taken_0x22bf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF10u;
            // 0x22bf14: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf10) {
            ctx->pc = 0x22BF44u;
            goto label_22bf44;
        }
    }
    ctx->pc = 0x22BF18u;
    // 0x22bf18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BF18u;
    {
        const bool branch_taken_0x22bf18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF18u;
            // 0x22bf1c: 0x8d020008  lw          $v0, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf18) {
            ctx->pc = 0x22BF28u;
            goto label_22bf28;
        }
    }
    ctx->pc = 0x22BF20u;
    // 0x22bf20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22BF20u;
    {
        const bool branch_taken_0x22bf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF20u;
            // 0x22bf24: 0x2442ffe0  addiu       $v0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf20) {
            ctx->pc = 0x22BF2Cu;
            goto label_22bf2c;
        }
    }
    ctx->pc = 0x22BF28u;
label_22bf28:
    // 0x22bf28: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x22bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
label_22bf2c:
    // 0x22bf2c: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x22bf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x22bf30: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x22bf30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x22bf34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BF34u;
    {
        const bool branch_taken_0x22bf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bf34) {
            ctx->pc = 0x22BF4Cu;
            goto label_22bf4c;
        }
    }
    ctx->pc = 0x22BF3Cu;
    // 0x22bf3c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x22BF3Cu;
    {
        const bool branch_taken_0x22bf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22bf3c) {
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BF44u;
label_22bf44:
    // 0x22bf44: 0x1e80001c  bgtz        $s4, . + 4 + (0x1C << 2)
    ctx->pc = 0x22BF44u;
    {
        const bool branch_taken_0x22bf44 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x22bf44) {
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BF4Cu;
label_22bf4c:
    // 0x22bf4c: 0x14c0001a  bnez        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x22BF4Cu;
    {
        const bool branch_taken_0x22bf4c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF4Cu;
            // 0x22bf50: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf4c) {
            ctx->pc = 0x22BFB8u;
            goto label_22bfb8;
        }
    }
    ctx->pc = 0x22BF54u;
    // 0x22bf54: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x22bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x22bf58: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x22bf58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x22bf5c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x22bf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x22bf60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x22bf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22bf64: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x22bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x22bf68: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x22bf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x22bf6c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x22bf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x22bf70: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x22bf70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22bf74: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x22bf74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22bf78: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x22bf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x22bf7c: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x22BF7Cu;
    SET_GPR_U32(ctx, 31, 0x22BF84u);
    ctx->pc = 0x22BF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF7Cu;
            // 0x22bf80: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BF84u; }
        if (ctx->pc != 0x22BF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BF84u; }
        if (ctx->pc != 0x22BF84u) { return; }
    }
    ctx->pc = 0x22BF84u;
label_22bf84:
    // 0x22bf84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22bf84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bf88: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x22bf88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22bf8c: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x22bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x22bf90: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x22bf90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x22bf94: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x22BF94u;
    {
        const bool branch_taken_0x22bf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BF94u;
            // 0x22bf98: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bf94) {
            ctx->pc = 0x22C108u;
            goto label_22c108;
        }
    }
    ctx->pc = 0x22BF9Cu;
label_22bf9c:
    // 0x22bf9c: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x22bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x22bfa0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22bfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x22bfa4: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x22bfa4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x22bfa8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22bfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x22bfac: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x22bfacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x22bfb0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22BFB0u;
    {
        const bool branch_taken_0x22bfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22BFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BFB0u;
            // 0x22bfb4: 0xa6200012  sh          $zero, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bfb0) {
            ctx->pc = 0x22BFF0u;
            goto label_22bff0;
        }
    }
    ctx->pc = 0x22BFB8u;
label_22bfb8:
    // 0x22bfb8: 0xc08c682  jal         func_231A08
    ctx->pc = 0x22BFB8u;
    SET_GPR_U32(ctx, 31, 0x22BFC0u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BFC0u; }
        if (ctx->pc != 0x22BFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BFC0u; }
        if (ctx->pc != 0x22BFC0u) { return; }
    }
    ctx->pc = 0x22BFC0u;
label_22bfc0:
    // 0x22bfc0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22bfc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bfc4: 0xc098552  jal         func_261548
    ctx->pc = 0x22BFC4u;
    SET_GPR_U32(ctx, 31, 0x22BFCCu);
    ctx->pc = 0x22BFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BFC4u;
            // 0x22bfc8: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BFCCu; }
        if (ctx->pc != 0x22BFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BFCCu; }
        if (ctx->pc != 0x22BFCCu) { return; }
    }
    ctx->pc = 0x22BFCCu;
label_22bfcc:
    // 0x22bfcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22bfccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22bfd0: 0xc08c698  jal         func_231A60
    ctx->pc = 0x22BFD0u;
    SET_GPR_U32(ctx, 31, 0x22BFD8u);
    ctx->pc = 0x22BFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BFD0u;
            // 0x22bfd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BFD8u; }
        if (ctx->pc != 0x22BFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BFD8u; }
        if (ctx->pc != 0x22BFD8u) { return; }
    }
    ctx->pc = 0x22BFD8u;
label_22bfd8:
    // 0x22bfd8: 0x5620fff0  bnel        $s1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x22BFD8u;
    {
        const bool branch_taken_0x22bfd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22bfd8) {
            ctx->pc = 0x22BFDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22BFD8u;
            // 0x22bfdc: 0x96a30010  lhu         $v1, 0x10($s5) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22BF9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22bf9c;
        }
    }
    ctx->pc = 0x22BFE0u;
    // 0x22bfe0: 0x86a50010  lh          $a1, 0x10($s5)
    ctx->pc = 0x22bfe0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x22bfe4: 0xc08a8ae  jal         func_22A2B8
    ctx->pc = 0x22BFE4u;
    SET_GPR_U32(ctx, 31, 0x22BFECu);
    ctx->pc = 0x22BFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BFE4u;
            // 0x22bfe8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A2B8u;
    if (runtime->hasFunction(0x22A2B8u)) {
        auto targetFn = runtime->lookupFunction(0x22A2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BFECu; }
        if (ctx->pc != 0x22BFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A2B8_0x22a2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BFECu; }
        if (ctx->pc != 0x22BFECu) { return; }
    }
    ctx->pc = 0x22BFECu;
label_22bfec:
    // 0x22bfec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22bfecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22bff0:
    // 0x22bff0: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BFF0u;
    {
        const bool branch_taken_0x22bff0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22BFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BFF0u;
            // 0x22bff4: 0x2ee200e1  sltiu       $v0, $s7, 0xE1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)225) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22bff0) {
            ctx->pc = 0x22C008u;
            goto label_22c008;
        }
    }
    ctx->pc = 0x22BFF8u;
label_22bff8:
    // 0x22bff8: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x22BFF8u;
    SET_GPR_U32(ctx, 31, 0x22C000u);
    ctx->pc = 0x22BFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BFF8u;
            // 0x22bffc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C000u; }
        if (ctx->pc != 0x22C000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C000u; }
        if (ctx->pc != 0x22C000u) { return; }
    }
    ctx->pc = 0x22C000u;
label_22c000:
    // 0x22c000: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x22C000u;
    {
        const bool branch_taken_0x22c000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C000u;
            // 0x22c004: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c000) {
            ctx->pc = 0x22C114u;
            goto label_22c114;
        }
    }
    ctx->pc = 0x22C008u;
label_22c008:
    // 0x22c008: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x22C008u;
    {
        const bool branch_taken_0x22c008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c008) {
            ctx->pc = 0x22C00Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22C008u;
            // 0x22c00c: 0xae34000c  sw          $s4, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22C0A0u;
            goto label_22c0a0;
        }
    }
    ctx->pc = 0x22C010u;
    // 0x22c010: 0xc08c682  jal         func_231A08
    ctx->pc = 0x22C010u;
    SET_GPR_U32(ctx, 31, 0x22C018u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C018u; }
        if (ctx->pc != 0x22C018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C018u; }
        if (ctx->pc != 0x22C018u) { return; }
    }
    ctx->pc = 0x22C018u;
label_22c018:
    // 0x22c018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22c018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c01c: 0xc098552  jal         func_261548
    ctx->pc = 0x22C01Cu;
    SET_GPR_U32(ctx, 31, 0x22C024u);
    ctx->pc = 0x22C020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C01Cu;
            // 0x22c020: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C024u; }
        if (ctx->pc != 0x22C024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C024u; }
        if (ctx->pc != 0x22C024u) { return; }
    }
    ctx->pc = 0x22C024u;
label_22c024:
    // 0x22c024: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22C024u;
    {
        const bool branch_taken_0x22c024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22C028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C024u;
            // 0x22c028: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c024) {
            ctx->pc = 0x22C040u;
            goto label_22c040;
        }
    }
    ctx->pc = 0x22C02Cu;
    // 0x22c02c: 0xc08a8ec  jal         func_22A3B0
    ctx->pc = 0x22C02Cu;
    SET_GPR_U32(ctx, 31, 0x22C034u);
    ctx->pc = 0x22C030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C02Cu;
            // 0x22c030: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (runtime->hasFunction(0x22A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x22A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C034u; }
        if (ctx->pc != 0x22C034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A3B0_0x22a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C034u; }
        if (ctx->pc != 0x22C034u) { return; }
    }
    ctx->pc = 0x22C034u;
label_22c034:
    // 0x22c034: 0xc098552  jal         func_261548
    ctx->pc = 0x22C034u;
    SET_GPR_U32(ctx, 31, 0x22C03Cu);
    ctx->pc = 0x22C038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C034u;
            // 0x22c038: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C03Cu; }
        if (ctx->pc != 0x22C03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C03Cu; }
        if (ctx->pc != 0x22C03Cu) { return; }
    }
    ctx->pc = 0x22C03Cu;
label_22c03c:
    // 0x22c03c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x22c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_22c040:
    // 0x22c040: 0xc08c698  jal         func_231A60
    ctx->pc = 0x22C040u;
    SET_GPR_U32(ctx, 31, 0x22C048u);
    ctx->pc = 0x22C044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C040u;
            // 0x22c044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C048u; }
        if (ctx->pc != 0x22C048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C048u; }
        if (ctx->pc != 0x22C048u) { return; }
    }
    ctx->pc = 0x22C048u;
label_22c048:
    // 0x22c048: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x22c048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x22c04c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x22C04Cu;
    {
        const bool branch_taken_0x22c04c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C04Cu;
            // 0x22c050: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c04c) {
            ctx->pc = 0x22C078u;
            goto label_22c078;
        }
    }
    ctx->pc = 0x22C054u;
    // 0x22c054: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x22c054u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x22c058: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x22c058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x22c05c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x22c05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x22c060: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x22c060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x22c064: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x22c064u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x22c068: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x22c068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x22c06c: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x22c06cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x22c070: 0xae310038  sw          $s1, 0x38($s1)
    ctx->pc = 0x22c070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 17));
    // 0x22c074: 0xae310034  sw          $s1, 0x34($s1)
    ctx->pc = 0x22c074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 17));
label_22c078:
    // 0x22c078: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x22c078u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x22c07c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22c07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22c080: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22C080u;
    {
        const bool branch_taken_0x22c080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c080) {
            ctx->pc = 0x22C084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22C080u;
            // 0x22c084: 0xae34000c  sw          $s4, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22C0A0u;
            goto label_22c0a0;
        }
    }
    ctx->pc = 0x22C088u;
    // 0x22c088: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x22C088u;
    SET_GPR_U32(ctx, 31, 0x22C090u);
    ctx->pc = 0x22C08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C088u;
            // 0x22c08c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C090u; }
        if (ctx->pc != 0x22C090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C090u; }
        if (ctx->pc != 0x22C090u) { return; }
    }
    ctx->pc = 0x22C090u;
label_22c090:
    // 0x22c090: 0xc08a996  jal         func_22A658
    ctx->pc = 0x22C090u;
    SET_GPR_U32(ctx, 31, 0x22C098u);
    ctx->pc = 0x22C094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C090u;
            // 0x22c094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C098u; }
        if (ctx->pc != 0x22C098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C098u; }
        if (ctx->pc != 0x22C098u) { return; }
    }
    ctx->pc = 0x22C098u;
label_22c098:
    // 0x22c098: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x22C098u;
    {
        const bool branch_taken_0x22c098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22C09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C098u;
            // 0x22c09c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c098) {
            ctx->pc = 0x22C114u;
            goto label_22c114;
        }
    }
    ctx->pc = 0x22C0A0u;
label_22c0a0:
    // 0x22c0a0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x22c0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0a4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22c0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22c0a8: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x22c0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22c0ac: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x22C0ACu;
    SET_GPR_U32(ctx, 31, 0x22C0B4u);
    ctx->pc = 0x22C0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C0ACu;
            // 0x22c0b0: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C0B4u; }
        if (ctx->pc != 0x22C0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C0B4u; }
        if (ctx->pc != 0x22C0B4u) { return; }
    }
    ctx->pc = 0x22C0B4u;
label_22c0b4:
    // 0x22c0b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22c0b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0b8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x22c0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22c0bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22c0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0c0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x22c0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c0c4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x22c0c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0c8: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x22c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x22c0cc: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x22c0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x22c0d0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x22c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22c0d4: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x22c0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22c0d8: 0xc08ac18  jal         func_22B060
    ctx->pc = 0x22C0D8u;
    SET_GPR_U32(ctx, 31, 0x22C0E0u);
    ctx->pc = 0x22C0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C0D8u;
            // 0x22c0dc: 0x673821  addu        $a3, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B060u;
    if (runtime->hasFunction(0x22B060u)) {
        auto targetFn = runtime->lookupFunction(0x22B060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C0E0u; }
        if (ctx->pc != 0x22C0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B060_0x22b060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C0E0u; }
        if (ctx->pc != 0x22C0E0u) { return; }
    }
    ctx->pc = 0x22C0E0u;
label_22c0e0:
    // 0x22c0e0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x22c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x22c0e4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x22c0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c0e8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x22c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x22c0ec: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x22c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x22c0f0: 0xc08ac88  jal         func_22B220
    ctx->pc = 0x22C0F0u;
    SET_GPR_U32(ctx, 31, 0x22C0F8u);
    ctx->pc = 0x22C0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C0F0u;
            // 0x22c0f4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (runtime->hasFunction(0x22B220u)) {
        auto targetFn = runtime->lookupFunction(0x22B220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C0F8u; }
        if (ctx->pc != 0x22C0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B220_0x22b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C0F8u; }
        if (ctx->pc != 0x22C0F8u) { return; }
    }
    ctx->pc = 0x22C0F8u;
label_22c0f8:
    // 0x22c0f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x22c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22c0fc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x22c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22c100:
    // 0x22c100: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x22c100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x22c104: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x22c104u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22c108:
    // 0x22c108: 0x57c00001  bnel        $fp, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22C108u;
    {
        const bool branch_taken_0x22c108 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c108) {
            ctx->pc = 0x22C10Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22C108u;
            // 0x22c10c: 0xafd30000  sw          $s3, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22C110u;
            goto label_22c110;
        }
    }
    ctx->pc = 0x22C110u;
label_22c110:
    // 0x22c110: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x22c110u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22c114:
    // 0x22c114: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x22c114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22c118: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x22c118u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22c11c: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x22c11cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22c120: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x22c120u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22c124: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22c124u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22c128: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22c128u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22c12c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22c12cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22c130: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22c130u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c134: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22c134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c13c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C13Cu;
            // 0x22c140: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22C144u;
    // 0x22c144: 0x0  nop
    ctx->pc = 0x22c144u;
    // NOP
    ctx->pc = 0x22c148u;
}
