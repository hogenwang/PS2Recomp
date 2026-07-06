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

// Function: sub_00341910
// Address: 0x341910 - 0x341c70
void sub_00341910_0x341910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341910_0x341910");
#endif

    switch (ctx->pc) {
        case 0x341930u: goto label_341930;
        case 0x341b60u: goto label_341b60;
        case 0x341b68u: goto label_341b68;
        case 0x341ba4u: goto label_341ba4;
        case 0x341bacu: goto label_341bac;
        case 0x341be0u: goto label_341be0;
        case 0x341becu: goto label_341bec;
        case 0x341bf8u: goto label_341bf8;
        case 0x341c1cu: goto label_341c1c;
        case 0x341c50u: goto label_341c50;
        default: break;
    }

    ctx->pc = 0x341910u;

    // 0x341910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x341910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x341914: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x341914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x341918: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x341918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34191c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34191cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x341920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x341920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x341924: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x341924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x341928: 0xc0d045c  jal         func_341170
    ctx->pc = 0x341928u;
    SET_GPR_U32(ctx, 31, 0x341930u);
    ctx->pc = 0x34192Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341928u;
    // 0x34192c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341170u, 0x341928u, 0x341930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341930u;
label_341930:
    // 0x341930: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x341930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x341934: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x341934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x341938: 0xc444ea94  lwc1        $f4, -0x156C($v0)
    ctx->pc = 0x341938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34193c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34193cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341940: 0x0  nop
    ctx->pc = 0x341940u;
    // NOP
    // 0x341944: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x341944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x341948: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x341948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34194c: 0x8c43eaa8  lw          $v1, -0x1558($v0)
    ctx->pc = 0x34194cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961832)));
    // 0x341950: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341950u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x341954: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x341954u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x341958: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x341958u;
    {
        const bool branch_taken_0x341958 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x341958) {
            ctx->pc = 0x34195Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341958u;
            // 0x34195c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34196Cu;
            goto label_34196c;
        }
    }
    ctx->pc = 0x341960u;
    // 0x341960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x341960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341964: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x341964u;
    {
        const bool branch_taken_0x341964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341964u;
        // 0x341968: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341964) {
            ctx->pc = 0x341984u;
            goto label_341984;
        }
    }
    ctx->pc = 0x34196Cu;
label_34196c:
    // 0x34196c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34196cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x341970: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x341970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x341974: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341974u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341978: 0x0  nop
    ctx->pc = 0x341978u;
    // NOP
    // 0x34197c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34197cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x341980: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x341980u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_341984:
    // 0x341984: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x341984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x341988: 0x3c0443a0  lui         $a0, 0x43A0
    ctx->pc = 0x341988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17312 << 16));
    // 0x34198c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34198cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341990: 0x0  nop
    ctx->pc = 0x341990u;
    // NOP
    // 0x341994: 0x460008c3  div.s       $f3, $f1, $f0
    ctx->pc = 0x341994u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[0];
    // 0x341998: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x341998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34199c: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x34199cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3419a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3419a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3419a4: 0x0  nop
    ctx->pc = 0x3419a4u;
    // NOP
    // 0x3419a8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3419a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x3419ac: 0xc460ea98  lwc1        $f0, -0x1568($v1)
    ctx->pc = 0x3419acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3419b0: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x3419b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x3419b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3419b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3419b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3419b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3419bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3419bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3419c0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3419C0u;
    {
        const bool branch_taken_0x3419c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3419C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3419C0u;
        // 0x3419c4: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3419c0) {
            ctx->pc = 0x3419CCu;
            goto label_3419cc;
        }
    }
    ctx->pc = 0x3419C8u;
    // 0x3419c8: 0x1cd  break       0, 7
    ctx->pc = 0x3419c8u;
    runtime->handleBreak(rdram, ctx);
