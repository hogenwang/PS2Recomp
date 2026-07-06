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

// Function: sub_00308B70
// Address: 0x308b70 - 0x3090f0
void sub_00308B70_0x308b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308B70_0x308b70");
#endif

    switch (ctx->pc) {
        case 0x308bbcu: goto label_308bbc;
        case 0x308e30u: goto label_308e30;
        case 0x308e50u: goto label_308e50;
        case 0x308e70u: goto label_308e70;
        case 0x308e80u: goto label_308e80;
        case 0x308ea0u: goto label_308ea0;
        case 0x308ec0u: goto label_308ec0;
        case 0x308ed0u: goto label_308ed0;
        case 0x308ef0u: goto label_308ef0;
        case 0x308f10u: goto label_308f10;
        case 0x308f20u: goto label_308f20;
        case 0x308f98u: goto label_308f98;
        case 0x308fb8u: goto label_308fb8;
        case 0x308fc8u: goto label_308fc8;
        case 0x308fe8u: goto label_308fe8;
        case 0x308ff8u: goto label_308ff8;
        case 0x309018u: goto label_309018;
        case 0x309028u: goto label_309028;
        case 0x3090c0u: goto label_3090c0;
        default: break;
    }

    ctx->pc = 0x308b70u;

    // 0x308b70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x308b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x308b74: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x308b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x308b78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x308b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x308b7c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x308b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x308b80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x308b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x308b84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x308b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x308b88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x308b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x308b8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x308b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x308b90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x308b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x308b94: 0x8c541e58  lw          $s4, 0x1E58($v0)
    ctx->pc = 0x308b94u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7768)));
    // 0x308b98: 0x3c1001d3  lui         $s0, 0x1D3
    ctx->pc = 0x308b98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)467 << 16));
    // 0x308b9c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x308b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x308ba0: 0x26107890  addiu       $s0, $s0, 0x7890
    ctx->pc = 0x308ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30864));
    // 0x308ba4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x308ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x308ba8: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x308ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x308bac: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x308bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x308bb0: 0x8c4278a0  lw          $v0, 0x78A0($v0)
    ctx->pc = 0x308bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30880)));
    // 0x308bb4: 0x10400132  beqz        $v0, . + 4 + (0x132 << 2)
    ctx->pc = 0x308BB4u;
    {
        const bool branch_taken_0x308bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BB4u;
        // 0x308bb8: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308bb4) {
            ctx->pc = 0x309080u;
            goto label_309080;
        }
    }
    ctx->pc = 0x308BBCu;
label_308bbc:
    // 0x308bbc: 0xae1400b4  sw          $s4, 0xB4($s0)
    ctx->pc = 0x308bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 20));
    // 0x308bc0: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x308bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x308bc4: 0x8e25017c  lw          $a1, 0x17C($s1)
    ctx->pc = 0x308bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x308bc8: 0x10a0007b  beqz        $a1, . + 4 + (0x7B << 2)
    ctx->pc = 0x308BC8u;
    {
        const bool branch_taken_0x308bc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x308BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308BC8u;
        // 0x308bcc: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308bc8) {
            ctx->pc = 0x308DB8u;
            goto label_308db8;
        }
    }
    ctx->pc = 0x308BD0u;
    // 0x308bd0: 0x8ca30060  lw          $v1, 0x60($a1)
    ctx->pc = 0x308bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x308bd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x308bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x308bd8: 0x10620077  beq         $v1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x308BD8u;
    {
        const bool branch_taken_0x308bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x308bd8) {
            ctx->pc = 0x308DB8u;
            goto label_308db8;
        }
    }
    ctx->pc = 0x308BE0u;
    // 0x308be0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x308be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x308be4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x308be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x308be8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x308be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x308bec: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x308becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x308bf0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x308bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x308bf4: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x308bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
    // 0x308bf8: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x308bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x308bfc: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x308bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
    // 0x308c00: 0xfe800010  sd          $zero, 0x10($s4)
    ctx->pc = 0x308c00u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 0));
    // 0x308c04: 0xfe820018  sd          $v0, 0x18($s4)
    ctx->pc = 0x308c04u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 2));
    // 0x308c08: 0x8ca60060  lw          $a2, 0x60($a1)
    ctx->pc = 0x308c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x308c0c: 0x2cc10007  sltiu       $at, $a2, 0x7
    ctx->pc = 0x308c0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x308c10: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x308C10u;
    {
        const bool branch_taken_0x308c10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x308c10) {
            ctx->pc = 0x308C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308C10u;
            // 0x308c14: 0x24053b80  addiu       $a1, $zero, 0x3B80 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15232));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308C28u;
            goto label_308c28;
        }
    }
    ctx->pc = 0x308C18u;
    // 0x308c18: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x308c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x308c1c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x308c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x308c20: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x308c20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x308c24: 0x24453480  addiu       $a1, $v0, 0x3480
    ctx->pc = 0x308c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 13440));
