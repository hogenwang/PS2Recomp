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

// Function: sub_00341CC0
// Address: 0x341cc0 - 0x3424c0
void sub_00341CC0_0x341cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341CC0_0x341cc0");
#endif

    switch (ctx->pc) {
        case 0x3420e8u: goto label_3420e8;
        case 0x3420f0u: goto label_3420f0;
        case 0x342108u: goto label_342108;
        case 0x342140u: goto label_342140;
        case 0x342154u: goto label_342154;
        case 0x3421a8u: goto label_3421a8;
        case 0x342240u: goto label_342240;
        case 0x3422b0u: goto label_3422b0;
        case 0x342370u: goto label_342370;
        case 0x3423f8u: goto label_3423f8;
        default: break;
    }

    ctx->pc = 0x341cc0u;

    // 0x341cc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x341cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x341cc4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x341cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x341cc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x341cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x341ccc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x341cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x341cd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x341cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x341cd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x341cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x341cd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x341cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x341cdc: 0x8466ea20  lh          $a2, -0x15E0($v1)
    ctx->pc = 0x341cdcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961696)));
    // 0x341ce0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x341ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x341ce4: 0x8464ea2c  lh          $a0, -0x15D4($v1)
    ctx->pc = 0x341ce4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961708)));
    // 0x341ce8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x341ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x341cec: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x341cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x341cf0: 0x8465ea22  lh          $a1, -0x15DE($v1)
    ctx->pc = 0x341cf0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961698)));
    // 0x341cf4: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x341cf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x341cf8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x341cf8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x341cfc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x341cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x341d00: 0x8463ea2e  lh          $v1, -0x15D2($v1)
    ctx->pc = 0x341d00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294961710)));
    // 0x341d04: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x341d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x341d08: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x341d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x341d0c: 0x30850080  andi        $a1, $a0, 0x80
    ctx->pc = 0x341d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x341d10: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x341D10u;
    {
        const bool branch_taken_0x341d10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x341D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D10u;
        // 0x341d14: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341d10) {
            ctx->pc = 0x341D54u;
            goto label_341d54;
        }
    }
    ctx->pc = 0x341D18u;
    // 0x341d18: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341d18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341d1c: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x341d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x341d20: 0xc4a1ea98  lwc1        $f1, -0x1568($a1)
    ctx->pc = 0x341d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341d24: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x341d24u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341d28: 0x30860800  andi        $a2, $a0, 0x800
    ctx->pc = 0x341d28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x341d2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x341d2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x341d30: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341d30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341d34: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x341D34u;
    {
        const bool branch_taken_0x341d34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x341D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D34u;
        // 0x341d38: 0xe4a1ea98  swc1        $f1, -0x1568($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961816), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341d34) {
            ctx->pc = 0x341D54u;
            goto label_341d54;
        }
    }
    ctx->pc = 0x341D3Cu;
    // 0x341d3c: 0x3c064080  lui         $a2, 0x4080
    ctx->pc = 0x341d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16512 << 16));
    // 0x341d40: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341d44: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x341d44u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341d48: 0x0  nop
    ctx->pc = 0x341d48u;
    // NOP
    // 0x341d4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x341d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x341d50: 0xe4a0ea98  swc1        $f0, -0x1568($a1)
    ctx->pc = 0x341d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961816), bits); }
label_341d54:
    // 0x341d54: 0x30850020  andi        $a1, $a0, 0x20
    ctx->pc = 0x341d54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x341d58: 0x50a00011  beql        $a1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x341D58u;
    {
        const bool branch_taken_0x341d58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x341d58) {
            ctx->pc = 0x341D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341D58u;
            // 0x341d5c: 0x30850040  andi        $a1, $a0, 0x40 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
            ctx->in_delay_slot = false;
            ctx->pc = 0x341DA0u;
            goto label_341da0;
        }
    }
    ctx->pc = 0x341D60u;
    // 0x341d60: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341d64: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x341d64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x341d68: 0xc4a1ea98  lwc1        $f1, -0x1568($a1)
    ctx->pc = 0x341d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341d6c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x341d6cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341d70: 0x30860800  andi        $a2, $a0, 0x800
    ctx->pc = 0x341d70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x341d74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x341d74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341d78: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341d7c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x341D7Cu;
    {
        const bool branch_taken_0x341d7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x341D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341D7Cu;
        // 0x341d80: 0xe4a1ea98  swc1        $f1, -0x1568($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961816), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341d7c) {
            ctx->pc = 0x341D9Cu;
            goto label_341d9c;
        }
    }
    ctx->pc = 0x341D84u;
    // 0x341d84: 0x3c064080  lui         $a2, 0x4080
    ctx->pc = 0x341d84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16512 << 16));
    // 0x341d88: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341d8c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x341d8cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341d90: 0x0  nop
    ctx->pc = 0x341d90u;
    // NOP
    // 0x341d94: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x341d94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341d98: 0xe4a0ea98  swc1        $f0, -0x1568($a1)
    ctx->pc = 0x341d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961816), bits); }
