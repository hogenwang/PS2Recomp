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

// Function: sub_0018CC50
// Address: 0x18cc50 - 0x18ce80
void sub_0018CC50_0x18cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CC50_0x18cc50");
#endif

    switch (ctx->pc) {
        case 0x18ccb8u: goto label_18ccb8;
        case 0x18ce38u: goto label_18ce38;
        case 0x18ce50u: goto label_18ce50;
        default: break;
    }

    ctx->pc = 0x18cc50u;

    // 0x18cc50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18cc54: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x18cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x18cc58: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x18cc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x18cc5c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x18cc5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x18cc60: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18cc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18cc64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18cc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18cc68: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x18cc68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18cc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18cc70: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x18cc70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18cc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18cc78: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x18cc78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cc7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18cc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18cc80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18cc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18cc84: 0x84454288  lh          $a1, 0x4288($v0)
    ctx->pc = 0x18cc84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 17032)));
    // 0x18cc88: 0x87b00078  lh          $s0, 0x78($sp)
    ctx->pc = 0x18cc88u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x18cc8c: 0x87b1007a  lh          $s1, 0x7A($sp)
    ctx->pc = 0x18cc8cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 122)));
    // 0x18cc90: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x18cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x18cc94: 0xa7a50070  sh          $a1, 0x70($sp)
    ctx->pc = 0x18cc94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 5));
    // 0x18cc98: 0x8443428a  lh          $v1, 0x428A($v0)
    ctx->pc = 0x18cc98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 17034)));
    // 0x18cc9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18cc9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18cca0: 0x87b2007c  lh          $s2, 0x7C($sp)
    ctx->pc = 0x18cca0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x18cca4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x18cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x18cca8: 0xa7a30072  sh          $v1, 0x72($sp)
    ctx->pc = 0x18cca8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 3));
    // 0x18ccac: 0x8442428c  lh          $v0, 0x428C($v0)
    ctx->pc = 0x18ccacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 17036)));
    // 0x18ccb0: 0xc06378c  jal         func_18DE30
    ctx->pc = 0x18CCB0u;
    SET_GPR_U32(ctx, 31, 0x18CCB8u);
    ctx->pc = 0x18CCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CCB0u;
    // 0x18ccb4: 0xa7a20074  sh          $v0, 0x74($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 116), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DE30u, 0x18CCB0u, 0x18CCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CCB8u;
label_18ccb8:
    // 0x18ccb8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CCB8u;
    {
        const bool branch_taken_0x18ccb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ccb8) {
            ctx->pc = 0x18CCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CCB8u;
            // 0x18ccbc: 0x32a400ff  andi        $a0, $s5, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CCC8u;
            goto label_18ccc8;
        }
    }
    ctx->pc = 0x18CCC0u;
    // 0x18ccc0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x18ccc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18ccc4: 0x32a400ff  andi        $a0, $s5, 0xFF
    ctx->pc = 0x18ccc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_18ccc8:
    // 0x18ccc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18cccc: 0x5083000e  beql        $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x18CCCCu;
    {
        const bool branch_taken_0x18cccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18cccc) {
            ctx->pc = 0x18CCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CCCCu;
            // 0x18ccd0: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CD08u;
            goto label_18cd08;
        }
    }
    ctx->pc = 0x18CCD4u;
    // 0x18ccd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18ccd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ccd8: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CCD8u;
    {
        const bool branch_taken_0x18ccd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18ccd8) {
            ctx->pc = 0x18CCDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CCD8u;
            // 0x18ccdc: 0x84500000  lh          $s0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CCFCu;
            goto label_18ccfc;
        }
    }
    ctx->pc = 0x18CCE0u;
    // 0x18cce0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CCE0u;
    {
        const bool branch_taken_0x18cce0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cce0) {
            ctx->pc = 0x18CCE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CCE0u;
            // 0x18cce4: 0x84510002  lh          $s1, 0x2($v0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CCF0u;
            goto label_18ccf0;
        }
    }
    ctx->pc = 0x18CCE8u;
    // 0x18cce8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18CCE8u;
    {
        const bool branch_taken_0x18cce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCE8u;
        // 0x18ccec: 0x328300ff  andi        $v1, $s4, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cce8) {
            ctx->pc = 0x18CD20u;
            goto label_18cd20;
        }
    }
    ctx->pc = 0x18CCF0u;
