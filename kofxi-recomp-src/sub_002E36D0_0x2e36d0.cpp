#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E36D0
// Address: 0x2e36d0 - 0x2e3958
void sub_002E36D0_0x2e36d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E36D0_0x2e36d0");
#endif

    switch (ctx->pc) {
        case 0x2e3758u: goto label_2e3758;
        case 0x2e37a8u: goto label_2e37a8;
        case 0x2e37ccu: goto label_2e37cc;
        case 0x2e37f8u: goto label_2e37f8;
        case 0x2e3808u: goto label_2e3808;
        case 0x2e3878u: goto label_2e3878;
        case 0x2e38e0u: goto label_2e38e0;
        case 0x2e38e8u: goto label_2e38e8;
        case 0x2e3914u: goto label_2e3914;
        default: break;
    }

    ctx->pc = 0x2e36d0u;

    // 0x2e36d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e36d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e36d4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2e36d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2e36d8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2e36d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e36dc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2e36dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2e36e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e36e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e36e4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2e36e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2e36e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e36e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e36ec: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2e36ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2e36f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2e36f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e36f4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e36f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2e36f8: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x2e36f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e36fc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2e36fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2e3700: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x2e3700u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3704: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2e3704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2e3708: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2e3708u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e370c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2e370cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x2e3710: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2e3710u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3714: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x2e3714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x2e3718: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x2e3718u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e371c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2e371cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2e3720: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x2e3720u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2e3724: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2e3724u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2e3728: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2e3728u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2e372c: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2e372cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2e3730: 0x24633778  addiu       $v1, $v1, 0x3778
    ctx->pc = 0x2e3730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14200));
    // 0x2e3734: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e3734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e3738: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E3738u;
    {
        const bool branch_taken_0x2e3738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3738) {
            ctx->pc = 0x2E3758u;
            goto label_2e3758;
        }
    }
    ctx->pc = 0x2E3740u;
    // 0x2e3740: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e3740u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e3744: 0x2484378c  addiu       $a0, $a0, 0x378C
    ctx->pc = 0x2e3744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14220));
    // 0x2e3748: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2e3748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e374c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2e374cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2e3750: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E3750u;
    SET_GPR_U32(ctx, 31, 0x2E3758u);
    ctx->pc = 0x2E3754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3750u;
            // 0x2e3754: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3758u; }
        if (ctx->pc != 0x2E3758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3758u; }
        if (ctx->pc != 0x2E3758u) { return; }
    }
    ctx->pc = 0x2E3758u;
label_2e3758:
    // 0x2e3758: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E3758u;
    {
        const bool branch_taken_0x2e3758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3758) {
            ctx->pc = 0x2E378Cu;
            goto label_2e378c;
        }
    }
    ctx->pc = 0x2E3760u;
    // 0x2e3760: 0x84be812b  lh          $fp, -0x7ED5($a1)
    ctx->pc = 0x2e3760u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294934827)));
    // 0x2e3764: 0x2d40820  add         $at, $s6, $s4
    ctx->pc = 0x2e3764u;
    {     int32_t rs_val = GPR_S32(ctx, 22);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
    // 0x2e3768: 0x2568e860  addiu       $t0, $t3, -0x17A0
    ctx->pc = 0x2e3768u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961248));
    // 0x2e376c: 0x87dde413  lh          $sp, -0x1BED($fp)
    ctx->pc = 0x2e376cu;
    SET_GPR_S32(ctx, 29, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294960147)));
    // 0x2e3770: 0xa0b3da31  sb          $s3, -0x25CF($a1)
    ctx->pc = 0x2e3770u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294957617), (uint8_t)GPR_U32(ctx, 19));
    // 0x2e3774: 0xdfad89c7  ld          $t5, -0x7639($sp)
    ctx->pc = 0x2e3774u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 4294937031)));
    // 0x2e3778: 0x0  nop
    ctx->pc = 0x2e3778u;
    // NOP
    // 0x2e377c: 0x4a8d5f0a  vmaddz.y    $vf28, $vf11, $vf13z
    ctx->pc = 0x2e377cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e3780: 0xcb13174a  lwc2        $19, 0x174A($t8)
    ctx->pc = 0x2e3780u;
    // Unhandled opcode: 0x32
    // 0x2e3784: 0x4a8d5e32  .word       0x4A8D5E32                   # viaddi      $vi13, $vi11, -0x8 # 00800000 <InstrIdType: R5900_COP2_SPECIAL1>
    ctx->pc = 0x2e3784u;
    ctx->vi[13] = ctx->vi[11] + -8;
    // 0x2e3788: 0x0  nop
    ctx->pc = 0x2e3788u;
    // NOP
