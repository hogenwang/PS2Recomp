#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00152350
// Address: 0x152350 - 0x152790
void sub_00152350_0x152350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152350_0x152350");
#endif

    switch (ctx->pc) {
        case 0x152434u: goto label_152434;
        case 0x15243cu: goto label_15243c;
        case 0x152498u: goto label_152498;
        case 0x1524d4u: goto label_1524d4;
        case 0x152514u: goto label_152514;
        case 0x152554u: goto label_152554;
        case 0x152574u: goto label_152574;
        case 0x152580u: goto label_152580;
        case 0x15272cu: goto label_15272c;
        case 0x152734u: goto label_152734;
        case 0x152754u: goto label_152754;
        case 0x15275cu: goto label_15275c;
        default: break;
    }

    ctx->pc = 0x152350u;

    // 0x152350: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x152350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x152354: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x152354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x152358: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x152358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x15235c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15235cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x152360: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x152360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x152364: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x152364u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152368: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x152368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15236c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15236cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152370: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152374: 0x8c63a208  lw          $v1, -0x5DF8($v1)
    ctx->pc = 0x152374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943240)));
    // 0x152378: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x152378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x15237c: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x15237Cu;
    {
        const bool branch_taken_0x15237c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15237Cu;
            // 0x152380: 0x2691008c  addiu       $s1, $s4, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15237c) {
            ctx->pc = 0x152434u;
            goto label_152434;
        }
    }
    ctx->pc = 0x152384u;
    // 0x152384: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x152384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x152388: 0x868a0000  lh          $t2, 0x0($s4)
    ctx->pc = 0x152388u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x15238c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15238cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x152390: 0x3c033a83  lui         $v1, 0x3A83
    ctx->pc = 0x152390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14979 << 16));
    // 0x152394: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x152394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x152398: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x152398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x15239c: 0x344400ff  ori         $a0, $v0, 0xFF
    ctx->pc = 0x15239cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1523a0: 0x86890002  lh          $t1, 0x2($s4)
    ctx->pc = 0x1523a0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x1523a4: 0x2542fff8  addiu       $v0, $t2, -0x8
    ctx->pc = 0x1523a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
    // 0x1523a8: 0x25480008  addiu       $t0, $t2, 0x8
    ctx->pc = 0x1523a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x1523ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1523acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1523b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1523b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1523b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1523b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1523b8: 0x25220008  addiu       $v0, $t1, 0x8
    ctx->pc = 0x1523b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x1523bc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1523bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1523c0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1523c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1523c4: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1523c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1523c8: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1523c8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1523cc: 0x0  nop
    ctx->pc = 0x1523ccu;
    // NOP
    // 0x1523d0: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x1523d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1523d4: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1523d4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1523d8: 0x0  nop
    ctx->pc = 0x1523d8u;
    // NOP
    // 0x1523dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1523dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1523e0: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1523e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1523e4: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1523e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1523e8: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x1523e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1523ec: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x1523ecu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1523f0: 0x0  nop
    ctx->pc = 0x1523f0u;
    // NOP
    // 0x1523f4: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x1523f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1523f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1523f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1523fc: 0x2523fff8  addiu       $v1, $t1, -0x8
    ctx->pc = 0x1523fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x152400: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x152400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152404: 0x0  nop
    ctx->pc = 0x152404u;
    // NOP
    // 0x152408: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x152408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15240c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x15240cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x152410: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x152410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152414: 0x0  nop
    ctx->pc = 0x152414u;
    // NOP
    // 0x152418: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x152418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15241c: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x15241cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x152420: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x152420u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x152424: 0xe7a1007c  swc1        $f1, 0x7C($sp)
    ctx->pc = 0x152424u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x152428: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x152428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15242c: 0xc0c10a4  jal         func_304290
    ctx->pc = 0x15242Cu;
    SET_GPR_U32(ctx, 31, 0x152434u);
    ctx->pc = 0x152430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15242Cu;
            // 0x152430: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x304290u;
    if (runtime->hasFunction(0x304290u)) {
        auto targetFn = runtime->lookupFunction(0x304290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152434u; }
        if (ctx->pc != 0x152434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304290_0x304290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152434u; }
        if (ctx->pc != 0x152434u) { return; }
    }
    ctx->pc = 0x152434u;