label_18ccf0:
    // 0x18ccf0: 0x84520004  lh          $s2, 0x4($v0)
    ctx->pc = 0x18ccf0u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18ccf4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x18CCF4u;
    {
        const bool branch_taken_0x18ccf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CCF4u;
        // 0x18ccf8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ccf4) {
            ctx->pc = 0x18CD1Cu;
            goto label_18cd1c;
        }
    }
    ctx->pc = 0x18CCFCu;
label_18ccfc:
    // 0x18ccfc: 0x84520004  lh          $s2, 0x4($v0)
    ctx->pc = 0x18ccfcu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18cd00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18CD00u;
    {
        const bool branch_taken_0x18cd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD00u;
        // 0x18cd04: 0x84510002  lh          $s1, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd00) {
            ctx->pc = 0x18CD1Cu;
            goto label_18cd1c;
        }
    }
    ctx->pc = 0x18CD08u;
label_18cd08:
    // 0x18cd08: 0x84510002  lh          $s1, 0x2($v0)
    ctx->pc = 0x18cd08u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x18cd0c: 0x84520004  lh          $s2, 0x4($v0)
    ctx->pc = 0x18cd0cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x18cd10: 0x31023  negu        $v0, $v1
    ctx->pc = 0x18cd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x18cd14: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x18cd14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18cd18: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x18cd18u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_18cd1c:
    // 0x18cd1c: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x18cd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_18cd20:
    // 0x18cd20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18cd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18cd24: 0x5062003f  beql        $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x18CD24u;
    {
        const bool branch_taken_0x18cd24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18cd24) {
            ctx->pc = 0x18CD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CD24u;
            // 0x18cd28: 0x3206ffff  andi        $a2, $s0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CE24u;
            goto label_18ce24;
        }
    }
    ctx->pc = 0x18CD2Cu;
    // 0x18cd2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18cd30: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x18CD30u;
    {
        const bool branch_taken_0x18cd30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18cd30) {
            ctx->pc = 0x18CDF0u;
            goto label_18cdf0;
        }
    }
    ctx->pc = 0x18CD38u;
    // 0x18cd38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18cd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18cd3c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18CD3Cu;
    {
        const bool branch_taken_0x18cd3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18cd3c) {
            ctx->pc = 0x18CD94u;
            goto label_18cd94;
        }
    }
    ctx->pc = 0x18CD44u;
    // 0x18cd44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cd48: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18CD48u;
    {
        const bool branch_taken_0x18cd48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x18cd48) {
            ctx->pc = 0x18CD60u;
            goto label_18cd60;
        }
    }
    ctx->pc = 0x18CD50u;
    // 0x18cd50: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x18CD50u;
    {
        const bool branch_taken_0x18cd50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cd50) {
            ctx->pc = 0x18CE20u;
            goto label_18ce20;
        }
    }
    ctx->pc = 0x18CD58u;
    // 0x18cd58: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x18CD58u;
    {
        const bool branch_taken_0x18cd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cd58) {
            ctx->pc = 0x18CE20u;
            goto label_18ce20;
        }
    }
    ctx->pc = 0x18CD60u;
label_18cd60:
    // 0x18cd60: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x18cd60u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cd64: 0x3c023f2b  lui         $v0, 0x3F2B
    ctx->pc = 0x18cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
    // 0x18cd68: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18cd68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18cd6c: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x18cd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x18cd70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18cd70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cd74: 0x0  nop
    ctx->pc = 0x18cd74u;
    // NOP
    // 0x18cd78: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18cd78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18cd7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18cd7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18cd80: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18cd80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18cd84: 0x0  nop
    ctx->pc = 0x18cd84u;
    // NOP
    // 0x18cd88: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x18cd88u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18cd8c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x18CD8Cu;
    {
        const bool branch_taken_0x18cd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD8Cu;
        // 0x18cd90: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd8c) {
            ctx->pc = 0x18CE20u;
            goto label_18ce20;
        }
    }
    ctx->pc = 0x18CD94u;