label_2e378c:
    // 0x2e378c: 0xf5242e37  sdc1        $f4, 0x2E37($t1)
    ctx->pc = 0x2e378cu;
    // Unhandled opcode: 0x3D
    // 0x2e3790: 0xf67c253f  sdc1        $f28, 0x253F($s3)
    ctx->pc = 0x2e3790u;
    // Unhandled opcode: 0x3D
    // 0x2e3794: 0xf50c3137  sdc1        $f12, 0x3137($t0)
    ctx->pc = 0x2e3794u;
    // Unhandled opcode: 0x3D
    // 0x2e3798: 0xf51c3537  sdc1        $f28, 0x3537($t0)
    ctx->pc = 0x2e3798u;
    // Unhandled opcode: 0x3D
    // 0x2e379c: 0xf58c3d37  sdc1        $f12, 0x3D37($t4)
    ctx->pc = 0x2e379cu;
    // Unhandled opcode: 0x3D
    // 0x2e37a0: 0xc0b8126  jal         func_2E0498
    ctx->pc = 0x2E37A0u;
    SET_GPR_U32(ctx, 31, 0x2E37A8u);
    ctx->pc = 0x2E37A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E37A0u;
            // 0x2e37a4: 0xe25fa5a7  sc          $ra, -0x5A59($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4294944167); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 31)); SET_GPR_S32(ctx, 31, 1); } else { SET_GPR_S32(ctx, 31, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0498u;
    if (runtime->hasFunction(0x2E0498u)) {
        auto targetFn = runtime->lookupFunction(0x2E0498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37A8u; }
        if (ctx->pc != 0x2E37A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0498_0x2e0498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37A8u; }
        if (ctx->pc != 0x2E37A8u) { return; }
    }
    ctx->pc = 0x2E37A8u;
label_2e37a8:
    // 0x2e37a8: 0xf27c2437  scd         $gp, 0x2437($s3)
    ctx->pc = 0x2e37a8u;
    // Unhandled opcode: 0x3C
    // 0x2e37ac: 0xf58c3137  sdc1        $f12, 0x3137($t4)
    ctx->pc = 0x2e37acu;
    // Unhandled opcode: 0x3D
    // 0x2e37b0: 0xf53c3537  sdc1        $f28, 0x3537($t1)
    ctx->pc = 0x2e37b0u;
    // Unhandled opcode: 0x3D
    // 0x2e37b4: 0xe78f27a7  swc1        $f15, 0x27A7($gp)
    ctx->pc = 0x2e37b4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 10151), bits); }
    // 0x2e37b8: 0xeb8fa7a7  swc2        $15, -0x5859($gp)
    ctx->pc = 0x2e37b8u;
    // Unhandled opcode: 0x3A
    // 0x2e37bc: 0xf54c0537  sdc1        $f12, 0x537($t2)
    ctx->pc = 0x2e37bcu;
    // Unhandled opcode: 0x3D
    // 0x2e37c0: 0xef88a7a7  .word       0xEF88A7A7                   # INVALID     $gp, $t0, -0x5859 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e37c0u;
    // Unhandled opcode: 0x3B
    // 0x2e37c4: 0xc0b826a  jal         func_2E09A8
    ctx->pc = 0x2E37C4u;
    SET_GPR_U32(ctx, 31, 0x2E37CCu);
    ctx->pc = 0x2E37C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E37C4u;
            // 0x2e37c8: 0x80540eb7  lb          $s4, 0xEB7($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3767)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E09A8u;
    if (runtime->hasFunction(0x2E09A8u)) {
        auto targetFn = runtime->lookupFunction(0x2E09A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37CCu; }
        if (ctx->pc != 0x2E37CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E09A8_0x2e09a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37CCu; }
        if (ctx->pc != 0x2E37CCu) { return; }
    }
    ctx->pc = 0x2E37CCu;
