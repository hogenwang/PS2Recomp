#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00143500
// Address: 0x143500 - 0x143620
void sub_00143500_0x143500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143500_0x143500");
#endif

    switch (ctx->pc) {
        case 0x143568u: goto label_143568;
        default: break;
    }

    ctx->pc = 0x143500u;

    // 0x143500: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x143504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x143504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x143508: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14350c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14350cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143510: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x143510u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x143514: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143514u;
    {
        const bool branch_taken_0x143514 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x143518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143514u;
            // 0x143518: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143514) {
            ctx->pc = 0x143528u;
            goto label_143528;
        }
    }
    ctx->pc = 0x14351Cu;
    // 0x14351c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14351cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143520: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x143520u;
    {
        const bool branch_taken_0x143520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143520u;
            // 0x143524: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143520) {
            ctx->pc = 0x143544u;
            goto label_143544;
        }
    }
    ctx->pc = 0x143528u;
label_143528:
    // 0x143528: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x143528u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x14352c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14352cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x143530: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x143530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x143534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x143534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143538: 0x0  nop
    ctx->pc = 0x143538u;
    // NOP
    // 0x14353c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14353cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x143540: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x143540u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_143544:
    // 0x143544: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x143544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143548: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x143548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x14354c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14354cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x143550: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143550u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143554: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x143554u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x143558: 0x0  nop
    ctx->pc = 0x143558u;
    // NOP
    // 0x14355c: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x14355cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x143560: 0xc0627d8  jal         func_189F60
    ctx->pc = 0x143560u;
    SET_GPR_U32(ctx, 31, 0x143568u);
    ctx->pc = 0x143564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143560u;
            // 0x143564: 0x118c3f  dsra32      $s1, $s1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189F60u;
    if (runtime->hasFunction(0x189F60u)) {
        auto targetFn = runtime->lookupFunction(0x189F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143568u; }
        if (ctx->pc != 0x143568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189F60_0x189f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143568u; }
        if (ctx->pc != 0x143568u) { return; }
    }
    ctx->pc = 0x143568u;
label_143568:
    // 0x143568: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x143568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14356c: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x14356cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x143570: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x143570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x143574: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x143574u;
    {
        const bool branch_taken_0x143574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143574) {
            ctx->pc = 0x143578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143574u;
            // 0x143578: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143598u;
            goto label_143598;
        }
    }
    ctx->pc = 0x14357Cu;
    // 0x14357c: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x14357cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x143580: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x143580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x143584: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x143584u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x143588: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x143588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14358c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14358cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x143590: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143590u;
    {
        const bool branch_taken_0x143590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143590u;
            // 0x143594: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143590) {
            ctx->pc = 0x1435ACu;
            goto label_1435ac;
        }
    }
    ctx->pc = 0x143598u;
label_143598:
    // 0x143598: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x143598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x14359c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14359cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1435a0: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1435a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1435a4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1435a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1435a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1435a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1435ac:
    // 0x1435ac: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1435acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1435b0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1435b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1435b4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1435b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1435b8: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1435B8u;
    {
        const bool branch_taken_0x1435b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1435b8) {
            ctx->pc = 0x1435BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1435B8u;
            // 0x1435bc: 0x84a20000  lh          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1435E4u;
            goto label_1435e4;
        }
    }
    ctx->pc = 0x1435C0u;
    // 0x1435c0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x1435c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1435c4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1435c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1435c8: 0x5420000f  bnel        $at, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1435C8u;
    {
        const bool branch_taken_0x1435c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1435c8) {
            ctx->pc = 0x1435CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1435C8u;
            // 0x1435cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143608u;
            goto label_143608;
        }
    }
    ctx->pc = 0x1435D0u;
    // 0x1435d0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1435d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1435d4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1435D4u;
    {
        const bool branch_taken_0x1435d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1435d4) {
            ctx->pc = 0x143604u;
            goto label_143604;
        }
    }
    ctx->pc = 0x1435DCu;
    // 0x1435dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1435DCu;
    {
        const bool branch_taken_0x1435dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1435E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1435DCu;
            // 0x1435e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1435dc) {
            ctx->pc = 0x143608u;
            goto label_143608;
        }
    }
    ctx->pc = 0x1435E4u;
label_1435e4:
    // 0x1435e4: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x1435e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1435e8: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1435E8u;
    {
        const bool branch_taken_0x1435e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1435e8) {
            ctx->pc = 0x143604u;
            goto label_143604;
        }
    }
    ctx->pc = 0x1435F0u;
    // 0x1435f0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1435f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1435f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1435F4u;
    {
        const bool branch_taken_0x1435f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1435f4) {
            ctx->pc = 0x143604u;
            goto label_143604;
        }
    }
    ctx->pc = 0x1435FCu;
    // 0x1435fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1435FCu;
    {
        const bool branch_taken_0x1435fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1435FCu;
            // 0x143600: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1435fc) {
            ctx->pc = 0x143608u;
            goto label_143608;
        }
    }
    ctx->pc = 0x143604u;
label_143604:
    // 0x143604: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x143604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143608:
    // 0x143608: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x143608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14360c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14360cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143614: 0x3e00008  jr          $ra
    ctx->pc = 0x143614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143614u;
            // 0x143618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14361Cu;
    // 0x14361c: 0x0  nop
    ctx->pc = 0x14361cu;
    // NOP
    ctx->pc = 0x143620u;
}
