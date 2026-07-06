#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DC240
// Address: 0x2dc240 - 0x2dc410
void sub_002DC240_0x2dc240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC240_0x2dc240");
#endif

    switch (ctx->pc) {
        case 0x2dc294u: goto label_2dc294;
        case 0x2dc2b4u: goto label_2dc2b4;
        case 0x2dc2e0u: goto label_2dc2e0;
        case 0x2dc348u: goto label_2dc348;
        case 0x2dc380u: goto label_2dc380;
        case 0x2dc3a0u: goto label_2dc3a0;
        case 0x2dc3b0u: goto label_2dc3b0;
        case 0x2dc3c0u: goto label_2dc3c0;
        case 0x2dc3c8u: goto label_2dc3c8;
        case 0x2dc3dcu: goto label_2dc3dc;
        case 0x2dc3e4u: goto label_2dc3e4;
        default: break;
    }

    ctx->pc = 0x2dc240u;

    // 0x2dc240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dc240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dc244: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2dc244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2dc248: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dc248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc24c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2dc24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2dc250: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2dc250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2dc254: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2dc254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2dc258: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2dc258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2dc25c: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x2dc25cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2dc260: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x2dc260u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2dc264: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x2dc264u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2dc268: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dc268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2dc26c: 0x2463c2b4  addiu       $v1, $v1, -0x3D4C
    ctx->pc = 0x2dc26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951604));
    // 0x2dc270: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dc270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc274: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DC274u;
    {
        const bool branch_taken_0x2dc274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc274) {
            ctx->pc = 0x2DC294u;
            goto label_2dc294;
        }
    }
    ctx->pc = 0x2DC27Cu;
    // 0x2dc27c: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dc27cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dc280: 0x2484c2c8  addiu       $a0, $a0, -0x3D38
    ctx->pc = 0x2dc280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951624));
    // 0x2dc284: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2dc284u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dc288: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dc288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2dc28c: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DC28Cu;
    SET_GPR_U32(ctx, 31, 0x2DC294u);
    ctx->pc = 0x2DC290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC28Cu;
            // 0x2dc290: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC294u; }
        if (ctx->pc != 0x2DC294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC294u; }
        if (ctx->pc != 0x2DC294u) { return; }
    }
    ctx->pc = 0x2DC294u;
label_2dc294:
    // 0x2dc294: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DC294u;
    {
        const bool branch_taken_0x2dc294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc294) {
            ctx->pc = 0x2DC2C8u;
            goto label_2dc2c8;
        }
    }
    ctx->pc = 0x2DC29Cu;
    // 0x2dc29c: 0xdcb47807  ld          $s4, 0x7807($a1)
    ctx->pc = 0x2dc29cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 5), 30727)));
    // 0x2dc2a0: 0x87c436f3  lh          $a0, 0x36F3($fp)
    ctx->pc = 0x2dc2a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 14067)));
    // 0x2dc2a4: 0x8612f21b  lh          $s2, -0xDE5($s0)
    ctx->pc = 0x2dc2a4u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4294963739)));
    // 0x2dc2a8: 0x2734f4d0  addiu       $s4, $t9, -0xB30
    ctx->pc = 0x2dc2a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 25), 4294964432));
    // 0x2dc2ac: 0xcf5812e  jal         func_3D604B8
    ctx->pc = 0x2DC2ACu;
    SET_GPR_U32(ctx, 31, 0x2DC2B4u);
    ctx->pc = 0x2DC2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC2ACu;
            // 0x2dc2b0: 0x8fddfdbd  lw          $sp, -0x243($fp) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294966717)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D604B8u;
    {
        auto targetFn = runtime->lookupFunction(0x3D604B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2B4u; }
        if (ctx->pc != 0x2DC2B4u) { return; }
    }
    ctx->pc = 0x2DC2B4u;
label_2dc2b4:
    // 0x2dc2b4: 0x0  nop
    ctx->pc = 0x2dc2b4u;
    // NOP
    // 0x2dc2b8: 0xde9b4004  ld          $k1, 0x4004($s4)
    ctx->pc = 0x2dc2b8u;
    SET_GPR_U64(ctx, 27, READ64(ADD32(GPR_U32(ctx, 20), 16388)));
    // 0x2dc2bc: 0xc712f590  lwc1        $f18, -0xA70($t8)
    ctx->pc = 0x2dc2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294964624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dc2c0: 0xde9b40c8  ld          $k1, 0x40C8($s4)
    ctx->pc = 0x2dc2c0u;
    SET_GPR_U64(ctx, 27, READ64(ADD32(GPR_U32(ctx, 20), 16584)));
    // 0x2dc2c4: 0x0  nop
    ctx->pc = 0x2dc2c4u;
    // NOP
