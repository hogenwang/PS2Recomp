#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ADE68
// Address: 0x2ade68 - 0x2ae130
void sub_002ADE68_0x2ade68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ADE68_0x2ade68");
#endif

    switch (ctx->pc) {
        case 0x2ade94u: goto label_2ade94;
        case 0x2adea0u: goto label_2adea0;
        case 0x2adec0u: goto label_2adec0;
        case 0x2adf18u: goto label_2adf18;
        case 0x2adf48u: goto label_2adf48;
        case 0x2adf5cu: goto label_2adf5c;
        case 0x2adfd4u: goto label_2adfd4;
        case 0x2ae024u: goto label_2ae024;
        case 0x2ae034u: goto label_2ae034;
        case 0x2ae070u: goto label_2ae070;
        case 0x2ae088u: goto label_2ae088;
        case 0x2ae098u: goto label_2ae098;
        case 0x2ae0dcu: goto label_2ae0dc;
        case 0x2ae0fcu: goto label_2ae0fc;
        default: break;
    }

    ctx->pc = 0x2ade68u;

    // 0x2ade68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ade68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ade6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ade6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ade70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ade70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ade74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ade74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ade78: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2ade78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ade7c: 0x8c440188  lw          $a0, 0x188($v0)
    ctx->pc = 0x2ade7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
    // 0x2ade80: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2ADE80u;
    {
        const bool branch_taken_0x2ade80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADE80u;
            // 0x2ade84: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ade80) {
            ctx->pc = 0x2ADEB0u;
            goto label_2adeb0;
        }
    }
    ctx->pc = 0x2ADE88u;
    // 0x2ade88: 0x8c460184  lw          $a2, 0x184($v0)
    ctx->pc = 0x2ade88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x2ade8c: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x2ADE8Cu;
    SET_GPR_U32(ctx, 31, 0x2ADE94u);
    ctx->pc = 0x2ADE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADE8Cu;
            // 0x2ade90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE94u; }
        if (ctx->pc != 0x2ADE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADE94u; }
        if (ctx->pc != 0x2ADE94u) { return; }
    }
    ctx->pc = 0x2ADE94u;
label_2ade94:
    // 0x2ade94: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2ade94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2ade98: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2ADE98u;
    SET_GPR_U32(ctx, 31, 0x2ADEA0u);
    ctx->pc = 0x2ADE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADE98u;
            // 0x2ade9c: 0x8c640188  lw          $a0, 0x188($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADEA0u; }
        if (ctx->pc != 0x2ADEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADEA0u; }
        if (ctx->pc != 0x2ADEA0u) { return; }
    }
    ctx->pc = 0x2ADEA0u;
label_2adea0:
    // 0x2adea0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2adea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2adea4: 0xac400188  sw          $zero, 0x188($v0)
    ctx->pc = 0x2adea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 392), GPR_U32(ctx, 0));
    // 0x2adea8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2adea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2adeac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2adeacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2adeb0:
    // 0x2adeb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2adeb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2adeb4: 0xac400184  sw          $zero, 0x184($v0)
    ctx->pc = 0x2adeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 0));
    // 0x2adeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADEB8u;
            // 0x2adebc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ADEC0u;
label_2adec0:
    // 0x2adec0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2adec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2adec4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2adec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2adec8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2adec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2adecc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2adeccu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aded0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2aded0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2aded4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2aded4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aded8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2aded8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2adedc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2adedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2adee0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2adee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2adee4: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ADEE4u;
    {
        const bool branch_taken_0x2adee4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADEE4u;
            // 0x2adee8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adee4) {
            ctx->pc = 0x2ADEFCu;
            goto label_2adefc;
        }
    }
    ctx->pc = 0x2ADEECu;
    // 0x2adeec: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x2adeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x2adef0: 0x8e93007c  lw          $s3, 0x7C($s4)
    ctx->pc = 0x2adef0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 124)));
    // 0x2adef4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADEF4u;
    {
        const bool branch_taken_0x2adef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADEF4u;
            // 0x2adef8: 0x245000cc  addiu       $s0, $v0, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adef4) {
            ctx->pc = 0x2ADF08u;
            goto label_2adf08;
        }
    }
    ctx->pc = 0x2ADEFCu;
