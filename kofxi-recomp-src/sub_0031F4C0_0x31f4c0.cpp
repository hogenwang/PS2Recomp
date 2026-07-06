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

// Function: sub_0031F4C0
// Address: 0x31f4c0 - 0x31f610
void sub_0031F4C0_0x31f4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F4C0_0x31f4c0");
#endif

    switch (ctx->pc) {
        case 0x31f5fcu: goto label_31f5fc;
        case 0x31f604u: goto label_31f604;
        default: break;
    }

    ctx->pc = 0x31f4c0u;

    // 0x31f4c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31f4c4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31f4c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f4cc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31f4d0: 0x8446db22  lh          $a2, -0x24DE($v0)
    ctx->pc = 0x31f4d0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957858)));
    // 0x31f4d4: 0xc466db24  lwc1        $f6, -0x24DC($v1)
    ctx->pc = 0x31f4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x31f4d8: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x31f4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x31f4dc: 0x3c09009c  lui         $t1, 0x9C
    ctx->pc = 0x31f4dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)156 << 16));
    // 0x31f4e0: 0x3c08009c  lui         $t0, 0x9C
    ctx->pc = 0x31f4e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)156 << 16));
    // 0x31f4e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31f4e8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x31f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x31f4ec: 0x8445db2a  lh          $a1, -0x24D6($v0)
    ctx->pc = 0x31f4ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957866)));
    // 0x31f4f0: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x31f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
    // 0x31f4f4: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x31f4f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x31f4f8: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x31f4f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x31f4fc: 0xa487db2c  sh          $a3, -0x24D4($a0)
    ctx->pc = 0x31f4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4294957868), (uint16_t)GPR_U32(ctx, 7));
    // 0x31f500: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31f500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31f504: 0x3c044420  lui         $a0, 0x4420
    ctx->pc = 0x31f504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17440 << 16));
    // 0x31f508: 0x8446db20  lh          $a2, -0x24E0($v0)
    ctx->pc = 0x31f508u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957856)));
    // 0x31f50c: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x31f50cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x31f510: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x31f510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x31f514: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x31f514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x31f518: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31f518u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31f51c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31f51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f520: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31f520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31f524: 0x8445db28  lh          $a1, -0x24D8($v0)
    ctx->pc = 0x31f524u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957864)));
    // 0x31f528: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x31f528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x31f52c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31f530: 0xa447db18  sh          $a3, -0x24E8($v0)
    ctx->pc = 0x31f530u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957848), (uint16_t)GPR_U32(ctx, 7));
    // 0x31f534: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x31f534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x31f538: 0x3c07009c  lui         $a3, 0x9C
    ctx->pc = 0x31f538u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)156 << 16));
    // 0x31f53c: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x31f53cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31f540: 0xa462db30  sh          $v0, -0x24D0($v1)
    ctx->pc = 0x31f540u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294957872), (uint16_t)GPR_U32(ctx, 2));
    // 0x31f544: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x31f544u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x31f548: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31f548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31f54c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31f54cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f550: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x31f550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x31f554: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x31f554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x31f558: 0xa443db1c  sh          $v1, -0x24E4($v0)
    ctx->pc = 0x31f558u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294957852), (uint16_t)GPR_U32(ctx, 3));
    // 0x31f55c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x31f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x31f560: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x31f560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
    // 0x31f564: 0x344a0b61  ori         $t2, $v0, 0xB61
    ctx->pc = 0x31f564u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2913);
    // 0x31f568: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x31f568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x31f56c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x31f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x31f570: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x31f570u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x31f574: 0xc46209a8  lwc1        $f2, 0x9A8($v1)
    ctx->pc = 0x31f574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f578: 0xc48009a0  lwc1        $f0, 0x9A0($a0)
    ctx->pc = 0x31f578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f57c: 0xc4a10998  lwc1        $f1, 0x998($a1)
    ctx->pc = 0x31f57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 2456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f580: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x31f580u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x31f584: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x31f584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x31f588: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x31f588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31f58c: 0xc44009b0  lwc1        $f0, 0x9B0($v0)
    ctx->pc = 0x31f58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f590: 0x46051018  adda.s      $f2, $f5
    ctx->pc = 0x31f590u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[5]));
    // 0x31f594: 0x4606395c  madd.s      $f5, $f7, $f6
    ctx->pc = 0x31f594u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[7], ctx->f[6]));
    // 0x31f598: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x31f598u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[3]));
    // 0x31f59c: 0x460028e4  .word       0x460028E4                   # cvt.w.s     $f3, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31f59cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x31f5a0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x31f5a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31f5a4: 0x4606209c  madd.s      $f2, $f4, $f6
    ctx->pc = 0x31f5a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[6]));
    // 0x31f5a8: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x31f5a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31f5ac: 0x0  nop
    ctx->pc = 0x31f5acu;
    // NOP
    // 0x31f5b0: 0xa522db2e  sh          $v0, -0x24D2($t1)
    ctx->pc = 0x31f5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 4294957870), (uint16_t)GPR_U32(ctx, 2));
    // 0x31f5b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31f5b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31f5b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31f5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31f5bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31f5bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31f5c0: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x31f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x31f5c4: 0xa4e2db1a  sh          $v0, -0x24E6($a3)
    ctx->pc = 0x31f5c4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4294957850), (uint16_t)GPR_U32(ctx, 2));
    // 0x31f5c8: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x31f5c8u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31f5cc: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31f5ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x31f5d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x31f5d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f5d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31f5d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31f5d8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x31f5d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x31f5dc: 0x0  nop
    ctx->pc = 0x31f5dcu;
    // NOP
    // 0x31f5e0: 0xa502db32  sh          $v0, -0x24CE($t0)
    ctx->pc = 0x31f5e0u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4294957874), (uint16_t)GPR_U32(ctx, 2));
    // 0x31f5e4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x31f5e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x31f5e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x31f5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x31f5ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31f5ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31f5f0: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x31f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x31f5f4: 0xc0c0d80  jal         func_303600
    ctx->pc = 0x31F5F4u;
    SET_GPR_U32(ctx, 31, 0x31F5FCu);
    ctx->pc = 0x31F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F5F4u;
    // 0x31f5f8: 0xa4c2db1e  sh          $v0, -0x24E2($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 4294957854), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303600u, 0x31F5F4u, 0x31F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F5FCu;
label_31f5fc:
    // 0x31f5fc: 0xc0c0d20  jal         func_303480
    ctx->pc = 0x31F5FCu;
    SET_GPR_U32(ctx, 31, 0x31F604u);
    ctx->pc = 0x31F600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31F5FCu;
    // 0x31f600: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x303480u, 0x31F5FCu, 0x31F604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F604u;
label_31f604:
    // 0x31f604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f608: 0x3e00008  jr          $ra
    ctx->pc = 0x31F608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F608u;
        // 0x31f60c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F610u;
}
