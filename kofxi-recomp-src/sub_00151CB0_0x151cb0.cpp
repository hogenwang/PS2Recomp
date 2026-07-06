#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00151CB0
// Address: 0x151cb0 - 0x1520e0
void sub_00151CB0_0x151cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151CB0_0x151cb0");
#endif

    ctx->pc = 0x151cb0u;

    // 0x151cb0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x151cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x151cb4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x151cb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x151cb8: 0x8467db3c  lh          $a3, -0x24C4($v1)
    ctx->pc = 0x151cb8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957884)));
    // 0x151cbc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x151cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x151cc0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x151cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x151cc4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x151cc4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151cc8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x151cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x151ccc: 0x8446db3e  lh          $a2, -0x24C2($v0)
    ctx->pc = 0x151cccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957886)));
    // 0x151cd0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x151cd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x151cd4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x151cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x151cd8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x151cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x151cdc: 0x9467f108  lhu         $a3, -0xEF8($v1)
    ctx->pc = 0x151cdcu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963464)));
    // 0x151ce0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x151ce0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151ce4: 0x0  nop
    ctx->pc = 0x151ce4u;
    // NOP
    // 0x151ce8: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x151ce8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x151cec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x151cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x151cf0: 0x8463db20  lh          $v1, -0x24E0($v1)
    ctx->pc = 0x151cf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957856)));
    // 0x151cf4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151cf4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151cf8: 0x0  nop
    ctx->pc = 0x151cf8u;
    // NOP
    // 0x151cfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151d00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x151d00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x151d04: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x151d04u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[1];
    // 0x151d08: 0x0  nop
    ctx->pc = 0x151d08u;
    // NOP
    // 0x151d0c: 0x0  nop
    ctx->pc = 0x151d0cu;
    // NOP
    // 0x151d10: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x151D10u;
    {
        const bool branch_taken_0x151d10 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x151d10) {
            ctx->pc = 0x151D24u;
            goto label_151d24;
        }
    }
    ctx->pc = 0x151D18u;
    // 0x151d18: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x151d18u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151d1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151D1Cu;
    {
        const bool branch_taken_0x151d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151D1Cu;
            // 0x151d20: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d1c) {
            ctx->pc = 0x151D40u;
            goto label_151d40;
        }
    }
    ctx->pc = 0x151D24u;
label_151d24:
    // 0x151d24: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x151d24u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x151d28: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x151d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x151d2c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x151d2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x151d30: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x151d30u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151d34: 0x0  nop
    ctx->pc = 0x151d34u;
    // NOP
    // 0x151d38: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x151d38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x151d3c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x151d3cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_151d40:
    // 0x151d40: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x151d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x151d44: 0x2463f130  addiu       $v1, $v1, -0xED0
    ctx->pc = 0x151d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963504));
    // 0x151d48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x151d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151d4c: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x151D4Cu;
    {
        const bool branch_taken_0x151d4c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x151D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151D4Cu;
            // 0x151d50: 0xc4620000  lwc1        $f2, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d4c) {
            ctx->pc = 0x151D60u;
            goto label_151d60;
        }
    }
    ctx->pc = 0x151D54u;
    // 0x151d54: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x151d54u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151d58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151D58u;
    {
        const bool branch_taken_0x151d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151D58u;
            // 0x151d5c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d58) {
            ctx->pc = 0x151D7Cu;
            goto label_151d7c;
        }
    }
    ctx->pc = 0x151D60u;
