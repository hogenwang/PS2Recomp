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

// Function: sub_0031DF90
// Address: 0x31df90 - 0x31e4e0
void sub_0031DF90_0x31df90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DF90_0x31df90");
#endif

    switch (ctx->pc) {
        case 0x31e124u: goto label_31e124;
        case 0x31e3f8u: goto label_31e3f8;
        case 0x31e40cu: goto label_31e40c;
        case 0x31e410u: goto label_31e410;
        case 0x31e48cu: goto label_31e48c;
        case 0x31e4a0u: goto label_31e4a0;
        case 0x31e4a4u: goto label_31e4a4;
        default: break;
    }

    ctx->pc = 0x31df90u;

    // 0x31df90: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31df90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31df94: 0x8c6329e0  lw          $v1, 0x29E0($v1)
    ctx->pc = 0x31df94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x31df98: 0x2863018f  slti        $v1, $v1, 0x18F
    ctx->pc = 0x31df98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)399) ? 1 : 0);
    // 0x31df9c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31DF9Cu;
    {
        const bool branch_taken_0x31df9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31df9c) {
            ctx->pc = 0x31DFB0u;
            goto label_31dfb0;
        }
    }
    ctx->pc = 0x31DFA4u;
    // 0x31dfa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31dfa8: 0xb8030001  swr         $v1, 0x1($zero)
    ctx->pc = 0x31dfa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x31dfac: 0xa8030004  swl         $v1, 0x4($zero)
    ctx->pc = 0x31dfacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_31dfb0:
    // 0x31dfb0: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31dfb4: 0x3c0601da  lui         $a2, 0x1DA
    ctx->pc = 0x31dfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)474 << 16));
    // 0x31dfb8: 0x8c6829e0  lw          $t0, 0x29E0($v1)
    ctx->pc = 0x31dfb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10720)));
    // 0x31dfbc: 0x24c64df0  addiu       $a2, $a2, 0x4DF0
    ctx->pc = 0x31dfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19952));
    // 0x31dfc0: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x31dfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x31dfc4: 0x838c0  sll         $a3, $t0, 3
    ctx->pc = 0x31dfc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x31dfc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31dfc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31dfcc: 0x25050001  addiu       $a1, $t0, 0x1
    ctx->pc = 0x31dfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x31dfd0: 0x460c0042  mul.s       $f1, $f0, $f12
    ctx->pc = 0x31dfd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x31dfd4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x31dfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x31dfd8: 0xe84023  subu        $t0, $a3, $t0
    ctx->pc = 0x31dfd8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x31dfdc: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x31dfdcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x31dfe0: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x31dfe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x31dfe4: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x31dfe4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x31dfe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31dfe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31dfec: 0x0  nop
    ctx->pc = 0x31dfecu;
    // NOP
    // 0x31dff0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31dff0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31dff4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31DFF4u;
    {
        const bool branch_taken_0x31dff4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DFF4u;
        // 0x31dff8: 0xc74821  addu        $t1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dff4) {
            ctx->pc = 0x31E00Cu;
            goto label_31e00c;
        }
    }
    ctx->pc = 0x31DFFCu;
    // 0x31dffc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31dffcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31e000: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x31e000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x31e004: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31E004u;
    {
        const bool branch_taken_0x31e004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E004u;
        // 0x31e008: 0x3c088000  lui         $t0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e004) {
            ctx->pc = 0x31E028u;
            goto label_31e028;
        }
    }
    ctx->pc = 0x31E00Cu;
label_31e00c:
    // 0x31e00c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31e00cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31e010: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x31e010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x31e014: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e014u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31e018: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x31e018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x31e01c: 0x0  nop
    ctx->pc = 0x31e01cu;
    // NOP
    // 0x31e020: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x31e020u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x31e024: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x31e024u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
