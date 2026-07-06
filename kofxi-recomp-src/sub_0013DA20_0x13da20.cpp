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

// Function: sub_0013DA20
// Address: 0x13da20 - 0x13db70
void sub_0013DA20_0x13da20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DA20_0x13da20");
#endif

    switch (ctx->pc) {
        case 0x13da44u: goto label_13da44;
        case 0x13da68u: goto label_13da68;
        case 0x13daa4u: goto label_13daa4;
        case 0x13daccu: goto label_13dacc;
        case 0x13dadcu: goto label_13dadc;
        case 0x13daf4u: goto label_13daf4;
        case 0x13db28u: goto label_13db28;
        default: break;
    }

    ctx->pc = 0x13da20u;

    // 0x13da20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13da20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13da24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13da24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13da28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13da28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13da2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13da2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13da30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13da30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13da34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13da34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13da38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13da3c: 0xc062804  jal         func_18A010
    ctx->pc = 0x13DA3Cu;
    SET_GPR_U32(ctx, 31, 0x13DA44u);
    ctx->pc = 0x13DA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA3Cu;
    // 0x13da40: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x13DA3Cu, 0x13DA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DA44u;
label_13da44:
    // 0x13da44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13da44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da48: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DA48u;
    {
        const bool branch_taken_0x13da48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13da48) {
            ctx->pc = 0x13DA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DA48u;
            // 0x13da4c: 0x964500ea  lhu         $a1, 0xEA($s2) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DA58u;
            goto label_13da58;
        }
    }
    ctx->pc = 0x13DA50u;
    // 0x13da50: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x13DA50u;
    {
        const bool branch_taken_0x13da50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA50u;
        // 0x13da54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13da50) {
            ctx->pc = 0x13DB54u;
            goto label_13db54;
        }
    }
    ctx->pc = 0x13DA58u;
label_13da58:
    // 0x13da58: 0x924600f7  lbu         $a2, 0xF7($s2)
    ctx->pc = 0x13da58u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
    // 0x13da5c: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x13da5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x13da60: 0xc063720  jal         func_18DC80
    ctx->pc = 0x13DA60u;
    SET_GPR_U32(ctx, 31, 0x13DA68u);
    ctx->pc = 0x13DA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA60u;
    // 0x13da64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC80u, 0x13DA60u, 0x13DA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DA68u;
label_13da68:
    // 0x13da68: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DA68u;
    {
        const bool branch_taken_0x13da68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13da68) {
            ctx->pc = 0x13DA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DA68u;
            // 0x13da6c: 0x962600ea  lhu         $a2, 0xEA($s1) (Delay Slot)
            SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DA78u;
            goto label_13da78;
        }
    }
    ctx->pc = 0x13DA70u;
    // 0x13da70: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x13DA70u;
    {
        const bool branch_taken_0x13da70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DA70u;
        // 0x13da74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13da70) {
            ctx->pc = 0x13DB54u;
            goto label_13db54;
        }
    }
    ctx->pc = 0x13DA78u;
label_13da78:
    // 0x13da78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13da78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13da7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da80: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x13da80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13da84: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x13da84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13da88: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13da88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13da8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13da90: 0x9043003c  lbu         $v1, 0x3C($v0)
    ctx->pc = 0x13da90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x13da94: 0x90420042  lbu         $v0, 0x42($v0)
    ctx->pc = 0x13da94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 66)));
    // 0x13da98: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x13da98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13da9c: 0xc04fa2c  jal         func_13E8B0
    ctx->pc = 0x13DA9Cu;
    SET_GPR_U32(ctx, 31, 0x13DAA4u);
    ctx->pc = 0x13DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA9Cu;
    // 0x13daa0: 0x23840  sll         $a3, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E8B0u, 0x13DA9Cu, 0x13DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DAA4u;