label_151d60:
    // 0x151d60: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x151d60u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x151d64: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x151d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x151d68: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x151d68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x151d6c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x151d6cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151d70: 0x0  nop
    ctx->pc = 0x151d70u;
    // NOP
    // 0x151d74: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x151d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x151d78: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x151d78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_151d7c:
    // 0x151d7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151d7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151d80: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x151d80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x151d84: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x151d84u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x151d88: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x151d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x151d8c: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x151d8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x151d90: 0x8468efd8  lh          $t0, -0x1028($v1)
    ctx->pc = 0x151d90u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963160)));
    // 0x151d94: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x151d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x151d98: 0x94c7f10a  lhu         $a3, -0xEF6($a2)
    ctx->pc = 0x151d98u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294963466)));
    // 0x151d9c: 0x84aa0086  lh          $t2, 0x86($a1)
    ctx->pc = 0x151d9cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 134)));
    // 0x151da0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x151da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x151da4: 0x84890000  lh          $t1, 0x0($a0)
    ctx->pc = 0x151da4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x151da8: 0x8463db22  lh          $v1, -0x24DE($v1)
    ctx->pc = 0x151da8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957858)));
    // 0x151dac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x151dacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x151db0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x151db0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x151db4: 0x0  nop
    ctx->pc = 0x151db4u;
    // NOP
    // 0x151db8: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x151db8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x151dbc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x151dbcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x151dc0: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x151dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x151dc4: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x151dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x151dc8: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x151dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x151dcc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x151dccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151dd0: 0x0  nop
    ctx->pc = 0x151dd0u;
    // NOP
    // 0x151dd4: 0x468001a0  cvt.s.w     $f6, $f0
    ctx->pc = 0x151dd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x151dd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151dd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151ddc: 0x0  nop
    ctx->pc = 0x151ddcu;
    // NOP
    // 0x151de0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151de4: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x151de4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x151de8: 0x46050103  div.s       $f4, $f0, $f5
    ctx->pc = 0x151de8u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[5];
    // 0x151dec: 0x0  nop
    ctx->pc = 0x151decu;
    // NOP
    // 0x151df0: 0x0  nop
    ctx->pc = 0x151df0u;
    // NOP
    // 0x151df4: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x151DF4u;
    {
        const bool branch_taken_0x151df4 = (GPR_S32(ctx, 7) < 0);
        if (branch_taken_0x151df4) {
            ctx->pc = 0x151E08u;
            goto label_151e08;
        }
    }
    ctx->pc = 0x151DFCu;
    // 0x151dfc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x151dfcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151e00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151E00u;
    {
        const bool branch_taken_0x151e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151E00u;
            // 0x151e04: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e00) {
            ctx->pc = 0x151E24u;
            goto label_151e24;
        }
    }
    ctx->pc = 0x151E08u;
label_151e08:
    // 0x151e08: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x151e08u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x151e0c: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x151e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x151e10: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x151e10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x151e14: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x151e14u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151e18: 0x0  nop
    ctx->pc = 0x151e18u;
    // NOP
    // 0x151e1c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x151e1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x151e20: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x151e20u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_151e24:
    // 0x151e24: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x151e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x151e28: 0x2463f134  addiu       $v1, $v1, -0xECC
    ctx->pc = 0x151e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963508));
    // 0x151e2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x151e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151e30: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x151E30u;
    {
        const bool branch_taken_0x151e30 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x151E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151E30u;
            // 0x151e34: 0xc4420000  lwc1        $f2, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e30) {
            ctx->pc = 0x151E44u;
            goto label_151e44;
        }
    }
    ctx->pc = 0x151E38u;
    // 0x151e38: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x151e38u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151e3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151E3Cu;
    {
        const bool branch_taken_0x151e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151E3Cu;
            // 0x151e40: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151e3c) {
            ctx->pc = 0x151E60u;
            goto label_151e60;
        }
    }
    ctx->pc = 0x151E44u;