label_31e028:
    // 0x31e028: 0x3c060032  lui         $a2, 0x32
    ctx->pc = 0x31e028u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50 << 16));
    // 0x31e02c: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x31e02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x31e030: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x31e030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x31e034: 0x24c6e0f0  addiu       $a2, $a2, -0x1F10
    ctx->pc = 0x31e034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959344));
    // 0x31e038: 0xad230110  sw          $v1, 0x110($t1)
    ctx->pc = 0x31e038u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 272), GPR_U32(ctx, 3));
    // 0x31e03c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x31e03cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x31e040: 0xad260114  sw          $a2, 0x114($t1)
    ctx->pc = 0x31e040u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 276), GPR_U32(ctx, 6));
    // 0x31e044: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x31e044u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31e048: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x31e048u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x31e04c: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x31e04cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31e050: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x31e050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x31e054: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31e054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31e058: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x31e058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x31e05c: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x31e05cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x31e060: 0x3c0601da  lui         $a2, 0x1DA
    ctx->pc = 0x31e060u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)474 << 16));
    // 0x31e064: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x31e064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x31e068: 0x24c64df0  addiu       $a2, $a2, 0x4DF0
    ctx->pc = 0x31e068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19952));
    // 0x31e06c: 0xac6529e0  sw          $a1, 0x29E0($v1)
    ctx->pc = 0x31e06cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10720), GPR_U32(ctx, 5));
    // 0x31e070: 0xe52c0004  swc1        $f12, 0x4($t1)
    ctx->pc = 0x31e070u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x31e074: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x31e074u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
    // 0x31e078: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x31e078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x31e07c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31e07cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e080: 0x0  nop
    ctx->pc = 0x31e080u;
    // NOP
    // 0x31e084: 0x460d0042  mul.s       $f1, $f0, $f13
    ctx->pc = 0x31e084u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x31e088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31e088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31e08c: 0x0  nop
    ctx->pc = 0x31e08cu;
    // NOP
    // 0x31e090: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31e090u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e094: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x31E094u;
    {
        const bool branch_taken_0x31e094 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E094u;
        // 0x31e098: 0xc73821  addu        $a3, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e094) {
            ctx->pc = 0x31E0ACu;
            goto label_31e0ac;
        }
    }
    ctx->pc = 0x31E09Cu;
    // 0x31e09c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e09cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31e0a0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x31e0a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x31e0a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31E0A4u;
    {
        const bool branch_taken_0x31e0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0A4u;
        // 0x31e0a8: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e0a4) {
            ctx->pc = 0x31E0C4u;
            goto label_31e0c4;
        }
    }
    ctx->pc = 0x31E0ACu;
label_31e0ac:
    // 0x31e0ac: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x31e0acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31e0b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e0b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31e0b4: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x31e0b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x31e0b8: 0x0  nop
    ctx->pc = 0x31e0b8u;
    // NOP
    // 0x31e0bc: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x31e0bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x31e0c0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x31e0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_31e0c4:
    // 0x31e0c4: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x31e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x31e0c8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x31e0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x31e0cc: 0x2463e0f0  addiu       $v1, $v1, -0x1F10
    ctx->pc = 0x31e0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959344));
    // 0x31e0d0: 0xace50110  sw          $a1, 0x110($a3)
    ctx->pc = 0x31e0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 272), GPR_U32(ctx, 5));
    // 0x31e0d4: 0xace30114  sw          $v1, 0x114($a3)
    ctx->pc = 0x31e0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 276), GPR_U32(ctx, 3));
    // 0x31e0d8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x31e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x31e0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x31E0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0DCu;
        // 0x31e0e0: 0xe4ed0004  swc1        $f13, 0x4($a3) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E0E4u;
    // 0x31e0e4: 0x0  nop
    ctx->pc = 0x31e0e4u;
    // NOP
    // 0x31e0e8: 0x0  nop
    ctx->pc = 0x31e0e8u;
    // NOP
    // 0x31e0ec: 0x0  nop
    ctx->pc = 0x31e0ecu;
    // NOP
    // 0x31e0f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31e0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31e0f4: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31e0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31e0f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31e0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31e0fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31e0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e100: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31e100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31e104: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31e104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31e108: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31e108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e10c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x31e10cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31e110: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x31e110u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31e114: 0xc4940004  lwc1        $f20, 0x4($a0)
    ctx->pc = 0x31e114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31e118: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x31e118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x31e11c: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x31e11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x31e120: 0xac640370  sw          $a0, 0x370($v1)
    ctx->pc = 0x31e120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 4));