label_152434:
    // 0x152434: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x152434u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152438: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x152438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15243c:
    // 0x15243c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x15243cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x152440: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152444: 0x2484e7b8  addiu       $a0, $a0, -0x1848
    ctx->pc = 0x152444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961080));
    // 0x152448: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x152448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x15244c: 0xae23007c  sw          $v1, 0x7C($s1)
    ctx->pc = 0x15244cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 3));
    // 0x152450: 0x9243013c  lbu         $v1, 0x13C($s2)
    ctx->pc = 0x152450u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 316)));
    // 0x152454: 0x106000c2  beqz        $v1, . + 4 + (0xC2 << 2)
    ctx->pc = 0x152454u;
    {
        const bool branch_taken_0x152454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x152458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152454u;
            // 0x152458: 0x2650013c  addiu       $s0, $s2, 0x13C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 316));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152454) {
            ctx->pc = 0x152760u;
            goto label_152760;
        }
    }
    ctx->pc = 0x15245Cu;
    // 0x15245c: 0x92030014  lbu         $v1, 0x14($s0)
    ctx->pc = 0x15245cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x152460: 0x92820078  lbu         $v0, 0x78($s4)
    ctx->pc = 0x152460u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x152464: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x152464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x152468: 0xa222008a  sb          $v0, 0x8A($s1)
    ctx->pc = 0x152468u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 138), (uint8_t)GPR_U32(ctx, 2));
    // 0x15246c: 0x9222008a  lbu         $v0, 0x8A($s1)
    ctx->pc = 0x15246cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 138)));
    // 0x152470: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x152470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x152474: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x152474u;
    {
        const bool branch_taken_0x152474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152474) {
            ctx->pc = 0x1524B8u;
            goto label_1524b8;
        }
    }
    ctx->pc = 0x15247Cu;
    // 0x15247c: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x15247cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x152480: 0xc680007c  lwc1        $f0, 0x7C($s4)
    ctx->pc = 0x152480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152484: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x152484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152488: 0x0  nop
    ctx->pc = 0x152488u;
    // NOP
    // 0x15248c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15248cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x152490: 0xc067d34  jal         func_19F4D0
    ctx->pc = 0x152490u;
    SET_GPR_U32(ctx, 31, 0x152498u);
    ctx->pc = 0x152494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152490u;
            // 0x152494: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F4D0u;
    if (runtime->hasFunction(0x19F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x19F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152498u; }
        if (ctx->pc != 0x152498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F4D0_0x19f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152498u; }
        if (ctx->pc != 0x152498u) { return; }
    }
    ctx->pc = 0x152498u;
label_152498:
    // 0x152498: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x152498u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15249c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15249cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1524a0: 0x0  nop
    ctx->pc = 0x1524a0u;
    // NOP
    // 0x1524a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1524a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1524a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1524a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1524ac: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1524acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1524b0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1524B0u;
    {
        const bool branch_taken_0x1524b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1524B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1524B0u;
            // 0x1524b4: 0xa6220086  sh          $v0, 0x86($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 134), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1524b0) {
            ctx->pc = 0x1524E8u;
            goto label_1524e8;
        }
    }
    ctx->pc = 0x1524B8u;
label_1524b8:
    // 0x1524b8: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x1524b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1524bc: 0xc680007c  lwc1        $f0, 0x7C($s4)
    ctx->pc = 0x1524bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1524c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1524c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1524c4: 0x0  nop
    ctx->pc = 0x1524c4u;
    // NOP
    // 0x1524c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1524c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1524cc: 0xc067d34  jal         func_19F4D0
    ctx->pc = 0x1524CCu;
    SET_GPR_U32(ctx, 31, 0x1524D4u);
    ctx->pc = 0x1524D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1524CCu;
            // 0x1524d0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F4D0u;
    if (runtime->hasFunction(0x19F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x19F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1524D4u; }
        if (ctx->pc != 0x1524D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F4D0_0x19f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1524D4u; }
        if (ctx->pc != 0x1524D4u) { return; }
    }
    ctx->pc = 0x1524D4u;
label_1524d4:
    // 0x1524d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1524d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1524d8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1524d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1524dc: 0x0  nop
    ctx->pc = 0x1524dcu;
    // NOP
    // 0x1524e0: 0xa6220086  sh          $v0, 0x86($s1)
    ctx->pc = 0x1524e0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 134), (uint16_t)GPR_U32(ctx, 2));
    // 0x1524e4: 0x0  nop
    ctx->pc = 0x1524e4u;
    // NOP