label_13daa4:
    // 0x13daa4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DAA4u;
    {
        const bool branch_taken_0x13daa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13daa4) {
            ctx->pc = 0x13DAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DAA4u;
            // 0x13daa8: 0x86230000  lh          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DAB8u;
            goto label_13dab8;
        }
    }
    ctx->pc = 0x13DAACu;
    // 0x13daac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x13daacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13dab0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x13DAB0u;
    {
        const bool branch_taken_0x13dab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DAB0u;
        // 0x13dab4: 0xa2420255  sb          $v0, 0x255($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dab0) {
            ctx->pc = 0x13DB54u;
            goto label_13db54;
        }
    }
    ctx->pc = 0x13DAB8u;
label_13dab8:
    // 0x13dab8: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x13dab8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13dabc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x13dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13dac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13dac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13dac4: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x13DAC4u;
    SET_GPR_U32(ctx, 31, 0x13DACCu);
    ctx->pc = 0x13DAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DAC4u;
    // 0x13dac8: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x13DAC4u, 0x13DACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DACCu;
label_13dacc:
    // 0x13dacc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13daccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13dad0: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x13dad0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x13dad4: 0xc04f71c  jal         func_13DC70
    ctx->pc = 0x13DAD4u;
    SET_GPR_U32(ctx, 31, 0x13DADCu);
    ctx->pc = 0x13DAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DAD4u;
    // 0x13dad8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DC70u, 0x13DAD4u, 0x13DADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DADCu;
label_13dadc:
    // 0x13dadc: 0x964500ea  lhu         $a1, 0xEA($s2)
    ctx->pc = 0x13dadcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
    // 0x13dae0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13dae0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dae4: 0x924600f7  lbu         $a2, 0xF7($s2)
    ctx->pc = 0x13dae4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
    // 0x13dae8: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x13dae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x13daec: 0xc063720  jal         func_18DC80
    ctx->pc = 0x13DAECu;
    SET_GPR_U32(ctx, 31, 0x13DAF4u);
    ctx->pc = 0x13DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DAECu;
    // 0x13daf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC80u, 0x13DAECu, 0x13DAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DAF4u;
label_13daf4:
    // 0x13daf4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DAF4u;
    {
        const bool branch_taken_0x13daf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13daf4) {
            ctx->pc = 0x13DAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DAF4u;
            // 0x13daf8: 0x962500ea  lhu         $a1, 0xEA($s1) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DB04u;
            goto label_13db04;
        }
    }
    ctx->pc = 0x13DAFCu;
    // 0x13dafc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x13DAFCu;
    {
        const bool branch_taken_0x13dafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DAFCu;
        // 0x13db00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dafc) {
            ctx->pc = 0x13DB54u;
            goto label_13db54;
        }
    }
    ctx->pc = 0x13DB04u;
label_13db04:
    // 0x13db04: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x13db04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x13db08: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x13db08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x13db0c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x13db0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13db10: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x13db10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13db14: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13db14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13db18: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13db18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13db1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13db20: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x13db20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13db24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13db24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13db28:
    // 0x13db28: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x13db28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13db2c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x13db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13db30: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x13db30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x13db34: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x13DB34u;
    {
        const bool branch_taken_0x13db34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13db34) {
            ctx->pc = 0x13DB50u;
            goto label_13db50;
        }
    }
    ctx->pc = 0x13DB3Cu;
    // 0x13db3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13db40: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x13db40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13db44: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13DB44u;
    {
        const bool branch_taken_0x13db44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB44u;
        // 0x13db48: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13db44) {
            ctx->pc = 0x13DB28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13db28;
        }
    }
    ctx->pc = 0x13DB4Cu;
    // 0x13db4c: 0x0  nop
    ctx->pc = 0x13db4cu;
    // NOP
label_13db50:
    // 0x13db50: 0xa2420255  sb          $v0, 0x255($s2)
    ctx->pc = 0x13db50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 597), (uint8_t)GPR_U32(ctx, 2));
label_13db54:
    // 0x13db54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13db54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13db58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13db58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13db5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13db5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13db60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13db60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13db64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13db64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13db68: 0x3e00008  jr          $ra
    ctx->pc = 0x13DB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB68u;
        // 0x13db6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DB70u;
}