label_31e124:
    // 0x31e124: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x31e124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e128: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x31e128u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31e12c: 0x450000c0  bc1f        . + 4 + (0xC0 << 2)
    ctx->pc = 0x31E12Cu;
    {
        const bool branch_taken_0x31e12c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e12c) {
            ctx->pc = 0x31E430u;
            goto label_31e430;
        }
    }
    ctx->pc = 0x31E134u;
    // 0x31e134: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x31e134u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x31e138: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31e138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31e13c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x31E13Cu;
    {
        const bool branch_taken_0x31e13c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31e13c) {
            ctx->pc = 0x31E168u;
            goto label_31e168;
        }
    }
    ctx->pc = 0x31E144u;
    // 0x31e144: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31e144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e148: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x31E148u;
    {
        const bool branch_taken_0x31e148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x31e148) {
            ctx->pc = 0x31E168u;
            goto label_31e168;
        }
    }
    ctx->pc = 0x31E150u;
    // 0x31e150: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E150u;
    {
        const bool branch_taken_0x31e150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e150) {
            ctx->pc = 0x31E160u;
            goto label_31e160;
        }
    }
    ctx->pc = 0x31E158u;
    // 0x31e158: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x31E158u;
    {
        const bool branch_taken_0x31e158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e158) {
            ctx->pc = 0x31E170u;
            goto label_31e170;
        }
    }
    ctx->pc = 0x31E160u;
label_31e160:
    // 0x31e160: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31E160u;
    {
        const bool branch_taken_0x31e160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e160) {
            ctx->pc = 0x31E170u;
            goto label_31e170;
        }
    }
    ctx->pc = 0x31E168u;
label_31e168:
    // 0x31e168: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x31E168u;
    {
        const bool branch_taken_0x31e168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E168u;
        // 0x31e16c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e168) {
            ctx->pc = 0x31E170u;
            goto label_31e170;
        }
    }
    ctx->pc = 0x31E170u;
label_31e170:
    // 0x31e170: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x31e170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31e174: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x31e174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31e178: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x31e178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31e17c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e17cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x31e180: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31e180u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31e184: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x31e184u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x31e188: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x31e188u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31e18c: 0x14670004  bne         $v1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E18Cu;
    {
        const bool branch_taken_0x31e18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x31e18c) {
            ctx->pc = 0x31E1A0u;
            goto label_31e1a0;
        }
    }
    ctx->pc = 0x31E194u;
    // 0x31e194: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x31e194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x31e198: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x31e198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x31e19c: 0x0  nop
    ctx->pc = 0x31e19cu;
    // NOP