label_1524e8:
    // 0x1524e8: 0x9222008a  lbu         $v0, 0x8A($s1)
    ctx->pc = 0x1524e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 138)));
    // 0x1524ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1524ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1524f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1524F0u;
    {
        const bool branch_taken_0x1524f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1524f0) {
            ctx->pc = 0x152538u;
            goto label_152538;
        }
    }
    ctx->pc = 0x1524F8u;
    // 0x1524f8: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x1524f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1524fc: 0xc6800080  lwc1        $f0, 0x80($s4)
    ctx->pc = 0x1524fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152500: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x152500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152504: 0x0  nop
    ctx->pc = 0x152504u;
    // NOP
    // 0x152508: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x152508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15250c: 0xc067d34  jal         func_19F4D0
    ctx->pc = 0x15250Cu;
    SET_GPR_U32(ctx, 31, 0x152514u);
    ctx->pc = 0x152510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15250Cu;
            // 0x152510: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F4D0u;
    if (runtime->hasFunction(0x19F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x19F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152514u; }
        if (ctx->pc != 0x152514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F4D0_0x19f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152514u; }
        if (ctx->pc != 0x152514u) { return; }
    }
    ctx->pc = 0x152514u;
label_152514:
    // 0x152514: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x152514u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x152518: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x152518u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15251c: 0x0  nop
    ctx->pc = 0x15251cu;
    // NOP
    // 0x152520: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x152520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x152524: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x152524u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x152528: 0x21023  negu        $v0, $v0
    ctx->pc = 0x152528u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x15252c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15252Cu;
    {
        const bool branch_taken_0x15252c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15252Cu;
            // 0x152530: 0xa6220088  sh          $v0, 0x88($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 136), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15252c) {
            ctx->pc = 0x152568u;
            goto label_152568;
        }
    }
    ctx->pc = 0x152534u;
    // 0x152534: 0x0  nop
    ctx->pc = 0x152534u;
    // NOP
label_152538:
    // 0x152538: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x152538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15253c: 0xc6800080  lwc1        $f0, 0x80($s4)
    ctx->pc = 0x15253cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x152540: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x152540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x152544: 0x0  nop
    ctx->pc = 0x152544u;
    // NOP
    // 0x152548: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x152548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x15254c: 0xc067d34  jal         func_19F4D0
    ctx->pc = 0x15254Cu;
    SET_GPR_U32(ctx, 31, 0x152554u);
    ctx->pc = 0x152550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15254Cu;
            // 0x152550: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F4D0u;
    if (runtime->hasFunction(0x19F4D0u)) {
        auto targetFn = runtime->lookupFunction(0x19F4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152554u; }
        if (ctx->pc != 0x152554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F4D0_0x19f4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152554u; }
        if (ctx->pc != 0x152554u) { return; }
    }
    ctx->pc = 0x152554u;
label_152554:
    // 0x152554: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x152554u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x152558: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x152558u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15255c: 0x0  nop
    ctx->pc = 0x15255cu;
    // NOP
    // 0x152560: 0xa6220088  sh          $v0, 0x88($s1)
    ctx->pc = 0x152560u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 136), (uint16_t)GPR_U32(ctx, 2));
    // 0x152564: 0x0  nop
    ctx->pc = 0x152564u;
    // NOP
label_152568:
    // 0x152568: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x152568u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15256c: 0xc054c54  jal         func_153150
    ctx->pc = 0x15256Cu;
    SET_GPR_U32(ctx, 31, 0x152574u);
    ctx->pc = 0x152570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15256Cu;
            // 0x152570: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153150u;
    if (runtime->hasFunction(0x153150u)) {
        auto targetFn = runtime->lookupFunction(0x153150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152574u; }
        if (ctx->pc != 0x152574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153150_0x153150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152574u; }
        if (ctx->pc != 0x152574u) { return; }
    }
    ctx->pc = 0x152574u;
label_152574:
    // 0x152574: 0x87a50090  lh          $a1, 0x90($sp)
    ctx->pc = 0x152574u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x152578: 0xc054c7c  jal         func_1531F0
    ctx->pc = 0x152578u;
    SET_GPR_U32(ctx, 31, 0x152580u);
    ctx->pc = 0x15257Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152578u;
            // 0x15257c: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1531F0u;
    if (runtime->hasFunction(0x1531F0u)) {
        auto targetFn = runtime->lookupFunction(0x1531F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152580u; }
        if (ctx->pc != 0x152580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001531F0_0x1531f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152580u; }
        if (ctx->pc != 0x152580u) { return; }
    }
    ctx->pc = 0x152580u;