label_2adefc:
    // 0x2adefc: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x2adefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x2adf00: 0x8e930070  lw          $s3, 0x70($s4)
    ctx->pc = 0x2adf00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x2adf04: 0x245000b4  addiu       $s0, $v0, 0xB4
    ctx->pc = 0x2adf04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_2adf08:
    // 0x2adf08: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADF08u;
    {
        const bool branch_taken_0x2adf08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF08u;
            // 0x2adf0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adf08) {
            ctx->pc = 0x2ADF1Cu;
            goto label_2adf1c;
        }
    }
    ctx->pc = 0x2ADF10u;
    // 0x2adf10: 0xc0a5b06  jal         func_296C18
    ctx->pc = 0x2ADF10u;
    SET_GPR_U32(ctx, 31, 0x2ADF18u);
    ctx->pc = 0x2ADF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF10u;
            // 0x2adf14: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296C18u;
    if (runtime->hasFunction(0x296C18u)) {
        auto targetFn = runtime->lookupFunction(0x296C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF18u; }
        if (ctx->pc != 0x2ADF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296C18_0x296c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF18u; }
        if (ctx->pc != 0x2ADF18u) { return; }
    }
    ctx->pc = 0x2ADF18u;
label_2adf18:
    // 0x2adf18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2adf18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2adf1c:
    // 0x2adf1c: 0x8e8200b0  lw          $v0, 0xB0($s4)
    ctx->pc = 0x2adf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x2adf20: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ADF20u;
    {
        const bool branch_taken_0x2adf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adf20) {
            ctx->pc = 0x2ADF24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF20u;
            // 0x2adf24: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADF3Cu;
            goto label_2adf3c;
        }
    }
    ctx->pc = 0x2ADF28u;
    // 0x2adf28: 0x52600004  beql        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADF28u;
    {
        const bool branch_taken_0x2adf28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adf28) {
            ctx->pc = 0x2ADF2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF28u;
            // 0x2adf2c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADF3Cu;
            goto label_2adf3c;
        }
    }
    ctx->pc = 0x2ADF30u;
    // 0x2adf30: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ADF30u;
    {
        const bool branch_taken_0x2adf30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2adf30) {
            ctx->pc = 0x2ADF34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF30u;
            // 0x2adf34: 0x9e120004  lwu         $s2, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADF54u;
            goto label_2adf54;
        }
    }
    ctx->pc = 0x2ADF38u;
    // 0x2adf38: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2adf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2adf3c:
    // 0x2adf3c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2adf3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2adf40: 0xc049c48  jal         func_127120
    ctx->pc = 0x2ADF40u;
    SET_GPR_U32(ctx, 31, 0x2ADF48u);
    ctx->pc = 0x2ADF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF40u;
            // 0x2adf44: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF48u; }
        if (ctx->pc != 0x2ADF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF48u; }
        if (ctx->pc != 0x2ADF48u) { return; }
    }
    ctx->pc = 0x2ADF48u;
label_2adf48:
    // 0x2adf48: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2adf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2adf4c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2ADF4Cu;
    {
        const bool branch_taken_0x2adf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF4Cu;
            // 0x2adf50: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adf4c) {
            ctx->pc = 0x2AE048u;
            goto label_2ae048;
        }
    }
    ctx->pc = 0x2ADF54u;
label_2adf54:
    // 0x2adf54: 0xc0a5b08  jal         func_296C20
    ctx->pc = 0x2ADF54u;
    SET_GPR_U32(ctx, 31, 0x2ADF5Cu);
    ctx->pc = 0x2ADF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF54u;
            // 0x2adf58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296C20u;
    if (runtime->hasFunction(0x296C20u)) {
        auto targetFn = runtime->lookupFunction(0x296C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF5Cu; }
        if (ctx->pc != 0x2ADF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296C20_0x296c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADF5Cu; }
        if (ctx->pc != 0x2ADF5Cu) { return; }
    }
    ctx->pc = 0x2ADF5Cu;
label_2adf5c:
    // 0x2adf5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2adf5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adf60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2adf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adf64: 0x52220016  beql        $s1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2ADF64u;
    {
        const bool branch_taken_0x2adf64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2adf64) {
            ctx->pc = 0x2ADF68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF64u;
            // 0x2adf68: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADFC0u;
            goto label_2adfc0;
        }
    }
    ctx->pc = 0x2ADF6Cu;
    // 0x2adf6c: 0x52a00014  beql        $s5, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2ADF6Cu;
    {
        const bool branch_taken_0x2adf6c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adf6c) {
            ctx->pc = 0x2ADF70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF6Cu;
            // 0x2adf70: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADFC0u;
            goto label_2adfc0;
        }
    }
    ctx->pc = 0x2ADF74u;
    // 0x2adf74: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x2adf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2adf78: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2adf78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2adf7c: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ADF7Cu;
    {
        const bool branch_taken_0x2adf7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adf7c) {
            ctx->pc = 0x2ADF80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADF7Cu;
            // 0x2adf80: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ADF84u;
            goto label_2adf84;
        }
    }
    ctx->pc = 0x2ADF84u;