label_31e1a0:
    // 0x31e1a0: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31e1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31e1a4: 0x8cea0370  lw          $t2, 0x370($a3)
    ctx->pc = 0x31e1a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x31e1a8: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x31e1a8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x31e1ac: 0x240f00ff  addiu       $t7, $zero, 0xFF
    ctx->pc = 0x31e1acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31e1b0: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x31e1b0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x31e1b4: 0x240d0080  addiu       $t5, $zero, 0x80
    ctx->pc = 0x31e1b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31e1b8: 0x3c074003  lui         $a3, 0x4003
    ctx->pc = 0x31e1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16387 << 16));
    // 0x31e1bc: 0x34e84000  ori         $t0, $a3, 0x4000
    ctx->pc = 0x31e1bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x31e1c0: 0x8483c  dsll32      $t1, $t0, 0
    ctx->pc = 0x31e1c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) << (32 + 0));
    // 0x31e1c4: 0x34078001  ori         $a3, $zero, 0x8001
    ctx->pc = 0x31e1c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x31e1c8: 0xe94825  or          $t1, $a3, $t1
    ctx->pc = 0x31e1c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x31e1cc: 0x24085151  addiu       $t0, $zero, 0x5151
    ctx->pc = 0x31e1ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20817));
    // 0x31e1d0: 0xfd490000  sd          $t1, 0x0($t2)
    ctx->pc = 0x31e1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 9));
    // 0x31e1d4: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31e1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31e1d8: 0xfd480008  sd          $t0, 0x8($t2)
    ctx->pc = 0x31e1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 8));
    // 0x31e1dc: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31e1dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31e1e0: 0x8cf80370  lw          $t8, 0x370($a3)
    ctx->pc = 0x31e1e0u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x31e1e4: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x31e1e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x31e1e8: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31e1e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31e1ec: 0x270e0010  addiu       $t6, $t8, 0x10
    ctx->pc = 0x31e1ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x31e1f0: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31e1f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31e1f4: 0xad8e0370  sw          $t6, 0x370($t4)
    ctx->pc = 0x31e1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 880), GPR_U32(ctx, 14));
    // 0x31e1f8: 0xaf0f0010  sw          $t7, 0x10($t8)
    ctx->pc = 0x31e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 15));
    // 0x31e1fc: 0x56100  sll         $t4, $a1, 4
    ctx->pc = 0x31e1fcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x31e200: 0x8cee0370  lw          $t6, 0x370($a3)
    ctx->pc = 0x31e200u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x31e204: 0x258c6c00  addiu       $t4, $t4, 0x6C00
    ctx->pc = 0x31e204u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 27648));
    // 0x31e208: 0xadcf0004  sw          $t7, 0x4($t6)
    ctx->pc = 0x31e208u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 15));
    // 0x31e20c: 0x3c07009d  lui         $a3, 0x9D
    ctx->pc = 0x31e20cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)157 << 16));
    // 0x31e210: 0x8d6b0370  lw          $t3, 0x370($t3)
    ctx->pc = 0x31e210u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x31e214: 0xad6f0008  sw          $t7, 0x8($t3)
    ctx->pc = 0x31e214u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 15));
    // 0x31e218: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x31e218u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x31e21c: 0xad4d000c  sw          $t5, 0xC($t2)
    ctx->pc = 0x31e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 12), GPR_U32(ctx, 13));
    // 0x31e220: 0x8d2a0370  lw          $t2, 0x370($t1)
    ctx->pc = 0x31e220u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x31e224: 0x25490010  addiu       $t1, $t2, 0x10
    ctx->pc = 0x31e224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x31e228: 0xad090370  sw          $t1, 0x370($t0)
    ctx->pc = 0x31e228u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 880), GPR_U32(ctx, 9));
    // 0x31e22c: 0xad4c0010  sw          $t4, 0x10($t2)
    ctx->pc = 0x31e22cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 12));
    // 0x31e230: 0x90e7b280  lbu         $a3, -0x4D80($a3)
    ctx->pc = 0x31e230u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294947456)));
    // 0x31e234: 0x50e00013  beql        $a3, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x31E234u;
    {
        const bool branch_taken_0x31e234 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e234) {
            ctx->pc = 0x31E238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E234u;
            // 0x31e238: 0x43900  sll         $a3, $a0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E284u;
            goto label_31e284;
        }
    }
    ctx->pc = 0x31E23Cu;
    // 0x31e23c: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x31e23cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x31e240: 0x3c078888  lui         $a3, 0x8888
    ctx->pc = 0x31e240u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34952 << 16));
    // 0x31e244: 0x25087100  addiu       $t0, $t0, 0x7100
    ctx->pc = 0x31e244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28928));
    // 0x31e248: 0x34e78889  ori         $a3, $a3, 0x8889
    ctx->pc = 0x31e248u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)34953);
    // 0x31e24c: 0x25098000  addiu       $t1, $t0, -0x8000
    ctx->pc = 0x31e24cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294934528));
    // 0x31e250: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x31e250u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x31e254: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x31e254u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x31e258: 0x84980  sll         $t1, $t0, 6
    ctx->pc = 0x31e258u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x31e25c: 0xe90018  mult        $zero, $a3, $t1
    ctx->pc = 0x31e25cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31e260: 0x947c2  srl         $t0, $t1, 31
    ctx->pc = 0x31e260u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x31e264: 0x0  nop
    ctx->pc = 0x31e264u;
    // NOP
    // 0x31e268: 0x3810  mfhi        $a3
    ctx->pc = 0x31e268u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x31e26c: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x31e26cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x31e270: 0x73a03  sra         $a3, $a3, 8
    ctx->pc = 0x31e270u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 8));
    // 0x31e274: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x31e274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x31e278: 0x24e77fff  addiu       $a3, $a3, 0x7FFF
    ctx->pc = 0x31e278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32767));
    // 0x31e27c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31E27Cu;
    {
        const bool branch_taken_0x31e27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E27Cu;
        // 0x31e280: 0x24ea0001  addiu       $t2, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e27c) {
            ctx->pc = 0x31E288u;
            goto label_31e288;
        }
    }
    ctx->pc = 0x31E284u;
