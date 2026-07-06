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

// Function: sub_00178730
// Address: 0x178730 - 0x1788c0
void sub_00178730_0x178730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178730_0x178730");
#endif

    switch (ctx->pc) {
        case 0x1787e4u: goto label_1787e4;
        case 0x1788b0u: goto label_1788b0;
        default: break;
    }

    ctx->pc = 0x178730u;

    // 0x178730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x178730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x178734: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x178734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x178738: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x178738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17873c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17873cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x178740: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x178740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x178744: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x178744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178748: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x178748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17874c: 0xc540000c  lwc1        $f0, 0xC($t2)
    ctx->pc = 0x17874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178750: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x178750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x178754: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x178754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x178758: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x178758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17875c: 0xc5420010  lwc1        $f2, 0x10($t2)
    ctx->pc = 0x17875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x178760: 0xc5410014  lwc1        $f1, 0x14($t2)
    ctx->pc = 0x178760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x178764: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x178764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178768: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x178768u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x17876c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x17876cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x178770: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x178770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x178774: 0xc542001c  lwc1        $f2, 0x1C($t2)
    ctx->pc = 0x178774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x178778: 0xc5410020  lwc1        $f1, 0x20($t2)
    ctx->pc = 0x178778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17877c: 0xc5400024  lwc1        $f0, 0x24($t2)
    ctx->pc = 0x17877cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178780: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x178780u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x178784: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x178784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x178788: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x178788u;
    {
        const bool branch_taken_0x178788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178788u;
        // 0x17878c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x178788) {
            ctx->pc = 0x1787ECu;
            goto label_1787ec;
        }
    }
    ctx->pc = 0x178790u;
    // 0x178790: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x178790u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x178794: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178794u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x178798: 0x30ca00ff  andi        $t2, $a2, 0xFF
    ctx->pc = 0x178798u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17879c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x17879cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787a0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1787a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1787a4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1787a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1787a8: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1787a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1787ac: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1787acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1787b0: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1787b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1787b4: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1787b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1787b8: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x1787b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1787bc: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1787bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x1787c0: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x1787c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
    // 0x1787c4: 0x848b0000  lh          $t3, 0x0($a0)
    ctx->pc = 0x1787c4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1787c8: 0x46007306  mov.s       $f12, $f14
    ctx->pc = 0x1787c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[14]);
    // 0x1787cc: 0xc7ae0054  lwc1        $f14, 0x54($sp)
    ctx->pc = 0x1787ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1787d0: 0xc7ad0050  lwc1        $f13, 0x50($sp)
    ctx->pc = 0x1787d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1787d4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1787d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1787d8: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x1787d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1787dc: 0xc0c6a74  jal         func_31A9D0
    ctx->pc = 0x1787DCu;
    SET_GPR_U32(ctx, 31, 0x1787E4u);
    ctx->pc = 0x1787E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1787DCu;
    // 0x1787e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A9D0u, 0x1787DCu, 0x1787E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1787E4u;
label_1787e4:
    // 0x1787e4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1787E4u;
    {
        const bool branch_taken_0x1787e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1787E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787E4u;
        // 0x1787e8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787e4) {
            ctx->pc = 0x1788B4u;
            goto label_1788b4;
        }
    }
    ctx->pc = 0x1787ECu;
label_1787ec:
    // 0x1787ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1787ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1787f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1787f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1787f4: 0x0  nop
    ctx->pc = 0x1787f4u;
    // NOP
    // 0x1787f8: 0x460f0036  c.le.s      $f0, $f15
    ctx->pc = 0x1787f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[15])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1787fc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1787FCu;
    {
        const bool branch_taken_0x1787fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1787fc) {
            ctx->pc = 0x178800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1787FCu;
            // 0x178800: 0x46007bc1  sub.s       $f15, $f15, $f0 (Delay Slot)
            ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x178814u;
            goto label_178814;
        }
    }
    ctx->pc = 0x178804u;
    // 0x178804: 0x46007be4  .word       0x46007BE4                   # cvt.w.s     $f15, $f15 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178804u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[15]); std::memcpy(&ctx->f[15], &tmp, sizeof(tmp)); }
    // 0x178808: 0x44037800  mfc1        $v1, $f15
    ctx->pc = 0x178808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[15], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x17880c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17880Cu;
    {
        const bool branch_taken_0x17880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17880Cu;
        // 0x178810: 0x3c024f00  lui         $v0, 0x4F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17880c) {
            ctx->pc = 0x17882Cu;
            goto label_17882c;
        }
    }
    ctx->pc = 0x178814u;