label_341d9c:
    // 0x341d9c: 0x30850040  andi        $a1, $a0, 0x40
    ctx->pc = 0x341d9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_341da0:
    // 0x341da0: 0x50a00011  beql        $a1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x341DA0u;
    {
        const bool branch_taken_0x341da0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x341da0) {
            ctx->pc = 0x341DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341DA0u;
            // 0x341da4: 0x30850010  andi        $a1, $a0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x341DE8u;
            goto label_341de8;
        }
    }
    ctx->pc = 0x341DA8u;
    // 0x341da8: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341da8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341dac: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x341dacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x341db0: 0xc4a1ea9c  lwc1        $f1, -0x1564($a1)
    ctx->pc = 0x341db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341db4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x341db4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341db8: 0x30860800  andi        $a2, $a0, 0x800
    ctx->pc = 0x341db8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x341dbc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x341dbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341dc0: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341dc4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x341DC4u;
    {
        const bool branch_taken_0x341dc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x341DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341DC4u;
        // 0x341dc8: 0xe4a1ea9c  swc1        $f1, -0x1564($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961820), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341dc4) {
            ctx->pc = 0x341DE4u;
            goto label_341de4;
        }
    }
    ctx->pc = 0x341DCCu;
    // 0x341dcc: 0x3c064080  lui         $a2, 0x4080
    ctx->pc = 0x341dccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16512 << 16));
    // 0x341dd0: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341dd4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x341dd4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341dd8: 0x0  nop
    ctx->pc = 0x341dd8u;
    // NOP
    // 0x341ddc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x341ddcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341de0: 0xe4a0ea9c  swc1        $f0, -0x1564($a1)
    ctx->pc = 0x341de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961820), bits); }
label_341de4:
    // 0x341de4: 0x30850010  andi        $a1, $a0, 0x10
    ctx->pc = 0x341de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_341de8:
    // 0x341de8: 0x50a00011  beql        $a1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x341DE8u;
    {
        const bool branch_taken_0x341de8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x341de8) {
            ctx->pc = 0x341DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341DE8u;
            // 0x341dec: 0x30858000  andi        $a1, $a0, 0x8000 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
            ctx->in_delay_slot = false;
            ctx->pc = 0x341E30u;
            goto label_341e30;
        }
    }
    ctx->pc = 0x341DF0u;
    // 0x341df0: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341df4: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x341df4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x341df8: 0xc4a1ea9c  lwc1        $f1, -0x1564($a1)
    ctx->pc = 0x341df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341dfc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x341dfcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341e00: 0x30860800  andi        $a2, $a0, 0x800
    ctx->pc = 0x341e00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x341e04: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x341e04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x341e08: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341e0c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x341E0Cu;
    {
        const bool branch_taken_0x341e0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x341E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E0Cu;
        // 0x341e10: 0xe4a1ea9c  swc1        $f1, -0x1564($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961820), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341e0c) {
            ctx->pc = 0x341E2Cu;
            goto label_341e2c;
        }
    }
    ctx->pc = 0x341E14u;
    // 0x341e14: 0x3c064080  lui         $a2, 0x4080
    ctx->pc = 0x341e14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16512 << 16));
    // 0x341e18: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341e1c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x341e1cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341e20: 0x0  nop
    ctx->pc = 0x341e20u;
    // NOP
    // 0x341e24: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x341e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x341e28: 0xe4a0ea9c  swc1        $f0, -0x1564($a1)
    ctx->pc = 0x341e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961820), bits); }
label_341e2c:
    // 0x341e2c: 0x30858000  andi        $a1, $a0, 0x8000
    ctx->pc = 0x341e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
label_341e30:
    // 0x341e30: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x341E30u;
    {
        const bool branch_taken_0x341e30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x341e30) {
            ctx->pc = 0x341E74u;
            goto label_341e74;
        }
    }
    ctx->pc = 0x341E38u;
    // 0x341e38: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341e3c: 0x3c063d4c  lui         $a2, 0x3D4C
    ctx->pc = 0x341e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15692 << 16));
    // 0x341e40: 0xc4a1ea94  lwc1        $f1, -0x156C($a1)
    ctx->pc = 0x341e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341e44: 0x34c5cccd  ori         $a1, $a2, 0xCCCD
    ctx->pc = 0x341e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x341e48: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x341e48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341e4c: 0x3c063e80  lui         $a2, 0x3E80
    ctx->pc = 0x341e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16000 << 16));
    // 0x341e50: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x341e50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341e54: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341e58: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x341e58u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341e5c: 0x0  nop
    ctx->pc = 0x341e5cu;
    // NOP
    // 0x341e60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x341e60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341e64: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x341E64u;
    {
        const bool branch_taken_0x341e64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x341E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341E64u;
        // 0x341e68: 0xe4a1ea94  swc1        $f1, -0x156C($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961812), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341e64) {
            ctx->pc = 0x341E74u;
            goto label_341e74;
        }
    }
    ctx->pc = 0x341E6Cu;
    // 0x341e6c: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341e70: 0xe4a0ea94  swc1        $f0, -0x156C($a1)
    ctx->pc = 0x341e70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294961812), bits); }