label_31e284:
    // 0x31e284: 0x24ea7100  addiu       $t2, $a3, 0x7100
    ctx->pc = 0x31e284u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 28928));
label_31e288:
    // 0x31e288: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x31e288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x31e28c: 0x2408a833  addiu       $t0, $zero, -0x57CD
    ctx->pc = 0x31e28cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x31e290: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31e290u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31e294: 0x3c0d01dc  lui         $t5, 0x1DC
    ctx->pc = 0x31e294u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)476 << 16));
    // 0x31e298: 0x8ca90370  lw          $t1, 0x370($a1)
    ctx->pc = 0x31e298u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x31e29c: 0x3c0c01dc  lui         $t4, 0x1DC
    ctx->pc = 0x31e29cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)476 << 16));
    // 0x31e2a0: 0x241800ff  addiu       $t8, $zero, 0xFF
    ctx->pc = 0x31e2a0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31e2a4: 0x3c0b01dc  lui         $t3, 0x1DC
    ctx->pc = 0x31e2a4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)476 << 16));
    // 0x31e2a8: 0x240f0080  addiu       $t7, $zero, 0x80
    ctx->pc = 0x31e2a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x31e2ac: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x31e2acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x31e2b0: 0xad2a0004  sw          $t2, 0x4($t1)
    ctx->pc = 0x31e2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 10));
    // 0x31e2b4: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31e2b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31e2b8: 0x24ae6c00  addiu       $t6, $a1, 0x6C00
    ctx->pc = 0x31e2b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 27648));
    // 0x31e2bc: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x31e2bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x31e2c0: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31e2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31e2c4: 0x3c0a01dc  lui         $t2, 0x1DC
    ctx->pc = 0x31e2c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)476 << 16));
    // 0x31e2c8: 0x3c0901dc  lui         $t1, 0x1DC
    ctx->pc = 0x31e2c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)476 << 16));
    // 0x31e2cc: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x31e2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x31e2d0: 0x8cb90370  lw          $t9, 0x370($a1)
    ctx->pc = 0x31e2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x31e2d4: 0x3c0801dc  lui         $t0, 0x1DC
    ctx->pc = 0x31e2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)476 << 16));
    // 0x31e2d8: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31e2d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31e2dc: 0xaf20000c  sw          $zero, 0xC($t9)
    ctx->pc = 0x31e2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 12), GPR_U32(ctx, 0));
    // 0x31e2e0: 0x3c05009d  lui         $a1, 0x9D
    ctx->pc = 0x31e2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)157 << 16));
    // 0x31e2e4: 0x8db90370  lw          $t9, 0x370($t5)
    ctx->pc = 0x31e2e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 880)));
    // 0x31e2e8: 0x272d0010  addiu       $t5, $t9, 0x10
    ctx->pc = 0x31e2e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 25), 16));
    // 0x31e2ec: 0xad8d0370  sw          $t5, 0x370($t4)
    ctx->pc = 0x31e2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 880), GPR_U32(ctx, 13));
    // 0x31e2f0: 0xaf380010  sw          $t8, 0x10($t9)
    ctx->pc = 0x31e2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 16), GPR_U32(ctx, 24));
    // 0x31e2f4: 0x8d6b0370  lw          $t3, 0x370($t3)
    ctx->pc = 0x31e2f4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 880)));
    // 0x31e2f8: 0xad780004  sw          $t8, 0x4($t3)
    ctx->pc = 0x31e2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 24));
    // 0x31e2fc: 0x8d4a0370  lw          $t2, 0x370($t2)
    ctx->pc = 0x31e2fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 880)));
    // 0x31e300: 0xad580008  sw          $t8, 0x8($t2)
    ctx->pc = 0x31e300u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 24));
    // 0x31e304: 0x8d290370  lw          $t1, 0x370($t1)
    ctx->pc = 0x31e304u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 880)));
    // 0x31e308: 0xad2f000c  sw          $t7, 0xC($t1)
    ctx->pc = 0x31e308u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 15));
    // 0x31e30c: 0x8d090370  lw          $t1, 0x370($t0)
    ctx->pc = 0x31e30cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 880)));
    // 0x31e310: 0x25280010  addiu       $t0, $t1, 0x10
    ctx->pc = 0x31e310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x31e314: 0xace80370  sw          $t0, 0x370($a3)
    ctx->pc = 0x31e314u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 880), GPR_U32(ctx, 8));
    // 0x31e318: 0xad2e0010  sw          $t6, 0x10($t1)
    ctx->pc = 0x31e318u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 14));
    // 0x31e31c: 0x90a5b280  lbu         $a1, -0x4D80($a1)
    ctx->pc = 0x31e31cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294947456)));
    // 0x31e320: 0x50a00014  beql        $a1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x31E320u;
    {
        const bool branch_taken_0x31e320 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e320) {
            ctx->pc = 0x31E324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E320u;
            // 0x31e324: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E374u;
            goto label_31e374;
        }
    }
    ctx->pc = 0x31E328u;
    // 0x31e328: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x31e328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x31e32c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x31e32cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x31e330: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x31e330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
    // 0x31e334: 0x24847100  addiu       $a0, $a0, 0x7100
    ctx->pc = 0x31e334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28928));
    // 0x31e338: 0x34638889  ori         $v1, $v1, 0x8889
    ctx->pc = 0x31e338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x31e33c: 0x24858000  addiu       $a1, $a0, -0x8000
    ctx->pc = 0x31e33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x31e340: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x31e340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x31e344: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x31e344u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x31e348: 0x42980  sll         $a1, $a0, 6
    ctx->pc = 0x31e348u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x31e34c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x31e34cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31e350: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x31e350u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x31e354: 0x0  nop
    ctx->pc = 0x31e354u;
    // NOP
    // 0x31e358: 0x1810  mfhi        $v1
    ctx->pc = 0x31e358u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x31e35c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31e360: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x31e360u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x31e364: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31e364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31e368: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x31e368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x31e36c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31E36Cu;
    {
        const bool branch_taken_0x31e36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E36Cu;
        // 0x31e370: 0x246a0001  addiu       $t2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e36c) {
            ctx->pc = 0x31E37Cu;
            goto label_31e37c;
        }
    }
    ctx->pc = 0x31E374u;