label_3419cc:
    // 0x3419cc: 0x9812  mflo        $s3
    ctx->pc = 0x3419ccu;
    SET_GPR_U64(ctx, 19, ctx->lo);
    // 0x3419d0: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x3419D0u;
    {
        const bool branch_taken_0x3419d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3419d0) {
            ctx->pc = 0x3419DCu;
            goto label_3419dc;
        }
    }
    ctx->pc = 0x3419D8u;
    // 0x3419d8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3419d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3419dc:
    // 0x3419dc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3419dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3419e0: 0xc463ea9c  lwc1        $f3, -0x1564($v1)
    ctx->pc = 0x3419e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3419e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3419e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3419e8: 0x0  nop
    ctx->pc = 0x3419e8u;
    // NOP
    // 0x3419ec: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3419ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3419f0: 0x45010026  bc1t        . + 4 + (0x26 << 2)
    ctx->pc = 0x3419F0u;
    {
        const bool branch_taken_0x3419f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3419f0) {
            ctx->pc = 0x341A8Cu;
            goto label_341a8c;
        }
    }
    ctx->pc = 0x3419F8u;
    // 0x3419f8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3419f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x3419fc: 0x8c63eaac  lw          $v1, -0x1554($v1)
    ctx->pc = 0x3419fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961836)));
    // 0x341a00: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x341A00u;
    {
        const bool branch_taken_0x341a00 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x341a00) {
            ctx->pc = 0x341A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341A00u;
            // 0x341a04: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341A14u;
            goto label_341a14;
        }
    }
    ctx->pc = 0x341A08u;
    // 0x341a08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x341a08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341a0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x341A0Cu;
    {
        const bool branch_taken_0x341a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A0Cu;
        // 0x341a10: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341a0c) {
            ctx->pc = 0x341A2Cu;
            goto label_341a2c;
        }
    }
    ctx->pc = 0x341A14u;
label_341a14:
    // 0x341a14: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x341a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x341a18: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x341a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x341a1c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341a1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341a20: 0x0  nop
    ctx->pc = 0x341a20u;
    // NOP
    // 0x341a24: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x341a24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x341a28: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x341a28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_341a2c:
    // 0x341a2c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x341a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x341a30: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x341a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x341a34: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341a34u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341a38: 0x0  nop
    ctx->pc = 0x341a38u;
    // NOP
    // 0x341a3c: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x341a3cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x341a40: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x341a40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x341a44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x341a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341a48: 0x0  nop
    ctx->pc = 0x341a48u;
    // NOP
    // 0x341a4c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x341a4cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x341a50: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x341a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x341a54: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x341a54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x341a58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341a58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x341a5c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x341a5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x341a60: 0x0  nop
    ctx->pc = 0x341a60u;
    // NOP
    // 0x341a64: 0x58600005  blezl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x341A64u;
    {
        const bool branch_taken_0x341a64 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x341a64) {
            ctx->pc = 0x341A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341A64u;
            // 0x341a68: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341A7Cu;
            goto label_341a7c;
        }
    }
    ctx->pc = 0x341A6Cu;
    // 0x341a6c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x341A6Cu;
    {
        const bool branch_taken_0x341a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A6Cu;
        // 0x341a70: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341a6c) {
            ctx->pc = 0x341A78u;
            goto label_341a78;
        }
    }
    ctx->pc = 0x341A74u;
    // 0x341a74: 0x1cd  break       0, 7
    ctx->pc = 0x341a74u;
    runtime->handleBreak(rdram, ctx);
label_341a78:
    // 0x341a78: 0x8012  mflo        $s0
    ctx->pc = 0x341a78u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_341a7c:
    // 0x341a7c: 0x16000028  bnez        $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x341A7Cu;
    {
        const bool branch_taken_0x341a7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x341a7c) {
            ctx->pc = 0x341B20u;
            goto label_341b20;
        }
    }
    ctx->pc = 0x341A84u;
    // 0x341a84: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x341A84u;
    {
        const bool branch_taken_0x341a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341A84u;
        // 0x341a88: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341a84) {
            ctx->pc = 0x341B20u;
            goto label_341b20;
        }
    }
    ctx->pc = 0x341A8Cu;
label_341a8c:
    // 0x341a8c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x341a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x341a90: 0x8c63eaac  lw          $v1, -0x1554($v1)
    ctx->pc = 0x341a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961836)));
    // 0x341a94: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x341A94u;
    {
        const bool branch_taken_0x341a94 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x341a94) {
            ctx->pc = 0x341A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341A94u;
            // 0x341a98: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341AA8u;
            goto label_341aa8;
        }
    }
    ctx->pc = 0x341A9Cu;
    // 0x341a9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x341a9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341aa0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x341AA0u;
    {
        const bool branch_taken_0x341aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AA0u;
        // 0x341aa4: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341aa0) {
            ctx->pc = 0x341AC0u;
            goto label_341ac0;
        }
    }
    ctx->pc = 0x341AA8u;