label_308c28:
    // 0x308c28: 0x2cc10007  sltiu       $at, $a2, 0x7
    ctx->pc = 0x308c28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x308c2c: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x308C2Cu;
    {
        const bool branch_taken_0x308c2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x308c2c) {
            ctx->pc = 0x308C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308C2Cu;
            // 0x308c30: 0x24043e9c  addiu       $a0, $zero, 0x3E9C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16028));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308C44u;
            goto label_308c44;
        }
    }
    ctx->pc = 0x308C34u;
    // 0x308c34: 0x61280  sll         $v0, $a2, 10
    ctx->pc = 0x308c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 10));
    // 0x308c38: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x308c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x308c3c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x308c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x308c40: 0x24443e80  addiu       $a0, $v0, 0x3E80
    ctx->pc = 0x308c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16000));
label_308c44:
    // 0x308c44: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x308c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x308c48: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x308C48u;
    {
        const bool branch_taken_0x308c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308c48) {
            ctx->pc = 0x308CF0u;
            goto label_308cf0;
        }
    }
    ctx->pc = 0x308C50u;
    // 0x308c50: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x308c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x308c54: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x308c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x308c58: 0x8c423ba0  lw          $v0, 0x3BA0($v0)
    ctx->pc = 0x308c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15264)));
    // 0x308c5c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x308c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x308c60: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x308c60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x308c64: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x308C64u;
    {
        const bool branch_taken_0x308c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x308c64) {
            ctx->pc = 0x308CB0u;
            goto label_308cb0;
        }
    }
    ctx->pc = 0x308C6Cu;
    // 0x308c6c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x308c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x308c70: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x308c70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x308c74: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x308c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x308c78: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x308c78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x308c7c: 0x2197c  dsll32      $v1, $v0, 5
    ctx->pc = 0x308c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 5));
    // 0x308c80: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x308c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x308c84: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x308c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x308c88: 0x3c022131  lui         $v0, 0x2131
    ctx->pc = 0x308c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8497 << 16));
    // 0x308c8c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x308c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x308c90: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x308c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x308c94: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x308c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x308c98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x308c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x308c9c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x308c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x308ca0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x308ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x308ca4: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x308CA4u;
    {
        const bool branch_taken_0x308ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CA4u;
        // 0x308ca8: 0xfe820020  sd          $v0, 0x20($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ca4) {
            ctx->pc = 0x308D90u;
            goto label_308d90;
        }
    }
    ctx->pc = 0x308CACu;
    // 0x308cac: 0x0  nop
    ctx->pc = 0x308cacu;
    // NOP
label_308cb0:
    // 0x308cb0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x308cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x308cb4: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x308cb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x308cb8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x308cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x308cbc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x308cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x308cc0: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x308cc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x308cc4: 0x3c042141  lui         $a0, 0x2141
    ctx->pc = 0x308cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8513 << 16));
    // 0x308cc8: 0x2197c  dsll32      $v1, $v0, 5
    ctx->pc = 0x308cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 5));
    // 0x308ccc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x308cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x308cd0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x308cd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x308cd4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x308cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x308cd8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x308cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x308cdc: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x308cdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x308ce0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x308ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x308ce4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x308ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x308ce8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x308CE8u;
    {
        const bool branch_taken_0x308ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CE8u;
        // 0x308cec: 0xfe820020  sd          $v0, 0x20($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ce8) {
            ctx->pc = 0x308D90u;
            goto label_308d90;
        }
    }
    ctx->pc = 0x308CF0u;