label_2dc2c8:
    // 0x2dc2c8: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x2dc2c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dc2cc: 0x3c0c0006  lui         $t4, 0x6
    ctx->pc = 0x2dc2ccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)6 << 16));
    // 0x2dc2d0: 0x32d20a0  .word       0x032D20A0                   # add         $a0, $t9, $t5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc2d0u;
    {     int32_t rs_val = GPR_S32(ctx, 25);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x2dc2d4: 0x34699cc6  ori         $t1, $v1, 0x9CC6
    ctx->pc = 0x2dc2d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)40134);
    // 0x2dc2d8: 0xc0b76e0  jal         func_2DDB80
    ctx->pc = 0x2DC2D8u;
    SET_GPR_U32(ctx, 31, 0x2DC2E0u);
    ctx->pc = 0x2DC2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC2D8u;
            // 0x2dc2dc: 0x2d9800  .word       0x002D9800                   # sll         $s3, $t5, 0 # 00200000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 13), 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DDB80u;
    if (runtime->hasFunction(0x2DDB80u)) {
        auto targetFn = runtime->lookupFunction(0x2DDB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2E0u; }
        if (ctx->pc != 0x2DC2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DDB80_0x2ddb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2E0u; }
        if (ctx->pc != 0x2DC2E0u) { return; }
    }
    ctx->pc = 0x2DC2E0u;
label_2dc2e0:
    // 0x2dc2e0: 0x40c0040  teqi        $zero, 0x40
    ctx->pc = 0x2dc2e0u;
    if (GPR_S64(ctx, 0) == (int64_t)(int32_t)64) { runtime->handleTrap(rdram, ctx); }
    // 0x2dc2e4: 0x0  nop
    ctx->pc = 0x2dc2e4u;
    // NOP
    // 0x2dc2e8: 0x8f0000b3  lw          $zero, 0xB3($t8)
    ctx->pc = 0x2dc2e8u;
    SET_GPR_S32(ctx, 0, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 179)));
    // 0x2dc2ec: 0x270400a6  addiu       $a0, $t8, 0xA6
    ctx->pc = 0x2dc2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), 166));
    // 0x2dc2f0: 0x2d2800  .word       0x002D2800                   # sll         $a1, $t5, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 0));
    // 0x2dc2f4: 0x0  nop
    ctx->pc = 0x2dc2f4u;
    // NOP
    // 0x2dc2f8: 0x2110c5  .word       0x002110C5                   # INVALID     $at, $at, 0x10C5 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc2f8u;
    // Unhandled SPECIAL instruction: 0x5
    // 0x2dc2fc: 0x2212005  .word       0x02212005                   # INVALID     $s1, $at, 0x2005 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc2fcu;
    // Unhandled SPECIAL instruction: 0x5
    // 0x2dc300: 0x90000043  lbu         $zero, 0x43($zero)
    ctx->pc = 0x2dc300u;
    SET_GPR_U32(ctx, 0, (uint8_t)READ8(ADD32(GPR_U32(ctx, 0), 67)));
    // 0x2dc304: 0x240100a5  addiu       $at, $zero, 0xA5
    ctx->pc = 0x2dc304u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    // 0x2dc308: 0x280500a2  slti        $a1, $zero, 0xA2
    ctx->pc = 0x2dc308u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)162) ? 1 : 0);
    // 0x2dc30c: 0x14faff40  bne         $a3, $k0, . + 4 + (-0xC0 << 2)
    ctx->pc = 0x2DC30Cu;
    {
        const bool branch_taken_0x2dc30c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 26));
        ctx->pc = 0x2DC310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC30Cu;
            // 0x2dc310: 0xa0000083  sb          $zero, 0x83($zero) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 0), 131), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc30c) {
            ctx->pc = 0x2DC010u;
            return;
        }
    }
    ctx->pc = 0x2DC314u;
    // 0x2dc314: 0x3cff4e01  .word       0x3CFF4E01                   # lui         $ra, 0x4E01 # 00E00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dc314u;
    SET_GPR_S32(ctx, 31, (int32_t)((uint32_t)19969 << 16));
    // 0x2dc318: 0x34ffff21  ori         $ra, $a3, 0xFF21
    ctx->pc = 0x2dc318u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65313);
    // 0x2dc31c: 0x4400b081  .word       0x4400B081                   # mfc1        $zero, $f22 # 00000081 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2dc31cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 0, bits); }
    // 0x2dc320: 0x32d90a0  .word       0x032D90A0                   # add         $s2, $t9, $t5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc320u;
    {     int32_t rs_val = GPR_S32(ctx, 25);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 18, (int32_t)result);     } }
    // 0x2dc324: 0x3c804301  .word       0x3C804301                   # lui         $zero, 0x4301 # 00800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dc324u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)17153 << 16));
    // 0x2dc328: 0x4400a881  .word       0x4400A881                   # mfc1        $zero, $f21 # 00000081 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2dc328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 0, bits); }
    // 0x2dc32c: 0x2d8000  .word       0x002D8000                   # sll         $s0, $t5, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc32cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 13), 0));
    // 0x2dc330: 0x3c004f01  lui         $zero, 0x4F01
    ctx->pc = 0x2dc330u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)20225 << 16));
    // 0x2dc334: 0x4400a081  .word       0x4400A081                   # mfc1        $zero, $f20 # 00000081 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2dc334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 0, bits); }
    // 0x2dc338: 0x3c008011  lui         $zero, 0x8011
    ctx->pc = 0x2dc338u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)32785 << 16));
    // 0x2dc33c: 0x0  nop
    ctx->pc = 0x2dc33cu;
    // NOP
    // 0x2dc340: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DC340u;
    SET_GPR_U32(ctx, 31, 0x2DC348u);
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC348u; }
        if (ctx->pc != 0x2DC348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC348u; }
        if (ctx->pc != 0x2DC348u) { return; }
    }
    ctx->pc = 0x2DC348u;
