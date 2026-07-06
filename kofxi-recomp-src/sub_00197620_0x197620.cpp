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

// Function: sub_00197620
// Address: 0x197620 - 0x1978b0
void sub_00197620_0x197620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197620_0x197620");
#endif

    ctx->pc = 0x197620u;

    // 0x197620: 0x9082008c  lbu         $v0, 0x8C($a0)
    ctx->pc = 0x197620u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x197624: 0x30490002  andi        $t1, $v0, 0x2
    ctx->pc = 0x197624u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x197628: 0x51200013  beql        $t1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x197628u;
    {
        const bool branch_taken_0x197628 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x197628) {
            ctx->pc = 0x19762Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197628u;
            // 0x19762c: 0x84830350  lh          $v1, 0x350($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197678u;
            goto label_197678;
        }
    }
    ctx->pc = 0x197630u;
    // 0x197630: 0x84830350  lh          $v1, 0x350($a0)
    ctx->pc = 0x197630u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 848)));
    // 0x197634: 0xc4820090  lwc1        $f2, 0x90($a0)
    ctx->pc = 0x197634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x197638: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x197638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19763c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19763cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197640: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x197640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197644: 0x0  nop
    ctx->pc = 0x197644u;
    // NOP
    // 0x197648: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x197648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x19764c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19764cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197650: 0x0  nop
    ctx->pc = 0x197650u;
    // NOP
    // 0x197654: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x197654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x197658: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x197658u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x19765c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x19765cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x197660: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x197660u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x197664: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x197664u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x197668: 0x0  nop
    ctx->pc = 0x197668u;
    // NOP
    // 0x19766c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19766cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x197670: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x197670u;
    {
        const bool branch_taken_0x197670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197670u;
        // 0x197674: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197670) {
            ctx->pc = 0x1976B8u;
            goto label_1976b8;
        }
    }
    ctx->pc = 0x197678u;
label_197678:
    // 0x197678: 0xc4820090  lwc1        $f2, 0x90($a0)
    ctx->pc = 0x197678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19767c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x19767cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x197680: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x197680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197684: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x197684u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197688: 0x0  nop
    ctx->pc = 0x197688u;
    // NOP
    // 0x19768c: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x19768cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x197690: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x197690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197694: 0x0  nop
    ctx->pc = 0x197694u;
    // NOP
    // 0x197698: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x197698u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19769c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19769cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1976a0: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x1976a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1976a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1976a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1976a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1976a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1976ac: 0x0  nop
    ctx->pc = 0x1976acu;
    // NOP
    // 0x1976b0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1976b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1976b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1976b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1976b8:
    // 0x1976b8: 0x2443c  dsll32      $t0, $v0, 16
    ctx->pc = 0x1976b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1976bc: 0x90a2008c  lbu         $v0, 0x8C($a1)
    ctx->pc = 0x1976bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x1976c0: 0x30470002  andi        $a3, $v0, 0x2
    ctx->pc = 0x1976c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1976c4: 0x10e00013  beqz        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x1976C4u;
    {
        const bool branch_taken_0x1976c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1976C4u;
        // 0x1976c8: 0x8443f  dsra32      $t0, $t0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976c4) {
            ctx->pc = 0x197714u;
            goto label_197714;
        }
    }
    ctx->pc = 0x1976CCu;
    // 0x1976cc: 0x84a30350  lh          $v1, 0x350($a1)
    ctx->pc = 0x1976ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 848)));
    // 0x1976d0: 0xc4a20090  lwc1        $f2, 0x90($a1)
    ctx->pc = 0x1976d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1976d4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x1976d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1976d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1976d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1976dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1976dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1976e0: 0x0  nop
    ctx->pc = 0x1976e0u;
    // NOP
    // 0x1976e4: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x1976e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1976e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1976e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1976ec: 0x0  nop
    ctx->pc = 0x1976ecu;
    // NOP
    // 0x1976f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1976f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1976f4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1976f4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x1976f8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1976f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x1976fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1976fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x197700: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x197700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x197704: 0x0  nop
    ctx->pc = 0x197704u;
    // NOP
    // 0x197708: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x197708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19770c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x19770Cu;
    {
        const bool branch_taken_0x19770c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19770Cu;
        // 0x197710: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19770c) {
            ctx->pc = 0x197758u;
            goto label_197758;
        }
    }
    ctx->pc = 0x197714u;