label_2e37cc:
    // 0x2e37cc: 0xee7c24b7  .word       0xEE7C24B7                   # INVALID     $s3, $gp, 0x24B7 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2e37ccu;
    // Unhandled opcode: 0x3B
    // 0x2e37d0: 0x13595ba4  beq         $k0, $t9, . + 4 + (0x5BA4 << 2)
    ctx->pc = 0x2E37D0u;
    {
        const bool branch_taken_0x2e37d0 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 25));
        ctx->pc = 0x2E37D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E37D0u;
            // 0x2e37d4: 0xf34427a7  scd         $a0, 0x27A7($k0) (Delay Slot)
        // Unhandled opcode: 0x3C
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e37d0) {
            ctx->pc = 0x2FA664u;
            return;
        }
    }
    ctx->pc = 0x2E37D8u;
    // 0x2e37d8: 0x80590eb7  lb          $t9, 0xEB7($v0)
    ctx->pc = 0x2e37d8u;
    SET_GPR_S32(ctx, 25, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3767)));
    // 0x2e37dc: 0xf55c3537  sdc1        $f28, 0x3537($t2)
    ctx->pc = 0x2e37dcu;
    // Unhandled opcode: 0x3D
    // 0x2e37e0: 0xf54c3137  sdc1        $f12, 0x3137($t2)
    ctx->pc = 0x2e37e0u;
    // Unhandled opcode: 0x3D
    // 0x2e37e4: 0xe74f27a7  swc1        $f15, 0x27A7($k0)
    ctx->pc = 0x2e37e4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 26), 10151), bits); }
    // 0x2e37e8: 0xeb4fa7a7  swc2        $15, -0x5859($k0)
    ctx->pc = 0x2e37e8u;
    // Unhandled opcode: 0x3A
    // 0x2e37ec: 0xf55c0537  sdc1        $f28, 0x537($t2)
    ctx->pc = 0x2e37ecu;
    // Unhandled opcode: 0x3D
    // 0x2e37f0: 0xc0b826a  jal         func_2E09A8
    ctx->pc = 0x2E37F0u;
    SET_GPR_U32(ctx, 31, 0x2E37F8u);
    ctx->pc = 0x2E37F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E37F0u;
            // 0x2e37f4: 0xef48a7a7  .word       0xEF48A7A7                   # INVALID     $k0, $t0, -0x5859 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Unhandled opcode: 0x3B
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E09A8u;
    if (runtime->hasFunction(0x2E09A8u)) {
        auto targetFn = runtime->lookupFunction(0x2E09A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37F8u; }
        if (ctx->pc != 0x2E37F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E09A8_0x2e09a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E37F8u; }
        if (ctx->pc != 0x2E37F8u) { return; }
    }
    ctx->pc = 0x2E37F8u;
