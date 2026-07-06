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

// Function: sub_0032F6E0
// Address: 0x32f6e0 - 0x32faf0
void sub_0032F6E0_0x32f6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F6E0_0x32f6e0");
#endif

    switch (ctx->pc) {
        case 0x32f90cu: goto label_32f90c;
        case 0x32f934u: goto label_32f934;
        case 0x32f9a8u: goto label_32f9a8;
        case 0x32f9d8u: goto label_32f9d8;
        case 0x32fa4cu: goto label_32fa4c;
        case 0x32fa60u: goto label_32fa60;
        case 0x32fa68u: goto label_32fa68;
        case 0x32fabcu: goto label_32fabc;
        case 0x32fad0u: goto label_32fad0;
        case 0x32fad8u: goto label_32fad8;
        default: break;
    }

    ctx->pc = 0x32f6e0u;

label_32f6e0:
    // 0x32f6e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x32f6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x32f6e4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x32f6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x32f6e8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x32f6e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32f6ec: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x32f6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x32f6f0: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x32f6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x32f6f4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x32f6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x32f6f8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x32f6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x32f6fc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x32f6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x32f700: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x32f700u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f704: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x32f704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x32f708: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x32f708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x32f70c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32f70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x32f710: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32f710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x32f714: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x32f714u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32f718: 0xc4840068  lwc1        $f4, 0x68($a0)
    ctx->pc = 0x32f718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32f71c: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x32f71cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x32f720: 0xc481006c  lwc1        $f1, 0x6C($a0)
    ctx->pc = 0x32f720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32f724: 0x9485000c  lhu         $a1, 0xC($a0)
    ctx->pc = 0x32f724u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x32f728: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x32f728u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f72c: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x32f72cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32f730: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32f730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32f734: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x32f734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x32f738: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x32f738u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x32f73c: 0x90850070  lbu         $a1, 0x70($a0)
    ctx->pc = 0x32f73cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x32f740: 0x30a40002  andi        $a0, $a1, 0x2
    ctx->pc = 0x32f740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x32f744: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x32f744u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x32f748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32f748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f74c: 0x0  nop
    ctx->pc = 0x32f74cu;
    // NOP
    // 0x32f750: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x32f750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32f754: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x32f754u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f758: 0x0  nop
    ctx->pc = 0x32f758u;
    // NOP
    // 0x32f75c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32f75cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32f760: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x32f760u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x32f764: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32f764u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32f768: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x32f768u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32f76c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x32f76cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f770: 0x0  nop
    ctx->pc = 0x32f770u;
    // NOP
    // 0x32f774: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32f774u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32f778: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x32f778u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[0]));
    // 0x32f77c: 0x4602081c  madd.s      $f0, $f1, $f2
    ctx->pc = 0x32f77cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[2]));
    // 0x32f780: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32f780u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32f784: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x32f784u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x32f788: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32F788u;
    {
        const bool branch_taken_0x32f788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F788u;
        // 0x32f78c: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f788) {
            ctx->pc = 0x32F7A0u;
            goto label_32f7a0;
        }
    }
    ctx->pc = 0x32F790u;
    // 0x32f790: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x32f790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x32f794: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x32f794u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f798: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32F798u;
    {
        const bool branch_taken_0x32f798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F798u;
        // 0x32f79c: 0x2471fff8  addiu       $s1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f798) {
            ctx->pc = 0x32F7A8u;
            goto label_32f7a8;
        }
    }
    ctx->pc = 0x32F7A0u;