label_152580:
    // 0x152580: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x152580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x152584: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x152584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x152588: 0x92030015  lbu         $v1, 0x15($s0)
    ctx->pc = 0x152588u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
    // 0x15258c: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15258Cu;
    {
        const bool branch_taken_0x15258c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15258c) {
            ctx->pc = 0x1525E0u;
            goto label_1525e0;
        }
    }
    ctx->pc = 0x152594u;
    // 0x152594: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x152594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x152598: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x152598u;
    {
        const bool branch_taken_0x152598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x152598) {
            ctx->pc = 0x1525D0u;
            goto label_1525d0;
        }
    }
    ctx->pc = 0x1525A0u;
    // 0x1525a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1525a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1525a4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1525A4u;
    {
        const bool branch_taken_0x1525a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1525a4) {
            ctx->pc = 0x1525C8u;
            goto label_1525c8;
        }
    }
    ctx->pc = 0x1525ACu;
    // 0x1525ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1525ACu;
    {
        const bool branch_taken_0x1525ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525ac) {
            ctx->pc = 0x1525C0u;
            goto label_1525c0;
        }
    }
    ctx->pc = 0x1525B4u;
    // 0x1525b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1525B4u;
    {
        const bool branch_taken_0x1525b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525b4) {
            ctx->pc = 0x1525E8u;
            goto label_1525e8;
        }
    }
    ctx->pc = 0x1525BCu;
    // 0x1525bc: 0x0  nop
    ctx->pc = 0x1525bcu;
    // NOP
label_1525c0:
    // 0x1525c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1525C0u;
    {
        const bool branch_taken_0x1525c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1525C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1525C0u;
            // 0x1525c4: 0xae200078  sw          $zero, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525c0) {
            ctx->pc = 0x1525E8u;
            goto label_1525e8;
        }
    }
    ctx->pc = 0x1525C8u;
label_1525c8:
    // 0x1525c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1525C8u;
    {
        const bool branch_taken_0x1525c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1525CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1525C8u;
            // 0x1525cc: 0xae200078  sw          $zero, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525c8) {
            ctx->pc = 0x1525E8u;
            goto label_1525e8;
        }
    }
    ctx->pc = 0x1525D0u;
label_1525d0:
    // 0x1525d0: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x1525d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1525d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1525D4u;
    {
        const bool branch_taken_0x1525d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1525D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1525D4u;
            // 0x1525d8: 0xae220078  sw          $v0, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1525d4) {
            ctx->pc = 0x1525E8u;
            goto label_1525e8;
        }
    }
    ctx->pc = 0x1525DCu;
    // 0x1525dc: 0x0  nop
    ctx->pc = 0x1525dcu;
    // NOP
label_1525e0:
    // 0x1525e0: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x1525e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x1525e4: 0x0  nop
    ctx->pc = 0x1525e4u;
    // NOP
label_1525e8:
    // 0x1525e8: 0x97a20096  lhu         $v0, 0x96($sp)
    ctx->pc = 0x1525e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 150)));
    // 0x1525ec: 0xa6220082  sh          $v0, 0x82($s1)
    ctx->pc = 0x1525ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x1525f0: 0x97a20098  lhu         $v0, 0x98($sp)
    ctx->pc = 0x1525f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1525f4: 0xa6220084  sh          $v0, 0x84($s1)
    ctx->pc = 0x1525f4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x1525f8: 0xa220008b  sb          $zero, 0x8B($s1)
    ctx->pc = 0x1525f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 139), (uint8_t)GPR_U32(ctx, 0));
    // 0x1525fc: 0x87a20090  lh          $v0, 0x90($sp)
    ctx->pc = 0x1525fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x152600: 0xa6220080  sh          $v0, 0x80($s1)
    ctx->pc = 0x152600u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x152604: 0x97a20092  lhu         $v0, 0x92($sp)
    ctx->pc = 0x152604u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 146)));
    // 0x152608: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152608u;
    {
        const bool branch_taken_0x152608 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x152608) {
            ctx->pc = 0x15260Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152608u;
            // 0x15260c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15261Cu;
            goto label_15261c;
        }
    }
    ctx->pc = 0x152610u;
    // 0x152610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152614: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152614u;
    {
        const bool branch_taken_0x152614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152614u;
            // 0x152618: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152614) {
            ctx->pc = 0x152634u;
            goto label_152634;
        }
    }
    ctx->pc = 0x15261Cu;