label_308cf0:
    // 0x308cf0: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x308cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x308cf4: 0x8c433ba0  lw          $v1, 0x3BA0($v0)
    ctx->pc = 0x308cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15264)));
    // 0x308cf8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x308cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x308cfc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x308cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x308d00: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x308d00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x308d04: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x308D04u;
    {
        const bool branch_taken_0x308d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x308d04) {
            ctx->pc = 0x308D50u;
            goto label_308d50;
        }
    }
    ctx->pc = 0x308D0Cu;
    // 0x308d0c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x308d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x308d10: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x308d10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x308d14: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x308d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x308d18: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x308d18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x308d1c: 0x2197c  dsll32      $v1, $v0, 5
    ctx->pc = 0x308d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 5));
    // 0x308d20: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x308d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x308d24: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x308d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x308d28: 0x3c022131  lui         $v0, 0x2131
    ctx->pc = 0x308d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8497 << 16));
    // 0x308d2c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x308d2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x308d30: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x308d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x308d34: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x308d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x308d38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x308d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x308d3c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x308d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x308d40: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x308d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x308d44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x308D44u;
    {
        const bool branch_taken_0x308d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D44u;
        // 0x308d48: 0xfe820020  sd          $v0, 0x20($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d44) {
            ctx->pc = 0x308D90u;
            goto label_308d90;
        }
    }
    ctx->pc = 0x308D4Cu;
    // 0x308d4c: 0x0  nop
    ctx->pc = 0x308d4cu;
    // NOP
label_308d50:
    // 0x308d50: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x308d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x308d54: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x308d54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x308d58: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x308d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x308d5c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x308d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x308d60: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x308d60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x308d64: 0x3c042141  lui         $a0, 0x2141
    ctx->pc = 0x308d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8513 << 16));
    // 0x308d68: 0x2197c  dsll32      $v1, $v0, 5
    ctx->pc = 0x308d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 5));
    // 0x308d6c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x308d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x308d70: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x308d70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x308d74: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x308d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x308d78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x308d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x308d7c: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x308d7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x308d80: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x308d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x308d84: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x308d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x308d88: 0xfe820020  sd          $v0, 0x20($s4)
    ctx->pc = 0x308d88u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
    // 0x308d8c: 0x0  nop
    ctx->pc = 0x308d8cu;
    // NOP
label_308d90:
    // 0x308d90: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x308d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x308d94: 0xfe820028  sd          $v0, 0x28($s4)
    ctx->pc = 0x308d94u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 2));
    // 0x308d98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x308d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x308d9c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x308d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x308da0: 0xfe800030  sd          $zero, 0x30($s4)
    ctx->pc = 0x308da0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 48), GPR_U64(ctx, 0));
    // 0x308da4: 0xfe820038  sd          $v0, 0x38($s4)
    ctx->pc = 0x308da4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 2));
    // 0x308da8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x308da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x308dac: 0xfe830040  sd          $v1, 0x40($s4)
    ctx->pc = 0x308dacu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 64), GPR_U64(ctx, 3));
    // 0x308db0: 0xfe820048  sd          $v0, 0x48($s4)
    ctx->pc = 0x308db0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 2));
    // 0x308db4: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x308db4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
label_308db8:
    // 0x308db8: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x308db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x308dbc: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x308DBCu;
    {
        const bool branch_taken_0x308dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308dbc) {
            ctx->pc = 0x308F40u;
            goto label_308f40;
        }
    }
    ctx->pc = 0x308DC4u;
    // 0x308dc4: 0x3c0290ad  lui         $v0, 0x90AD
    ctx->pc = 0x308dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37037 << 16));
    // 0x308dc8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x308dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x308dcc: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x308dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x308dd0: 0x9e25011c  lwu         $a1, 0x11C($s1)
    ctx->pc = 0x308dd0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x308dd4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x308dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x308dd8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x308dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x308ddc: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x308ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x308de0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x308de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x308de4: 0x70041389  pcpyld      $v0, $zero, $a0
    ctx->pc = 0x308de4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x308de8: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x308de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x308dec: 0x3c021351  lui         $v0, 0x1351
    ctx->pc = 0x308decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4945 << 16));
    // 0x308df0: 0xfe840000  sd          $a0, 0x0($s4)
    ctx->pc = 0x308df0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 4));
    // 0x308df4: 0x34423513  ori         $v0, $v0, 0x3513
    ctx->pc = 0x308df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13587);
    // 0x308df8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x308df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x308dfc: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x308dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x308e00: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x308e00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x308e04: 0xae1400b8  sw          $s4, 0xB8($s0)
    ctx->pc = 0x308e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 20));
    // 0x308e08: 0x8e330124  lw          $s3, 0x124($s1)
    ctx->pc = 0x308e08u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x308e0c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x308E0Cu;
    {
        const bool branch_taken_0x308e0c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x308E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E0Cu;
        // 0x308e10: 0x8e320128  lw          $s2, 0x128($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e0c) {
            ctx->pc = 0x308E20u;
            goto label_308e20;
        }
    }
    ctx->pc = 0x308E14u;
    // 0x308e14: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x308E14u;
    {
        const bool branch_taken_0x308e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E14u;
        // 0x308e18: 0xae20011c  sw          $zero, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e14) {
            ctx->pc = 0x309040u;
            goto label_309040;
        }
    }
    ctx->pc = 0x308E1Cu;
    // 0x308e1c: 0x0  nop
    ctx->pc = 0x308e1cu;
    // NOP
