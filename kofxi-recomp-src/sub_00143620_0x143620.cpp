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

// Function: sub_00143620
// Address: 0x143620 - 0x143740
void sub_00143620_0x143620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143620_0x143620");
#endif

    switch (ctx->pc) {
        case 0x143684u: goto label_143684;
        default: break;
    }

    ctx->pc = 0x143620u;

    // 0x143620: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x143624: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x143624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x143628: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14362c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14362cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143630: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x143630u;
    {
        const bool branch_taken_0x143630 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x143634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143630u;
        // 0x143634: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143630) {
            ctx->pc = 0x143644u;
            goto label_143644;
        }
    }
    ctx->pc = 0x143638u;
    // 0x143638: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x143638u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14363c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14363Cu;
    {
        const bool branch_taken_0x14363c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14363Cu;
        // 0x143640: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14363c) {
            ctx->pc = 0x143660u;
            goto label_143660;
        }
    }
    ctx->pc = 0x143644u;
label_143644:
    // 0x143644: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x143644u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x143648: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x143648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x14364c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x14364cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x143650: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143650u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143654: 0x0  nop
    ctx->pc = 0x143654u;
    // NOP
    // 0x143658: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x143658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14365c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x14365cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_143660:
    // 0x143660: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x143660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143664: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x143664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x143668: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x143668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14366c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14366cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143670: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x143670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x143674: 0x0  nop
    ctx->pc = 0x143674u;
    // NOP
    // 0x143678: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x143678u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14367c: 0xc0627d8  jal         func_189F60
    ctx->pc = 0x14367Cu;
    SET_GPR_U32(ctx, 31, 0x143684u);
    ctx->pc = 0x143680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14367Cu;
    // 0x143680: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189F60u, 0x14367Cu, 0x143684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143684u;
label_143684:
    // 0x143684: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x143684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x143688: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x143688u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x14368c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14368cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x143690: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x143690u;
    {
        const bool branch_taken_0x143690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143690) {
            ctx->pc = 0x143694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143690u;
            // 0x143694: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1436B4u;
            goto label_1436b4;
        }
    }
    ctx->pc = 0x143698u;
    // 0x143698: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x143698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14369c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x14369cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1436a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1436a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1436a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1436a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1436a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1436a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1436ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1436ACu;
    {
        const bool branch_taken_0x1436ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1436B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436ACu;
        // 0x1436b0: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1436ac) {
            ctx->pc = 0x1436C8u;
            goto label_1436c8;
        }
    }
    ctx->pc = 0x1436B4u;
label_1436b4:
    // 0x1436b4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x1436b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x1436b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1436b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1436bc: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1436bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1436c0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1436c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1436c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1436c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1436c8:
    // 0x1436c8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1436c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1436cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1436ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1436d0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1436d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1436d4: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1436D4u;
    {
        const bool branch_taken_0x1436d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1436d4) {
            ctx->pc = 0x1436D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1436D4u;
            // 0x1436d8: 0x84a20000  lh          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143700u;
            goto label_143700;
        }
    }
    ctx->pc = 0x1436DCu;
    // 0x1436dc: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x1436dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1436e0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1436e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1436e4: 0x5420000f  bnel        $at, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1436E4u;
    {
        const bool branch_taken_0x1436e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1436e4) {
            ctx->pc = 0x1436E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1436E4u;
            // 0x1436e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143724u;
            goto label_143724;
        }
    }
    ctx->pc = 0x1436ECu;
    // 0x1436ec: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1436ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1436f0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1436F0u;
    {
        const bool branch_taken_0x1436f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1436f0) {
            ctx->pc = 0x143720u;
            goto label_143720;
        }
    }
    ctx->pc = 0x1436F8u;
    // 0x1436f8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1436F8u;
    {
        const bool branch_taken_0x1436f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1436FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1436F8u;
        // 0x1436fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1436f8) {
            ctx->pc = 0x143724u;
            goto label_143724;
        }
    }
    ctx->pc = 0x143700u;
label_143700:
    // 0x143700: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x143700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x143704: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x143704u;
    {
        const bool branch_taken_0x143704 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x143704) {
            ctx->pc = 0x143720u;
            goto label_143720;
        }
    }
    ctx->pc = 0x14370Cu;
    // 0x14370c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x14370cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x143710: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143710u;
    {
        const bool branch_taken_0x143710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x143710) {
            ctx->pc = 0x143720u;
            goto label_143720;
        }
    }
    ctx->pc = 0x143718u;
    // 0x143718: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x143718u;
    {
        const bool branch_taken_0x143718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14371Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143718u;
        // 0x14371c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143718) {
            ctx->pc = 0x143724u;
            goto label_143724;
        }
    }
    ctx->pc = 0x143720u;
label_143720:
    // 0x143720: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x143720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143724:
    // 0x143724: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x143724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143728: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14372c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14372cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143730: 0x3e00008  jr          $ra
    ctx->pc = 0x143730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143730u;
        // 0x143734: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143738u;
    // 0x143738: 0x0  nop
    ctx->pc = 0x143738u;
    // NOP
    // 0x14373c: 0x0  nop
    ctx->pc = 0x14373cu;
    // NOP
    if (ctx->pc == 0x14373cu) { ctx->pc = 0x143740u; }
}