label_2dc348:
    // 0x2dc348: 0x44000082  .word       0x44000082                   # mfc1        $zero, $f0 # 00000082 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2dc348u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 0, bits); }
    // 0x2dc34c: 0x46200080  .word       0x46200080                   # INVALID     $s1, $zero, 0x80 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2dc34cu;
    // Unhandled FPU instruction: format 0x11, function 0x0
    // 0x2dc350: 0x2212050  .word       0x02212050                   # mfhi        $a0 # 02210040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc350u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2dc354: 0x26010010  addiu       $at, $s0, 0x10
    ctx->pc = 0x2dc354u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2dc358: 0x0  nop
    ctx->pc = 0x2dc358u;
    // NOP
    // 0x2dc35c: 0x0  nop
    ctx->pc = 0x2dc35cu;
    // NOP
    // 0x2dc360: 0x46030016  rsqrt.s     $f0, $f0, $f3
    ctx->pc = 0x2dc360u;
    ctx->f[0] = 1.0f / sqrtf(ctx->f[0]);
    // 0x2dc364: 0x46020015  .word       0x46020015                   # INVALID     $s0, $v0, 0x15 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dc364u;
    // Unhandled FPU.S instruction: function 0x15
    // 0x2dc368: 0x4636a000  .word       0x4636A000                   # INVALID     $s1, $s6, -0x6000 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2dc368u;
    // Unhandled FPU instruction: format 0x11, function 0x0
    // 0x2dc36c: 0x46640000  .word       0x46640000                   # INVALID     $s3, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2dc36cu;
    // Unhandled FPU instruction: format 0x13, function 0x0
    // 0x2dc370: 0x44000802  .word       0x44000802                   # mfc1        $zero, $f1 # 00000002 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2dc370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 0, bits); }
    // 0x2dc374: 0x45050000  .word       0x45050000                   # INVALID     $t0, $a1, 0x0 # 00000000 <InstrIdType: CPU_COP1_BC1>
    ctx->pc = 0x2dc374u;
    // FPU branch instruction - handled elsewhere
    // 0x2dc378: 0x2e090003  sltiu       $t1, $s0, 0x3
    ctx->pc = 0x2dc378u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2dc37c: 0x46010014  .word       0x46010014                   # INVALID     $s0, $at, 0x14 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dc37cu;
    // Unhandled FPU.S instruction: function 0x14