label_197714:
    // 0x197714: 0x84a30350  lh          $v1, 0x350($a1)
    ctx->pc = 0x197714u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 848)));
    // 0x197718: 0xc4a20090  lwc1        $f2, 0x90($a1)
    ctx->pc = 0x197718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19771c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x19771cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x197720: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x197720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197724: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x197724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197728: 0x0  nop
    ctx->pc = 0x197728u;
    // NOP
    // 0x19772c: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x19772cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x197730: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x197730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197734: 0x0  nop
    ctx->pc = 0x197734u;
    // NOP
    // 0x197738: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x197738u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19773c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x19773cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x197740: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x197740u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x197744: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x197744u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x197748: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x197748u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19774c: 0x0  nop
    ctx->pc = 0x19774cu;
    // NOP
    // 0x197750: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x197750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x197754: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x197754u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_197758:
    // 0x197758: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x197758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19775c: 0x8143c  dsll32      $v0, $t0, 16
    ctx->pc = 0x19775cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
    // 0x197760: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x197760u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x197764: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x197764u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x197768: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x197768u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19776c: 0x50200007  beql        $at, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x19776Cu;
    {
        const bool branch_taken_0x19776c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19776c) {
            ctx->pc = 0x197770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19776Cu;
            // 0x197770: 0x62082a  slt         $at, $v1, $v0 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19778Cu;
            goto label_19778c;
        }
    }
    ctx->pc = 0x197774u;
    // 0x197774: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x197774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x197778: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x197778u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19777c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x19777cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x197780: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x197780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x197784: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x197784u;
    {
        const bool branch_taken_0x197784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197784u;
        // 0x197788: 0x2143f  dsra32      $v0, $v0, 16 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197784) {
            ctx->pc = 0x19789Cu;
            goto label_19789c;
        }
    }
    ctx->pc = 0x19778Cu;
label_19778c:
    // 0x19778c: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x19778Cu;
    {
        const bool branch_taken_0x19778c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19778c) {
            ctx->pc = 0x197790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19778Cu;
            // 0x197790: 0x312300ff  andi        $v1, $t1, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19779Cu;
            goto label_19779c;
        }
    }
    ctx->pc = 0x197794u;
    // 0x197794: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x197794u;
    {
        const bool branch_taken_0x197794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197794u;
        // 0x197798: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197794) {
            ctx->pc = 0x19789Cu;
            goto label_19789c;
        }
    }
    ctx->pc = 0x19779Cu;
label_19779c:
    // 0x19779c: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x19779cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1977a0: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1977a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1977a4: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1977A4u;
    {
        const bool branch_taken_0x1977a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1977a4) {
            ctx->pc = 0x1977A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1977A4u;
            // 0x1977a8: 0x8c8200dc  lw          $v0, 0xDC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1977D4u;
            goto label_1977d4;
        }
    }
    ctx->pc = 0x1977ACu;
    // 0x1977ac: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1977acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1977b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1977B0u;
    {
        const bool branch_taken_0x1977b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1977b0) {
            ctx->pc = 0x1977CCu;
            goto label_1977cc;
        }
    }
    ctx->pc = 0x1977B8u;
    // 0x1977b8: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x1977b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1977bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1977bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1977c0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1977c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1977c4: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x1977c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1977c8: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1977c8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
label_1977cc:
    // 0x1977cc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1977CCu;
    {
        const bool branch_taken_0x1977cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1977D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977CCu;
        // 0x1977d0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1977cc) {
            ctx->pc = 0x19789Cu;
            goto label_19789c;
        }
    }
    ctx->pc = 0x1977D4u;
label_1977d4:
    // 0x1977d4: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x1977d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x1977d8: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x1977d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1977dc: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1977DCu;
    {
        const bool branch_taken_0x1977dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1977dc) {
            ctx->pc = 0x1977E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1977DCu;
            // 0x1977e0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1977E4u;
            goto label_1977e4;
        }
    }
    ctx->pc = 0x1977E4u;
