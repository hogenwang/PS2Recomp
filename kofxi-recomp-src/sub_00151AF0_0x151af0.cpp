#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00151AF0
// Address: 0x151af0 - 0x151cb0
void sub_00151AF0_0x151af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151AF0_0x151af0");
#endif

    ctx->pc = 0x151af0u;

    // 0x151af0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x151af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x151af4: 0x8446db3c  lh          $a2, -0x24C4($v0)
    ctx->pc = 0x151af4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957884)));
    // 0x151af8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x151af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x151afc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x151afcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b00: 0x8447db3e  lh          $a3, -0x24C2($v0)
    ctx->pc = 0x151b00u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957886)));
    // 0x151b04: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x151b04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x151b08: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x151b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x151b0c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x151b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x151b10: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x151b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x151b14: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x151b14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x151b18: 0x9444f108  lhu         $a0, -0xEF8($v0)
    ctx->pc = 0x151b18u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963464)));
    // 0x151b1c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x151b1cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b20: 0x0  nop
    ctx->pc = 0x151b20u;
    // NOP
    // 0x151b24: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x151b24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x151b28: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x151b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x151b2c: 0x8442db20  lh          $v0, -0x24E0($v0)
    ctx->pc = 0x151b2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x151b30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b34: 0x0  nop
    ctx->pc = 0x151b34u;
    // NOP
    // 0x151b38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151b38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151b3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x151b3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x151b40: 0x46010103  div.s       $f4, $f0, $f1
    ctx->pc = 0x151b40u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[1];
    // 0x151b44: 0x0  nop
    ctx->pc = 0x151b44u;
    // NOP
    // 0x151b48: 0x0  nop
    ctx->pc = 0x151b48u;
    // NOP
    // 0x151b4c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151B4Cu;
    {
        const bool branch_taken_0x151b4c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x151b4c) {
            ctx->pc = 0x151B60u;
            goto label_151b60;
        }
    }
    ctx->pc = 0x151B54u;
    // 0x151b54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151b54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151B58u;
    {
        const bool branch_taken_0x151b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151B58u;
            // 0x151b5c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b58) {
            ctx->pc = 0x151B7Cu;
            goto label_151b7c;
        }
    }
    ctx->pc = 0x151B60u;
label_151b60:
    // 0x151b60: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x151b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x151b64: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x151b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x151b68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x151b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x151b6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151b6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b70: 0x0  nop
    ctx->pc = 0x151b70u;
    // NOP
    // 0x151b74: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x151b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x151b78: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x151b78u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_151b7c:
    // 0x151b7c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x151b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x151b80: 0x2442f130  addiu       $v0, $v0, -0xED0
    ctx->pc = 0x151b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963504));
    // 0x151b84: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x151b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x151b88: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151B88u;
    {
        const bool branch_taken_0x151b88 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x151B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151B88u;
            // 0x151b8c: 0xc4420000  lwc1        $f2, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b88) {
            ctx->pc = 0x151B9Cu;
            goto label_151b9c;
        }
    }
    ctx->pc = 0x151B90u;
    // 0x151b90: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151b90u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151B94u;
    {
        const bool branch_taken_0x151b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151B94u;
            // 0x151b98: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151b94) {
            ctx->pc = 0x151BB8u;
            goto label_151bb8;
        }
    }
    ctx->pc = 0x151B9Cu;
label_151b9c:
    // 0x151b9c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x151b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x151ba0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x151ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x151ba4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x151ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x151ba8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151ba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151bac: 0x0  nop
    ctx->pc = 0x151bacu;
    // NOP
    // 0x151bb0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x151bb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x151bb4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x151bb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_151bb8:
    // 0x151bb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151bbc: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x151bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x151bc0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x151bc0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x151bc4: 0x9444f10a  lhu         $a0, -0xEF6($v0)
    ctx->pc = 0x151bc4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963466)));
    // 0x151bc8: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x151bc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x151bcc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x151bccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x151bd0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x151bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x151bd4: 0x8442db22  lh          $v0, -0x24DE($v0)
    ctx->pc = 0x151bd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957858)));
    // 0x151bd8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x151bd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x151bdc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x151bdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x151be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151be4: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x151be4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x151be8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151be8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151bec: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x151becu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x151bf0: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x151bf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x151bf4: 0x46050103  div.s       $f4, $f0, $f5
    ctx->pc = 0x151bf4u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[5];
    // 0x151bf8: 0x0  nop
    ctx->pc = 0x151bf8u;
    // NOP
    // 0x151bfc: 0x0  nop
    ctx->pc = 0x151bfcu;
    // NOP
    // 0x151c00: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151C00u;
    {
        const bool branch_taken_0x151c00 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x151c00) {
            ctx->pc = 0x151C14u;
            goto label_151c14;
        }
    }
    ctx->pc = 0x151C08u;
    // 0x151c08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151c08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151c0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151C0Cu;
    {
        const bool branch_taken_0x151c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151C0Cu;
            // 0x151c10: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c0c) {
            ctx->pc = 0x151C30u;
            goto label_151c30;
        }
    }
    ctx->pc = 0x151C14u;
label_151c14:
    // 0x151c14: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x151c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x151c18: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x151c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x151c1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x151c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x151c20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151c20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151c24: 0x0  nop
    ctx->pc = 0x151c24u;
    // NOP
    // 0x151c28: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x151c28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x151c2c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x151c2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_151c30:
    // 0x151c30: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x151c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x151c34: 0x2442f134  addiu       $v0, $v0, -0xECC
    ctx->pc = 0x151c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963508));
    // 0x151c38: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x151c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x151c3c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151C3Cu;
    {
        const bool branch_taken_0x151c3c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x151C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151C3Cu;
            // 0x151c40: 0xc4420000  lwc1        $f2, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c3c) {
            ctx->pc = 0x151C50u;
            goto label_151c50;
        }
    }
    ctx->pc = 0x151C44u;
    // 0x151c44: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151c44u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151c48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151C48u;
    {
        const bool branch_taken_0x151c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151C48u;
            // 0x151c4c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c48) {
            ctx->pc = 0x151C6Cu;
            goto label_151c6c;
        }
    }
    ctx->pc = 0x151C50u;
label_151c50:
    // 0x151c50: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x151c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x151c54: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x151c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x151c58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x151c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x151c5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151c5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151c60: 0x0  nop
    ctx->pc = 0x151c60u;
    // NOP
    // 0x151c64: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x151c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x151c68: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x151c68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_151c6c:
    // 0x151c6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151c6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151c70: 0x0  nop
    ctx->pc = 0x151c70u;
    // NOP
    // 0x151c74: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x151c74u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x151c78: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x151c78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x151c7c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x151c7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x151c80: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x151c80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x151c84: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x151c84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x151c88: 0x0  nop
    ctx->pc = 0x151c88u;
    // NOP
    // 0x151c8c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x151c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x151c90: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151C90u;
    {
        const bool branch_taken_0x151c90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x151C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151C90u;
            // 0x151c94: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151c90) {
            ctx->pc = 0x151CA0u;
            goto label_151ca0;
        }
    }
    ctx->pc = 0x151C98u;
    // 0x151c98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x151C98u;
    {
        const bool branch_taken_0x151c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151c98) {
            ctx->pc = 0x151CA4u;
            goto label_151ca4;
        }
    }
    ctx->pc = 0x151CA0u;
label_151ca0:
    // 0x151ca0: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x151ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_151ca4:
    // 0x151ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x151CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x151CACu;
    // 0x151cac: 0x0  nop
    ctx->pc = 0x151cacu;
    // NOP
    ctx->pc = 0x151cb0u;
}