label_32f7a0:
    // 0x32f7a0: 0x6b100  sll         $s6, $a2, 4
    ctx->pc = 0x32f7a0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x32f7a4: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x32f7a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_32f7a8:
    // 0x32f7a8: 0x92a3005a  lbu         $v1, 0x5A($s5)
    ctx->pc = 0x32f7a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 90)));
    // 0x32f7ac: 0x5060008b  beql        $v1, $zero, . + 4 + (0x8B << 2)
    ctx->pc = 0x32F7ACu;
    {
        const bool branch_taken_0x32f7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f7ac) {
            ctx->pc = 0x32F7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F7ACu;
            // 0x32f7b0: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F9DCu;
            goto label_32f9dc;
        }
    }
    ctx->pc = 0x32F7B4u;
    // 0x32f7b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x32f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x32f7b8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x32f7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32f7bc: 0x8444db2c  lh          $a0, -0x24D4($v0)
    ctx->pc = 0x32f7bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957868)));
    // 0x32f7c0: 0x2534023  subu        $t0, $s2, $s3
    ctx->pc = 0x32f7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x32f7c4: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x32f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x32f7c8: 0x90424530  lbu         $v0, 0x4530($v0)
    ctx->pc = 0x32f7c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17712)));
    // 0x32f7cc: 0x10460023  beq         $v0, $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x32F7CCu;
    {
        const bool branch_taken_0x32f7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x32F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F7CCu;
        // 0x32f7d0: 0x2441821  addu        $v1, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f7cc) {
            ctx->pc = 0x32F85Cu;
            goto label_32f85c;
        }
    }
    ctx->pc = 0x32F7D4u;
    // 0x32f7d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x32f7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f7d8: 0x10460020  beq         $v0, $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x32F7D8u;
    {
        const bool branch_taken_0x32f7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x32f7d8) {
            ctx->pc = 0x32F85Cu;
            goto label_32f85c;
        }
    }
    ctx->pc = 0x32F7E0u;
    // 0x32f7e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x32f7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32f7e4: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x32F7E4u;
    {
        const bool branch_taken_0x32f7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x32f7e4) {
            ctx->pc = 0x32F7FCu;
            goto label_32f7fc;
        }
    }
    ctx->pc = 0x32F7ECu;
    // 0x32f7ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F7ECu;
    {
        const bool branch_taken_0x32f7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f7ec) {
            ctx->pc = 0x32F7FCu;
            goto label_32f7fc;
        }
    }
    ctx->pc = 0x32F7F4u;
    // 0x32f7f4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x32F7F4u;
    {
        const bool branch_taken_0x32f7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F7F4u;
        // 0x32f7f8: 0x2649823  subu        $s3, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f7f4) {
            ctx->pc = 0x32F8BCu;
            goto label_32f8bc;
        }
    }
    ctx->pc = 0x32F7FCu;
label_32f7fc:
    // 0x32f7fc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x32f7fcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f800: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x32f800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x32f804: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32f804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32f808: 0x2468fd60  addiu       $t0, $v1, -0x2A0
    ctx->pc = 0x32f808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966624));
    // 0x32f80c: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x32f80cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x32f810: 0x3c064428  lui         $a2, 0x4428
    ctx->pc = 0x32f810u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17448 << 16));
    // 0x32f814: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x32f814u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f818: 0x0  nop
    ctx->pc = 0x32f818u;
    // NOP
    // 0x32f81c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x32f81cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x32f820: 0xc4a44534  lwc1        $f4, 0x4534($a1)
    ctx->pc = 0x32f820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 17716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32f824: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x32f824u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f828: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x32f828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32f82c: 0x0  nop
    ctx->pc = 0x32f82cu;
    // NOP
    // 0x32f830: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x32f830u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[0]));
    // 0x32f834: 0x4604181c  madd.s      $f0, $f3, $f4
    ctx->pc = 0x32f834u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x32f838: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32f838u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32f83c: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x32f83cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x32f840: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32f840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32f844: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x32f844u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[0]));
    // 0x32f848: 0x4604081d  msub.s      $f0, $f1, $f4
    ctx->pc = 0x32f848u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x32f84c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32f84cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32f850: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x32f850u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x32f854: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x32F854u;
    {
        const bool branch_taken_0x32f854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f854) {
            ctx->pc = 0x32F8B8u;
            goto label_32f8b8;
        }
    }
    ctx->pc = 0x32F85Cu;