label_2e37f8:
    // 0x2e37f8: 0xea7c2637  swc2        $28, 0x2637($s3)
    ctx->pc = 0x2e37f8u;
    // Unhandled opcode: 0x3A
    // 0x2e37fc: 0xf55c3137  sdc1        $f28, 0x3137($t2)
    ctx->pc = 0x2e37fcu;
    // Unhandled opcode: 0x3D
    // 0x2e3800: 0xc0b8da8  jal         func_2E36A0
    ctx->pc = 0x2E3800u;
    SET_GPR_U32(ctx, 31, 0x2E3808u);
    ctx->pc = 0x2E3804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3800u;
            // 0x2e3804: 0xf57c3537  sdc1        $f28, 0x3537($t3) (Delay Slot)
        // Unhandled opcode: 0x3D
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E36A0u;
    if (runtime->hasFunction(0x2E36A0u)) {
        auto targetFn = runtime->lookupFunction(0x2E36A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3808u; }
        if (ctx->pc != 0x2E3808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E36A0_0x2e36a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3808u; }
        if (ctx->pc != 0x2E3808u) { return; }
    }
    ctx->pc = 0x2E3808u;
label_2e3808:
    // 0x2e3808: 0xe37da7f3  sc          $sp, -0x580D($k1)
    ctx->pc = 0x2e3808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 4294944755); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 29)); SET_GPR_S32(ctx, 29, 1); } else { SET_GPR_S32(ctx, 29, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e380c: 0xf66d27a7  sdc1        $f13, 0x27A7($s3)
    ctx->pc = 0x2e380cu;
    // Unhandled opcode: 0x3D
    // 0x2e3810: 0xf52d2e37  sdc1        $f13, 0x2E37($t1)
    ctx->pc = 0x2e3810u;
    // Unhandled opcode: 0x3D
    // 0x2e3814: 0xe67c25bf  swc1        $f28, 0x25BF($s3)
    ctx->pc = 0x2e3814u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 9663), bits); }
    // 0x2e3818: 0xe05c27b7  sc          $gp, 0x27B7($v0)
    ctx->pc = 0x2e3818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 10167); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 28)); SET_GPR_S32(ctx, 28, 1); } else { SET_GPR_S32(ctx, 28, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e381c: 0xe46c269f  swc1        $f12, 0x269F($v1)
    ctx->pc = 0x2e381cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 9887), bits); }
    // 0x2e3820: 0xf45c5d37  sdc1        $f28, 0x5D37($v0)
    ctx->pc = 0x2e3820u;
    // Unhandled opcode: 0x3D
    // 0x2e3824: 0xf54c3537  sdc1        $f12, 0x3537($t2)
    ctx->pc = 0x2e3824u;
    // Unhandled opcode: 0x3D
    // 0x2e3828: 0xf41d27ff  sdc1        $f29, 0x27FF($zero)
    ctx->pc = 0x2e3828u;
    // Unhandled opcode: 0x3D
    // 0x2e382c: 0xe365a727  sc          $a1, -0x58D9($k1)
    ctx->pc = 0x2e382cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 4294944551); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 5)); SET_GPR_S32(ctx, 5, 1); } else { SET_GPR_S32(ctx, 5, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e3830: 0xe01d27e7  sc          $sp, 0x27E7($zero)
    ctx->pc = 0x2e3830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10215); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 29)); SET_GPR_S32(ctx, 29, 1); } else { SET_GPR_S32(ctx, 29, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e3834: 0xe37d27f3  sc          $sp, 0x27F3($k1)
    ctx->pc = 0x2e3834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 10227); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 29)); SET_GPR_S32(ctx, 29, 1); } else { SET_GPR_S32(ctx, 29, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e3838: 0xf56d2e37  sdc1        $f13, 0x2E37($t3)
    ctx->pc = 0x2e3838u;
    // Unhandled opcode: 0x3D
    // 0x2e383c: 0x1e7c5abc  .word       0x1E7C5ABC                   # bgtz        $s3, . + 4 + (0x5ABC << 2) # 001C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E383Cu;
    {
        const bool branch_taken_0x2e383c = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x2E3840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E383Cu;
            // 0x2e3840: 0xe21e2727  sc          $fp, 0x2727($s0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 16), 10023); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 30)); SET_GPR_S32(ctx, 30, 1); } else { SET_GPR_S32(ctx, 30, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e383c) {
            ctx->pc = 0x2FA330u;
            return;
        }
    }
    ctx->pc = 0x2E3844u;
    // 0x2e3844: 0xf45c5d37  sdc1        $f28, 0x5D37($v0)
    ctx->pc = 0x2e3844u;
    // Unhandled opcode: 0x3D
    // 0x2e3848: 0x9e5c8028  lwu         $gp, -0x7FD8($s2)
    ctx->pc = 0x2e3848u;
    SET_GPR_U32(ctx, 28, READ32(ADD32(GPR_U32(ctx, 18), 4294934568)));
    // 0x2e384c: 0x1e4cd82c  .word       0x1E4CD82C                   # bgtz        $s2, . + 4 + (-0x27D4 << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2E384Cu;
    {
        const bool branch_taken_0x2e384c = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x2E3850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E384Cu;
            // 0x2e3850: 0xe21cff97  sc          $gp, -0x69($s0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294967191); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 28)); SET_GPR_S32(ctx, 28, 1); } else { SET_GPR_S32(ctx, 28, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e384c) {
            ctx->pc = 0x2D9900u;
            return;
        }
    }
    ctx->pc = 0x2E3854u;
    // 0x2e3854: 0xf58c6d37  sdc1        $f12, 0x6D37($t4)
    ctx->pc = 0x2e3854u;
    // Unhandled opcode: 0x3D
    // 0x2e3858: 0x225c87aa  addi        $gp, $s2, -0x7856
    ctx->pc = 0x2e3858u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 18), (int32_t)4294936490, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 28, (int32_t)tmp); }
    // 0x2e385c: 0xe21cf397  sc          $gp, -0xC69($s0)
    ctx->pc = 0x2e385cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294964119); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 28)); SET_GPR_S32(ctx, 28, 1); } else { SET_GPR_S32(ctx, 28, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e3860: 0xf45c6537  sdc1        $f28, 0x6537($v0)
    ctx->pc = 0x2e3860u;
    // Unhandled opcode: 0x3D
    // 0x2e3864: 0x625c83a8  daddi       $gp, $s2, -0x7C58
    ctx->pc = 0x2e3864u;
    { int64_t src = (int64_t)GPR_S64(ctx, 18); int64_t imm = (int64_t)(int32_t)4294935464; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, res); }
    // 0x2e3868: 0xe21cf797  sc          $gp, -0x869($s0)
    ctx->pc = 0x2e3868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294965143); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 28)); SET_GPR_S32(ctx, 28, 1); } else { SET_GPR_S32(ctx, 28, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e386c: 0xe254e7ab  sc          $s4, -0x1855($s2)
    ctx->pc = 0x2e386cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4294961067); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 20)); SET_GPR_S32(ctx, 20, 1); } else { SET_GPR_S32(ctx, 20, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e3870: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2E3870u;
    SET_GPR_U32(ctx, 31, 0x2E3878u);
    ctx->pc = 0x2E3874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3870u;
            // 0x2e3874: 0xe05c27b7  sc          $gp, 0x27B7($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 10167); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 28)); SET_GPR_S32(ctx, 28, 1); } else { SET_GPR_S32(ctx, 28, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3878u; }
        if (ctx->pc != 0x2E3878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3878u; }
        if (ctx->pc != 0x2E3878u) { return; }
    }
    ctx->pc = 0x2E3878u;
label_2e3878:
    // 0x2e3878: 0xe21d2797  sc          $sp, 0x2797($s0)
    ctx->pc = 0x2e3878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 10135); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 29)); SET_GPR_S32(ctx, 29, 1); } else { SET_GPR_S32(ctx, 29, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e387c: 0xf31c2797  scd         $gp, 0x2797($t8)
    ctx->pc = 0x2e387cu;
    // Unhandled opcode: 0x3C
    // 0x2e3880: 0xf1743737  scd         $s4, 0x3737($t3)
    ctx->pc = 0x2e3880u;
    // Unhandled opcode: 0x3C
    // 0x2e3884: 0xe3542727  sc          $s4, 0x2727($k0)
    ctx->pc = 0x2e3884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 10023); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 20)); SET_GPR_S32(ctx, 20, 1); } else { SET_GPR_S32(ctx, 20, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e3888: 0xe05c27b7  sc          $gp, 0x27B7($v0)
    ctx->pc = 0x2e3888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 10167); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 28)); SET_GPR_S32(ctx, 28, 1); } else { SET_GPR_S32(ctx, 28, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e388c: 0xe05c27b7  sc          $gp, 0x27B7($v0)
    ctx->pc = 0x2e388cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 10167); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 28)); SET_GPR_S32(ctx, 28, 1); } else { SET_GPR_S32(ctx, 28, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e3890: 0xe3572617  sc          $s7, 0x2617($k0)
    ctx->pc = 0x2e3890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 9751); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 23)); SET_GPR_S32(ctx, 23, 1); } else { SET_GPR_S32(ctx, 23, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e3894: 0xe356a697  sc          $s6, -0x5969($k0)
    ctx->pc = 0x2e3894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 4294944407); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 22)); SET_GPR_S32(ctx, 22, 1); } else { SET_GPR_S32(ctx, 22, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e3898: 0xfb5c7497  sqc2        $vf28, 0x7497($k0)
    ctx->pc = 0x2e3898u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 29847), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x2e389c: 0xd35c2597  lld         $gp, 0x2597($k0)
    ctx->pc = 0x2e389cu;
    // Unhandled opcode: 0x34
    // 0x2e38a0: 0xe25d2397  sc          $sp, 0x2397($s2)
    ctx->pc = 0x2e38a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 9111); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 29)); SET_GPR_S32(ctx, 29, 1); } else { SET_GPR_S32(ctx, 29, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e38a4: 0xe2dc2517  sc          $gp, 0x2517($s6)
    ctx->pc = 0x2e38a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 9495); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 28)); SET_GPR_S32(ctx, 28, 1); } else { SET_GPR_S32(ctx, 28, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e38a8: 0xf15da7a3  scd         $sp, -0x585D($t2)
    ctx->pc = 0x2e38a8u;
    // Unhandled opcode: 0x3C
    // 0x2e38ac: 0xe3562717  sc          $s6, 0x2717($k0)
    ctx->pc = 0x2e38acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 10007); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 22)); SET_GPR_S32(ctx, 22, 1); } else { SET_GPR_S32(ctx, 22, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e38b0: 0xd35c2597  lld         $gp, 0x2597($k0)
    ctx->pc = 0x2e38b0u;
    // Unhandled opcode: 0x34
    // 0x2e38b4: 0xe25d2397  sc          $sp, 0x2397($s2)
    ctx->pc = 0x2e38b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 9111); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 29)); SET_GPR_S32(ctx, 29, 1); } else { SET_GPR_S32(ctx, 29, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2e38b8: 0xf074ad37  scd         $s4, -0x52C9($v1)
    ctx->pc = 0x2e38b8u;
    // Unhandled opcode: 0x3C
    // 0x2e38bc: 0x166c59bc  bne         $s3, $t4, . + 4 + (0x59BC << 2)
    ctx->pc = 0x2E38BCu;
    {
        const bool branch_taken_0x2e38bc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 12));
        ctx->pc = 0x2E38C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E38BCu;
            // 0x2e38c0: 0xe01d27e7  sc          $sp, 0x27E7($zero) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10215); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 29)); SET_GPR_S32(ctx, 29, 1); } else { SET_GPR_S32(ctx, 29, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e38bc) {
            ctx->pc = 0x2F9FB0u;
            return;
        }
    }
    ctx->pc = 0x2E38C4u;
    // 0x2e38c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E38C4u;
    {
        const bool branch_taken_0x2e38c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e38c4) {
            ctx->pc = 0x2E38F4u;
            goto label_2e38f4;
        }
    }
    ctx->pc = 0x2E38CCu;
    // 0x2e38cc: 0xdcb0f03f  ld          $s0, -0xFC1($a1)
    ctx->pc = 0x2e38ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 5), 4294963263)));
    // 0x2e38d0: 0x268f5a90  addiu       $t7, $s4, 0x5A90
    ctx->pc = 0x2e38d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 20), 23184));
    // 0x2e38d4: 0xa34dbb41  sb          $t5, -0x44BF($k0)
    ctx->pc = 0x2e38d4u;
    WRITE8(ADD32(GPR_U32(ctx, 26), 4294949697), (uint8_t)GPR_U32(ctx, 13));
    // 0x2e38d8: 0xcc09687  jal         func_3025A1C
    ctx->pc = 0x2E38D8u;
    SET_GPR_U32(ctx, 31, 0x2E38E0u);
    ctx->pc = 0x2E38DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E38D8u;
            // 0x2e38dc: 0xfc9ee562  sd          $fp, -0x1A9E($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 4294960482), GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3025A1Cu;
    {
        auto targetFn = runtime->lookupFunction(0x3025A1Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E38E0u; }
        if (ctx->pc != 0x2E38E0u) { return; }
    }
    ctx->pc = 0x2E38E0u;
