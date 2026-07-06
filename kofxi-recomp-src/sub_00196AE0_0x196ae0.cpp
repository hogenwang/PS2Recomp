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

// Function: sub_00196AE0
// Address: 0x196ae0 - 0x196f10
void sub_00196AE0_0x196ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196AE0_0x196ae0");
#endif

    switch (ctx->pc) {
        case 0x196c4cu: goto label_196c4c;
        default: break;
    }

    ctx->pc = 0x196ae0u;

    // 0x196ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x196ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x196ae4: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x196ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x196ae8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x196ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x196aec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196aecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196af0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x196af4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x196af8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x196af8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196afc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196AFCu;
    {
        const bool branch_taken_0x196afc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x196B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AFCu;
        // 0x196b00: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196afc) {
            ctx->pc = 0x196B0Cu;
            goto label_196b0c;
        }
    }
    ctx->pc = 0x196B04u;
    // 0x196b04: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x196B04u;
    {
        const bool branch_taken_0x196b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B04u;
        // 0x196b08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b04) {
            ctx->pc = 0x196EFCu;
            goto label_196efc;
        }
    }
    ctx->pc = 0x196B0Cu;
label_196b0c:
    // 0x196b0c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196b10: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x196b10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x196b14: 0x8c45d0c0  lw          $a1, -0x2F40($v0)
    ctx->pc = 0x196b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955200)));
    // 0x196b18: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x196b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x196b1c: 0x84a80000  lh          $t0, 0x0($a1)
    ctx->pc = 0x196b1cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x196b20: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196b24: 0x9042d0e8  lbu         $v0, -0x2F18($v0)
    ctx->pc = 0x196b24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955240)));
    // 0x196b28: 0xa488d0b8  sh          $t0, -0x2F48($a0)
    ctx->pc = 0x196b28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294955192), (uint16_t)GPR_U32(ctx, 8));
    // 0x196b2c: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x196b2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x196b30: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x196b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x196b34: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196B34u;
    {
        const bool branch_taken_0x196b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B34u;
        // 0x196b38: 0xa464d0a8  sh          $a0, -0x2F58($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294955176), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b34) {
            ctx->pc = 0x196B50u;
            goto label_196b50;
        }
    }
    ctx->pc = 0x196B3Cu;
    // 0x196b3c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x196b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x196b40: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196b44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x196b44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x196b48: 0x32023  negu        $a0, $v1
    ctx->pc = 0x196b48u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x196b4c: 0xa444d0a8  sh          $a0, -0x2F58($v0)
    ctx->pc = 0x196b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294955176), (uint16_t)GPR_U32(ctx, 4));
label_196b50:
    // 0x196b50: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x196b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x196b54: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x196b54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x196b58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196b58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196b5c: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x196b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x196b60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x196b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196b64: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x196b64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x196b68: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x196b68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x196b6c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196b70: 0x8c49d140  lw          $t1, -0x2EC0($v0)
    ctx->pc = 0x196b70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955328)));
    // 0x196b74: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x196b74u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x196b78: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x196b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x196b7c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x196b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x196b80: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x196b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x196b84: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196b88: 0x9042d168  lbu         $v0, -0x2E98($v0)
    ctx->pc = 0x196b88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955368)));
    // 0x196b8c: 0xc4e0d0d8  lwc1        $f0, -0x2F28($a3)
    ctx->pc = 0x196b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294955224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196b90: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x196b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x196b94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196b98: 0xe4c0d088  swc1        $f0, -0x2F78($a2)
    ctx->pc = 0x196b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294955144), bits); }
    // 0x196b9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196b9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x196ba0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x196ba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x196ba4: 0x0  nop
    ctx->pc = 0x196ba4u;
    // NOP
    // 0x196ba8: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x196ba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x196bac: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x196bacu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x196bb0: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x196bb0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x196bb4: 0xa4a8d0b8  sh          $t0, -0x2F48($a1)
    ctx->pc = 0x196bb4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294955192), (uint16_t)GPR_U32(ctx, 8));
    // 0x196bb8: 0x85250000  lh          $a1, 0x0($t1)
    ctx->pc = 0x196bb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x196bbc: 0xa485d138  sh          $a1, -0x2EC8($a0)
    ctx->pc = 0x196bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294955320), (uint16_t)GPR_U32(ctx, 5));
    // 0x196bc0: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x196bc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x196bc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196BC4u;
    {
        const bool branch_taken_0x196bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BC4u;
        // 0x196bc8: 0xa464d128  sh          $a0, -0x2ED8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294955304), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196bc4) {
            ctx->pc = 0x196BE0u;
            goto label_196be0;
        }
    }
    ctx->pc = 0x196BCCu;
    // 0x196bcc: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x196bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x196bd0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196bd4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x196bd4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x196bd8: 0x32023  negu        $a0, $v1
    ctx->pc = 0x196bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x196bdc: 0xa444d128  sh          $a0, -0x2ED8($v0)
    ctx->pc = 0x196bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294955304), (uint16_t)GPR_U32(ctx, 4));