label_341e74:
    // 0x341e74: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341e78: 0x90a5e818  lbu         $a1, -0x17E8($a1)
    ctx->pc = 0x341e78u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294961176)));
    // 0x341e7c: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x341e7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x341e80: 0x54200189  bnel        $at, $zero, . + 4 + (0x189 << 2)
    ctx->pc = 0x341E80u;
    {
        const bool branch_taken_0x341e80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x341e80) {
            ctx->pc = 0x341E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341E80u;
            // 0x341e84: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3424A8u;
            goto label_3424a8;
        }
    }
    ctx->pc = 0x341E88u;
    // 0x341e88: 0x30841000  andi        $a0, $a0, 0x1000
    ctx->pc = 0x341e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x341e8c: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x341E8Cu;
    {
        const bool branch_taken_0x341e8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x341e8c) {
            ctx->pc = 0x341ED0u;
            goto label_341ed0;
        }
    }
    ctx->pc = 0x341E94u;
    // 0x341e94: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x341e98: 0x3c053d4c  lui         $a1, 0x3D4C
    ctx->pc = 0x341e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15692 << 16));
    // 0x341e9c: 0xc481ea94  lwc1        $f1, -0x156C($a0)
    ctx->pc = 0x341e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294961812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341ea0: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x341ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x341ea4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341ea4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341ea8: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x341ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x341eac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x341eacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x341eb0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x341eb4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x341eb4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341eb8: 0x0  nop
    ctx->pc = 0x341eb8u;
    // NOP
    // 0x341ebc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x341ebcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341ec0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x341EC0u;
    {
        const bool branch_taken_0x341ec0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x341EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EC0u;
        // 0x341ec4: 0xe481ea94  swc1        $f1, -0x156C($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961812), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ec0) {
            ctx->pc = 0x341ED0u;
            goto label_341ed0;
        }
    }
    ctx->pc = 0x341EC8u;
    // 0x341ec8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x341ecc: 0xe480ea94  swc1        $f0, -0x156C($a0)
    ctx->pc = 0x341eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961812), bits); }
label_341ed0:
    // 0x341ed0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x341ed4: 0x8c84eaa8  lw          $a0, -0x1558($a0)
    ctx->pc = 0x341ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961832)));
    // 0x341ed8: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341ED8u;
    {
        const bool branch_taken_0x341ed8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x341ed8) {
            ctx->pc = 0x341EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341ED8u;
            // 0x341edc: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341EECu;
            goto label_341eec;
        }
    }
    ctx->pc = 0x341EE0u;
    // 0x341ee0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341ee0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341ee4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x341EE4u;
    {
        const bool branch_taken_0x341ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341EE4u;
        // 0x341ee8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341ee4) {
            ctx->pc = 0x341F04u;
            goto label_341f04;
        }
    }
    ctx->pc = 0x341EECu;
label_341eec:
    // 0x341eec: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x341eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x341ef0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x341ef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x341ef4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x341ef4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341ef8: 0x0  nop
    ctx->pc = 0x341ef8u;
    // NOP
    // 0x341efc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x341efcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x341f00: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x341f00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_341f04:
    // 0x341f04: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x341f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x341f08: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341f08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341f0c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341f0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341f10: 0x3c0643a0  lui         $a2, 0x43A0
    ctx->pc = 0x341f10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17312 << 16));
    // 0x341f14: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x341f14u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[0];
    // 0x341f18: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x341f1c: 0xc4a3ea94  lwc1        $f3, -0x156C($a1)
    ctx->pc = 0x341f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341f20: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x341f20u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x341f24: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x341f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x341f28: 0x0  nop
    ctx->pc = 0x341f28u;
    // NOP
    // 0x341f2c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x341f2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x341f30: 0xc480ea98  lwc1        $f0, -0x1568($a0)
    ctx->pc = 0x341f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294961816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341f34: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x341f34u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x341f38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x341f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341f3c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x341F3Cu;
    {
        const bool branch_taken_0x341f3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x341f3c) {
            ctx->pc = 0x341F4Cu;
            goto label_341f4c;
        }
    }
    ctx->pc = 0x341F44u;
    // 0x341f44: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x341f48: 0xe481ea98  swc1        $f1, -0x1568($a0)
    ctx->pc = 0x341f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961816), bits); }
label_341f4c:
    // 0x341f4c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x341f50: 0x8c84eaa8  lw          $a0, -0x1558($a0)
    ctx->pc = 0x341f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961832)));
    // 0x341f54: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341F54u;
    {
        const bool branch_taken_0x341f54 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x341f54) {
            ctx->pc = 0x341F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341F54u;
            // 0x341f58: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341F68u;
            goto label_341f68;
        }
    }
    ctx->pc = 0x341F5Cu;
    // 0x341f5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341f5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341f60: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x341F60u;
    {
        const bool branch_taken_0x341f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341F60u;
        // 0x341f64: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341f60) {
            ctx->pc = 0x341F80u;
            goto label_341f80;
        }
    }
    ctx->pc = 0x341F68u;
label_341f68:
    // 0x341f68: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x341f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x341f6c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x341f6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x341f70: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x341f70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341f74: 0x0  nop
    ctx->pc = 0x341f74u;
    // NOP
    // 0x341f78: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x341f78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x341f7c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x341f7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_341f80:
    // 0x341f80: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x341f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x341f84: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x341f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x341f88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341f88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341f8c: 0x3c0643a0  lui         $a2, 0x43A0
    ctx->pc = 0x341f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17312 << 16));
    // 0x341f90: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x341f90u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[0];
    // 0x341f94: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341f94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x341f98: 0xc4a3ea94  lwc1        $f3, -0x156C($a1)
    ctx->pc = 0x341f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x341f9c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x341f9cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x341fa0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x341fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x341fa4: 0x0  nop
    ctx->pc = 0x341fa4u;
    // NOP
    // 0x341fa8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x341fa8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x341fac: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x341facu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x341fb0: 0xc480ea98  lwc1        $f0, -0x1568($a0)
    ctx->pc = 0x341fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294961816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341fb4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x341fb4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x341fb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x341fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341fbc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x341FBCu;
    {
        const bool branch_taken_0x341fbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x341fbc) {
            ctx->pc = 0x341FCCu;
            goto label_341fcc;
        }
    }
    ctx->pc = 0x341FC4u;
    // 0x341fc4: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x341fc8: 0xe481ea98  swc1        $f1, -0x1568($a0)
    ctx->pc = 0x341fc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961816), bits); }