label_32f85c:
    // 0x32f85c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x32f85cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f860: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x32f860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x32f864: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32f864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32f868: 0x2468fd60  addiu       $t0, $v1, -0x2A0
    ctx->pc = 0x32f868u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966624));
    // 0x32f86c: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x32f86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
    // 0x32f870: 0x3c064428  lui         $a2, 0x4428
    ctx->pc = 0x32f870u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17448 << 16));
    // 0x32f874: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x32f874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x32f878: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x32f878u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f87c: 0x0  nop
    ctx->pc = 0x32f87cu;
    // NOP
    // 0x32f880: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x32f880u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x32f884: 0xc4a44534  lwc1        $f4, 0x4534($a1)
    ctx->pc = 0x32f884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 17716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x32f888: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x32f888u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f88c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x32f88cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32f890: 0x0  nop
    ctx->pc = 0x32f890u;
    // NOP
    // 0x32f894: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x32f894u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[0]));
    // 0x32f898: 0x4604181d  msub.s      $f0, $f3, $f4
    ctx->pc = 0x32f898u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x32f89c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32f89cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32f8a0: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x32f8a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x32f8a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32f8a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32f8a8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x32f8a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[0]));
    // 0x32f8ac: 0x4604081c  madd.s      $f0, $f1, $f4
    ctx->pc = 0x32f8acu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x32f8b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32f8b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32f8b4: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x32f8b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_32f8b8:
    // 0x32f8b8: 0x2649823  subu        $s3, $s3, $a0
    ctx->pc = 0x32f8b8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_32f8bc:
    // 0x32f8bc: 0x2449023  subu        $s2, $s2, $a0
    ctx->pc = 0x32f8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x32f8c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x32f8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32f8c4: 0x50440016  beql        $v0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x32F8C4u;
    {
        const bool branch_taken_0x32f8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x32f8c4) {
            ctx->pc = 0x32F8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F8C4u;
            // 0x32f8c8: 0x3243c  dsll32      $a0, $v1, 16 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F920u;
            goto label_32f920;
        }
    }
    ctx->pc = 0x32F8CCu;
    // 0x32f8cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x32f8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32f8d0: 0x10440012  beq         $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x32F8D0u;
    {
        const bool branch_taken_0x32f8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x32f8d0) {
            ctx->pc = 0x32F91Cu;
            goto label_32f91c;
        }
    }
    ctx->pc = 0x32F8D8u;
    // 0x32f8d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x32f8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f8dc: 0x50440006  beql        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32F8DCu;
    {
        const bool branch_taken_0x32f8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x32f8dc) {
            ctx->pc = 0x32F8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F8DCu;
            // 0x32f8e0: 0x3243c  dsll32      $a0, $v1, 16 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F8F8u;
            goto label_32f8f8;
        }
    }
    ctx->pc = 0x32F8E4u;
    // 0x32f8e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F8E4u;
    {
        const bool branch_taken_0x32f8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f8e4) {
            ctx->pc = 0x32F8F4u;
            goto label_32f8f4;
        }
    }
    ctx->pc = 0x32F8ECu;
    // 0x32f8ec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x32F8ECu;
    {
        const bool branch_taken_0x32f8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F8ECu;
        // 0x32f8f0: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f8ec) {
            ctx->pc = 0x32F944u;
            goto label_32f944;
        }
    }
    ctx->pc = 0x32F8F4u;
label_32f8f4:
    // 0x32f8f4: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x32f8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_32f8f8:
    // 0x32f8f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x32f8f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f8fc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x32f8fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x32f900: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x32f900u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f904: 0xc058b4c  jal         func_162D30
    ctx->pc = 0x32F904u;
    SET_GPR_U32(ctx, 31, 0x32F90Cu);
    ctx->pc = 0x32F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F904u;
    // 0x32f908: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162D30u, 0x32F904u, 0x32F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F90Cu;
label_32f90c:
    // 0x32f90c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32f90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32f910: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32f910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32f914: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x32F914u;
    {
        const bool branch_taken_0x32f914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F914u;
        // 0x32f918: 0x23843  sra         $a3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f914) {
            ctx->pc = 0x32F940u;
            goto label_32f940;
        }
    }
    ctx->pc = 0x32F91Cu;
label_32f91c:
    // 0x32f91c: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x32f91cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
label_32f920:
    // 0x32f920: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x32f920u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32f924: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x32f924u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x32f928: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x32f928u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f92c: 0xc058b4c  jal         func_162D30
    ctx->pc = 0x32F92Cu;
    SET_GPR_U32(ctx, 31, 0x32F934u);
    ctx->pc = 0x32F930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F92Cu;
    // 0x32f930: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x162D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162D30u, 0x32F92Cu, 0x32F934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F934u;
label_32f934:
    // 0x32f934: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x32f934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32f938: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x32f938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32f93c: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x32f93cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_32f940:
    // 0x32f940: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x32f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_32f944:
    // 0x32f944: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x32f944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x32f948: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x32F948u;
    {
        const bool branch_taken_0x32f948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f948) {
            ctx->pc = 0x32F94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F948u;
            // 0x32f94c: 0x96a2000e  lhu         $v0, 0xE($s5) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F964u;
            goto label_32f964;
        }
    }
    ctx->pc = 0x32F950u;
    // 0x32f950: 0x96a2000e  lhu         $v0, 0xE($s5)
    ctx->pc = 0x32f950u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 14)));
    // 0x32f954: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x32f954u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f958: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x32f958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x32f95c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x32F95Cu;
    {
        const bool branch_taken_0x32f95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F95Cu;
        // 0x32f960: 0x2449fff8  addiu       $t1, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f95c) {
            ctx->pc = 0x32F96Cu;
            goto label_32f96c;
        }
    }
    ctx->pc = 0x32F964u;