label_308e20:
    // 0x308e20: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x308e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x308e24: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x308E24u;
    {
        const bool branch_taken_0x308e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308E24u;
        // 0x308e28: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308e24) {
            ctx->pc = 0x309040u;
            goto label_309040;
        }
    }
    ctx->pc = 0x308E2Cu;
    // 0x308e2c: 0x0  nop
    ctx->pc = 0x308e2cu;
    // NOP
label_308e30:
    // 0x308e30: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x308e30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x308e34: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x308e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x308e38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308e3c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x308e3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x308e40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x308e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x308e44: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x308e44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x308e48: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x308E48u;
    SET_GPR_U32(ctx, 31, 0x308E50u);
    ctx->pc = 0x308E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308E48u;
    // 0x308e4c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x308E48u, 0x308E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308E50u;
label_308e50:
    // 0x308e50: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x308e50u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x308e54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308e58: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x308e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x308e5c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x308e5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x308e60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x308e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x308e64: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x308e64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x308e68: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x308E68u;
    SET_GPR_U32(ctx, 31, 0x308E70u);
    ctx->pc = 0x308E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308E68u;
    // 0x308e6c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x308E68u, 0x308E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308E70u;
label_308e70:
    // 0x308e70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308e74: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x308e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x308e78: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x308E78u;
    SET_GPR_U32(ctx, 31, 0x308E80u);
    ctx->pc = 0x308E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308E78u;
    // 0x308e7c: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x308E78u, 0x308E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308E80u;
label_308e80:
    // 0x308e80: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x308e80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x308e84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308e88: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x308e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x308e8c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x308e8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x308e90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x308e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x308e94: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x308e94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x308e98: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x308E98u;
    SET_GPR_U32(ctx, 31, 0x308EA0u);
    ctx->pc = 0x308E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308E98u;
    // 0x308e9c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x308E98u, 0x308EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308EA0u;
label_308ea0:
    // 0x308ea0: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x308ea0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x308ea4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308ea8: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x308ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x308eac: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x308eacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x308eb0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x308eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x308eb4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x308eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x308eb8: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x308EB8u;
    SET_GPR_U32(ctx, 31, 0x308EC0u);
    ctx->pc = 0x308EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308EB8u;
    // 0x308ebc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x308EB8u, 0x308EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308EC0u;
label_308ec0:
    // 0x308ec0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308ec4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x308ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x308ec8: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x308EC8u;
    SET_GPR_U32(ctx, 31, 0x308ED0u);
    ctx->pc = 0x308ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308EC8u;
    // 0x308ecc: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x308EC8u, 0x308ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308ED0u;
label_308ed0:
    // 0x308ed0: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x308ed0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x308ed4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308ed8: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x308ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x308edc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x308edcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x308ee0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x308ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x308ee4: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x308ee4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x308ee8: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x308EE8u;
    SET_GPR_U32(ctx, 31, 0x308EF0u);
    ctx->pc = 0x308EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308EE8u;
    // 0x308eec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x308EE8u, 0x308EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308EF0u;
label_308ef0:
    // 0x308ef0: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x308ef0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x308ef4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308ef8: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x308ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x308efc: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x308efcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x308f00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x308f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x308f04: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x308f04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x308f08: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x308F08u;
    SET_GPR_U32(ctx, 31, 0x308F10u);
    ctx->pc = 0x308F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308F08u;
    // 0x308f0c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x308F08u, 0x308F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308F10u;
