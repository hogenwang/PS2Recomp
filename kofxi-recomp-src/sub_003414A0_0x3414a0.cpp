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

// Function: sub_003414A0
// Address: 0x3414a0 - 0x341640
void sub_003414A0_0x3414a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003414A0_0x3414a0");
#endif

    ctx->pc = 0x3414a0u;

    // 0x3414a0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3414a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3414a4: 0xc443ea94  lwc1        $f3, -0x156C($v0)
    ctx->pc = 0x3414a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3414a8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x3414a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x3414ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3414acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3414b0: 0x0  nop
    ctx->pc = 0x3414b0u;
    // NOP
    // 0x3414b4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3414b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3414b8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3414b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3414bc: 0x8c42eaa8  lw          $v0, -0x1558($v0)
    ctx->pc = 0x3414bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961832)));
    // 0x3414c0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x3414c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3414c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3414c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3414c8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3414c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3414cc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3414CCu;
    {
        const bool branch_taken_0x3414cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3414cc) {
            ctx->pc = 0x3414D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3414CCu;
            // 0x3414d0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3414E0u;
            goto label_3414e0;
        }
    }
    ctx->pc = 0x3414D4u;
    // 0x3414d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3414d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3414d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3414D8u;
    {
        const bool branch_taken_0x3414d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3414DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3414D8u;
        // 0x3414dc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3414d8) {
            ctx->pc = 0x3414F8u;
            goto label_3414f8;
        }
    }
    ctx->pc = 0x3414E0u;
label_3414e0:
    // 0x3414e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3414e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3414e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3414e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3414e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3414e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3414ec: 0x0  nop
    ctx->pc = 0x3414ecu;
    // NOP
    // 0x3414f0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3414f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3414f4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3414f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3414f8:
    // 0x3414f8: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x3414f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x3414fc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3414fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x341500: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x341500u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x341504: 0x8c42eaac  lw          $v0, -0x1554($v0)
    ctx->pc = 0x341504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961836)));
    // 0x341508: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x341508u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34150c: 0x0  nop
    ctx->pc = 0x34150cu;
    // NOP
    // 0x341510: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x341510u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x341514: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x341514u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x341518: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x341518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x34151c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34151cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x341520: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x341520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x341524: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341524u;
    {
        const bool branch_taken_0x341524 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x341524) {
            ctx->pc = 0x341528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341524u;
            // 0x341528: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341538u;
            goto label_341538;
        }
    }
    ctx->pc = 0x34152Cu;
    // 0x34152c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34152cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341530: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x341530u;
    {
        const bool branch_taken_0x341530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341530u;
        // 0x341534: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341530) {
            ctx->pc = 0x341550u;
            goto label_341550;
        }
    }
    ctx->pc = 0x341538u;
label_341538:
    // 0x341538: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x341538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34153c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34153cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x341540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x341540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341544: 0x0  nop
    ctx->pc = 0x341544u;
    // NOP
    // 0x341548: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x341548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x34154c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x34154cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_341550:
    // 0x341550: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x341550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x341554: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x341554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x341558: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x341558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34155c: 0x0  nop
    ctx->pc = 0x34155cu;
    // NOP
    // 0x341560: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x341560u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
    // 0x341564: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x341564u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x341568: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341568u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34156c: 0x861018  mult        $v0, $a0, $a2
    ctx->pc = 0x34156cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x341570: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x341570u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x341574: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x341574u;
    {
        const bool branch_taken_0x341574 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x341574) {
            ctx->pc = 0x341578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x341574u;
            // 0x341578: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x341588u;
            goto label_341588;
        }
    }
    ctx->pc = 0x34157Cu;
    // 0x34157c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34157cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341580: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x341580u;
    {
        const bool branch_taken_0x341580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x341584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x341580u;
        // 0x341584: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x341580) {
            ctx->pc = 0x3415A0u;
            goto label_3415a0;
        }
    }
    ctx->pc = 0x341588u;
label_341588:
    // 0x341588: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x341588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34158c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34158cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x341590: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x341590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341594: 0x0  nop
    ctx->pc = 0x341594u;
    // NOP
    // 0x341598: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x341598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x34159c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x34159cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3415a0:
    // 0x3415a0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3415a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3415a4: 0xc441ea98  lwc1        $f1, -0x1568($v0)
    ctx->pc = 0x3415a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3415a8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3415a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3415ac: 0x0  nop
    ctx->pc = 0x3415acu;
    // NOP
    // 0x3415b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3415b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3415b4: 0xa61018  mult        $v0, $a1, $a2
    ctx->pc = 0x3415b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3415b8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3415b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3415bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3415bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3415c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3415c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3415c4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3415c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3415c8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3415C8u;
    {
        const bool branch_taken_0x3415c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3415c8) {
            ctx->pc = 0x3415CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3415C8u;
            // 0x3415cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3415DCu;
            goto label_3415dc;
        }
    }
    ctx->pc = 0x3415D0u;
    // 0x3415d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3415d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3415d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3415D4u;
    {
        const bool branch_taken_0x3415d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3415D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3415D4u;
        // 0x3415d8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3415d4) {
            ctx->pc = 0x3415F4u;
            goto label_3415f4;
        }
    }
    ctx->pc = 0x3415DCu;
label_3415dc:
    // 0x3415dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3415dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3415e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3415e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3415e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3415e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3415e8: 0x0  nop
    ctx->pc = 0x3415e8u;
    // NOP
    // 0x3415ec: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3415ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3415f0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3415f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3415f4:
    // 0x3415f4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3415f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x3415f8: 0xc441ea9c  lwc1        $f1, -0x1564($v0)
    ctx->pc = 0x3415f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3415fc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3415fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341600: 0x0  nop
    ctx->pc = 0x341600u;
    // NOP
    // 0x341604: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x341604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x341608: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x341608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x34160c: 0x28410400  slti        $at, $v0, 0x400
    ctx->pc = 0x34160cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x341610: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x341610u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x341614: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x341614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x341618: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x341618u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x34161c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x34161cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x341620: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x341620u;
    {
        const bool branch_taken_0x341620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x341620) {
            ctx->pc = 0x34162Cu;
            goto label_34162c;
        }
    }
    ctx->pc = 0x341628u;
    // 0x341628: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x341628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34162c:
    // 0x34162c: 0x80d046c  j           func_3411B0
    ctx->pc = 0x34162Cu;
    ctx->pc = 0x3411B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3411B0u, 0x34162Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x341634u;
    // 0x341634: 0x0  nop
    ctx->pc = 0x341634u;
    // NOP
    // 0x341638: 0x0  nop
    ctx->pc = 0x341638u;
    // NOP
    // 0x34163c: 0x0  nop
    ctx->pc = 0x34163cu;
    // NOP
}