label_151e44:
    // 0x151e44: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x151e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x151e48: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x151e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x151e4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x151e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x151e50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151e50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151e54: 0x0  nop
    ctx->pc = 0x151e54u;
    // NOP
    // 0x151e58: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x151e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x151e5c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x151e5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_151e60:
    // 0x151e60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151e64: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x151e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x151e68: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x151e68u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x151e6c: 0x8443efda  lh          $v1, -0x1026($v0)
    ctx->pc = 0x151e6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963162)));
    // 0x151e70: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x151e70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x151e74: 0x84a70088  lh          $a3, 0x88($a1)
    ctx->pc = 0x151e74u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x151e78: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x151e78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x151e7c: 0x84860002  lh          $a2, 0x2($a0)
    ctx->pc = 0x151e7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x151e80: 0x94a20082  lhu         $v0, 0x82($a1)
    ctx->pc = 0x151e80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 130)));
    // 0x151e84: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x151e84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x151e88: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x151e88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x151e8c: 0x0  nop
    ctx->pc = 0x151e8cu;
    // NOP
    // 0x151e90: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x151e90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x151e94: 0x8443f  dsra32      $t0, $t0, 16
    ctx->pc = 0x151e94u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x151e98: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x151e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x151e9c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x151e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x151ea0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x151ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x151ea4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151ea4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151ea8: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151EA8u;
    {
        const bool branch_taken_0x151ea8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x151EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151EA8u;
            // 0x151eac: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ea8) {
            ctx->pc = 0x151EBCu;
            goto label_151ebc;
        }
    }
    ctx->pc = 0x151EB0u;
    // 0x151eb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151eb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151eb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151EB4u;
    {
        const bool branch_taken_0x151eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151EB4u;
            // 0x151eb8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151eb4) {
            ctx->pc = 0x151ED8u;
            goto label_151ed8;
        }
    }
    ctx->pc = 0x151EBCu;
label_151ebc:
    // 0x151ebc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x151ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x151ec0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x151ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x151ec4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x151ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x151ec8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151ecc: 0x0  nop
    ctx->pc = 0x151eccu;
    // NOP
    // 0x151ed0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151ed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151ed4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x151ed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_151ed8:
    // 0x151ed8: 0x94a20084  lhu         $v0, 0x84($a1)
    ctx->pc = 0x151ed8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x151edc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151EDCu;
    {
        const bool branch_taken_0x151edc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x151EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151EDCu;
            // 0x151ee0: 0x460c0082  mul.s       $f2, $f0, $f12 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151edc) {
            ctx->pc = 0x151EF0u;
            goto label_151ef0;
        }
    }
    ctx->pc = 0x151EE4u;
    // 0x151ee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151ee8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151EE8u;
    {
        const bool branch_taken_0x151ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151EE8u;
            // 0x151eec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ee8) {
            ctx->pc = 0x151F0Cu;
            goto label_151f0c;
        }
    }
    ctx->pc = 0x151EF0u;
label_151ef0:
    // 0x151ef0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x151ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x151ef4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x151ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x151ef8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x151ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x151efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151f00: 0x0  nop
    ctx->pc = 0x151f00u;
    // NOP
    // 0x151f04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151f04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151f08: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x151f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_151f0c:
    // 0x151f0c: 0x90a2008a  lbu         $v0, 0x8A($a1)
    ctx->pc = 0x151f0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 138)));
    // 0x151f10: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x151f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x151f14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x151F14u;
    {
        const bool branch_taken_0x151f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151F14u;
            // 0x151f18: 0x460d0042  mul.s       $f1, $f0, $f13 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f14) {
            ctx->pc = 0x151F34u;
            goto label_151f34;
        }
    }
    ctx->pc = 0x151F1Cu;
    // 0x151f1c: 0x46023001  sub.s       $f0, $f6, $f2
    ctx->pc = 0x151f1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
    // 0x151f20: 0xe4a60008  swc1        $f6, 0x8($a1)
    ctx->pc = 0x151f20u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x151f24: 0xe4a60024  swc1        $f6, 0x24($a1)
    ctx->pc = 0x151f24u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x151f28: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x151f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x151f2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x151F2Cu;
    {
        const bool branch_taken_0x151f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151F2Cu;
            // 0x151f30: 0xe4a0005c  swc1        $f0, 0x5C($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f2c) {
            ctx->pc = 0x151F48u;
            goto label_151f48;
        }
    }
    ctx->pc = 0x151F34u;
