#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00152930
// Address: 0x152930 - 0x152ae0
void sub_00152930_0x152930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152930_0x152930");
#endif

    switch (ctx->pc) {
        case 0x1529d8u: goto label_1529d8;
        case 0x152a18u: goto label_152a18;
        default: break;
    }

    ctx->pc = 0x152930u;

    // 0x152930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152934: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152938: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x152938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15293c: 0x9463f348  lhu         $v1, -0xCB8($v1)
    ctx->pc = 0x15293cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964040)));
    // 0x152940: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x152940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x152944: 0x10600058  beqz        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x152944u;
    {
        const bool branch_taken_0x152944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152944) {
            ctx->pc = 0x152AA8u;
            goto label_152aa8;
        }
    }
    ctx->pc = 0x15294Cu;
    // 0x15294c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x15294cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x152950: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152954: 0x9084efe0  lbu         $a0, -0x1020($a0)
    ctx->pc = 0x152954u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294963168)));
    // 0x152958: 0x9063efdf  lbu         $v1, -0x1021($v1)
    ctx->pc = 0x152958u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294963167)));
    // 0x15295c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x15295cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x152960: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x152960u;
    {
        const bool branch_taken_0x152960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x152960) {
            ctx->pc = 0x152A44u;
            goto label_152a44;
        }
    }
    ctx->pc = 0x152968u;
    // 0x152968: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x15296c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x15296cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152970: 0x8447efe2  lh          $a3, -0x101E($v0)
    ctx->pc = 0x152970u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963170)));
    // 0x152974: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x152974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x152978: 0xa060efe0  sb          $zero, -0x1020($v1)
    ctx->pc = 0x152978u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294963168), (uint8_t)GPR_U32(ctx, 0));
    // 0x15297c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x15297cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x152980: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x152980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x152984: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152988: 0x73823  negu        $a3, $a3
    ctx->pc = 0x152988u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x15298c: 0x8446efe4  lh          $a2, -0x101C($v0)
    ctx->pc = 0x15298cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963172)));
    // 0x152990: 0xa4a7efe2  sh          $a3, -0x101E($a1)
    ctx->pc = 0x152990u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294963170), (uint16_t)GPR_U32(ctx, 7));
    // 0x152994: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x152994u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x152998: 0x8463db2c  lh          $v1, -0x24D4($v1)
    ctx->pc = 0x152998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957868)));
    // 0x15299c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x15299cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1529a0: 0x62823  negu        $a1, $a2
    ctx->pc = 0x1529a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x1529a4: 0x9442f102  lhu         $v0, -0xEFE($v0)
    ctx->pc = 0x1529a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963458)));
    // 0x1529a8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1529a8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1529ac: 0xa485efe4  sh          $a1, -0x101C($a0)
    ctx->pc = 0x1529acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294963172), (uint16_t)GPR_U32(ctx, 5));
    // 0x1529b0: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x1529b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1529b4: 0x2442fe00  addiu       $v0, $v0, -0x200
    ctx->pc = 0x1529b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x1529b8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1529b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1529bc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1529BCu;
    {
        const bool branch_taken_0x1529bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1529C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1529BCu;
            // 0x1529c0: 0x4243f  dsra32      $a0, $a0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529bc) {
            ctx->pc = 0x152A04u;
            goto label_152a04;
        }
    }
    ctx->pc = 0x1529C4u;
    // 0x1529c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1529c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1529c8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1529c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1529cc: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1529ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1529d0: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x1529D0u;
    SET_GPR_U32(ctx, 31, 0x1529D8u);
    ctx->pc = 0x1529D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1529D0u;
            // 0x1529d4: 0xa447efd8  sh          $a3, -0x1028($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294963160), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (runtime->hasFunction(0x12EFB0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1529D8u; }
        if (ctx->pc != 0x1529D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFB0_0x12efb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1529D8u; }
        if (ctx->pc != 0x1529D8u) { return; }
    }
    ctx->pc = 0x1529D8u;
label_1529d8:
    // 0x1529d8: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x1529d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x1529dc: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1529dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1529e0: 0x8484efe4  lh          $a0, -0x101C($a0)
    ctx->pc = 0x1529e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294963172)));
    // 0x1529e4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1529e4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1529e8: 0x0  nop
    ctx->pc = 0x1529e8u;
    // NOP
    // 0x1529ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1529ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1529f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1529f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1529f4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1529f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1529f8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1529f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1529fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1529FCu;
    {
        const bool branch_taken_0x1529fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1529FCu;
            // 0x152a00: 0xa464efda  sh          $a0, -0x1026($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294963162), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1529fc) {
            ctx->pc = 0x152A44u;
            goto label_152a44;
        }
    }
    ctx->pc = 0x152A04u;