label_196be0:
    // 0x196be0: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x196be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x196be4: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x196be4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x196be8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196be8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196bec: 0x82c3c  dsll32      $a1, $t0, 16
    ctx->pc = 0x196becu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) << (32 + 16));
    // 0x196bf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x196bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196bf4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x196bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x196bf8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x196bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x196bfc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x196bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x196c00: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x196c00u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x196c04: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196c08: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x196c08u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x196c0c: 0xc480d158  lwc1        $f0, -0x2EA8($a0)
    ctx->pc = 0x196c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294955352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196c10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196c14: 0xe460d108  swc1        $f0, -0x2EF8($v1)
    ctx->pc = 0x196c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955272), bits); }
    // 0x196c18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196c18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x196c1c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x196c1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x196c20: 0x0  nop
    ctx->pc = 0x196c20u;
    // NOP
    // 0x196c24: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x196c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x196c28: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x196c28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x196c2c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x196c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x196c30: 0xa443d138  sh          $v1, -0x2EC8($v0)
    ctx->pc = 0x196c30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294955320), (uint16_t)GPR_U32(ctx, 3));
    // 0x196c34: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x196c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x196c38: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196c38u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196c3c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x196c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x196c40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x196c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196c44: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x196C44u;
    SET_GPR_U32(ctx, 31, 0x196C4Cu);
    ctx->pc = 0x196C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196C44u;
    // 0x196c48: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x196C44u, 0x196C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C4Cu;
label_196c4c:
    // 0x196c4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196c4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x196c50: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x196c50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x196c54: 0x0  nop
    ctx->pc = 0x196c54u;
    // NOP
    // 0x196c58: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x196c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x196c5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196c5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196c60: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196C60u;
    {
        const bool branch_taken_0x196c60 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x196c60) {
            ctx->pc = 0x196C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196C60u;
            // 0x196c64: 0x92030007  lbu         $v1, 0x7($s0) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196C78u;
            goto label_196c78;
        }
    }
    ctx->pc = 0x196C68u;
    // 0x196c68: 0x21023  negu        $v0, $v0
    ctx->pc = 0x196c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x196c6c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x196c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x196c70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196c70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196c74: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x196c74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_196c78:
    // 0x196c78: 0x23c3c  dsll32      $a3, $v0, 16
    ctx->pc = 0x196c78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 16));
    // 0x196c7c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196c80: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x196c80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x196c84: 0xc440d0d8  lwc1        $f0, -0x2F28($v0)
    ctx->pc = 0x196c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196c88: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x196c88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x196c8c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x196c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196c90: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x196c90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x196c94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x196c94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x196c98: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x196c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x196c9c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196ca0: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x196ca0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x196ca4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196ca8: 0xe4c0d088  swc1        $f0, -0x2F78($a2)
    ctx->pc = 0x196ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294955144), bits); }
    // 0x196cac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196cacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x196cb0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x196cb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x196cb4: 0xc480d158  lwc1        $f0, -0x2EA8($a0)
    ctx->pc = 0x196cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294955352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196cb8: 0xa4a6d098  sh          $a2, -0x2F68($a1)
    ctx->pc = 0x196cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294955160), (uint16_t)GPR_U32(ctx, 6));
    // 0x196cbc: 0x62c3c  dsll32      $a1, $a2, 16
    ctx->pc = 0x196cbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 16));
    // 0x196cc0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x196cc0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x196cc4: 0x92240007  lbu         $a0, 0x7($s1)
    ctx->pc = 0x196cc4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x196cc8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x196cc8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196ccc: 0x0  nop
    ctx->pc = 0x196cccu;
    // NOP
    // 0x196cd0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x196cd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x196cd4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x196cd8: 0xe460d108  swc1        $f0, -0x2EF8($v1)
    ctx->pc = 0x196cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955272), bits); }
    // 0x196cdc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196cdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x196ce0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x196ce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x196ce4: 0x0  nop
    ctx->pc = 0x196ce4u;
    // NOP
    // 0x196ce8: 0xa443d118  sh          $v1, -0x2EE8($v0)
    ctx->pc = 0x196ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294955288), (uint16_t)GPR_U32(ctx, 3));
    // 0x196cec: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x196cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x196cf0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196cf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196cf4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x196cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x196cf8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x196cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x196cfc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196cfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196d00: 0xe2082a  slt         $at, $a3, $v0
    ctx->pc = 0x196d00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x196d04: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x196D04u;
    {
        const bool branch_taken_0x196d04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x196d04) {
            ctx->pc = 0x196D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196D04u;
            // 0x196d08: 0x471823  subu        $v1, $v0, $a3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196D14u;
            goto label_196d14;
        }
    }
    ctx->pc = 0x196D0Cu;
    // 0x196d0c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x196D0Cu;
    {
        const bool branch_taken_0x196d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D0Cu;
        // 0x196d10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d0c) {
            ctx->pc = 0x196EFCu;
            goto label_196efc;
        }
    }
    ctx->pc = 0x196D14u;