label_2e38e0:
    // 0x2e38e0: 0xc75cac7  jal         func_1D72B1C
    ctx->pc = 0x2E38E0u;
    SET_GPR_U32(ctx, 31, 0x2E38E8u);
    ctx->pc = 0x2E38E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E38E0u;
            // 0x2e38e4: 0x4a8da0f5  .word       0x4A8DA0F5                   # vior        $vi3, $vi20, $vi13 # 00800000 <InstrIdType: R5900_COP2_SPECIAL1> (Delay Slot)
        ctx->vi[3] = ctx->vi[20] | ctx->vi[13];
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D72B1Cu;
    {
        auto targetFn = runtime->lookupFunction(0x1D72B1Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E38E8u; }
        if (ctx->pc != 0x2E38E8u) { return; }
    }
    ctx->pc = 0x2E38E8u;
label_2e38e8:
    // 0x2e38e8: 0xcb13174b  lwc2        $19, 0x174B($t8)
    ctx->pc = 0x2e38e8u;
    // Unhandled opcode: 0x32
    // 0x2e38ec: 0x4a8da1cd  vmsuby.y    $vf7, $vf20, $vf13y
    ctx->pc = 0x2e38ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2e38f0: 0x0  nop
    ctx->pc = 0x2e38f0u;
    // NOP