label_308f10:
    // 0x308f10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308f14: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x308f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x308f18: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x308F18u;
    SET_GPR_U32(ctx, 31, 0x308F20u);
    ctx->pc = 0x308F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308F18u;
    // 0x308f1c: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x308F18u, 0x308F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308F20u;
label_308f20:
    // 0x308f20: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x308f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x308f24: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x308f24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x308f28: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x308f28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x308f2c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x308F2Cu;
    {
        const bool branch_taken_0x308f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308f2c) {
            ctx->pc = 0x308E30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_308e30;
        }
    }
    ctx->pc = 0x308F34u;
    // 0x308f34: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x308F34u;
    {
        const bool branch_taken_0x308f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308f34) {
            ctx->pc = 0x309040u;
            goto label_309040;
        }
    }
    ctx->pc = 0x308F3Cu;
    // 0x308f3c: 0x0  nop
    ctx->pc = 0x308f3cu;
    // NOP
label_308f40:
    // 0x308f40: 0x3c0260a9  lui         $v0, 0x60A9
    ctx->pc = 0x308f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24745 << 16));
    // 0x308f44: 0x3444c000  ori         $a0, $v0, 0xC000
    ctx->pc = 0x308f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x308f48: 0x9e25011c  lwu         $a1, 0x11C($s1)
    ctx->pc = 0x308f48u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x308f4c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x308f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x308f50: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x308f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x308f54: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x308f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x308f58: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x308f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x308f5c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x308f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x308f60: 0x34425353  ori         $v0, $v0, 0x5353
    ctx->pc = 0x308f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21331);
    // 0x308f64: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x308f64u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x308f68: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x308f68u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x308f6c: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x308f6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x308f70: 0xae1400b8  sw          $s4, 0xB8($s0)
    ctx->pc = 0x308f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 20));
    // 0x308f74: 0x8e330124  lw          $s3, 0x124($s1)
    ctx->pc = 0x308f74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x308f78: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x308F78u;
    {
        const bool branch_taken_0x308f78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x308f78) {
            ctx->pc = 0x308F88u;
            goto label_308f88;
        }
    }
    ctx->pc = 0x308F80u;
    // 0x308f80: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x308F80u;
    {
        const bool branch_taken_0x308f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F80u;
        // 0x308f84: 0xae20011c  sw          $zero, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f80) {
            ctx->pc = 0x309040u;
            goto label_309040;
        }
    }
    ctx->pc = 0x308F88u;
label_308f88:
    // 0x308f88: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x308f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x308f8c: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x308F8Cu;
    {
        const bool branch_taken_0x308f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308F8Cu;
        // 0x308f90: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308f8c) {
            ctx->pc = 0x309040u;
            goto label_309040;
        }
    }
    ctx->pc = 0x308F94u;
    // 0x308f94: 0x0  nop
    ctx->pc = 0x308f94u;
    // NOP
label_308f98:
    // 0x308f98: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x308f98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x308f9c: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x308f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x308fa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308fa4: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x308fa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x308fa8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x308fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x308fac: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x308facu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x308fb0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x308FB0u;
    SET_GPR_U32(ctx, 31, 0x308FB8u);
    ctx->pc = 0x308FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308FB0u;
    // 0x308fb4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x308FB0u, 0x308FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308FB8u;
label_308fb8:
    // 0x308fb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308fbc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x308fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x308fc0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x308FC0u;
    SET_GPR_U32(ctx, 31, 0x308FC8u);
    ctx->pc = 0x308FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308FC0u;
    // 0x308fc4: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x308FC0u, 0x308FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308FC8u;
label_308fc8:
    // 0x308fc8: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x308fc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x308fcc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308fd0: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x308fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x308fd4: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x308fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x308fd8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x308fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x308fdc: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x308fdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x308fe0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x308FE0u;
    SET_GPR_U32(ctx, 31, 0x308FE8u);
    ctx->pc = 0x308FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308FE0u;
    // 0x308fe4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x308FE0u, 0x308FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308FE8u;
label_308fe8:
    // 0x308fe8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308fec: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x308fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x308ff0: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x308FF0u;
    SET_GPR_U32(ctx, 31, 0x308FF8u);
    ctx->pc = 0x308FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308FF0u;
    // 0x308ff4: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x308FF0u, 0x308FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308FF8u;