label_2dc380:
    // 0x2dc380: 0x46640000  .word       0x46640000                   # INVALID     $s3, $a0, 0x0 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2dc380u;
    // Unhandled FPU instruction: format 0x13, function 0x0
    // 0x2dc384: 0x44000802  .word       0x44000802                   # mfc1        $zero, $f1 # 00000002 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2dc384u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 0, bits); }
    // 0x2dc388: 0x251051  .word       0x00251051                   # mthi        $at # 00051040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc388u;
    ctx->hi = GPR_U64(ctx, 1);
    // 0x2dc38c: 0x14ecff60  bne         $a3, $t4, . + 4 + (-0xA0 << 2)
    ctx->pc = 0x2DC38Cu;
    {
        const bool branch_taken_0x2dc38c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 12));
        ctx->pc = 0x2DC390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC38Cu;
            // 0x2dc390: 0xa0000082  sb          $zero, 0x82($zero) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 0), 130), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc38c) {
            ctx->pc = 0x2DC110u;
            return;
        }
    }
    ctx->pc = 0x2DC394u;
    // 0x2dc394: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DC394u;
    {
        const bool branch_taken_0x2dc394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc394) {
            ctx->pc = 0x2DC3C4u;
            goto label_2dc3c4;
        }
    }
    ctx->pc = 0x2DC39Cu;
    // 0x2dc39c: 0x867818bb  lh          $t8, 0x18BB($s3)
    ctx->pc = 0x2dc39cu;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6331)));
label_2dc3a0:
    // 0x2dc3a0: 0xa3b56019  sb          $s5, 0x6019($sp)
    ctx->pc = 0x2dc3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24601), (uint8_t)GPR_U32(ctx, 21));
    // 0x2dc3a4: 0xfee72012  sd          $a3, 0x2012($s7)
    ctx->pc = 0x2dc3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8210), GPR_U64(ctx, 7));
    // 0x2dc3a8: 0x1864020  add         $t0, $t4, $a2
    ctx->pc = 0x2dc3a8u;
    {     int32_t rs_val = GPR_S32(ctx, 12);     int32_t rt_val = GPR_S32(ctx, 6);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 8, (int32_t)result);     } }
    // 0x2dc3ac: 0x272bd270  addiu       $t3, $t9, -0x2D90
    ctx->pc = 0x2dc3acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 25), 4294955632));
label_2dc3b0:
    // 0x2dc3b0: 0x30e7020  add         $t6, $t8, $t6
    ctx->pc = 0x2dc3b0u;
    {     int32_t rs_val = GPR_S32(ctx, 24);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 14, (int32_t)result);     } }
    // 0x2dc3b4: 0xde94004b  ld          $s4, 0x4B($s4)
    ctx->pc = 0x2dc3b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 20), 75)));
    // 0x2dc3b8: 0xc712f591  lwc1        $f18, -0xA6F($t8)
    ctx->pc = 0x2dc3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294964625)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dc3bc: 0xde940087  ld          $s4, 0x87($s4)
    ctx->pc = 0x2dc3bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 20), 135)));
label_2dc3c0:
    // 0x2dc3c0: 0x0  nop
    ctx->pc = 0x2dc3c0u;
    // NOP
label_2dc3c4:
    // 0x2dc3c4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dc3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
label_2dc3c8:
    // 0x2dc3c8: 0x2442c3b4  addiu       $v0, $v0, -0x3C4C
    ctx->pc = 0x2dc3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951860));
    // 0x2dc3cc: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dc3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dc3d0: 0x2484c394  addiu       $a0, $a0, -0x3C6C
    ctx->pc = 0x2dc3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951828));
    // 0x2dc3d4: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dc3d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dc3d8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dc3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2dc3dc:
    // 0x2dc3dc: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DC3DCu;
    SET_GPR_U32(ctx, 31, 0x2DC3E4u);
    ctx->pc = 0x2DC3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC3DCu;
            // 0x2dc3e0: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3E4u; }
        if (ctx->pc != 0x2DC3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC3E4u; }
        if (ctx->pc != 0x2DC3E4u) { return; }
    }
    ctx->pc = 0x2DC3E4u;
label_2dc3e4:
    // 0x2dc3e4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2dc3e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc3e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2dc3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc3ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2dc3ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dc3f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2dc3f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc3f4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2dc3f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2dc3f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2dc3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc3fc: 0xc7b60048  lwc1        $f22, 0x48($sp)
    ctx->pc = 0x2dc3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2dc400: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x2dc400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dc404: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x2dc404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dc408: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC408u;
            // 0x2dc40c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC410u;
    ctx->pc = 0x2dc410u;
}