label_2adf84:
    // 0x2adf84: 0x51001a  div         $zero, $v0, $s1
    ctx->pc = 0x2adf84u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2adf88: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2adf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2adf8c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2adf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2adf90: 0x2810  mfhi        $a1
    ctx->pc = 0x2adf90u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2adf94: 0x2253823  subu        $a3, $s1, $a1
    ctx->pc = 0x2adf94u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2adf98: 0xf2902d  daddu       $s2, $a3, $s2
    ctx->pc = 0x2adf98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 18));
    // 0x2adf9c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2adf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2adfa0: 0x6642ffff  daddiu      $v0, $s2, -0x1
    ctx->pc = 0x2adfa0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)4294967295);
    // 0x2adfa4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2adfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x2adfa8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2adfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2adfac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2adfacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2adfb0: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x2adfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2adfb4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2adfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2adfb8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2adfb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2adfbc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2adfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2adfc0:
    // 0x2adfc0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2adfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adfc4: 0x12383c  dsll32      $a3, $s2, 0
    ctx->pc = 0x2adfc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2adfc8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2adfc8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2adfcc: 0xc0a5832  jal         func_2960C8
    ctx->pc = 0x2ADFCCu;
    SET_GPR_U32(ctx, 31, 0x2ADFD4u);
    ctx->pc = 0x2ADFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADFCCu;
            // 0x2adfd0: 0x8e060010  lw          $a2, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2960C8u;
    if (runtime->hasFunction(0x2960C8u)) {
        auto targetFn = runtime->lookupFunction(0x2960C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADFD4u; }
        if (ctx->pc != 0x2ADFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002960C8_0x2960c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADFD4u; }
        if (ctx->pc != 0x2ADFD4u) { return; }
    }
    ctx->pc = 0x2ADFD4u;
label_2adfd4:
    // 0x2adfd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2adfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adfd8: 0x1222001d  beq         $s1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2ADFD8u;
    {
        const bool branch_taken_0x2adfd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ADFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADFD8u;
            // 0x2adfdc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adfd8) {
            ctx->pc = 0x2AE050u;
            goto label_2ae050;
        }
    }
    ctx->pc = 0x2ADFE0u;
    // 0x2adfe0: 0x16a0001c  bnez        $s5, . + 4 + (0x1C << 2)
    ctx->pc = 0x2ADFE0u;
    {
        const bool branch_taken_0x2adfe0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADFE0u;
            // 0x2adfe4: 0xdfb50050  ld          $s5, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adfe0) {
            ctx->pc = 0x2AE054u;
            goto label_2ae054;
        }
    }
    ctx->pc = 0x2ADFE8u;
    // 0x2adfe8: 0x6642ffff  daddiu      $v0, $s2, -0x1
    ctx->pc = 0x2adfe8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)4294967295);
    // 0x2adfec: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2adfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2adff0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2adff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2adff4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2adff4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2adff8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2adff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2adffc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2adffcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ae000: 0x24870001  addiu       $a3, $a0, 0x1
    ctx->pc = 0x2ae000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ae004: 0x227102a  slt         $v0, $s1, $a3
    ctx->pc = 0x2ae004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2ae008: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2AE008u;
    {
        const bool branch_taken_0x2ae008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE008u;
            // 0x2ae00c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae008) {
            ctx->pc = 0x2AE03Cu;
            goto label_2ae03c;
        }
    }
    ctx->pc = 0x2AE010u;
    // 0x2ae010: 0x24050086  addiu       $a1, $zero, 0x86
    ctx->pc = 0x2ae010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x2ae014: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x2ae014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x2ae018: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ae018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae01c: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2AE01Cu;
    SET_GPR_U32(ctx, 31, 0x2AE024u);
    ctx->pc = 0x2AE020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE01Cu;
            // 0x2ae020: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE024u; }
        if (ctx->pc != 0x2AE024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE024u; }
        if (ctx->pc != 0x2AE024u) { return; }
    }
    ctx->pc = 0x2AE024u;
label_2ae024:
    // 0x2ae024: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ae024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae028: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ae028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ae02c: 0xc0adb7e  jal         func_2B6DF8
    ctx->pc = 0x2AE02Cu;
    SET_GPR_U32(ctx, 31, 0x2AE034u);
    ctx->pc = 0x2AE030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE02Cu;
            // 0x2ae030: 0x24060033  addiu       $a2, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6DF8u;
    if (runtime->hasFunction(0x2B6DF8u)) {
        auto targetFn = runtime->lookupFunction(0x2B6DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE034u; }
        if (ctx->pc != 0x2AE034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B6DF8_0x2b6df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE034u; }
        if (ctx->pc != 0x2AE034u) { return; }
    }
    ctx->pc = 0x2AE034u;