label_152a04:
    // 0x152a04: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152a04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152a08: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x152a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x152a0c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x152a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x152a10: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x152A10u;
    SET_GPR_U32(ctx, 31, 0x152A18u);
    ctx->pc = 0x152A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152A10u;
            // 0x152a14: 0xa447efd8  sh          $a3, -0x1028($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294963160), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (runtime->hasFunction(0x12EFB0u)) {
        auto targetFn = runtime->lookupFunction(0x12EFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152A18u; }
        if (ctx->pc != 0x152A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012EFB0_0x12efb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152A18u; }
        if (ctx->pc != 0x152A18u) { return; }
    }
    ctx->pc = 0x152A18u;
label_152a18:
    // 0x152a18: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x152a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x152a1c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152a20: 0x8484efe4  lh          $a0, -0x101C($a0)
    ctx->pc = 0x152a20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294963172)));
    // 0x152a24: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x152a24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152a28: 0x0  nop
    ctx->pc = 0x152a28u;
    // NOP
    // 0x152a2c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x152a2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x152a30: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x152a30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x152a34: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x152a34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x152a38: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x152a38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x152a3c: 0x0  nop
    ctx->pc = 0x152a3cu;
    // NOP
    // 0x152a40: 0xa464efda  sh          $a0, -0x1026($v1)
    ctx->pc = 0x152a40u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963162), (uint16_t)GPR_U32(ctx, 4));
label_152a44:
    // 0x152a44: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152a48: 0x3c060093  lui         $a2, 0x93
    ctx->pc = 0x152a48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)147 << 16));
    // 0x152a4c: 0x9068efe0  lbu         $t0, -0x1020($v1)
    ctx->pc = 0x152a4cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294963168)));
    // 0x152a50: 0x3c050093  lui         $a1, 0x93
    ctx->pc = 0x152a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)147 << 16));
    // 0x152a54: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x152a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x152a58: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152a5c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x152a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x152a60: 0x9067efde  lbu         $a3, -0x1022($v1)
    ctx->pc = 0x152a60u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294963166)));
    // 0x152a64: 0xa0c8efe0  sb          $t0, -0x1020($a2)
    ctx->pc = 0x152a64u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294963168), (uint8_t)GPR_U32(ctx, 8));
    // 0x152a68: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x152a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x152a6c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152a70: 0xa0a6efde  sb          $a2, -0x1022($a1)
    ctx->pc = 0x152a70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294963166), (uint8_t)GPR_U32(ctx, 6));
    // 0x152a74: 0x9063efdd  lbu         $v1, -0x1023($v1)
    ctx->pc = 0x152a74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294963165)));
    // 0x152a78: 0x9084efde  lbu         $a0, -0x1022($a0)
    ctx->pc = 0x152a78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294963166)));
    // 0x152a7c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x152a7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x152a80: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x152A80u;
    {
        const bool branch_taken_0x152a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x152a80) {
            ctx->pc = 0x152AC0u;
            goto label_152ac0;
        }
    }
    ctx->pc = 0x152A88u;
    // 0x152a88: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152a8c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x152a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x152a90: 0x9465f348  lhu         $a1, -0xCB8($v1)
    ctx->pc = 0x152a90u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964040)));
    // 0x152a94: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152a98: 0xa060efdc  sb          $zero, -0x1024($v1)
    ctx->pc = 0x152a98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294963164), (uint8_t)GPR_U32(ctx, 0));
    // 0x152a9c: 0x30a3fffb  andi        $v1, $a1, 0xFFFB
    ctx->pc = 0x152a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65531);
    // 0x152aa0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152AA0u;
    {
        const bool branch_taken_0x152aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152AA0u;
            // 0x152aa4: 0xa483f348  sh          $v1, -0xCB8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 4294964040), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152aa0) {
            ctx->pc = 0x152AC0u;
            goto label_152ac0;
        }
    }
    ctx->pc = 0x152AA8u;
label_152aa8:
    // 0x152aa8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152aac: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x152aacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x152ab0: 0xa460efd8  sh          $zero, -0x1028($v1)
    ctx->pc = 0x152ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963160), (uint16_t)GPR_U32(ctx, 0));
    // 0x152ab4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152ab8: 0xa480efda  sh          $zero, -0x1026($a0)
    ctx->pc = 0x152ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294963162), (uint16_t)GPR_U32(ctx, 0));
    // 0x152abc: 0xa060efdc  sb          $zero, -0x1024($v1)
    ctx->pc = 0x152abcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294963164), (uint8_t)GPR_U32(ctx, 0));
label_152ac0:
    // 0x152ac0: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x152ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x152ac4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x152ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x152ac8: 0x9484f348  lhu         $a0, -0xCB8($a0)
    ctx->pc = 0x152ac8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294964040)));
    // 0x152acc: 0x3084ffef  andi        $a0, $a0, 0xFFEF
    ctx->pc = 0x152accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65519);
    // 0x152ad0: 0xa464f348  sh          $a0, -0xCB8($v1)
    ctx->pc = 0x152ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294964040), (uint16_t)GPR_U32(ctx, 4));
    // 0x152ad4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x152AD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152AD8u;
            // 0x152adc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152AE0u;
    ctx->pc = 0x152ae0u;
}