label_31e374:
    // 0x31e374: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31e374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31e378: 0x246a7100  addiu       $t2, $v1, 0x7100
    ctx->pc = 0x31e378u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 28928));
label_31e37c:
    // 0x31e37c: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31e37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31e380: 0x3c0701dc  lui         $a3, 0x1DC
    ctx->pc = 0x31e380u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)476 << 16));
    // 0x31e384: 0x8c680370  lw          $t0, 0x370($v1)
    ctx->pc = 0x31e384u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 880)));
    // 0x31e388: 0x2409a833  addiu       $t1, $zero, -0x57CD
    ctx->pc = 0x31e388u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294944819));
    // 0x31e38c: 0x3c0501dc  lui         $a1, 0x1DC
    ctx->pc = 0x31e38cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)476 << 16));
    // 0x31e390: 0x3c0401dc  lui         $a0, 0x1DC
    ctx->pc = 0x31e390u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)476 << 16));
    // 0x31e394: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31e394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x31e398: 0xad0a0004  sw          $t2, 0x4($t0)
    ctx->pc = 0x31e398u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 10));
    // 0x31e39c: 0x3c0301dc  lui         $v1, 0x1DC
    ctx->pc = 0x31e39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)476 << 16));
    // 0x31e3a0: 0x8ce70370  lw          $a3, 0x370($a3)
    ctx->pc = 0x31e3a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 880)));
    // 0x31e3a4: 0x28c80014  slti        $t0, $a2, 0x14
    ctx->pc = 0x31e3a4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x31e3a8: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x31e3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
    // 0x31e3ac: 0x8ca50370  lw          $a1, 0x370($a1)
    ctx->pc = 0x31e3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 880)));
    // 0x31e3b0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x31e3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x31e3b4: 0x8c840370  lw          $a0, 0x370($a0)
    ctx->pc = 0x31e3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x31e3b8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x31e3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x31e3bc: 0x1500001c  bnez        $t0, . + 4 + (0x1C << 2)
    ctx->pc = 0x31E3BCu;
    {
        const bool branch_taken_0x31e3bc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E3BCu;
        // 0x31e3c0: 0xac640370  sw          $a0, 0x370($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 880), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e3bc) {
            ctx->pc = 0x31E430u;
            goto label_31e430;
        }
    }
    ctx->pc = 0x31E3C4u;
    // 0x31e3c4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31e3c8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31e3cc: 0x7c4000c0  sq          $zero, 0xC0($v0)
    ctx->pc = 0x31e3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 192), GPR_VEC(ctx, 0));
    // 0x31e3d0: 0x34640064  ori         $a0, $v1, 0x64
    ctx->pc = 0x31e3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)100);
    // 0x31e3d4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31e3d8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31e3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31e3dc: 0xac6400c0  sw          $a0, 0xC0($v1)
    ctx->pc = 0x31e3dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 4)); // MMIO: 0x700000c0
    // 0x31e3e0: 0x7c400710  sq          $zero, 0x710($v0)
    ctx->pc = 0x31e3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 1808), GPR_VEC(ctx, 0));
    // 0x31e3e4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31e3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31e3e8: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31e3ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31e3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e3f0: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31E3F0u;
    SET_GPR_U32(ctx, 31, 0x31E3F8u);
    ctx->pc = 0x31E3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E3F0u;
    // 0x31e3f4: 0xac430710  sw          $v1, 0x710($v0) (Delay Slot)
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 1808), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31E3F0u, 0x31E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E3F8u;
label_31e3f8:
    // 0x31e3f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31e3fc: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31e3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31e400: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x31e400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x31e404: 0xc040a04  jal         func_102810
    ctx->pc = 0x31E404u;
    SET_GPR_U32(ctx, 31, 0x31E40Cu);
    ctx->pc = 0x31E408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E404u;
    // 0x31e408: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x31E404u, 0x31E40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E40Cu;