label_341fcc:
    // 0x341fcc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x341fd0: 0x8c84eaac  lw          $a0, -0x1554($a0)
    ctx->pc = 0x341fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961836)));
    // 0x341fd4: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341FD4u;
    {
        const bool branch_taken_0x341fd4 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x341fd4) {
            ctx->pc = 0x341FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341FD4u;
            // 0x341fd8: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341FE8u;
            goto label_341fe8;
        }
    }
    ctx->pc = 0x341FDCu;
    // 0x341fdc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341fdcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341fe0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x341FE0u;
    {
        const bool branch_taken_0x341fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341FE0u;
        // 0x341fe4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341fe0) {
            ctx->pc = 0x342000u;
            goto label_342000;
        }
    }
    ctx->pc = 0x341FE8u;
label_341fe8:
    // 0x341fe8: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x341fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x341fec: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x341fecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x341ff0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x341ff0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341ff4: 0x0  nop
    ctx->pc = 0x341ff4u;
    // NOP
    // 0x341ff8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x341ff8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x341ffc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x341ffcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_342000:
    // 0x342000: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x342000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x342004: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x342004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x342008: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x342008u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34200c: 0x3c064360  lui         $a2, 0x4360
    ctx->pc = 0x34200cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17248 << 16));
    // 0x342010: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x342010u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[0];
    // 0x342014: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x342014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x342018: 0xc4a3ea94  lwc1        $f3, -0x156C($a1)
    ctx->pc = 0x342018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34201c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x34201cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x342020: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x342020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x342024: 0x0  nop
    ctx->pc = 0x342024u;
    // NOP
    // 0x342028: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x342028u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x34202c: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x34202cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x342030: 0xc480ea9c  lwc1        $f0, -0x1564($a0)
    ctx->pc = 0x342030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294961820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x342034: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x342034u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x342038: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x342038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34203c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x34203Cu;
    {
        const bool branch_taken_0x34203c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34203c) {
            ctx->pc = 0x34204Cu;
            goto label_34204c;
        }
    }
    ctx->pc = 0x342044u;
    // 0x342044: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x342044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x342048: 0xe481ea9c  swc1        $f1, -0x1564($a0)
    ctx->pc = 0x342048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961820), bits); }
label_34204c:
    // 0x34204c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34204cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x342050: 0x8c84eaac  lw          $a0, -0x1554($a0)
    ctx->pc = 0x342050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961836)));
    // 0x342054: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x342054u;
    {
        const bool branch_taken_0x342054 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x342054) {
            ctx->pc = 0x342058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342054u;
            // 0x342058: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342068u;
            goto label_342068;
        }
    }
    ctx->pc = 0x34205Cu;
    // 0x34205c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34205cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342060: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x342060u;
    {
        const bool branch_taken_0x342060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342060u;
        // 0x342064: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x342060) {
            ctx->pc = 0x342080u;
            goto label_342080;
        }
    }
    ctx->pc = 0x342068u;
label_342068:
    // 0x342068: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x342068u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x34206c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x34206cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x342070: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x342070u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x342074: 0x0  nop
    ctx->pc = 0x342074u;
    // NOP
    // 0x342078: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x342078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34207c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x34207cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_342080:
    // 0x342080: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x342080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x342084: 0x3c0501de  lui         $a1, 0x1DE
    ctx->pc = 0x342084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)478 << 16));
    // 0x342088: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x342088u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34208c: 0x3c064360  lui         $a2, 0x4360
    ctx->pc = 0x34208cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17248 << 16));
    // 0x342090: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x342090u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[4] = ctx->f[1] / ctx->f[0];
    // 0x342094: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x342094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x342098: 0xc4a3ea94  lwc1        $f3, -0x156C($a1)
    ctx->pc = 0x342098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34209c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x34209cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3420a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3420a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3420a4: 0x0  nop
    ctx->pc = 0x3420a4u;
    // NOP
    // 0x3420a8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3420a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x3420ac: 0xc480ea9c  lwc1        $f0, -0x1564($a0)
    ctx->pc = 0x3420acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294961820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3420b0: 0x4603205c  madd.s      $f1, $f4, $f3
    ctx->pc = 0x3420b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x3420b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3420b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3420b8: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x3420B8u;
    {
        const bool branch_taken_0x3420b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3420b8) {
            ctx->pc = 0x3420BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3420B8u;
            // 0x3420bc: 0x3943c  dsll32      $s2, $v1, 16 (Delay Slot)
            SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3420CCu;
            goto label_3420cc;
        }
    }
    ctx->pc = 0x3420C0u;
    // 0x3420c0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x3420c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x3420c4: 0xe481ea9c  swc1        $f1, -0x1564($a0)
    ctx->pc = 0x3420c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294961820), bits); }
    // 0x3420c8: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x3420c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
label_3420cc:
    // 0x3420cc: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x3420ccu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x3420d0: 0x32432000  andi        $v1, $s2, 0x2000
    ctx->pc = 0x3420d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8192);
    // 0x3420d4: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3420D4u;
    {
        const bool branch_taken_0x3420d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3420d4) {
            ctx->pc = 0x3420D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3420D4u;
            // 0x3420d8: 0x32434000  andi        $v1, $s2, 0x4000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3420F4u;
            goto label_3420f4;
        }
    }
    ctx->pc = 0x3420DCu;
    // 0x3420dc: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x3420dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x3420e0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x3420E0u;
    SET_GPR_U32(ctx, 31, 0x3420E8u);
    ctx->pc = 0x3420E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3420E0u;
    // 0x3420e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3420E0u, 0x3420E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3420E8u;