label_15261c:
    // 0x15261c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15261cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x152620: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x152620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x152624: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152628: 0x0  nop
    ctx->pc = 0x152628u;
    // NOP
    // 0x15262c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x15262cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x152630: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x152630u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_152634:
    // 0x152634: 0x97a20094  lhu         $v0, 0x94($sp)
    ctx->pc = 0x152634u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x152638: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152638u;
    {
        const bool branch_taken_0x152638 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x152638) {
            ctx->pc = 0x15263Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152638u;
            // 0x15263c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15264Cu;
            goto label_15264c;
        }
    }
    ctx->pc = 0x152640u;
    // 0x152640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152644: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152644u;
    {
        const bool branch_taken_0x152644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152644u;
            // 0x152648: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152644) {
            ctx->pc = 0x152664u;
            goto label_152664;
        }
    }
    ctx->pc = 0x15264Cu;
label_15264c:
    // 0x15264c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x152650: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x152650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x152654: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152658: 0x0  nop
    ctx->pc = 0x152658u;
    // NOP
    // 0x15265c: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x15265cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x152660: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x152660u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_152664:
    // 0x152664: 0x97a20096  lhu         $v0, 0x96($sp)
    ctx->pc = 0x152664u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 150)));
    // 0x152668: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152668u;
    {
        const bool branch_taken_0x152668 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x152668) {
            ctx->pc = 0x15266Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152668u;
            // 0x15266c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15267Cu;
            goto label_15267c;
        }
    }
    ctx->pc = 0x152670u;
    // 0x152670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152674: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152674u;
    {
        const bool branch_taken_0x152674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152674u;
            // 0x152678: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152674) {
            ctx->pc = 0x152694u;
            goto label_152694;
        }
    }
    ctx->pc = 0x15267Cu;
label_15267c:
    // 0x15267c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15267cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x152680: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x152680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x152684: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152688: 0x0  nop
    ctx->pc = 0x152688u;
    // NOP
    // 0x15268c: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x15268cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x152690: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x152690u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_152694:
    // 0x152694: 0x97a20098  lhu         $v0, 0x98($sp)
    ctx->pc = 0x152694u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x152698: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152698u;
    {
        const bool branch_taken_0x152698 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x152698) {
            ctx->pc = 0x15269Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152698u;
            // 0x15269c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1526ACu;
            goto label_1526ac;
        }
    }
    ctx->pc = 0x1526A0u;
    // 0x1526a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1526a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1526a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1526A4u;
    {
        const bool branch_taken_0x1526a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1526A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1526A4u;
            // 0x1526a8: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526a4) {
            ctx->pc = 0x1526C4u;
            goto label_1526c4;
        }
    }
    ctx->pc = 0x1526ACu;
label_1526ac:
    // 0x1526ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1526acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1526b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1526b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1526b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1526b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1526b8: 0x0  nop
    ctx->pc = 0x1526b8u;
    // NOP
    // 0x1526bc: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1526bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x1526c0: 0x460f7bc0  add.s       $f15, $f15, $f15
    ctx->pc = 0x1526c0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[15]);
label_1526c4:
    // 0x1526c4: 0x97a2009c  lhu         $v0, 0x9C($sp)
    ctx->pc = 0x1526c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1526c8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1526C8u;
    {
        const bool branch_taken_0x1526c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1526c8) {
            ctx->pc = 0x1526CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1526C8u;
            // 0x1526cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1526DCu;
            goto label_1526dc;
        }
    }
    ctx->pc = 0x1526D0u;
    // 0x1526d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1526d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1526d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1526D4u;
    {
        const bool branch_taken_0x1526d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1526D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1526D4u;
            // 0x1526d8: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1526d4) {
            ctx->pc = 0x1526F4u;
            goto label_1526f4;
        }
    }
    ctx->pc = 0x1526DCu;