label_1977e4:
    // 0x1977e4: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x1977e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x1977e8: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x1977e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1977ec: 0x8ca9452c  lw          $t1, 0x452C($a1)
    ctx->pc = 0x1977ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 17708)));
    // 0x1977f0: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1977f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1977f4: 0x84880000  lh          $t0, 0x0($a0)
    ctx->pc = 0x1977f4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1977f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1977f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1977fc: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x1977fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x197800: 0x84a7db32  lh          $a3, -0x24CE($a1)
    ctx->pc = 0x197800u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294957874)));
    // 0x197804: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x197804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x197808: 0x84a5db30  lh          $a1, -0x24D0($a1)
    ctx->pc = 0x197808u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294957872)));
    // 0x19780c: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x19780cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x197810: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x197810u;
    {
        const bool branch_taken_0x197810 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x197814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197810u;
        // 0x197814: 0x72843  sra         $a1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197810) {
            ctx->pc = 0x197820u;
            goto label_197820;
        }
    }
    ctx->pc = 0x197818u;
    // 0x197818: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x197818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x19781c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x19781cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_197820:
    // 0x197820: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x197820u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x197824: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x197824u;
    {
        const bool branch_taken_0x197824 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x197824) {
            ctx->pc = 0x197828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197824u;
            // 0x197828: 0x9084008c  lbu         $a0, 0x8C($a0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197850u;
            goto label_197850;
        }
    }
    ctx->pc = 0x19782Cu;
    // 0x19782c: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x19782cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x197830: 0x3c05009b  lui         $a1, 0x9B
    ctx->pc = 0x197830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)155 << 16));
    // 0x197834: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x197834u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x197838: 0x8ca94528  lw          $t1, 0x4528($a1)
    ctx->pc = 0x197838u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 17704)));
    // 0x19783c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x19783cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x197840: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x197840u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197844: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x197844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x197848: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x197848u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19784c: 0x9084008c  lbu         $a0, 0x8C($a0)
    ctx->pc = 0x19784cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 140)));
label_197850:
    // 0x197850: 0x8a2026  xor         $a0, $a0, $t2
    ctx->pc = 0x197850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 10));
    // 0x197854: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x197854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x197858: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x197858u;
    {
        const bool branch_taken_0x197858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x197858) {
            ctx->pc = 0x19785Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197858u;
            // 0x19785c: 0x3124000c  andi        $a0, $t1, 0xC (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)12);
            ctx->in_delay_slot = false;
            ctx->pc = 0x197878u;
            goto label_197878;
        }
    }
    ctx->pc = 0x197860u;
    // 0x197860: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x197860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x197864: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x197864u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x197868: 0x21023  negu        $v0, $v0
    ctx->pc = 0x197868u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x19786c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19786cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x197870: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x197870u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x197874: 0x3124000c  andi        $a0, $t1, 0xC
    ctx->pc = 0x197874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)12);
label_197878:
    // 0x197878: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x197878u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
    // 0x19787c: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19787Cu;
    {
        const bool branch_taken_0x19787c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x19787c) {
            ctx->pc = 0x197880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19787Cu;
            // 0x197880: 0x2143c  dsll32      $v0, $v0, 16 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19788Cu;
            goto label_19788c;
        }
    }
    ctx->pc = 0x197884u;
    // 0x197884: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x197884u;
    {
        const bool branch_taken_0x197884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197884) {
            ctx->pc = 0x19789Cu;
            goto label_19789c;
        }
    }
    ctx->pc = 0x19788Cu;
label_19788c:
    // 0x19788c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19788cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x197890: 0x21023  negu        $v0, $v0
    ctx->pc = 0x197890u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x197894: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x197894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x197898: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x197898u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_19789c:
    // 0x19789c: 0x3e00008  jr          $ra
    ctx->pc = 0x19789Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19789Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1978A4u;
    // 0x1978a4: 0x0  nop
    ctx->pc = 0x1978a4u;
    // NOP
    // 0x1978a8: 0x0  nop
    ctx->pc = 0x1978a8u;
    // NOP
    // 0x1978ac: 0x0  nop
    ctx->pc = 0x1978acu;
    // NOP
    if (ctx->pc == 0x1978acu) { ctx->pc = 0x1978b0u; }
}