label_151f34:
    // 0x151f34: 0x46023000  add.s       $f0, $f6, $f2
    ctx->pc = 0x151f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x151f38: 0xe4a60008  swc1        $f6, 0x8($a1)
    ctx->pc = 0x151f38u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x151f3c: 0xe4a60024  swc1        $f6, 0x24($a1)
    ctx->pc = 0x151f3cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x151f40: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x151f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x151f44: 0xe4a0005c  swc1        $f0, 0x5C($a1)
    ctx->pc = 0x151f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
label_151f48:
    // 0x151f48: 0x90a2008a  lbu         $v0, 0x8A($a1)
    ctx->pc = 0x151f48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 138)));
    // 0x151f4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x151f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x151f50: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x151F50u;
    {
        const bool branch_taken_0x151f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151f50) {
            ctx->pc = 0x151F54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151F50u;
            // 0x151f54: 0x46011800  add.s       $f0, $f3, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x151F70u;
            goto label_151f70;
        }
    }
    ctx->pc = 0x151F58u;
    // 0x151f58: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x151f58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x151f5c: 0xe4a3000c  swc1        $f3, 0xC($a1)
    ctx->pc = 0x151f5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x151f60: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x151f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x151f64: 0xe4a30044  swc1        $f3, 0x44($a1)
    ctx->pc = 0x151f64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x151f68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x151F68u;
    {
        const bool branch_taken_0x151f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151F68u;
            // 0x151f6c: 0xe4a00060  swc1        $f0, 0x60($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f68) {
            ctx->pc = 0x151F80u;
            goto label_151f80;
        }
    }
    ctx->pc = 0x151F70u;
label_151f70:
    // 0x151f70: 0xe4a3000c  swc1        $f3, 0xC($a1)
    ctx->pc = 0x151f70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x151f74: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x151f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x151f78: 0xe4a30044  swc1        $f3, 0x44($a1)
    ctx->pc = 0x151f78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x151f7c: 0xe4a00060  swc1        $f0, 0x60($a1)
    ctx->pc = 0x151f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