label_18cd94:
    // 0x18cd94: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x18cd94u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cd98: 0x3c023f2b  lui         $v0, 0x3F2B
    ctx->pc = 0x18cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
    // 0x18cd9c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18cd9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18cda0: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x18cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x18cda4: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x18cda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x18cda8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18cda8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cdac: 0x0  nop
    ctx->pc = 0x18cdacu;
    // NOP
    // 0x18cdb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18cdb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18cdb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18cdb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18cdb8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18cdb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18cdbc: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x18cdbcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18cdc0: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x18cdc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18cdc4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18cdc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18cdc8: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x18cdc8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x18cdcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18cdccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cdd0: 0x0  nop
    ctx->pc = 0x18cdd0u;
    // NOP
    // 0x18cdd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18cdd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18cdd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18cdd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18cddc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18cddcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18cde0: 0x0  nop
    ctx->pc = 0x18cde0u;
    // NOP
    // 0x18cde4: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x18cde4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18cde8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18CDE8u;
    {
        const bool branch_taken_0x18cde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CDE8u;
        // 0x18cdec: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cde8) {
            ctx->pc = 0x18CE20u;
            goto label_18ce20;
        }
    }
    ctx->pc = 0x18CDF0u;
label_18cdf0:
    // 0x18cdf0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x18cdf0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18cdf4: 0x3c023fcc  lui         $v0, 0x3FCC
    ctx->pc = 0x18cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16332 << 16));
    // 0x18cdf8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x18cdf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18cdfc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x18cdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x18ce00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ce00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ce04: 0x0  nop
    ctx->pc = 0x18ce04u;
    // NOP
    // 0x18ce08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18ce08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18ce0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18ce0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18ce10: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x18ce10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x18ce14: 0x0  nop
    ctx->pc = 0x18ce14u;
    // NOP
    // 0x18ce18: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x18ce18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x18ce1c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x18ce1cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_18ce20:
    // 0x18ce20: 0x3206ffff  andi        $a2, $s0, 0xFFFF
    ctx->pc = 0x18ce20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_18ce24:
    // 0x18ce24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18ce24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ce28: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18ce28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18ce2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18ce2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce30: 0xc0583e0  jal         func_160F80
    ctx->pc = 0x18CE30u;
    SET_GPR_U32(ctx, 31, 0x18CE38u);
    ctx->pc = 0x18CE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE30u;
    // 0x18ce34: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160F80u, 0x18CE30u, 0x18CE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE38u;
label_18ce38:
    // 0x18ce38: 0x3226ffff  andi        $a2, $s1, 0xFFFF
    ctx->pc = 0x18ce38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x18ce3c: 0x3247ffff  andi        $a3, $s2, 0xFFFF
    ctx->pc = 0x18ce3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x18ce40: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x18ce40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce44: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18ce44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ce48: 0xc0583e0  jal         func_160F80
    ctx->pc = 0x18CE48u;
    SET_GPR_U32(ctx, 31, 0x18CE50u);
    ctx->pc = 0x18CE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE48u;
    // 0x18ce4c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160F80u, 0x18CE48u, 0x18CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CE50u;
label_18ce50:
    // 0x18ce50: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x18ce50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ce54: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18ce54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ce58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18ce58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ce5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18ce5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ce60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ce60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ce64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ce64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ce68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ce68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ce6c: 0x3e00008  jr          $ra
    ctx->pc = 0x18CE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE6Cu;
        // 0x18ce70: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CE74u;
    // 0x18ce74: 0x0  nop
    ctx->pc = 0x18ce74u;
    // NOP
    // 0x18ce78: 0x0  nop
    ctx->pc = 0x18ce78u;
    // NOP
    // 0x18ce7c: 0x0  nop
    ctx->pc = 0x18ce7cu;
    // NOP
    if (ctx->pc == 0x18ce7cu) { ctx->pc = 0x18ce80u; }
}