label_2ae034:
    // 0x2ae034: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE034u;
    {
        const bool branch_taken_0x2ae034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE034u;
            // 0x2ae038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae034) {
            ctx->pc = 0x2AE04Cu;
            goto label_2ae04c;
        }
    }
    ctx->pc = 0x2AE03Cu;
label_2ae03c:
    // 0x2ae03c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ae03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae040: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2ae040u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2ae044: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2ae044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2ae048:
    // 0x2ae048: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ae04c:
    // 0x2ae04c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ae04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2ae050:
    // 0x2ae050: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ae050u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ae054:
    // 0x2ae054: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ae054u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae058: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ae058u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae05c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ae05cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae060: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ae060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ae064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae068: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE068u;
            // 0x2ae06c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AE070u;
label_2ae070:
    // 0x2ae070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ae070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ae074: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2ae074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ae078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ae07c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ae07cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae080: 0xc0ab84c  jal         func_2AE130
    ctx->pc = 0x2AE080u;
    SET_GPR_U32(ctx, 31, 0x2AE088u);
    ctx->pc = 0x2AE084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE080u;
            // 0x2ae084: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE130u;
    if (runtime->hasFunction(0x2AE130u)) {
        auto targetFn = runtime->lookupFunction(0x2AE130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE088u; }
        if (ctx->pc != 0x2AE088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE130_0x2ae130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE088u; }
        if (ctx->pc != 0x2AE088u) { return; }
    }
    ctx->pc = 0x2AE088u;
label_2ae088:
    // 0x2ae088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ae088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae08c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE08Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE08Cu;
            // 0x2ae090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AE094u;
    // 0x2ae094: 0x0  nop
    ctx->pc = 0x2ae094u;
    // NOP
label_2ae098:
    // 0x2ae098: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ae098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2ae09c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2ae09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2ae0a0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2ae0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ae0a4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2ae0a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0a8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2ae0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ae0ac: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2ae0acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2ae0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ae0b4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2ae0b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2ae0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ae0bc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ae0bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ae0c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ae0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ae0c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2ae0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2ae0cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ae0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0d0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2ae0d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0d4: 0xc0ab84c  jal         func_2AE130
    ctx->pc = 0x2AE0D4u;
    SET_GPR_U32(ctx, 31, 0x2AE0DCu);
    ctx->pc = 0x2AE0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE0D4u;
            // 0x2ae0d8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE130u;
    if (runtime->hasFunction(0x2AE130u)) {
        auto targetFn = runtime->lookupFunction(0x2AE130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0DCu; }
        if (ctx->pc != 0x2AE0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE130_0x2ae130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0DCu; }
        if (ctx->pc != 0x2AE0DCu) { return; }
    }
    ctx->pc = 0x2AE0DCu;
label_2ae0dc:
    // 0x2ae0dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ae0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0e0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AE0E0u;
    {
        const bool branch_taken_0x2ae0e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE0E0u;
            // 0x2ae0e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae0e0) {
            ctx->pc = 0x2AE104u;
            goto label_2ae104;
        }
    }
    ctx->pc = 0x2AE0E8u;
    // 0x2ae0e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2ae0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ae0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0f0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2ae0f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae0f4: 0xc0ab84c  jal         func_2AE130
    ctx->pc = 0x2AE0F4u;
    SET_GPR_U32(ctx, 31, 0x2AE0FCu);
    ctx->pc = 0x2AE0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE0F4u;
            // 0x2ae0f8: 0x2904021  addu        $t0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE130u;
    if (runtime->hasFunction(0x2AE130u)) {
        auto targetFn = runtime->lookupFunction(0x2AE130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0FCu; }
        if (ctx->pc != 0x2AE0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE130_0x2ae130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AE0FCu; }
        if (ctx->pc != 0x2AE0FCu) { return; }
    }
    ctx->pc = 0x2AE0FCu;
label_2ae0fc:
    // 0x2ae0fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AE0FCu;
    {
        const bool branch_taken_0x2ae0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AE100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE0FCu;
            // 0x2ae100: 0x2021021  addu        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae0fc) {
            ctx->pc = 0x2AE108u;
            goto label_2ae108;
        }
    }
    ctx->pc = 0x2AE104u;
label_2ae104:
    // 0x2ae104: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ae104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ae108:
    // 0x2ae108: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2ae108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ae10c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2ae10cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ae110: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ae110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ae114: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ae114u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ae118: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ae118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ae11c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ae11cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ae120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ae120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ae124: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AE124u;
            // 0x2ae128: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AE12Cu;
    // 0x2ae12c: 0x0  nop
    ctx->pc = 0x2ae12cu;
    // NOP
    ctx->pc = 0x2ae130u;
}
