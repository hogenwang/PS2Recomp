#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00143740
// Address: 0x143740 - 0x143850
void sub_00143740_0x143740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143740_0x143740");
#endif

    switch (ctx->pc) {
        case 0x1437a8u: goto label_1437a8;
        default: break;
    }

    ctx->pc = 0x143740u;

    // 0x143740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x143744: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x143744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x143748: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14374c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14374cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143750: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x143750u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x143754: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143754u;
    {
        const bool branch_taken_0x143754 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x143758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143754u;
            // 0x143758: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143754) {
            ctx->pc = 0x143768u;
            goto label_143768;
        }
    }
    ctx->pc = 0x14375Cu;
    // 0x14375c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14375cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143760: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x143760u;
    {
        const bool branch_taken_0x143760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143760u;
            // 0x143764: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143760) {
            ctx->pc = 0x143784u;
            goto label_143784;
        }
    }
    ctx->pc = 0x143768u;
label_143768:
    // 0x143768: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x143768u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x14376c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14376cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x143770: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x143770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x143774: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143774u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143778: 0x0  nop
    ctx->pc = 0x143778u;
    // NOP
    // 0x14377c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14377cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x143780: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x143780u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_143784:
    // 0x143784: 0xc6200090  lwc1        $f0, 0x90($s1)
    ctx->pc = 0x143784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143788: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x143788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x14378c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14378cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x143790: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143790u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143794: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x143794u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x143798: 0x0  nop
    ctx->pc = 0x143798u;
    // NOP
    // 0x14379c: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x14379cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1437a0: 0xc0627d8  jal         func_189F60
    ctx->pc = 0x1437A0u;
    SET_GPR_U32(ctx, 31, 0x1437A8u);
    ctx->pc = 0x1437A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1437A0u;
            // 0x1437a4: 0x10843f  dsra32      $s0, $s0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F60u;
    if (runtime->hasFunction(0x189F60u)) {
        auto targetFn = runtime->lookupFunction(0x189F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1437A8u; }
        if (ctx->pc != 0x1437A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F60_0x189f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1437A8u; }
        if (ctx->pc != 0x1437A8u) { return; }
    }
    ctx->pc = 0x1437A8u;
label_1437a8:
    // 0x1437a8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1437a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1437ac: 0x9222008c  lbu         $v0, 0x8C($s1)
    ctx->pc = 0x1437acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1437b0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1437b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1437b4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1437B4u;
    {
        const bool branch_taken_0x1437b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1437b4) {
            ctx->pc = 0x1437B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1437B4u;
            // 0x1437b8: 0x86230000  lh          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1437D4u;
            goto label_1437d4;
        }
    }
    ctx->pc = 0x1437BCu;
    // 0x1437bc: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1437bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1437c0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x1437c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1437c4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1437c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1437c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1437c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1437cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1437CCu;
    {
        const bool branch_taken_0x1437cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1437D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1437CCu;
            // 0x1437d0: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1437cc) {
            ctx->pc = 0x1437E4u;
            goto label_1437e4;
        }
    }
    ctx->pc = 0x1437D4u;
label_1437d4:
    // 0x1437d4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x1437d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1437d8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1437d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1437dc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1437dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1437e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1437e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1437e4:
    // 0x1437e4: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1437e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1437e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1437e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1437ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1437ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1437f0: 0x4610008  bgez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1437F0u;
    {
        const bool branch_taken_0x1437f0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1437F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1437F0u;
            // 0x1437f4: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1437f0) {
            ctx->pc = 0x143814u;
            goto label_143814;
        }
    }
    ctx->pc = 0x1437F8u;
    // 0x1437f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1437f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1437fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1437fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x143800: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x143800u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x143804: 0x5420000b  bnel        $at, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x143804u;
    {
        const bool branch_taken_0x143804 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143804) {
            ctx->pc = 0x143808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143804u;
            // 0x143808: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143834u;
            goto label_143834;
        }
    }
    ctx->pc = 0x14380Cu;
    // 0x14380c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14380Cu;
    {
        const bool branch_taken_0x14380c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14380Cu;
            // 0x143810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14380c) {
            ctx->pc = 0x143834u;
            goto label_143834;
        }
    }
    ctx->pc = 0x143814u;
label_143814:
    // 0x143814: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x143814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x143818: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x143818u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14381c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x14381cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x143820: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143820u;
    {
        const bool branch_taken_0x143820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143820) {
            ctx->pc = 0x143830u;
            goto label_143830;
        }
    }
    ctx->pc = 0x143828u;
    // 0x143828: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x143828u;
    {
        const bool branch_taken_0x143828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14382Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143828u;
            // 0x14382c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143828) {
            ctx->pc = 0x143834u;
            goto label_143834;
        }
    }
    ctx->pc = 0x143830u;
label_143830:
    // 0x143830: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x143830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143834:
    // 0x143834: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x143834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143838: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143838u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14383c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14383cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143840: 0x3e00008  jr          $ra
    ctx->pc = 0x143840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143840u;
            // 0x143844: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143848u;
    // 0x143848: 0x0  nop
    ctx->pc = 0x143848u;
    // NOP
    // 0x14384c: 0x0  nop
    ctx->pc = 0x14384cu;
    // NOP
    ctx->pc = 0x143850u;
}