label_196d14:
    // 0x196d14: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x196d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x196d18: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196d1c: 0xa443d190  sh          $v1, -0x2E70($v0)
    ctx->pc = 0x196d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294955408), (uint16_t)GPR_U32(ctx, 3));
    // 0x196d20: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196d24: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x196d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x196d28: 0x8c45d0c0  lw          $a1, -0x2F40($v0)
    ctx->pc = 0x196d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955200)));
    // 0x196d2c: 0x84a70002  lh          $a3, 0x2($a1)
    ctx->pc = 0x196d2cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x196d30: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196d34: 0x9042d0e8  lbu         $v0, -0x2F18($v0)
    ctx->pc = 0x196d34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955240)));
    // 0x196d38: 0xa487d0b0  sh          $a3, -0x2F50($a0)
    ctx->pc = 0x196d38u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294955184), (uint16_t)GPR_U32(ctx, 7));
    // 0x196d3c: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x196d3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x196d40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x196d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x196d44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196D44u;
    {
        const bool branch_taken_0x196d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D44u;
        // 0x196d48: 0xa464d0a0  sh          $a0, -0x2F60($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294955168), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d44) {
            ctx->pc = 0x196D60u;
            goto label_196d60;
        }
    }
    ctx->pc = 0x196D4Cu;
    // 0x196d4c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x196d4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x196d50: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196d54: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x196d54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x196d58: 0x32023  negu        $a0, $v1
    ctx->pc = 0x196d58u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x196d5c: 0xa444d0a0  sh          $a0, -0x2F60($v0)
    ctx->pc = 0x196d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294955168), (uint16_t)GPR_U32(ctx, 4));
label_196d60:
    // 0x196d60: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x196d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x196d64: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196d68: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x196d68u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x196d6c: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x196d6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x196d70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x196d70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196d74: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x196d74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x196d78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196d78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196d7c: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x196d7cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x196d80: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x196d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x196d84: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x196d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x196d88: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x196d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x196d8c: 0xc442d0d0  lwc1        $f2, -0x2F30($v0)
    ctx->pc = 0x196d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196d90: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x196d90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x196d94: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196d98: 0x8c48d140  lw          $t0, -0x2EC0($v0)
    ctx->pc = 0x196d98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955328)));
    // 0x196d9c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196da0: 0xe4c0d080  swc1        $f0, -0x2F80($a2)
    ctx->pc = 0x196da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294955136), bits); }
    // 0x196da4: 0x9042d168  lbu         $v0, -0x2E98($v0)
    ctx->pc = 0x196da4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294955368)));
    // 0x196da8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196da8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x196dac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x196dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x196db0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x196db0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x196db4: 0x0  nop
    ctx->pc = 0x196db4u;
    // NOP
    // 0x196db8: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x196db8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x196dbc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x196dbcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x196dc0: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x196dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x196dc4: 0xa4a7d0b0  sh          $a3, -0x2F50($a1)
    ctx->pc = 0x196dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294955184), (uint16_t)GPR_U32(ctx, 7));
    // 0x196dc8: 0x85050002  lh          $a1, 0x2($t0)
    ctx->pc = 0x196dc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x196dcc: 0xa485d130  sh          $a1, -0x2ED0($a0)
    ctx->pc = 0x196dccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294955312), (uint16_t)GPR_U32(ctx, 5));
    // 0x196dd0: 0x86240002  lh          $a0, 0x2($s1)
    ctx->pc = 0x196dd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x196dd4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196DD4u;
    {
        const bool branch_taken_0x196dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196DD4u;
        // 0x196dd8: 0xa464d120  sh          $a0, -0x2EE0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294955296), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196dd4) {
            ctx->pc = 0x196DF0u;
            goto label_196df0;
        }
    }
    ctx->pc = 0x196DDCu;
    // 0x196ddc: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x196ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x196de0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196de4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x196de4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x196de8: 0x32023  negu        $a0, $v1
    ctx->pc = 0x196de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x196dec: 0xa444d120  sh          $a0, -0x2EE0($v0)
    ctx->pc = 0x196decu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294955296), (uint16_t)GPR_U32(ctx, 4));