label_3420e8:
    // 0x3420e8: 0xc0d042c  jal         func_3410B0
    ctx->pc = 0x3420E8u;
    SET_GPR_U32(ctx, 31, 0x3420F0u);
    ctx->pc = 0x3410B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3410B0u, 0x3420E8u, 0x3420F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3420F0u;
label_3420f0:
    // 0x3420f0: 0x32434000  andi        $v1, $s2, 0x4000
    ctx->pc = 0x3420f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16384);
label_3420f4:
    // 0x3420f4: 0x50600037  beql        $v1, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x3420F4u;
    {
        const bool branch_taken_0x3420f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3420f4) {
            ctx->pc = 0x3420F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3420F4u;
            // 0x3420f8: 0x32430300  andi        $v1, $s2, 0x300 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)768);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3421D4u;
            goto label_3421d4;
        }
    }
    ctx->pc = 0x3420FCu;
    // 0x3420fc: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x3420fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x342100: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x342100u;
    SET_GPR_U32(ctx, 31, 0x342108u);
    ctx->pc = 0x342104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342100u;
    // 0x342104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x342100u, 0x342108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342108u;
label_342108:
    // 0x342108: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x342108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34210c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34210cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342110: 0xac43ea70  sw          $v1, -0x1590($v0)
    ctx->pc = 0x342110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961776), GPR_U32(ctx, 3));
    // 0x342114: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x342114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x342118: 0xa440ea22  sh          $zero, -0x15DE($v0)
    ctx->pc = 0x342118u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961698), (uint16_t)GPR_U32(ctx, 0));
    // 0x34211c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x34211cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x342120: 0xa440ea2e  sh          $zero, -0x15D2($v0)
    ctx->pc = 0x342120u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294961710), (uint16_t)GPR_U32(ctx, 0));
    // 0x342124: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342128: 0x8c43ea78  lw          $v1, -0x1588($v0)
    ctx->pc = 0x342128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961784)));
    // 0x34212c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34212cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x342130: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x342130u;
    {
        const bool branch_taken_0x342130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x342130) {
            ctx->pc = 0x342148u;
            goto label_342148;
        }
    }
    ctx->pc = 0x342138u;
    // 0x342138: 0xc0d09a0  jal         func_342680
    ctx->pc = 0x342138u;
    SET_GPR_U32(ctx, 31, 0x342140u);
    ctx->pc = 0x342680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342680u, 0x342138u, 0x342140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342140u;
label_342140:
    // 0x342140: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x342140u;
    {
        const bool branch_taken_0x342140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x342140) {
            ctx->pc = 0x3424A4u;
            goto label_3424a4;
        }
    }
    ctx->pc = 0x342148u;
label_342148:
    // 0x342148: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x342148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34214c: 0xc0558e0  jal         func_156380
    ctx->pc = 0x34214Cu;
    SET_GPR_U32(ctx, 31, 0x342154u);
    ctx->pc = 0x342150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34214Cu;
    // 0x342150: 0x2484ea40  addiu       $a0, $a0, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x34214Cu, 0x342154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342154u;
label_342154:
    // 0x342154: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342158: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x342158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x34215c: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x34215cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x342160: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x342160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x342164: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342168: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x342168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34216c: 0xac43e7e8  sw          $v1, -0x1818($v0)
    ctx->pc = 0x34216cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961128), GPR_U32(ctx, 3));
    // 0x342170: 0x24a54f08  addiu       $a1, $a1, 0x4F08
    ctx->pc = 0x342170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20232));
    // 0x342174: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x342174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x342178: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34217c: 0x8c63ea78  lw          $v1, -0x1588($v1)
    ctx->pc = 0x34217cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961784)));
    // 0x342180: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x342180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342184: 0xac44ea60  sw          $a0, -0x15A0($v0)
    ctx->pc = 0x342184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961760), GPR_U32(ctx, 4));
    // 0x342188: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x342188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x34218c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x34218cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x342190: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342194: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x342194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x342198: 0x24841180  addiu       $a0, $a0, 0x1180
    ctx->pc = 0x342198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    // 0x34219c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x34219cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3421a0: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x3421A0u;
    SET_GPR_U32(ctx, 31, 0x3421A8u);
    ctx->pc = 0x3421A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3421A0u;
    // 0x3421a4: 0xa043e820  sb          $v1, -0x17E0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961184), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x3421A0u, 0x3421A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3421A8u;
label_3421a8:
    // 0x3421a8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3421a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3421ac: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x3421acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3421b0: 0x8c65ea78  lw          $a1, -0x1588($v1)
    ctx->pc = 0x3421b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961784)));
    // 0x3421b4: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x3421b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x3421b8: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x3421b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x3421bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3421bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3421c0: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x3421c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    // 0x3421c4: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x3421c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x3421c8: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x3421c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x3421cc: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x3421CCu;
    {
        const bool branch_taken_0x3421cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3421D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421CCu;
        // 0x3421d0: 0xacc00014  sw          $zero, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3421cc) {
            ctx->pc = 0x3424A4u;
            goto label_3424a4;
        }
    }
    ctx->pc = 0x3421D4u;