label_178814:
    // 0x178814: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x178814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x178818: 0x46007be4  .word       0x46007BE4                   # cvt.w.s     $f15, $f15 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178818u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[15]); std::memcpy(&ctx->f[15], &tmp, sizeof(tmp)); }
    // 0x17881c: 0x44037800  mfc1        $v1, $f15
    ctx->pc = 0x17881cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[15], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x178820: 0x0  nop
    ctx->pc = 0x178820u;
    // NOP
    // 0x178824: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x178824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x178828: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x178828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_17882c:
    // 0x17882c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17882cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x178830: 0x0  nop
    ctx->pc = 0x178830u;
    // NOP
    // 0x178834: 0x46100036  c.le.s      $f0, $f16
    ctx->pc = 0x178834u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x178838: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x178838u;
    {
        const bool branch_taken_0x178838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x178838) {
            ctx->pc = 0x17883Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178838u;
            // 0x17883c: 0x46008001  sub.s       $f0, $f16, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[16], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x178850u;
            goto label_178850;
        }
    }
    ctx->pc = 0x178840u;
    // 0x178840: 0x46008024  .word       0x46008024                   # cvt.w.s     $f0, $f16 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178840u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[16]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x178844: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x178844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x178848: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x178848u;
    {
        const bool branch_taken_0x178848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178848u;
        // 0x17884c: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
        { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x178848) {
            ctx->pc = 0x178868u;
            goto label_178868;
        }
    }
    ctx->pc = 0x178850u;
label_178850:
    // 0x178850: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x178850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x178854: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178854u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x178858: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x178858u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x17885c: 0x0  nop
    ctx->pc = 0x17885cu;
    // NOP
    // 0x178860: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x178860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x178864: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178864u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_178868:
    // 0x178868: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x178868u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x17886c: 0x30ca00ff  andi        $t2, $a2, 0xFF
    ctx->pc = 0x17886cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x178870: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x178870u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178874: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x178874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178878: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x178878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x17887c: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x17887cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x178880: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x178880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x178884: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x178884u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x178888: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x178888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x17888c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x17888cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x178890: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x178890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x178894: 0x848b0000  lh          $t3, 0x0($a0)
    ctx->pc = 0x178894u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178898: 0x46007306  mov.s       $f12, $f14
    ctx->pc = 0x178898u;
    ctx->f[12] = FPU_MOV_S(ctx->f[14]);
    // 0x17889c: 0xc7ae0054  lwc1        $f14, 0x54($sp)
    ctx->pc = 0x17889cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1788a0: 0xc7ad0050  lwc1        $f13, 0x50($sp)
    ctx->pc = 0x1788a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1788a4: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x1788a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1788a8: 0xc0c7564  jal         func_31D590
    ctx->pc = 0x1788A8u;
    SET_GPR_U32(ctx, 31, 0x1788B0u);
    ctx->pc = 0x1788ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1788A8u;
    // 0x1788ac: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D590u, 0x1788A8u, 0x1788B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1788B0u;
label_1788b0:
    // 0x1788b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1788b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1788b4:
    // 0x1788b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1788B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1788B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788B4u;
        // 0x1788b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1788B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1788BCu;
    // 0x1788bc: 0x0  nop
    ctx->pc = 0x1788bcu;
    // NOP
}
