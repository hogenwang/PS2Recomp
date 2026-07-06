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

// Function: sub_0015CA80
// Address: 0x15ca80 - 0x15cbe0
void sub_0015CA80_0x15ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CA80_0x15ca80");
#endif

    switch (ctx->pc) {
        case 0x15cba8u: goto label_15cba8;
        default: break;
    }

    ctx->pc = 0x15ca80u;

    // 0x15ca80: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x15ca80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15ca84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15ca88: 0x10830027  beq         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x15CA88u;
    {
        const bool branch_taken_0x15ca88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA88u;
        // 0x15ca8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ca88) {
            ctx->pc = 0x15CB28u;
            goto label_15cb28;
        }
    }
    ctx->pc = 0x15CA90u;
    // 0x15ca90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ca94: 0x50830024  beql        $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x15CA94u;
    {
        const bool branch_taken_0x15ca94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ca94) {
            ctx->pc = 0x15CA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CA94u;
            // 0x15ca98: 0x64070001  daddiu      $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CB28u;
            goto label_15cb28;
        }
    }
    ctx->pc = 0x15CA9Cu;
    // 0x15ca9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15ca9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15caa0: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15CAA0u;
    {
        const bool branch_taken_0x15caa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15caa0) {
            ctx->pc = 0x15CAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CAA0u;
            // 0x15caa4: 0xc4c10004  lwc1        $f1, 0x4($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CABCu;
            goto label_15cabc;
        }
    }
    ctx->pc = 0x15CAA8u;
    // 0x15caa8: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15CAA8u;
    {
        const bool branch_taken_0x15caa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15caa8) {
            ctx->pc = 0x15CAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CAA8u;
            // 0x15caac: 0x306700ff  andi        $a3, $v1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CAB8u;
            goto label_15cab8;
        }
    }
    ctx->pc = 0x15CAB0u;
    // 0x15cab0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x15CAB0u;
    {
        const bool branch_taken_0x15cab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cab0) {
            ctx->pc = 0x15CB94u;
            goto label_15cb94;
        }
    }
    ctx->pc = 0x15CAB8u;
label_15cab8:
    // 0x15cab8: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x15cab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15cabc:
    // 0x15cabc: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x15cabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cac0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15cac0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15cac4: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x15CAC4u;
    {
        const bool branch_taken_0x15cac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15cac4) {
            ctx->pc = 0x15CAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CAC4u;
            // 0x15cac8: 0xc4c10014  lwc1        $f1, 0x14($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CAFCu;
            goto label_15cafc;
        }
    }
    ctx->pc = 0x15CACCu;
    // 0x15cacc: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x15caccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15cad0: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x15cad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cad4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15cad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15cad8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x15CAD8u;
    {
        const bool branch_taken_0x15cad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15cad8) {
            ctx->pc = 0x15CADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CAD8u;
            // 0x15cadc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CAF0u;
            goto label_15caf0;
        }
    }
    ctx->pc = 0x15CAE0u;
    // 0x15cae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cae4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x15cae4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x15cae8: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x15CAE8u;
    {
        const bool branch_taken_0x15cae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAE8u;
        // 0x15caec: 0xa0a30001  sb          $v1, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cae8) {
            ctx->pc = 0x15CB94u;
            goto label_15cb94;
        }
    }
    ctx->pc = 0x15CAF0u;
label_15caf0:
    // 0x15caf0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x15caf0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x15caf4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x15CAF4u;
    {
        const bool branch_taken_0x15caf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CAF4u;
        // 0x15caf8: 0xa0a30002  sb          $v1, 0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15caf4) {
            ctx->pc = 0x15CB94u;
            goto label_15cb94;
        }
    }
    ctx->pc = 0x15CAFCu;
label_15cafc:
    // 0x15cafc: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x15cafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cb00: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15cb00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15cb04: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x15CB04u;
    {
        const bool branch_taken_0x15cb04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15cb04) {
            ctx->pc = 0x15CB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CB04u;
            // 0x15cb08: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CB1Cu;
            goto label_15cb1c;
        }
    }
    ctx->pc = 0x15CB0Cu;
    // 0x15cb0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15cb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cb10: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x15cb10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x15cb14: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x15CB14u;
    {
        const bool branch_taken_0x15cb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB14u;
        // 0x15cb18: 0xa0a30001  sb          $v1, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb14) {
            ctx->pc = 0x15CB94u;
            goto label_15cb94;
        }
    }
    ctx->pc = 0x15CB1Cu;