label_151f80:
    // 0x151f80: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x151f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151f84: 0x3c0c009c  lui         $t4, 0x9C
    ctx->pc = 0x151f84u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)156 << 16));
    // 0x151f88: 0x3c0b009c  lui         $t3, 0x9C
    ctx->pc = 0x151f88u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)156 << 16));
    // 0x151f8c: 0x3c0a009c  lui         $t2, 0x9C
    ctx->pc = 0x151f8cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)156 << 16));
    // 0x151f90: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x151f90u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x151f94: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x151f94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x151f98: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x151f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x151f9c: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x151f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x151fa0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x151fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151fa4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x151fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x151fa8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x151fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x151fac: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x151facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x151fb0: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x151fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x151fb4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x151fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151fb8: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x151fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x151fbc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x151fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151fc0: 0xe4a00064  swc1        $f0, 0x64($a1)
    ctx->pc = 0x151fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x151fc4: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x151fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x151fc8: 0x858cdb30  lh          $t4, -0x24D0($t4)
    ctx->pc = 0x151fc8u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 4294957872)));
    // 0x151fcc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x151fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151fd0: 0x258c0140  addiu       $t4, $t4, 0x140
    ctx->pc = 0x151fd0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 320));
    // 0x151fd4: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x151fd4u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151fd8: 0x0  nop
    ctx->pc = 0x151fd8u;
    // NOP
    // 0x151fdc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x151fdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x151fe0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x151fe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x151fe4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x151fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x151fe8: 0x856bdb2c  lh          $t3, -0x24D4($t3)
    ctx->pc = 0x151fe8u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294957868)));
    // 0x151fec: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x151fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151ff0: 0x256b00f0  addiu       $t3, $t3, 0xF0
    ctx->pc = 0x151ff0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 240));
    // 0x151ff4: 0x448b0800  mtc1        $t3, $f1
    ctx->pc = 0x151ff4u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151ff8: 0x0  nop
    ctx->pc = 0x151ff8u;
    // NOP
    // 0x151ffc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x151ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x152000: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x152000u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x152004: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x152004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x152008: 0x854adb30  lh          $t2, -0x24D0($t2)
    ctx->pc = 0x152008u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4294957872)));
    // 0x15200c: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x15200cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152010: 0x254a0140  addiu       $t2, $t2, 0x140
    ctx->pc = 0x152010u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 320));
    // 0x152014: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x152014u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152018: 0x0  nop
    ctx->pc = 0x152018u;
    // NOP
    // 0x15201c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15201cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x152020: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x152020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x152024: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x152024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x152028: 0x8529db2c  lh          $t1, -0x24D4($t1)
    ctx->pc = 0x152028u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294957868)));
    // 0x15202c: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x15202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152030: 0x252900f0  addiu       $t1, $t1, 0xF0
    ctx->pc = 0x152030u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 240));
    // 0x152034: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x152034u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152038: 0x0  nop
    ctx->pc = 0x152038u;
    // NOP
    // 0x15203c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15203cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x152040: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x152040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x152044: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x152044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x152048: 0x8508db30  lh          $t0, -0x24D0($t0)
    ctx->pc = 0x152048u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294957872)));
    // 0x15204c: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x15204cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152050: 0x25080140  addiu       $t0, $t0, 0x140
    ctx->pc = 0x152050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 320));
    // 0x152054: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x152054u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152058: 0x0  nop
    ctx->pc = 0x152058u;
    // NOP
    // 0x15205c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15205cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x152060: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x152060u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x152064: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x152064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x152068: 0x84e7db2c  lh          $a3, -0x24D4($a3)
    ctx->pc = 0x152068u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294957868)));
    // 0x15206c: 0xc4a00044  lwc1        $f0, 0x44($a1)
    ctx->pc = 0x15206cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152070: 0x24e700f0  addiu       $a3, $a3, 0xF0
    ctx->pc = 0x152070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 240));
    // 0x152074: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x152074u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152078: 0x0  nop
    ctx->pc = 0x152078u;
    // NOP
    // 0x15207c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15207cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x152080: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x152080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x152084: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x152084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x152088: 0x84c6db30  lh          $a2, -0x24D0($a2)
    ctx->pc = 0x152088u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294957872)));
    // 0x15208c: 0xc4a0005c  lwc1        $f0, 0x5C($a1)
    ctx->pc = 0x15208cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152090: 0x24c60140  addiu       $a2, $a2, 0x140
    ctx->pc = 0x152090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 320));
    // 0x152094: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x152094u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152098: 0x0  nop
    ctx->pc = 0x152098u;
    // NOP
    // 0x15209c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15209cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1520a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1520a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1520a4: 0xe4a0005c  swc1        $f0, 0x5C($a1)
    ctx->pc = 0x1520a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
    // 0x1520a8: 0x8463db2c  lh          $v1, -0x24D4($v1)
    ctx->pc = 0x1520a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957868)));
    // 0x1520ac: 0xc4a00060  lwc1        $f0, 0x60($a1)
    ctx->pc = 0x1520acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1520b0: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x1520b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x1520b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1520b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1520b8: 0x0  nop
    ctx->pc = 0x1520b8u;
    // NOP
    // 0x1520bc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1520bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1520c0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1520c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1520c4: 0xe4a00060  swc1        $f0, 0x60($a1)
    ctx->pc = 0x1520c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x1520c8: 0x8c46ef68  lw          $a2, -0x1098($v0)
    ctx->pc = 0x1520c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963048)));
    // 0x1520cc: 0x90a3008b  lbu         $v1, 0x8B($a1)
    ctx->pc = 0x1520ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 139)));
    // 0x1520d0: 0x84a20080  lh          $v0, 0x80($a1)
    ctx->pc = 0x1520d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x1520d4: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x1520d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1520d8: 0x80c6cc4  j           func_31B310
    ctx->pc = 0x1520D8u;
    ctx->pc = 0x1520DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1520D8u;
            // 0x1520dc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31B310u;
    if (runtime->hasFunction(0x31B310u)) {
        auto targetFn = runtime->lookupFunction(0x31B310u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0031B310_0x31b310(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1520E0u;
    ctx->pc = 0x1520e0u;
}