label_3421d4:
    // 0x3421d4: 0x506000ab  beql        $v1, $zero, . + 4 + (0xAB << 2)
    ctx->pc = 0x3421D4u;
    {
        const bool branch_taken_0x3421d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3421d4) {
            ctx->pc = 0x3421D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3421D4u;
            // 0x3421d8: 0x32430008  andi        $v1, $s2, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x342484u;
            goto label_342484;
        }
    }
    ctx->pc = 0x3421DCu;
    // 0x3421dc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3421dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3421e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3421e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3421e4: 0x8c42ea78  lw          $v0, -0x1588($v0)
    ctx->pc = 0x3421e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961784)));
    // 0x3421e8: 0x54430054  bnel        $v0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x3421E8u;
    {
        const bool branch_taken_0x3421e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3421e8) {
            ctx->pc = 0x3421ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3421E8u;
            // 0x3421ec: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34233Cu;
            goto label_34233c;
        }
    }
    ctx->pc = 0x3421F0u;
    // 0x3421f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3421f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3421f4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3421f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3421f8: 0x24423ee8  addiu       $v0, $v0, 0x3EE8
    ctx->pc = 0x3421f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16104));
    // 0x3421fc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3421fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342200: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342204: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x342204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x342208: 0x8c45ea64  lw          $a1, -0x159C($v0)
    ctx->pc = 0x342208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x34220c: 0x32430200  andi        $v1, $s2, 0x200
    ctx->pc = 0x34220cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)512);
    // 0x342210: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342214: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x342214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x342218: 0x8c42ea68  lw          $v0, -0x1598($v0)
    ctx->pc = 0x342218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961768)));
    // 0x34221c: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x34221cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x342220: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x342220u;
    {
        const bool branch_taken_0x342220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x342224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342220u;
        // 0x342224: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342220) {
            ctx->pc = 0x342230u;
            goto label_342230;
        }
    }
    ctx->pc = 0x342228u;
    // 0x342228: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x342228u;
    {
        const bool branch_taken_0x342228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342228u;
        // 0x34222c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342228) {
            ctx->pc = 0x342240u;
            goto label_342240;
        }
    }
    ctx->pc = 0x342230u;
label_342230:
    // 0x342230: 0x32420100  andi        $v0, $s2, 0x100
    ctx->pc = 0x342230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
    // 0x342234: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x342234u;
    {
        const bool branch_taken_0x342234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342234) {
            ctx->pc = 0x342238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342234u;
            // 0x342238: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342244u;
            goto label_342244;
        }
    }
    ctx->pc = 0x34223Cu;
    // 0x34223c: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x34223cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_342240:
    // 0x342240: 0x2719821  addu        $s3, $s3, $s1
    ctx->pc = 0x342240u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_342244:
    // 0x342244: 0x2a610010  slti        $at, $s3, 0x10
    ctx->pc = 0x342244u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x342248: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x342248u;
    {
        const bool branch_taken_0x342248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x342248) {
            ctx->pc = 0x342278u;
            goto label_342278;
        }
    }
    ctx->pc = 0x342250u;
    // 0x342250: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342254: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x342254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x342258: 0x8c42ea78  lw          $v0, -0x1588($v0)
    ctx->pc = 0x342258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961784)));
    // 0x34225c: 0x24633ef8  addiu       $v1, $v1, 0x3EF8
    ctx->pc = 0x34225cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16120));
    // 0x342260: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x342260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x342264: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x342264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x342268: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x342268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x34226c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x34226Cu;
    {
        const bool branch_taken_0x34226c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34226Cu;
        // 0x342270: 0x2453ffff  addiu       $s3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34226c) {
            ctx->pc = 0x3422A8u;
            goto label_3422a8;
        }
    }
    ctx->pc = 0x342274u;
    // 0x342274: 0x0  nop
    ctx->pc = 0x342274u;
    // NOP
label_342278:
    // 0x342278: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34227c: 0x8c43ea78  lw          $v1, -0x1588($v0)
    ctx->pc = 0x34227cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961784)));
    // 0x342280: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x342280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x342284: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x342284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x342288: 0x24423ef8  addiu       $v0, $v0, 0x3EF8
    ctx->pc = 0x342288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16120));
    // 0x34228c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34228cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342290: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x342290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x342294: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x342294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x342298: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x342298u;
    {
        const bool branch_taken_0x342298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x342298) {
            ctx->pc = 0x3422A8u;
            goto label_3422a8;
        }
    }
    ctx->pc = 0x3422A0u;
    // 0x3422a0: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x3422a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3422a4: 0x0  nop
    ctx->pc = 0x3422a4u;
    // NOP
label_3422a8:
    // 0x3422a8: 0xc0d05b0  jal         func_3416C0
    ctx->pc = 0x3422A8u;
    SET_GPR_U32(ctx, 31, 0x3422B0u);
    ctx->pc = 0x3422ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3422A8u;
    // 0x3422ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3416C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3416C0u, 0x3422A8u, 0x3422B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3422B0u;