label_15cb1c:
    // 0x15cb1c: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x15cb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x15cb20: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x15CB20u;
    {
        const bool branch_taken_0x15cb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB20u;
        // 0x15cb24: 0xa0a30002  sb          $v1, 0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb20) {
            ctx->pc = 0x15CB94u;
            goto label_15cb94;
        }
    }
    ctx->pc = 0x15CB28u;
label_15cb28:
    // 0x15cb28: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x15cb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15cb2c: 0xc4c00030  lwc1        $f0, 0x30($a2)
    ctx->pc = 0x15cb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cb30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15cb30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15cb34: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
    ctx->pc = 0x15CB34u;
    {
        const bool branch_taken_0x15cb34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15cb34) {
            ctx->pc = 0x15CB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CB34u;
            // 0x15cb38: 0xc4c10010  lwc1        $f1, 0x10($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CB6Cu;
            goto label_15cb6c;
        }
    }
    ctx->pc = 0x15CB3Cu;
    // 0x15cb3c: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x15cb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15cb40: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x15cb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cb44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15cb44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15cb48: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x15CB48u;
    {
        const bool branch_taken_0x15cb48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15cb48) {
            ctx->pc = 0x15CB4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CB48u;
            // 0x15cb4c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CB60u;
            goto label_15cb60;
        }
    }
    ctx->pc = 0x15CB50u;
    // 0x15cb50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15cb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cb54: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x15cb54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x15cb58: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15CB58u;
    {
        const bool branch_taken_0x15cb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB58u;
        // 0x15cb5c: 0xa0a30001  sb          $v1, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb58) {
            ctx->pc = 0x15CB94u;
            goto label_15cb94;
        }
    }
    ctx->pc = 0x15CB60u;
label_15cb60:
    // 0x15cb60: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x15cb60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x15cb64: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15CB64u;
    {
        const bool branch_taken_0x15cb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB64u;
        // 0x15cb68: 0xa0a30002  sb          $v1, 0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb64) {
            ctx->pc = 0x15CB94u;
            goto label_15cb94;
        }
    }
    ctx->pc = 0x15CB6Cu;
label_15cb6c:
    // 0x15cb6c: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x15cb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cb70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15cb70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15cb74: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x15CB74u;
    {
        const bool branch_taken_0x15cb74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15cb74) {
            ctx->pc = 0x15CB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CB74u;
            // 0x15cb78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CB8Cu;
            goto label_15cb8c;
        }
    }
    ctx->pc = 0x15CB7Cu;
    // 0x15cb7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15cb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cb80: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x15cb80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x15cb84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15CB84u;
    {
        const bool branch_taken_0x15cb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CB84u;
        // 0x15cb88: 0xa0a30001  sb          $v1, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cb84) {
            ctx->pc = 0x15CB94u;
            goto label_15cb94;
        }
    }
    ctx->pc = 0x15CB8Cu;
label_15cb8c:
    // 0x15cb8c: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x15cb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x15cb90: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x15cb90u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_15cb94:
    // 0x15cb94: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x15CB94u;
    {
        const bool branch_taken_0x15cb94 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cb94) {
            ctx->pc = 0x15CBD8u;
            goto label_15cbd8;
        }
    }
    ctx->pc = 0x15CB9Cu;
    // 0x15cb9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15cb9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cba0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cba4: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x15cba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_15cba8:
    // 0x15cba8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x15cba8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15cbac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15CBACu;
    {
        const bool branch_taken_0x15cbac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cbac) {
            ctx->pc = 0x15CBC0u;
            goto label_15cbc0;
        }
    }
    ctx->pc = 0x15CBB4u;
    // 0x15cbb4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15CBB4u;
    {
        const bool branch_taken_0x15cbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CBB4u;
        // 0x15cbb8: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cbb4) {
            ctx->pc = 0x15CBC8u;
            goto label_15cbc8;
        }
    }
    ctx->pc = 0x15CBBCu;
    // 0x15cbbc: 0x0  nop
    ctx->pc = 0x15cbbcu;
    // NOP
label_15cbc0:
    // 0x15cbc0: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x15cbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x15cbc4: 0x0  nop
    ctx->pc = 0x15cbc4u;
    // NOP
label_15cbc8:
    // 0x15cbc8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x15cbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15cbcc: 0x28e30004  slti        $v1, $a3, 0x4
    ctx->pc = 0x15cbccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15cbd0: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x15CBD0u;
    {
        const bool branch_taken_0x15cbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cbd0) {
            ctx->pc = 0x15CBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CBD0u;
            // 0x15cbd4: 0xa73021  addu        $a2, $a1, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CBA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15cba8;
        }
    }
    ctx->pc = 0x15CBD8u;
label_15cbd8:
    // 0x15cbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x15CBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CBE0u;
}