label_341aa8:
    // 0x341aa8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x341aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x341aac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x341aacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x341ab0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341ab0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341ab4: 0x0  nop
    ctx->pc = 0x341ab4u;
    // NOP
    // 0x341ab8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x341ab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x341abc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x341abcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_341ac0:
    // 0x341ac0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x341ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x341ac4: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x341ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x341ac8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x341ac8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341acc: 0x0  nop
    ctx->pc = 0x341accu;
    // NOP
    // 0x341ad0: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x341ad0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
    // 0x341ad4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x341ad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x341ad8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x341ad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341adc: 0x0  nop
    ctx->pc = 0x341adcu;
    // NOP
    // 0x341ae0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x341ae0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x341ae4: 0x4604101c  madd.s      $f0, $f2, $f4
    ctx->pc = 0x341ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[4]));
    // 0x341ae8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x341ae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x341aec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341aecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x341af0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x341af0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x341af4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x341AF4u;
    {
        const bool branch_taken_0x341af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x341AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341AF4u;
        // 0x341af8: 0x62001a  div         $zero, $v1, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341af4) {
            ctx->pc = 0x341B00u;
            goto label_341b00;
        }
    }
    ctx->pc = 0x341AFCu;
    // 0x341afc: 0x1cd  break       0, 7
    ctx->pc = 0x341afcu;
    runtime->handleBreak(rdram, ctx);
label_341b00:
    // 0x341b00: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x341b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x341b04: 0x8c50eaa4  lw          $s0, -0x155C($v0)
    ctx->pc = 0x341b04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961828)));
    // 0x341b08: 0x1812  mflo        $v1
    ctx->pc = 0x341b08u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x341b0c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x341b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x341b10: 0x2028823  subu        $s1, $s0, $v0
    ctx->pc = 0x341b10u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x341b14: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x341B14u;
    {
        const bool branch_taken_0x341b14 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x341b14) {
            ctx->pc = 0x341B20u;
            goto label_341b20;
        }
    }
    ctx->pc = 0x341B1Cu;
    // 0x341b1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x341b1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_341b20:
    // 0x341b20: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x341b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x341b24: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x341b24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x341b28: 0x8c42eaa0  lw          $v0, -0x1560($v0)
    ctx->pc = 0x341b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961824)));
    // 0x341b2c: 0x53082b  sltu        $at, $v0, $s3
    ctx->pc = 0x341b2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x341b30: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x341B30u;
    {
        const bool branch_taken_0x341b30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x341B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B30u;
        // 0x341b34: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b30) {
            ctx->pc = 0x341B3Cu;
            goto label_341b3c;
        }
    }
    ctx->pc = 0x341B38u;
    // 0x341b38: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x341b38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_341b3c:
    // 0x341b3c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x341b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x341b40: 0x8c42eaa4  lw          $v0, -0x155C($v0)
    ctx->pc = 0x341b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961828)));
    // 0x341b44: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x341b44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x341b48: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x341B48u;
    {
        const bool branch_taken_0x341b48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x341b48) {
            ctx->pc = 0x341B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341B48u;
            // 0x341b4c: 0x230082a  slt         $at, $s1, $s0 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x341B58u;
            goto label_341b58;
        }
    }
    ctx->pc = 0x341B50u;
    // 0x341b50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x341b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341b54: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x341b54u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_341b58:
    // 0x341b58: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x341B58u;
    {
        const bool branch_taken_0x341b58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x341b58) {
            ctx->pc = 0x341C48u;
            goto label_341c48;
        }
    }
    ctx->pc = 0x341B60u;
label_341b60:
    // 0x341b60: 0x1a600035  blez        $s3, . + 4 + (0x35 << 2)
    ctx->pc = 0x341B60u;
    {
        const bool branch_taken_0x341b60 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x341B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341B60u;
        // 0x341b64: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341b60) {
            ctx->pc = 0x341C38u;
            goto label_341c38;
        }
    }
    ctx->pc = 0x341B68u;
label_341b68:
    // 0x341b68: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x341b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x341b6c: 0x8c42e900  lw          $v0, -0x1700($v0)
    ctx->pc = 0x341b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961408)));
    // 0x341b70: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x341b74: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x341b74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x341b78: 0x2484e9d0  addiu       $a0, $a0, -0x1630
    ctx->pc = 0x341b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961616));
    // 0x341b7c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x341b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x341b80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x341b80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341b84: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x341b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x341b88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x341b88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341b8c: 0x24423480  addiu       $v0, $v0, 0x3480
    ctx->pc = 0x341b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13440));
    // 0x341b90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x341b90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341b94: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x341b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x341b98: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x341b98u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341b9c: 0xc040532  jal         func_1014C8
    ctx->pc = 0x341B9Cu;
    SET_GPR_U32(ctx, 31, 0x341BA4u);
    ctx->pc = 0x341BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341B9Cu;
    // 0x341ba0: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1014C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1014C8u, 0x341B9Cu, 0x341BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341BA4u;