label_3422b0:
    // 0x3422b0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x3422b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3422b4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3422b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3422b8: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3422B8u;
    {
        const bool branch_taken_0x3422b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3422b8) {
            ctx->pc = 0x342240u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_342240;
        }
    }
    ctx->pc = 0x3422C0u;
    // 0x3422c0: 0x12130078  beq         $s0, $s3, . + 4 + (0x78 << 2)
    ctx->pc = 0x3422C0u;
    {
        const bool branch_taken_0x3422c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x3422c0) {
            ctx->pc = 0x3424A4u;
            goto label_3424a4;
        }
    }
    ctx->pc = 0x3422C8u;
    // 0x3422c8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3422c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3422cc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x3422ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x3422d0: 0x8c63ea78  lw          $v1, -0x1588($v1)
    ctx->pc = 0x3422d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961784)));
    // 0x3422d4: 0x24843ee8  addiu       $a0, $a0, 0x3EE8
    ctx->pc = 0x3422d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16104));
    // 0x3422d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3422d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3422dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3422dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3422e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3422e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3422e4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3422E4u;
    {
        const bool branch_taken_0x3422e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3422E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422E4u;
        // 0x3422e8: 0x263001b  divu        $zero, $s3, $v1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3422e4) {
            ctx->pc = 0x3422F0u;
            goto label_3422f0;
        }
    }
    ctx->pc = 0x3422ECu;
    // 0x3422ec: 0x1cd  break       0, 7
    ctx->pc = 0x3422ecu;
    runtime->handleBreak(rdram, ctx);
label_3422f0:
    // 0x3422f0: 0x2012  mflo        $a0
    ctx->pc = 0x3422f0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x3422f4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3422f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3422f8: 0xac64ea64  sw          $a0, -0x159C($v1)
    ctx->pc = 0x3422f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961764), GPR_U32(ctx, 4));
    // 0x3422fc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3422fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x342300: 0x8c64ea78  lw          $a0, -0x1588($v1)
    ctx->pc = 0x342300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961784)));
    // 0x342304: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x342304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x342308: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x342308u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x34230c: 0x24633ee8  addiu       $v1, $v1, 0x3EE8
    ctx->pc = 0x34230cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16104));
    // 0x342310: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x342310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x342314: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x342314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x342318: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x342318u;
    {
        const bool branch_taken_0x342318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342318u;
        // 0x34231c: 0x263001b  divu        $zero, $s3, $v1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x342318) {
            ctx->pc = 0x342324u;
            goto label_342324;
        }
    }
    ctx->pc = 0x342320u;
    // 0x342320: 0x1cd  break       0, 7
    ctx->pc = 0x342320u;
    runtime->handleBreak(rdram, ctx);
label_342324:
    // 0x342324: 0x2010  mfhi        $a0
    ctx->pc = 0x342324u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x342328: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x342328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34232c: 0xac64ea68  sw          $a0, -0x1598($v1)
    ctx->pc = 0x34232cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961768), GPR_U32(ctx, 4));
    // 0x342330: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x342330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x342334: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x342334u;
    {
        const bool branch_taken_0x342334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342334u;
        // 0x342338: 0xa060e818  sb          $zero, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342334) {
            ctx->pc = 0x3424A4u;
            goto label_3424a4;
        }
    }
    ctx->pc = 0x34233Cu;
label_34233c:
    // 0x34233c: 0x32510200  andi        $s1, $s2, 0x200
    ctx->pc = 0x34233cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)512);
    // 0x342340: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x342340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x342344: 0x32500100  andi        $s0, $s2, 0x100
    ctx->pc = 0x342344u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)256);
    // 0x342348: 0x24423ee8  addiu       $v0, $v0, 0x3EE8
    ctx->pc = 0x342348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16104));
    // 0x34234c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x34234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342350: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342354: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x342354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x342358: 0x8c44ea64  lw          $a0, -0x159C($v0)
    ctx->pc = 0x342358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
    // 0x34235c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34235cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x342360: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x342360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x342364: 0x8c42ea68  lw          $v0, -0x1598($v0)
    ctx->pc = 0x342364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961768)));
    // 0x342368: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x342368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34236c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x34236cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_342370:
    // 0x342370: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x342370u;
    {
        const bool branch_taken_0x342370 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x342370) {
            ctx->pc = 0x342380u;
            goto label_342380;
        }
    }
    ctx->pc = 0x342378u;
    // 0x342378: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x342378u;
    {
        const bool branch_taken_0x342378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342378u;
        // 0x34237c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342378) {
            ctx->pc = 0x342390u;
            goto label_342390;
        }
    }
    ctx->pc = 0x342380u;
label_342380:
    // 0x342380: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x342380u;
    {
        const bool branch_taken_0x342380 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x342380) {
            ctx->pc = 0x342390u;
            goto label_342390;
        }
    }
    ctx->pc = 0x342388u;
    // 0x342388: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x342388u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x34238c: 0x0  nop
    ctx->pc = 0x34238cu;
    // NOP
label_342390:
    // 0x342390: 0x661000b  bgez        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x342390u;
    {
        const bool branch_taken_0x342390 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x342390) {
            ctx->pc = 0x3423C0u;
            goto label_3423c0;
        }
    }
    ctx->pc = 0x342398u;
    // 0x342398: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x342398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34239c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34239cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x3423a0: 0x8c42ea78  lw          $v0, -0x1588($v0)
    ctx->pc = 0x3423a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961784)));
    // 0x3423a4: 0x24633ef8  addiu       $v1, $v1, 0x3EF8
    ctx->pc = 0x3423a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16120));
    // 0x3423a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3423a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3423ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3423acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3423b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3423b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3423b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3423B4u;
    {
        const bool branch_taken_0x3423b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3423B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3423B4u;
        // 0x3423b8: 0x2453ffff  addiu       $s3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3423b4) {
            ctx->pc = 0x3423F0u;
            goto label_3423f0;
        }
    }
    ctx->pc = 0x3423BCu;
    // 0x3423bc: 0x0  nop
    ctx->pc = 0x3423bcu;
    // NOP