label_32f964:
    // 0x32f964: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x32f964u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x32f968: 0x259c0  sll         $t3, $v0, 7
    ctx->pc = 0x32f968u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_32f96c:
    // 0x32f96c: 0x8ea30060  lw          $v1, 0x60($s5)
    ctx->pc = 0x32f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x32f970: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x32f970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x32f974: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32F974u;
    {
        const bool branch_taken_0x32f974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x32f974) {
            ctx->pc = 0x32F978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F974u;
            // 0x32f978: 0xffb70000  sd          $s7, 0x0($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F9B0u;
            goto label_32f9b0;
        }
    }
    ctx->pc = 0x32F97Cu;
    // 0x32f97c: 0xffb70000  sd          $s7, 0x0($sp)
    ctx->pc = 0x32f97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 23));
    // 0x32f980: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32f980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f984: 0xffbe0008  sd          $fp, 0x8($sp)
    ctx->pc = 0x32f984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 30));
    // 0x32f988: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32f988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f98c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32f98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x32f990: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x32f990u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f994: 0xffa70018  sd          $a3, 0x18($sp)
    ctx->pc = 0x32f994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 7));
    // 0x32f998: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x32f998u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f99c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x32f99cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32f9a0: 0xc0cb83c  jal         func_32E0F0
    ctx->pc = 0x32F9A0u;
    SET_GPR_U32(ctx, 31, 0x32F9A8u);
    ctx->pc = 0x32F9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F9A0u;
    // 0x32f9a4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E0F0u, 0x32F9A0u, 0x32F9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F9A8u;
label_32f9a8:
    // 0x32f9a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32F9A8u;
    {
        const bool branch_taken_0x32f9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f9a8) {
            ctx->pc = 0x32F9D8u;
            goto label_32f9d8;
        }
    }
    ctx->pc = 0x32F9B0u;
label_32f9b0:
    // 0x32f9b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x32f9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f9b4: 0xffbe0008  sd          $fp, 0x8($sp)
    ctx->pc = 0x32f9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 30));
    // 0x32f9b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x32f9b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f9bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32f9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x32f9c0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x32f9c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f9c4: 0xffa70018  sd          $a3, 0x18($sp)
    ctx->pc = 0x32f9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 7));
    // 0x32f9c8: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x32f9c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f9cc: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x32f9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x32f9d0: 0xc0cbc94  jal         func_32F250
    ctx->pc = 0x32F9D0u;
    SET_GPR_U32(ctx, 31, 0x32F9D8u);
    ctx->pc = 0x32F9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F9D0u;
    // 0x32f9d4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F250u, 0x32F9D0u, 0x32F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F9D8u;
label_32f9d8:
    // 0x32f9d8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x32f9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_32f9dc:
    // 0x32f9dc: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x32f9dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32f9e0: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x32f9e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x32f9e4: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x32f9e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x32f9e8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x32f9e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x32f9ec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x32f9ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x32f9f0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x32f9f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x32f9f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x32f9f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32f9f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32f9f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32f9fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x32f9fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32fa00: 0x3e00008  jr          $ra
    ctx->pc = 0x32FA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FA00u;
        // 0x32fa04: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FA08u;
    // 0x32fa08: 0x0  nop
    ctx->pc = 0x32fa08u;
    // NOP
    // 0x32fa0c: 0x0  nop
    ctx->pc = 0x32fa0cu;
    // NOP
    // 0x32fa10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32fa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32fa14: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x32fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x32fa18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32fa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32fa1c: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x32fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x32fa20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32fa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32fa24: 0xac6047a0  sw          $zero, 0x47A0($v1)
    ctx->pc = 0x32fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18336), GPR_U32(ctx, 0));
    // 0x32fa28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32fa28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fa2c: 0xac40479c  sw          $zero, 0x479C($v0)
    ctx->pc = 0x32fa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18332), GPR_U32(ctx, 0));
    // 0x32fa30: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x32fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x32fa34: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x32fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x32fa38: 0xac604798  sw          $zero, 0x4798($v1)
    ctx->pc = 0x32fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18328), GPR_U32(ctx, 0));
    // 0x32fa3c: 0xac404794  sw          $zero, 0x4794($v0)
    ctx->pc = 0x32fa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18324), GPR_U32(ctx, 0));
    // 0x32fa40: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x32fa40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x32fa44: 0xc0cb720  jal         func_32DC80
    ctx->pc = 0x32FA44u;
    SET_GPR_U32(ctx, 31, 0x32FA4Cu);
    ctx->pc = 0x32FA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FA44u;
    // 0x32fa48: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC80u, 0x32FA44u, 0x32FA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FA4Cu;