label_341ba4:
    // 0x341ba4: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x341BA4u;
    SET_GPR_U32(ctx, 31, 0x341BACu);
    ctx->pc = 0x341BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341BA4u;
    // 0x341ba8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CEE0u, 0x341BA4u, 0x341BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341BACu;
label_341bac:
    // 0x341bac: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x341bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x341bb0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x341bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x341bb4: 0x8c63eaa0  lw          $v1, -0x1560($v1)
    ctx->pc = 0x341bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961824)));
    // 0x341bb8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x341bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x341bbc: 0x8c42ea58  lw          $v0, -0x15A8($v0)
    ctx->pc = 0x341bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961752)));
    // 0x341bc0: 0x2484e9d0  addiu       $a0, $a0, -0x1630
    ctx->pc = 0x341bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961616));
    // 0x341bc4: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x341bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x341bc8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x341bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x341bcc: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x341bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
    // 0x341bd0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x341bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x341bd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x341bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x341bd8: 0xc0405fc  jal         func_1017F0
    ctx->pc = 0x341BD8u;
    SET_GPR_U32(ctx, 31, 0x341BE0u);
    ctx->pc = 0x341BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341BD8u;
    // 0x341bdc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1017F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1017F0u, 0x341BD8u, 0x341BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341BE0u;
label_341be0:
    // 0x341be0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x341be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341be4: 0xc040454  jal         func_101150
    ctx->pc = 0x341BE4u;
    SET_GPR_U32(ctx, 31, 0x341BECu);
    ctx->pc = 0x341BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341BE4u;
    // 0x341be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101150u, 0x341BE4u, 0x341BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341BECu;
label_341bec:
    // 0x341bec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x341becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x341bf0: 0xc0d0528  jal         func_3414A0
    ctx->pc = 0x341BF0u;
    SET_GPR_U32(ctx, 31, 0x341BF8u);
    ctx->pc = 0x341BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x341BF0u;
    // 0x341bf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3414A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3414A0u, 0x341BF0u, 0x341BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341BF8u;
label_341bf8:
    // 0x341bf8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x341bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x341bfc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x341bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x341c00: 0x8c64e900  lw          $a0, -0x1700($v1)
    ctx->pc = 0x341c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961408)));
    // 0x341c04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x341c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x341c08: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x341c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x341c0c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x341C0Cu;
    {
        const bool branch_taken_0x341c0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x341C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C0Cu;
        // 0x341c10: 0xac44e900  sw          $a0, -0x1700($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x341c0c) {
            ctx->pc = 0x341C28u;
            goto label_341c28;
        }
    }
    ctx->pc = 0x341C14u;
    // 0x341c14: 0xc0d0618  jal         func_341860
    ctx->pc = 0x341C14u;
    SET_GPR_U32(ctx, 31, 0x341C1Cu);
    ctx->pc = 0x341860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341860u, 0x341C14u, 0x341C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341C1Cu;
label_341c1c:
    // 0x341c1c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x341c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x341c20: 0xac40e900  sw          $zero, -0x1700($v0)
    ctx->pc = 0x341c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961408), GPR_U32(ctx, 0));
    // 0x341c24: 0x0  nop
    ctx->pc = 0x341c24u;
    // NOP
label_341c28:
    // 0x341c28: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x341c28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x341c2c: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x341c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x341c30: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x341C30u;
    {
        const bool branch_taken_0x341c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341c30) {
            ctx->pc = 0x341B68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_341b68;
        }
    }
    ctx->pc = 0x341C38u;
label_341c38:
    // 0x341c38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x341c38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x341c3c: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x341c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x341c40: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x341C40u;
    {
        const bool branch_taken_0x341c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341c40) {
            ctx->pc = 0x341B60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_341b60;
        }
    }
    ctx->pc = 0x341C48u;
label_341c48:
    // 0x341c48: 0xc0d0618  jal         func_341860
    ctx->pc = 0x341C48u;
    SET_GPR_U32(ctx, 31, 0x341C50u);
    ctx->pc = 0x341860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341860u, 0x341C48u, 0x341C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341C50u;
label_341c50:
    // 0x341c50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x341c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x341c54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x341c54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x341c58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x341c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x341c5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x341c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x341c60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x341c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x341c64: 0x3e00008  jr          $ra
    ctx->pc = 0x341C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x341C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341C64u;
        // 0x341c68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x341C6Cu;
    // 0x341c6c: 0x0  nop
    ctx->pc = 0x341c6cu;
    // NOP
}