label_3423c0:
    // 0x3423c0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3423c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3423c4: 0x8c43ea78  lw          $v1, -0x1588($v0)
    ctx->pc = 0x3423c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961784)));
    // 0x3423c8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3423c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3423cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3423ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3423d0: 0x24423ef8  addiu       $v0, $v0, 0x3EF8
    ctx->pc = 0x3423d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16120));
    // 0x3423d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3423d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3423d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3423d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3423dc: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x3423dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3423e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3423E0u;
    {
        const bool branch_taken_0x3423e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3423e0) {
            ctx->pc = 0x3423F0u;
            goto label_3423f0;
        }
    }
    ctx->pc = 0x3423E8u;
    // 0x3423e8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3423e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3423ec: 0x0  nop
    ctx->pc = 0x3423ecu;
    // NOP
label_3423f0:
    // 0x3423f0: 0xc0d05b0  jal         func_3416C0
    ctx->pc = 0x3423F0u;
    SET_GPR_U32(ctx, 31, 0x3423F8u);
    ctx->pc = 0x3423F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3423F0u;
    // 0x3423f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3416C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3416C0u, 0x3423F0u, 0x3423F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3423F8u;
label_3423f8:
    // 0x3423f8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x3423f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3423fc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3423fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x342400: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x342400u;
    {
        const bool branch_taken_0x342400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x342400) {
            ctx->pc = 0x342370u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_342370;
        }
    }
    ctx->pc = 0x342408u;
    // 0x342408: 0x12530026  beq         $s2, $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x342408u;
    {
        const bool branch_taken_0x342408 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        if (branch_taken_0x342408) {
            ctx->pc = 0x3424A4u;
            goto label_3424a4;
        }
    }
    ctx->pc = 0x342410u;
    // 0x342410: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x342410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x342414: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x342414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x342418: 0x8c63ea78  lw          $v1, -0x1588($v1)
    ctx->pc = 0x342418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961784)));
    // 0x34241c: 0x24843ee8  addiu       $a0, $a0, 0x3EE8
    ctx->pc = 0x34241cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16104));
    // 0x342420: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x342420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x342424: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x342424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x342428: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x342428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x34242c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x34242Cu;
    {
        const bool branch_taken_0x34242c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x342430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34242Cu;
        // 0x342430: 0x263001b  divu        $zero, $s3, $v1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34242c) {
            ctx->pc = 0x342438u;
            goto label_342438;
        }
    }
    ctx->pc = 0x342434u;
    // 0x342434: 0x1cd  break       0, 7
    ctx->pc = 0x342434u;
    runtime->handleBreak(rdram, ctx);
label_342438:
    // 0x342438: 0x2012  mflo        $a0
    ctx->pc = 0x342438u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x34243c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34243cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x342440: 0xac64ea64  sw          $a0, -0x159C($v1)
    ctx->pc = 0x342440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961764), GPR_U32(ctx, 4));
    // 0x342444: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x342444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x342448: 0x8c64ea78  lw          $a0, -0x1588($v1)
    ctx->pc = 0x342448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961784)));
    // 0x34244c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34244cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x342450: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x342450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x342454: 0x24633ee8  addiu       $v1, $v1, 0x3EE8
    ctx->pc = 0x342454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16104));
    // 0x342458: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x342458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x34245c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x34245cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x342460: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x342460u;
    {
        const bool branch_taken_0x342460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x342464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342460u;
        // 0x342464: 0x263001b  divu        $zero, $s3, $v1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 19) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,19); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x342460) {
            ctx->pc = 0x34246Cu;
            goto label_34246c;
        }
    }
    ctx->pc = 0x342468u;
    // 0x342468: 0x1cd  break       0, 7
    ctx->pc = 0x342468u;
    runtime->handleBreak(rdram, ctx);
label_34246c:
    // 0x34246c: 0x2010  mfhi        $a0
    ctx->pc = 0x34246cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x342470: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x342470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x342474: 0xac64ea68  sw          $a0, -0x1598($v1)
    ctx->pc = 0x342474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961768), GPR_U32(ctx, 4));
    // 0x342478: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x342478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34247c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34247Cu;
    {
        const bool branch_taken_0x34247c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34247Cu;
        // 0x342480: 0xa060e818  sb          $zero, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34247c) {
            ctx->pc = 0x3424A4u;
            goto label_3424a4;
        }
    }
    ctx->pc = 0x342484u;
label_342484:
    // 0x342484: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x342484u;
    {
        const bool branch_taken_0x342484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x342484) {
            ctx->pc = 0x3424A4u;
            goto label_3424a4;
        }
    }
    ctx->pc = 0x34248Cu;
    // 0x34248c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34248cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x342490: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x342490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x342494: 0x8c84ea74  lw          $a0, -0x158C($a0)
    ctx->pc = 0x342494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961780)));
    // 0x342498: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x342498u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x34249c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x34249cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x3424a0: 0xac64ea74  sw          $a0, -0x158C($v1)
    ctx->pc = 0x3424a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961780), GPR_U32(ctx, 4));
label_3424a4:
    // 0x3424a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3424a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3424a8:
    // 0x3424a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3424a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3424ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3424acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3424b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3424b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3424b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3424b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3424b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3424B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3424BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3424B8u;
        // 0x3424bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3424B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3424C0u;
}