label_308ff8:
    // 0x308ff8: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x308ff8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x308ffc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x308ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309000: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x309000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x309004: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x309004u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x309008: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x309008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30900c: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x30900cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x309010: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x309010u;
    SET_GPR_U32(ctx, 31, 0x309018u);
    ctx->pc = 0x309014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309010u;
    // 0x309014: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x309010u, 0x309018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309018u;
label_309018:
    // 0x309018: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x309018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30901c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x30901cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x309020: 0xc040eb2  jal         func_103AC8
    ctx->pc = 0x309020u;
    SET_GPR_U32(ctx, 31, 0x309028u);
    ctx->pc = 0x309024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309020u;
    // 0x309024: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103AC8u, 0x309020u, 0x309028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309028u;
label_309028:
    // 0x309028: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x309028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x30902c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30902cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x309030: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x309030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x309034: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x309034u;
    {
        const bool branch_taken_0x309034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309034) {
            ctx->pc = 0x308F98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_308f98;
        }
    }
    ctx->pc = 0x30903Cu;
    // 0x30903c: 0x0  nop
    ctx->pc = 0x30903cu;
    // NOP
label_309040:
    // 0x309040: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x309040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x309044: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x309044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x309048: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x309048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x30904c: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x30904cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x309050: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x309050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x309054: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x309054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x309058: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x309058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x30905c: 0x2842023  subu        $a0, $s4, $a0
    ctx->pc = 0x30905cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x309060: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x309060u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x309064: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x309064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x309068: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x309068u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x30906c: 0x7e800000  sq          $zero, 0x0($s4)
    ctx->pc = 0x30906cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 0));
    // 0x309070: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x309070u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x309074: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x309074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x309078: 0x1440fed0  bnez        $v0, . + 4 + (-0x130 << 2)
    ctx->pc = 0x309078u;
    {
        const bool branch_taken_0x309078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309078u;
        // 0x30907c: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309078) {
            ctx->pc = 0x308BBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_308bbc;
        }
    }
    ctx->pc = 0x309080u;
label_309080:
    // 0x309080: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x309080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x309084: 0x8c431e58  lw          $v1, 0x1E58($v0)
    ctx->pc = 0x309084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7768)));
    // 0x309088: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x309088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x30908c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x30908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x309090: 0x54082a  slt         $at, $v0, $s4
    ctx->pc = 0x309090u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x309094: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x309094u;
    {
        const bool branch_taken_0x309094 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x309094) {
            ctx->pc = 0x3090A8u;
            goto label_3090a8;
        }
    }
    ctx->pc = 0x30909Cu;
    // 0x30909c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30909cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3090a0: 0xb8020001  swr         $v0, 0x1($zero)
    ctx->pc = 0x3090a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3090a4: 0xa8020004  swl         $v0, 0x4($zero)
    ctx->pc = 0x3090a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3090a8:
    // 0x3090a8: 0x3c0201d3  lui         $v0, 0x1D3
    ctx->pc = 0x3090a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)467 << 16));
    // 0x3090ac: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3090acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3090b0: 0x8c421e58  lw          $v0, 0x1E58($v0)
    ctx->pc = 0x3090b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7768)));
    // 0x3090b4: 0x248435e0  addiu       $a0, $a0, 0x35E0
    ctx->pc = 0x3090b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13792));
    // 0x3090b8: 0xc04a12a  jal         func_1284A8
    ctx->pc = 0x3090B8u;
    SET_GPR_U32(ctx, 31, 0x3090C0u);
    ctx->pc = 0x3090BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3090B8u;
    // 0x3090bc: 0x2822823  subu        $a1, $s4, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1284A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1284A8u, 0x3090B8u, 0x3090C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3090C0u;
label_3090c0:
    // 0x3090c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3090c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3090c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3090c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3090c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3090c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3090cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3090ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3090d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3090d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3090d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3090d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3090d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3090d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3090dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3090DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3090E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090DCu;
        // 0x3090e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3090DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3090E4u;
    // 0x3090e4: 0x0  nop
    ctx->pc = 0x3090e4u;
    // NOP
    // 0x3090e8: 0x0  nop
    ctx->pc = 0x3090e8u;
    // NOP
    // 0x3090ec: 0x0  nop
    ctx->pc = 0x3090ecu;
    // NOP
}