label_31e40c:
    // 0x31e40c: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x31e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_31e410:
    // 0x31e410: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x31e410u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x31e414: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x31e414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x31e418: 0x0  nop
    ctx->pc = 0x31e418u;
    // NOP
    // 0x31e41c: 0x0  nop
    ctx->pc = 0x31e41cu;
    // NOP
    // 0x31e420: 0x0  nop
    ctx->pc = 0x31e420u;
    // NOP
    // 0x31e424: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31E424u;
    {
        const bool branch_taken_0x31e424 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e424) {
            ctx->pc = 0x31E410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e410;
        }
    }
    ctx->pc = 0x31E42Cu;
    // 0x31e42c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31e42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e430:
    // 0x31e430: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31e430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31e434: 0x2a230064  slti        $v1, $s1, 0x64
    ctx->pc = 0x31e434u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x31e438: 0x1460ff3a  bnez        $v1, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x31E438u;
    {
        const bool branch_taken_0x31e438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E438u;
        // 0x31e43c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e438) {
            ctx->pc = 0x31E124u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e124;
        }
    }
    ctx->pc = 0x31E440u;
    // 0x31e440: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x31E440u;
    {
        const bool branch_taken_0x31e440 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e440) {
            ctx->pc = 0x31E4C0u;
            goto label_31e4c0;
        }
    }
    ctx->pc = 0x31E448u;
    // 0x31e448: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x31e448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x31e44c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31e450: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x31e450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x31e454: 0x7c4000c0  sq          $zero, 0xC0($v0)
    ctx->pc = 0x31e454u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 192), GPR_VEC(ctx, 0));
    // 0x31e458: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31e458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31e45c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31e460: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x31e460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x31e464: 0xac4400c0  sw          $a0, 0xC0($v0)
    ctx->pc = 0x31e464u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 4)); // MMIO: 0x700000c0
    // 0x31e468: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x31e468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x31e46c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31e470: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31e470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e474: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x31e474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x31e478: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31e478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31e47c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x31e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x31e480: 0x7c600000  sq          $zero, 0x0($v1)
    ctx->pc = 0x31e480u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 0));
    // 0x31e484: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x31E484u;
    SET_GPR_U32(ctx, 31, 0x31E48Cu);
    ctx->pc = 0x31E488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E484u;
    // 0x31e488: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x31E484u, 0x31E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E48Cu;