label_1526dc:
    // 0x1526dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1526dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1526e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1526e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1526e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1526e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1526e8: 0x0  nop
    ctx->pc = 0x1526e8u;
    // NOP
    // 0x1526ec: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x1526ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x1526f0: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x1526f0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_1526f4:
    // 0x1526f4: 0x97a2009e  lhu         $v0, 0x9E($sp)
    ctx->pc = 0x1526f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 158)));
    // 0x1526f8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1526F8u;
    {
        const bool branch_taken_0x1526f8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1526f8) {
            ctx->pc = 0x1526FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1526F8u;
            // 0x1526fc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15270Cu;
            goto label_15270c;
        }
    }
    ctx->pc = 0x152700u;
    // 0x152700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152704: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152704u;
    {
        const bool branch_taken_0x152704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152704u;
            // 0x152708: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x152704) {
            ctx->pc = 0x152724u;
            goto label_152724;
        }
    }
    ctx->pc = 0x15270Cu;
label_15270c:
    // 0x15270c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15270cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x152710: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x152710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x152714: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152718: 0x0  nop
    ctx->pc = 0x152718u;
    // NOP
    // 0x15271c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x15271cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x152720: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x152720u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_152724:
    // 0x152724: 0xc05439c  jal         func_150E70
    ctx->pc = 0x152724u;
    SET_GPR_U32(ctx, 31, 0x15272Cu);
    ctx->pc = 0x152728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152724u;
            // 0x152728: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150E70u;
    if (runtime->hasFunction(0x150E70u)) {
        auto targetFn = runtime->lookupFunction(0x150E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15272Cu; }
        if (ctx->pc != 0x15272Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150E70_0x150e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15272Cu; }
        if (ctx->pc != 0x15272Cu) { return; }
    }
    ctx->pc = 0x15272Cu;
label_15272c:
    // 0x15272c: 0xc0581e4  jal         func_160790
    ctx->pc = 0x15272Cu;
    SET_GPR_U32(ctx, 31, 0x152734u);
    ctx->pc = 0x152730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15272Cu;
            // 0x152730: 0x26040016  addiu       $a0, $s0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160790u;
    if (runtime->hasFunction(0x160790u)) {
        auto targetFn = runtime->lookupFunction(0x160790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152734u; }
        if (ctx->pc != 0x152734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160790_0x160790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152734u; }
        if (ctx->pc != 0x152734u) { return; }
    }
    ctx->pc = 0x152734u;
label_152734:
    // 0x152734: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x152734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x152738: 0x9209001a  lbu         $t1, 0x1A($s0)
    ctx->pc = 0x152738u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x15273c: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x15273cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152740: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x152740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x152744: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x152744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152748: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x152748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15274c: 0xc0543b8  jal         func_150EE0
    ctx->pc = 0x15274Cu;
    SET_GPR_U32(ctx, 31, 0x152754u);
    ctx->pc = 0x152750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15274Cu;
            // 0x152750: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150EE0u;
    if (runtime->hasFunction(0x150EE0u)) {
        auto targetFn = runtime->lookupFunction(0x150EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152754u; }
        if (ctx->pc != 0x152754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150EE0_0x150ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x152754u; }
        if (ctx->pc != 0x152754u) { return; }
    }
    ctx->pc = 0x152754u;
label_152754:
    // 0x152754: 0xc0549e4  jal         func_152790
    ctx->pc = 0x152754u;
    SET_GPR_U32(ctx, 31, 0x15275Cu);
    ctx->pc = 0x152758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152754u;
            // 0x152758: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152790u;
    if (runtime->hasFunction(0x152790u)) {
        auto targetFn = runtime->lookupFunction(0x152790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15275Cu; }
        if (ctx->pc != 0x15275Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152790_0x152790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15275Cu; }
        if (ctx->pc != 0x15275Cu) { return; }
    }
    ctx->pc = 0x15275Cu;
label_15275c:
    // 0x15275c: 0x0  nop
    ctx->pc = 0x15275cu;
    // NOP
label_152760:
    // 0x152760: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x152760u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x152764: 0x2a630006  slti        $v1, $s3, 0x6
    ctx->pc = 0x152764u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x152768: 0x1460ff34  bnez        $v1, . + 4 + (-0xCC << 2)
    ctx->pc = 0x152768u;
    {
        const bool branch_taken_0x152768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15276Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152768u;
            // 0x15276c: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152768) {
            ctx->pc = 0x15243Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15243c;
        }
    }
    ctx->pc = 0x152770u;
    // 0x152770: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x152770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152774: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x152774u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152778: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x152778u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15277c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15277cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152788: 0x3e00008  jr          $ra
    ctx->pc = 0x152788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15278Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152788u;
            // 0x15278c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152790u;
    ctx->pc = 0x152790u;
}