label_196df0:
    // 0x196df0: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x196df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x196df4: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x196df4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x196df8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196df8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196dfc: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x196dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x196e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x196e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196e04: 0x72c3c  dsll32      $a1, $a3, 16
    ctx->pc = 0x196e04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 16));
    // 0x196e08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196e08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196e0c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x196e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x196e10: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x196e10u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x196e14: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196e18: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x196e18u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x196e1c: 0xc481d150  lwc1        $f1, -0x2EB0($a0)
    ctx->pc = 0x196e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294955344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196e20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x196e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x196e24: 0xe460d100  swc1        $f0, -0x2F00($v1)
    ctx->pc = 0x196e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955264), bits); }
    // 0x196e28: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196e28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x196e2c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x196e2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x196e30: 0x0  nop
    ctx->pc = 0x196e30u;
    // NOP
    // 0x196e34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x196e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x196e38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x196e38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x196e3c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x196e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x196e40: 0xa443d130  sh          $v1, -0x2ED0($v0)
    ctx->pc = 0x196e40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294955312), (uint16_t)GPR_U32(ctx, 3));
    // 0x196e44: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x196e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x196e48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196e48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196e4c: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x196e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x196e50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x196e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x196e54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196e54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196e58: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196E58u;
    {
        const bool branch_taken_0x196e58 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x196e58) {
            ctx->pc = 0x196E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196E58u;
            // 0x196e5c: 0x92070008  lbu         $a3, 0x8($s0) (Delay Slot)
            SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196E70u;
            goto label_196e70;
        }
    }
    ctx->pc = 0x196E60u;
    // 0x196e60: 0x21023  negu        $v0, $v0
    ctx->pc = 0x196e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x196e64: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x196e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x196e68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196e68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196e6c: 0x92070008  lbu         $a3, 0x8($s0)
    ctx->pc = 0x196e6cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_196e70:
    // 0x196e70: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x196e70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x196e74: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x196e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x196e78: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x196e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x196e7c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x196e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x196e80: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x196e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x196e84: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x196e84u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196e88: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x196e88u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x196e8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196e90: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x196e90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x196e94: 0xe4a0d080  swc1        $f0, -0x2F80($a1)
    ctx->pc = 0x196e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294955136), bits); }
    // 0x196e98: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196e98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x196e9c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x196e9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x196ea0: 0x0  nop
    ctx->pc = 0x196ea0u;
    // NOP
    // 0x196ea4: 0xa485d090  sh          $a1, -0x2F70($a0)
    ctx->pc = 0x196ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294955152), (uint16_t)GPR_U32(ctx, 5));
    // 0x196ea8: 0x92240008  lbu         $a0, 0x8($s1)
    ctx->pc = 0x196ea8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x196eac: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x196eacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x196eb0: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x196eb0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x196eb4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x196eb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196eb8: 0x0  nop
    ctx->pc = 0x196eb8u;
    // NOP
    // 0x196ebc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196ebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x196ec0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x196ec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x196ec4: 0xe460d100  swc1        $f0, -0x2F00($v1)
    ctx->pc = 0x196ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294955264), bits); }
    // 0x196ec8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196ec8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x196ecc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x196eccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x196ed0: 0x0  nop
    ctx->pc = 0x196ed0u;
    // NOP
    // 0x196ed4: 0xa443d110  sh          $v1, -0x2EF0($v0)
    ctx->pc = 0x196ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294955280), (uint16_t)GPR_U32(ctx, 3));
    // 0x196ed8: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x196ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x196edc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196edcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196ee0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x196ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x196ee4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x196ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x196ee8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196ee8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196eec: 0xc2082a  slt         $at, $a2, $v0
    ctx->pc = 0x196eecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x196ef0: 0x54200002  bnel        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x196EF0u;
    {
        const bool branch_taken_0x196ef0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x196ef0) {
            ctx->pc = 0x196EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196EF0u;
            // 0x196ef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196EFCu;
            goto label_196efc;
        }
    }
    ctx->pc = 0x196EF8u;
    // 0x196ef8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x196ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_196efc:
    // 0x196efc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x196efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196f00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196f04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196f08: 0x3e00008  jr          $ra
    ctx->pc = 0x196F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F08u;
        // 0x196f0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196F10u;
}