label_31e48c:
    // 0x31e48c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31e490: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x31e490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x31e494: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x31e494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960776)));
    // 0x31e498: 0xc040a04  jal         func_102810
    ctx->pc = 0x31E498u;
    SET_GPR_U32(ctx, 31, 0x31E4A0u);
    ctx->pc = 0x31E49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E498u;
    // 0x31e49c: 0x24a500c0  addiu       $a1, $a1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102810u, 0x31E498u, 0x31E4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E4A0u;
label_31e4a0:
    // 0x31e4a0: 0x3c031001  lui         $v1, 0x1001
    ctx->pc = 0x31e4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4097 << 16));
label_31e4a4:
    // 0x31e4a4: 0x8c64a000  lw          $a0, -0x6000($v1)
    ctx->pc = 0x31e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 4294942720))); // MMIO: 0x1000a000
    // 0x31e4a8: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x31e4a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x31e4ac: 0x0  nop
    ctx->pc = 0x31e4acu;
    // NOP
    // 0x31e4b0: 0x0  nop
    ctx->pc = 0x31e4b0u;
    // NOP
    // 0x31e4b4: 0x0  nop
    ctx->pc = 0x31e4b4u;
    // NOP
    // 0x31e4b8: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31E4B8u;
    {
        const bool branch_taken_0x31e4b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e4b8) {
            ctx->pc = 0x31E4A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31e4a4;
        }
    }
    ctx->pc = 0x31E4C0u;
label_31e4c0:
    // 0x31e4c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31e4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31e4c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31e4c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31e4c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x31e4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31e4cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31e4ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x31E4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E4D0u;
        // 0x31e4d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E4D8u;
    // 0x31e4d8: 0x0  nop
    ctx->pc = 0x31e4d8u;
    // NOP
    // 0x31e4dc: 0x0  nop
    ctx->pc = 0x31e4dcu;
    // NOP
}