label_2e38f4:
    // 0x2e38f4: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2e38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2e38f8: 0x244238e4  addiu       $v0, $v0, 0x38E4
    ctx->pc = 0x2e38f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14564));
    // 0x2e38fc: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2e38fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2e3900: 0x248438c4  addiu       $a0, $a0, 0x38C4
    ctx->pc = 0x2e3900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14532));
    // 0x2e3904: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2e3904u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e3908: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2e3908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e390c: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2E390Cu;
    SET_GPR_U32(ctx, 31, 0x2E3914u);
    ctx->pc = 0x2E3910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E390Cu;
            // 0x2e3910: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (runtime->hasFunction(0x2D8FC0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3914u; }
        if (ctx->pc != 0x2E3914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8FC0_0x2d8fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3914u; }
        if (ctx->pc != 0x2E3914u) { return; }
    }
    ctx->pc = 0x2E3914u;
label_2e3914:
    // 0x2e3914: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2e3914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3918: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2e3918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e391c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2e391cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e3920: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2e3920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3924: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2e3924u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e3928: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2e3928u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e392c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2e392cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e3930: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2e3930u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e3934: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2e3934u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e3938: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x2e3938u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e393c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2e393cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2e3940: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x2e3940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e3944: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2e3944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e3948: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2e3948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e394c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E394Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E394Cu;
            // 0x2e3950: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3954u;
    // 0x2e3954: 0x0  nop
    ctx->pc = 0x2e3954u;
    // NOP
    ctx->pc = 0x2e3958u;
}