label_32fa4c:
    // 0x32fa4c: 0x9605000e  lhu         $a1, 0xE($s0)
    ctx->pc = 0x32fa4cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x32fa50: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x32fa50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x32fa54: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x32fa54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x32fa58: 0xc0cb7b8  jal         func_32DEE0
    ctx->pc = 0x32FA58u;
    SET_GPR_U32(ctx, 31, 0x32FA60u);
    ctx->pc = 0x32FA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FA58u;
    // 0x32fa5c: 0x9604000c  lhu         $a0, 0xC($s0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEE0u, 0x32FA58u, 0x32FA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FA60u;
label_32fa60:
    // 0x32fa60: 0xc0cbd2c  jal         func_32F4B0
    ctx->pc = 0x32FA60u;
    SET_GPR_U32(ctx, 31, 0x32FA68u);
    ctx->pc = 0x32FA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FA60u;
    // 0x32fa64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4B0u, 0x32FA60u, 0x32FA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FA68u;
label_32fa68:
    // 0x32fa68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32fa68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32fa6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32fa6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fa70: 0x3e00008  jr          $ra
    ctx->pc = 0x32FA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FA70u;
        // 0x32fa74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FA78u;
    // 0x32fa78: 0x0  nop
    ctx->pc = 0x32fa78u;
    // NOP
    // 0x32fa7c: 0x0  nop
    ctx->pc = 0x32fa7cu;
    // NOP
    // 0x32fa80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32fa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32fa84: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x32fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x32fa88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32fa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32fa8c: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x32fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x32fa90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32fa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32fa94: 0xac6047a0  sw          $zero, 0x47A0($v1)
    ctx->pc = 0x32fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18336), GPR_U32(ctx, 0));
    // 0x32fa98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32fa98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fa9c: 0xac40479c  sw          $zero, 0x479C($v0)
    ctx->pc = 0x32fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18332), GPR_U32(ctx, 0));
    // 0x32faa0: 0x3c0301da  lui         $v1, 0x1DA
    ctx->pc = 0x32faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)474 << 16));
    // 0x32faa4: 0x3c0201da  lui         $v0, 0x1DA
    ctx->pc = 0x32faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)474 << 16));
    // 0x32faa8: 0xac604798  sw          $zero, 0x4798($v1)
    ctx->pc = 0x32faa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18328), GPR_U32(ctx, 0));
    // 0x32faac: 0xac404794  sw          $zero, 0x4794($v0)
    ctx->pc = 0x32faacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18324), GPR_U32(ctx, 0));
    // 0x32fab0: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x32fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x32fab4: 0xc0cb720  jal         func_32DC80
    ctx->pc = 0x32FAB4u;
    SET_GPR_U32(ctx, 31, 0x32FABCu);
    ctx->pc = 0x32FAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FAB4u;
    // 0x32fab8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DC80u, 0x32FAB4u, 0x32FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FABCu;
label_32fabc:
    // 0x32fabc: 0x9605000e  lhu         $a1, 0xE($s0)
    ctx->pc = 0x32fabcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x32fac0: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x32fac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x32fac4: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x32fac4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x32fac8: 0xc0cb7b8  jal         func_32DEE0
    ctx->pc = 0x32FAC8u;
    SET_GPR_U32(ctx, 31, 0x32FAD0u);
    ctx->pc = 0x32FACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FAC8u;
    // 0x32facc: 0x9604000c  lhu         $a0, 0xC($s0) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEE0u, 0x32FAC8u, 0x32FAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FAD0u;
label_32fad0:
    // 0x32fad0: 0xc0cbdb8  jal         func_32F6E0
    ctx->pc = 0x32FAD0u;
    SET_GPR_U32(ctx, 31, 0x32FAD8u);
    ctx->pc = 0x32FAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FAD0u;
    // 0x32fad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F6E0u;
    goto label_32f6e0;
    ctx->pc = 0x32FAD8u;
label_32fad8:
    // 0x32fad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32fad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32fadc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32fadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fae0: 0x3e00008  jr          $ra
    ctx->pc = 0x32FAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FAE0u;
        // 0x32fae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FAE8u;
    // 0x32fae8: 0x0  nop
    ctx->pc = 0x32fae8u;
    // NOP
    // 0x32faec: 0x0  nop
    ctx->pc = 0x32faecu;
    // NOP
    if (ctx->pc == 0x32faecu) { ctx->pc = 0x32faf0u; }
}
