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

// Function: sub_001900C0
// Address: 0x1900c0 - 0x190c00
void sub_001900C0_0x1900c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001900C0_0x1900c0");
#endif

    switch (ctx->pc) {
        case 0x1902dcu: goto label_1902dc;
        case 0x1903e0u: goto label_1903e0;
        case 0x190430u: goto label_190430;
        case 0x190444u: goto label_190444;
        case 0x19049cu: goto label_19049c;
        case 0x1904acu: goto label_1904ac;
        case 0x1904ecu: goto label_1904ec;
        case 0x1904fcu: goto label_1904fc;
        case 0x190520u: goto label_190520;
        case 0x190530u: goto label_190530;
        case 0x190540u: goto label_190540;
        case 0x190550u: goto label_190550;
        case 0x190564u: goto label_190564;
        case 0x190574u: goto label_190574;
        case 0x190584u: goto label_190584;
        case 0x190594u: goto label_190594;
        case 0x190790u: goto label_190790;
        case 0x1907a0u: goto label_1907a0;
        case 0x190908u: goto label_190908;
        case 0x190958u: goto label_190958;
        case 0x19096cu: goto label_19096c;
        case 0x19099cu: goto label_19099c;
        case 0x1909f4u: goto label_1909f4;
        case 0x190a1cu: goto label_190a1c;
        case 0x190a30u: goto label_190a30;
        case 0x190ac4u: goto label_190ac4;
        case 0x190ad8u: goto label_190ad8;
        case 0x190af8u: goto label_190af8;
        case 0x190b0cu: goto label_190b0c;
        case 0x190b2cu: goto label_190b2c;
        case 0x190b40u: goto label_190b40;
        case 0x190b5cu: goto label_190b5c;
        case 0x190b84u: goto label_190b84;
        case 0x190b98u: goto label_190b98;
        case 0x190bc0u: goto label_190bc0;
        case 0x190bd4u: goto label_190bd4;
        default: break;
    }

    ctx->pc = 0x1900c0u;

    // 0x1900c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1900c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1900c4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1900c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1900c8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1900c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1900cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1900ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1900d0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1900d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1900d4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1900d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1900d8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1900d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1900dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1900dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1900e0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1900e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1900e4: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x1900e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1900e8: 0x2463c8e0  addiu       $v1, $v1, -0x3720
    ctx->pc = 0x1900e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953184));
    // 0x1900ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1900ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1900f0: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x1900f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1900f4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1900f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1900f8: 0x2463db78  addiu       $v1, $v1, -0x2488
    ctx->pc = 0x1900f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957944));
    // 0x1900fc: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1900fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x190100: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x190100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x190104: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x190104u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190108: 0x2463dca8  addiu       $v1, $v1, -0x2358
    ctx->pc = 0x190108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958248));
    // 0x19010c: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x19010cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x190110: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x190110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x190114: 0x2463c8f8  addiu       $v1, $v1, -0x3708
    ctx->pc = 0x190114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953208));
    // 0x190118: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x190118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19011c: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x19011cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x190120: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x190120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x190124: 0x3c0442e0  lui         $a0, 0x42E0
    ctx->pc = 0x190124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17120 << 16));
    // 0x190128: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x190128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19012c: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x19012cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x190130: 0x2463c8e4  addiu       $v1, $v1, -0x371C
    ctx->pc = 0x190130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953188));
    // 0x190134: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x190134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190138: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x190138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19013c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x19013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x190140: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x190140u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x190144: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x190144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x190148: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x190148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19014c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x19014cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190150: 0x2463c8f0  addiu       $v1, $v1, -0x3710
    ctx->pc = 0x190150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953200));
    // 0x190154: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190154u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190158: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x190158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19015c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19015cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190160: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x190160u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x190164: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x190164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190168: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x190168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19016c: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x19016cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x190170: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x190170u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x190174: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x190174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x190178: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x190178u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x19017c: 0x9063b280  lbu         $v1, -0x4D80($v1)
    ctx->pc = 0x19017cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947456)));
    // 0x190180: 0x46040018  adda.s      $f0, $f4
    ctx->pc = 0x190180u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[4]));
    // 0x190184: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x190184u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x190188: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x190188u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19018c: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x19018cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x190190: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x190190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x190194: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x190194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x190198: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x190198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x19019c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x19019cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1901a0: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1901A0u;
    {
        const bool branch_taken_0x1901a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1901A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901A0u;
        // 0x1901a4: 0xe7a00060  swc1        $f0, 0x60($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1901a0) {
            ctx->pc = 0x1901BCu;
            goto label_1901bc;
        }
    }
    ctx->pc = 0x1901A8u;
    // 0x1901a8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1901a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1901ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1901acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1901b0: 0x0  nop
    ctx->pc = 0x1901b0u;
    // NOP
    // 0x1901b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1901b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1901b8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1901b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1901bc:
    // 0x1901bc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1901bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1901c0: 0x6243c  dsll32      $a0, $a2, 16
    ctx->pc = 0x1901c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1901c4: 0x2463c8e8  addiu       $v1, $v1, -0x3718
    ctx->pc = 0x1901c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953192));
    // 0x1901c8: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1901c8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1901cc: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1901ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1901d0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1901d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1901d4: 0x28830025  slti        $v1, $a0, 0x25
    ctx->pc = 0x1901d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x1901d8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1901d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1901dc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1901dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1901e0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1901e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1901e4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1901e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1901e8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1901e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1901ec: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1901ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1901f0: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x1901f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1901f4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1901f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1901f8: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1901f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1901fc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1901fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x190200: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x190200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x190204: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x190204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x190208: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x190208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x19020c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x19020cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x190210: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x190210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x190214: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x190214u;
    {
        const bool branch_taken_0x190214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190214u;
        // 0x190218: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190214) {
            ctx->pc = 0x19022Cu;
            goto label_19022c;
        }
    }
    ctx->pc = 0x19021Cu;
    // 0x19021c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19021cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x190220: 0x2463c914  addiu       $v1, $v1, -0x36EC
    ctx->pc = 0x190220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953236));
    // 0x190224: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x190224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190228: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x190228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_19022c:
    // 0x19022c: 0x2881001d  slti        $at, $a0, 0x1D
    ctx->pc = 0x19022cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x190230: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x190230u;
    {
        const bool branch_taken_0x190230 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x190230) {
            ctx->pc = 0x19024Cu;
            goto label_19024c;
        }
    }
    ctx->pc = 0x190238u;
    // 0x190238: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x190238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19023c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19023cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190240: 0x2463c914  addiu       $v1, $v1, -0x36EC
    ctx->pc = 0x190240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953236));
    // 0x190244: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x190244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190248: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x190248u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_19024c:
    // 0x19024c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19024cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x190250: 0x2463c914  addiu       $v1, $v1, -0x36EC
    ctx->pc = 0x190250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953236));
    // 0x190254: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x190254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190258: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x190258u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19025c: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x19025Cu;
    {
        const bool branch_taken_0x19025c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19025c) {
            ctx->pc = 0x190260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19025Cu;
            // 0x190260: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1902A4u;
            goto label_1902a4;
        }
    }
    ctx->pc = 0x190264u;
    // 0x190264: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x190264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x190268: 0x2463c912  addiu       $v1, $v1, -0x36EE
    ctx->pc = 0x190268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953234));
    // 0x19026c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19026cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x190270: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x190270u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190274: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x190274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190278: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x190278u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x19027c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19027cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x190280: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x190280u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x190284: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x190284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x190288: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x190288u;
    {
        const bool branch_taken_0x190288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190288) {
            ctx->pc = 0x19028Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190288u;
            // 0x19028c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19029Cu;
            goto label_19029c;
        }
    }
    ctx->pc = 0x190290u;
    // 0x190290: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x190290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x190294: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x190294u;
    {
        const bool branch_taken_0x190294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190294u;
        // 0x190298: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190294) {
            ctx->pc = 0x1902A8u;
            goto label_1902a8;
        }
    }
    ctx->pc = 0x19029Cu;
label_19029c:
    // 0x19029c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19029Cu;
    {
        const bool branch_taken_0x19029c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1902A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19029Cu;
        // 0x1902a0: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19029c) {
            ctx->pc = 0x1902A8u;
            goto label_1902a8;
        }
    }
    ctx->pc = 0x1902A4u;
label_1902a4:
    // 0x1902a4: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1902a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_1902a8:
    // 0x1902a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1902a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1902ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1902acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1902b0: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1902b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1902b4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1902b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1902b8: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1902b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1902bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1902bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1902c0: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x1902c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
    // 0x1902c4: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x1902c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1902c8: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x1902c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x1902cc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1902ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1902d0: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x1902d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x1902d4: 0xc0c12cc  jal         func_304B30
    ctx->pc = 0x1902D4u;
    SET_GPR_U32(ctx, 31, 0x1902DCu);
    ctx->pc = 0x1902D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1902D4u;
    // 0x1902d8: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304B30u, 0x1902D4u, 0x1902DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1902DCu;
label_1902dc:
    // 0x1902dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1902dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1902e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1902E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1902E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902E0u;
        // 0x1902e4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1902E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1902E8u;
    // 0x1902e8: 0x0  nop
    ctx->pc = 0x1902e8u;
    // NOP
    // 0x1902ec: 0x0  nop
    ctx->pc = 0x1902ecu;
    // NOP
    // 0x1902f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1902f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1902f4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1902f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1902f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1902f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1902fc: 0x2463db5c  addiu       $v1, $v1, -0x24A4
    ctx->pc = 0x1902fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957916));
    // 0x190300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190304: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x190304u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x190308: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x190308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19030c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x19030cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x190310: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x190310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x190314: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x190314u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x190318: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x190318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19031c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x19031cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x190320: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x190320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x190324: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x190324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190328: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x190328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x19032c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19032Cu;
    {
        const bool branch_taken_0x19032c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19032c) {
            ctx->pc = 0x190330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19032Cu;
            // 0x190330: 0x920400b8  lbu         $a0, 0xB8($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190340u;
            goto label_190340;
        }
    }
    ctx->pc = 0x190334u;
    // 0x190334: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x190334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x190338: 0xa20300b8  sb          $v1, 0xB8($s0)
    ctx->pc = 0x190338u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 3));
    // 0x19033c: 0x920400b8  lbu         $a0, 0xB8($s0)
    ctx->pc = 0x19033cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 184)));
label_190340:
    // 0x190340: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x190340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x190344: 0x50830096  beql        $a0, $v1, . + 4 + (0x96 << 2)
    ctx->pc = 0x190344u;
    {
        const bool branch_taken_0x190344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x190344) {
            ctx->pc = 0x190348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190344u;
            // 0x190348: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1905A0u;
            goto label_1905a0;
        }
    }
    ctx->pc = 0x19034Cu;
    // 0x19034c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x19034cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x190350: 0x5083006d  beql        $a0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x190350u;
    {
        const bool branch_taken_0x190350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x190350) {
            ctx->pc = 0x190354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190350u;
            // 0x190354: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190508u;
            goto label_190508;
        }
    }
    ctx->pc = 0x190358u;
    // 0x190358: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x190358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x19035c: 0x1083008f  beq         $a0, $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x19035Cu;
    {
        const bool branch_taken_0x19035c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19035c) {
            ctx->pc = 0x19059Cu;
            goto label_19059c;
        }
    }
    ctx->pc = 0x190364u;
    // 0x190364: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x190364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x190368: 0x5083003b  beql        $a0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x190368u;
    {
        const bool branch_taken_0x190368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x190368) {
            ctx->pc = 0x19036Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190368u;
            // 0x19036c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190458u;
            goto label_190458;
        }
    }
    ctx->pc = 0x190370u;
    // 0x190370: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190374: 0x50850031  beql        $a0, $a1, . + 4 + (0x31 << 2)
    ctx->pc = 0x190374u;
    {
        const bool branch_taken_0x190374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x190374) {
            ctx->pc = 0x190378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190374u;
            // 0x190378: 0x920400b9  lbu         $a0, 0xB9($s0) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 185)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19043Cu;
            goto label_19043c;
        }
    }
    ctx->pc = 0x19037Cu;
    // 0x19037c: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x19037Cu;
    {
        const bool branch_taken_0x19037c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19037c) {
            ctx->pc = 0x190380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19037Cu;
            // 0x190380: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19038Cu;
            goto label_19038c;
        }
    }
    ctx->pc = 0x190384u;
    // 0x190384: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x190384u;
    {
        const bool branch_taken_0x190384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190384) {
            ctx->pc = 0x19059Cu;
            goto label_19059c;
        }
    }
    ctx->pc = 0x19038Cu;
label_19038c:
    // 0x19038c: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x19038Cu;
    {
        const bool branch_taken_0x19038c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19038c) {
            ctx->pc = 0x190390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19038Cu;
            // 0x190390: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1903E8u;
            goto label_1903e8;
        }
    }
    ctx->pc = 0x190394u;
    // 0x190394: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x190394u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x190398: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x190398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19039c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19039cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1903a0: 0x2442db55  addiu       $v0, $v0, -0x24AB
    ctx->pc = 0x1903a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957909));
    // 0x1903a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1903a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1903a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1903a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1903ac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1903acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1903b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1903b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1903b4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1903b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1903b8: 0x54450004  bnel        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1903B8u;
    {
        const bool branch_taken_0x1903b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1903b8) {
            ctx->pc = 0x1903BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1903B8u;
            // 0x1903bc: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1903CCu;
            goto label_1903cc;
        }
    }
    ctx->pc = 0x1903C0u;
    // 0x1903c0: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1903c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1903c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1903C4u;
    {
        const bool branch_taken_0x1903c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1903C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903C4u;
        // 0x1903c8: 0xa20200b9  sb          $v0, 0xB9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 185), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903c4) {
            ctx->pc = 0x1903D0u;
            goto label_1903d0;
        }
    }
    ctx->pc = 0x1903CCu;
label_1903cc:
    // 0x1903cc: 0xa20200b9  sb          $v0, 0xB9($s0)
    ctx->pc = 0x1903ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 185), (uint8_t)GPR_U32(ctx, 2));
label_1903d0:
    // 0x1903d0: 0x920400b9  lbu         $a0, 0xB9($s0)
    ctx->pc = 0x1903d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 185)));
    // 0x1903d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1903d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1903d8: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1903D8u;
    SET_GPR_U32(ctx, 31, 0x1903E0u);
    ctx->pc = 0x1903DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1903D8u;
    // 0x1903dc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x1903D8u, 0x1903E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1903E0u;
label_1903e0:
    // 0x1903e0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1903E0u;
    {
        const bool branch_taken_0x1903e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1903E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1903E0u;
        // 0x1903e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1903e0) {
            ctx->pc = 0x190434u;
            goto label_190434;
        }
    }
    ctx->pc = 0x1903E8u;
label_1903e8:
    // 0x1903e8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1903e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1903ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1903ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1903f0: 0x2442db55  addiu       $v0, $v0, -0x24AB
    ctx->pc = 0x1903f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957909));
    // 0x1903f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1903f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1903f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1903f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1903fc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1903fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x190400: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x190400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190404: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x190404u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190408: 0x54450004  bnel        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x190408u;
    {
        const bool branch_taken_0x190408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x190408) {
            ctx->pc = 0x19040Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190408u;
            // 0x19040c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19041Cu;
            goto label_19041c;
        }
    }
    ctx->pc = 0x190410u;
    // 0x190410: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x190410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x190414: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x190414u;
    {
        const bool branch_taken_0x190414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190414u;
        // 0x190418: 0xa20200b9  sb          $v0, 0xB9($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 185), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190414) {
            ctx->pc = 0x190420u;
            goto label_190420;
        }
    }
    ctx->pc = 0x19041Cu;
label_19041c:
    // 0x19041c: 0xa20200b9  sb          $v0, 0xB9($s0)
    ctx->pc = 0x19041cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 185), (uint8_t)GPR_U32(ctx, 2));
label_190420:
    // 0x190420: 0x920400b9  lbu         $a0, 0xB9($s0)
    ctx->pc = 0x190420u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 185)));
    // 0x190424: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190428: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x190428u;
    SET_GPR_U32(ctx, 31, 0x190430u);
    ctx->pc = 0x19042Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190428u;
    // 0x19042c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x190428u, 0x190430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190430u;
label_190430:
    // 0x190430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190434:
    // 0x190434: 0xa20200b8  sb          $v0, 0xB8($s0)
    ctx->pc = 0x190434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 2));
    // 0x190438: 0x920400b9  lbu         $a0, 0xB9($s0)
    ctx->pc = 0x190438u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 185)));
label_19043c:
    // 0x19043c: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x19043Cu;
    SET_GPR_U32(ctx, 31, 0x190444u);
    ctx->pc = 0x190440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19043Cu;
    // 0x190440: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x19043Cu, 0x190444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190444u;
label_190444:
    // 0x190444: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x190444u;
    {
        const bool branch_taken_0x190444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190444) {
            ctx->pc = 0x19059Cu;
            goto label_19059c;
        }
    }
    ctx->pc = 0x19044Cu;
    // 0x19044c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19044cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190450: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x190450u;
    {
        const bool branch_taken_0x190450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190450u;
        // 0x190454: 0xa20300b8  sb          $v1, 0xB8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190450) {
            ctx->pc = 0x19059Cu;
            goto label_19059c;
        }
    }
    ctx->pc = 0x190458u;
label_190458:
    // 0x190458: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x190458u;
    {
        const bool branch_taken_0x190458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190458) {
            ctx->pc = 0x19045Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190458u;
            // 0x19045c: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1904B4u;
            goto label_1904b4;
        }
    }
    ctx->pc = 0x190460u;
    // 0x190460: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x190460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x190464: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x190464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x190468: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x190468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19046c: 0x2442db55  addiu       $v0, $v0, -0x24AB
    ctx->pc = 0x19046cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957909));
    // 0x190470: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x190470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x190474: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190478: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x190478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19047c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x19047cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x190480: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x190480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x190484: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x190484u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190488: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x190488u;
    {
        const bool branch_taken_0x190488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x190488) {
            ctx->pc = 0x19048Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190488u;
            // 0x19048c: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1904A4u;
            goto label_1904a4;
        }
    }
    ctx->pc = 0x190490u;
    // 0x190490: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x190490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x190494: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x190494u;
    SET_GPR_U32(ctx, 31, 0x19049Cu);
    ctx->pc = 0x190498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190494u;
    // 0x190498: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x190494u, 0x19049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19049Cu;
label_19049c:
    // 0x19049c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x19049Cu;
    {
        const bool branch_taken_0x19049c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1904A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19049Cu;
        // 0x1904a0: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19049c) {
            ctx->pc = 0x190500u;
            goto label_190500;
        }
    }
    ctx->pc = 0x1904A4u;
label_1904a4:
    // 0x1904a4: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1904A4u;
    SET_GPR_U32(ctx, 31, 0x1904ACu);
    ctx->pc = 0x1904A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1904A4u;
    // 0x1904a8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x1904A4u, 0x1904ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1904ACu;
label_1904ac:
    // 0x1904ac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1904ACu;
    {
        const bool branch_taken_0x1904ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1904ac) {
            ctx->pc = 0x1904FCu;
            goto label_1904fc;
        }
    }
    ctx->pc = 0x1904B4u;
label_1904b4:
    // 0x1904b4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1904b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x1904b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1904b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1904bc: 0x2442db55  addiu       $v0, $v0, -0x24AB
    ctx->pc = 0x1904bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957909));
    // 0x1904c0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1904c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1904c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1904c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1904c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1904c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1904cc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1904ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1904d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1904d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1904d4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1904d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1904d8: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1904D8u;
    {
        const bool branch_taken_0x1904d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1904d8) {
            ctx->pc = 0x1904DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1904D8u;
            // 0x1904dc: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1904F4u;
            goto label_1904f4;
        }
    }
    ctx->pc = 0x1904E0u;
    // 0x1904e0: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x1904e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1904e4: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1904E4u;
    SET_GPR_U32(ctx, 31, 0x1904ECu);
    ctx->pc = 0x1904E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1904E4u;
    // 0x1904e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x1904E4u, 0x1904ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1904ECu;
label_1904ec:
    // 0x1904ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1904ECu;
    {
        const bool branch_taken_0x1904ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1904ec) {
            ctx->pc = 0x1904FCu;
            goto label_1904fc;
        }
    }
    ctx->pc = 0x1904F4u;
label_1904f4:
    // 0x1904f4: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1904F4u;
    SET_GPR_U32(ctx, 31, 0x1904FCu);
    ctx->pc = 0x1904F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1904F4u;
    // 0x1904f8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x1904F4u, 0x1904FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1904FCu;
label_1904fc:
    // 0x1904fc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1904fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_190500:
    // 0x190500: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x190500u;
    {
        const bool branch_taken_0x190500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190500u;
        // 0x190504: 0xa20300b8  sb          $v1, 0xB8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190500) {
            ctx->pc = 0x19059Cu;
            goto label_19059c;
        }
    }
    ctx->pc = 0x190508u;
label_190508:
    // 0x190508: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x190508u;
    {
        const bool branch_taken_0x190508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190508) {
            ctx->pc = 0x19050Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190508u;
            // 0x19050c: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190558u;
            goto label_190558;
        }
    }
    ctx->pc = 0x190510u;
    // 0x190510: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x190510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x190514: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190518: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x190518u;
    SET_GPR_U32(ctx, 31, 0x190520u);
    ctx->pc = 0x19051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190518u;
    // 0x19051c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x190518u, 0x190520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190520u;
label_190520:
    // 0x190520: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x190520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x190524: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190528: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x190528u;
    SET_GPR_U32(ctx, 31, 0x190530u);
    ctx->pc = 0x19052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190528u;
    // 0x19052c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x190528u, 0x190530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190530u;
label_190530:
    // 0x190530: 0x24040033  addiu       $a0, $zero, 0x33
    ctx->pc = 0x190530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x190534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190538: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x190538u;
    SET_GPR_U32(ctx, 31, 0x190540u);
    ctx->pc = 0x19053Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190538u;
    // 0x19053c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x190538u, 0x190540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190540u;
label_190540:
    // 0x190540: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x190540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x190544: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190548: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x190548u;
    SET_GPR_U32(ctx, 31, 0x190550u);
    ctx->pc = 0x19054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190548u;
    // 0x19054c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x190548u, 0x190550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190550u;
label_190550:
    // 0x190550: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x190550u;
    {
        const bool branch_taken_0x190550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190550u;
        // 0x190554: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190550) {
            ctx->pc = 0x190598u;
            goto label_190598;
        }
    }
    ctx->pc = 0x190558u;
label_190558:
    // 0x190558: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19055c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x19055Cu;
    SET_GPR_U32(ctx, 31, 0x190564u);
    ctx->pc = 0x190560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19055Cu;
    // 0x190560: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x19055Cu, 0x190564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190564u;
label_190564:
    // 0x190564: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x190564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x190568: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19056c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x19056Cu;
    SET_GPR_U32(ctx, 31, 0x190574u);
    ctx->pc = 0x190570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19056Cu;
    // 0x190570: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x19056Cu, 0x190574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190574u;
label_190574:
    // 0x190574: 0x2404002e  addiu       $a0, $zero, 0x2E
    ctx->pc = 0x190574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x190578: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19057c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x19057Cu;
    SET_GPR_U32(ctx, 31, 0x190584u);
    ctx->pc = 0x190580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19057Cu;
    // 0x190580: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x19057Cu, 0x190584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190584u;
label_190584:
    // 0x190584: 0x2404002f  addiu       $a0, $zero, 0x2F
    ctx->pc = 0x190584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x190588: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19058c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x19058Cu;
    SET_GPR_U32(ctx, 31, 0x190594u);
    ctx->pc = 0x190590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19058Cu;
    // 0x190590: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x19058Cu, 0x190594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190594u;
label_190594:
    // 0x190594: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x190594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_190598:
    // 0x190598: 0xa20300b8  sb          $v1, 0xB8($s0)
    ctx->pc = 0x190598u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 184), (uint8_t)GPR_U32(ctx, 3));
label_19059c:
    // 0x19059c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19059cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1905a0:
    // 0x1905a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1905a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1905a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1905A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1905A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1905A4u;
        // 0x1905a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1905A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1905ACu;
    // 0x1905ac: 0x0  nop
    ctx->pc = 0x1905acu;
    // NOP
    // 0x1905b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1905b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1905b4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1905b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1905b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1905b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1905bc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1905bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1905c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1905c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1905c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1905c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1905c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1905c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1905cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1905ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1905d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1905d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1905d4: 0xc4404d40  lwc1        $f0, 0x4D40($v0)
    ctx->pc = 0x1905d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1905d8: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x1905d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1905dc: 0xc4614d44  lwc1        $f1, 0x4D44($v1)
    ctx->pc = 0x1905dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1905e0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1905e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1905e4: 0x92330000  lbu         $s3, 0x0($s1)
    ctx->pc = 0x1905e4u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1905e8: 0xc4424d48  lwc1        $f2, 0x4D48($v0)
    ctx->pc = 0x1905e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1905ec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1905ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1905f0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1905f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1905f4: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x1905f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1905f8: 0x1320c0  sll         $a0, $s3, 3
    ctx->pc = 0x1905f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x1905fc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1905fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x190600: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x190600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x190604: 0xc4414d50  lwc1        $f1, 0x4D50($v0)
    ctx->pc = 0x190604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190608: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x190608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x19060c: 0xc4604d4c  lwc1        $f0, 0x4D4C($v1)
    ctx->pc = 0x19060cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190610: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x190610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x190614: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x190614u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x190618: 0x480c0  sll         $s0, $a0, 3
    ctx->pc = 0x190618u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x19061c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x19061cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x190620: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x190620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x190624: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x190624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x190628: 0xc4404d54  lwc1        $f0, 0x4D54($v0)
    ctx->pc = 0x190628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19062c: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x19062cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x190630: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x190630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x190634: 0xc4414d58  lwc1        $f1, 0x4D58($v0)
    ctx->pc = 0x190634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190638: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x190638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x19063c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x19063cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x190640: 0xc4404d5c  lwc1        $f0, 0x4D5C($v0)
    ctx->pc = 0x190640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190644: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x190644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x190648: 0xc4614d60  lwc1        $f1, 0x4D60($v1)
    ctx->pc = 0x190648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19064c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x19064cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x190650: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x190650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x190654: 0xc4404d64  lwc1        $f0, 0x4D64($v0)
    ctx->pc = 0x190654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190658: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x190658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x19065c: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x19065cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x190660: 0xc4614d68  lwc1        $f1, 0x4D68($v1)
    ctx->pc = 0x190660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190664: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x190664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x190668: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x190668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x19066c: 0xc4404d6c  lwc1        $f0, 0x4D6C($v0)
    ctx->pc = 0x19066cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190670: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x190670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x190674: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x190674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x190678: 0xc4614d70  lwc1        $f1, 0x4D70($v1)
    ctx->pc = 0x190678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19067c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x19067cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x190680: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x190680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x190684: 0xc4404d74  lwc1        $f0, 0x4D74($v0)
    ctx->pc = 0x190684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190688: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x190688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x19068c: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x19068cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x190690: 0xc4614d78  lwc1        $f1, 0x4D78($v1)
    ctx->pc = 0x190690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190694: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x190694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x190698: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x190698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x19069c: 0xc4404d7c  lwc1        $f0, 0x4D7C($v0)
    ctx->pc = 0x19069cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1906a0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1906a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1906a4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1906a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1906a8: 0xc4614d80  lwc1        $f1, 0x4D80($v1)
    ctx->pc = 0x1906a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1906ac: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1906acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1906b0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1906b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1906b4: 0xc4404d84  lwc1        $f0, 0x4D84($v0)
    ctx->pc = 0x1906b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1906b8: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1906b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1906bc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1906bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1906c0: 0xc4614d88  lwc1        $f1, 0x4D88($v1)
    ctx->pc = 0x1906c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1906c4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1906c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1906c8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1906c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1906cc: 0xc4404d8c  lwc1        $f0, 0x4D8C($v0)
    ctx->pc = 0x1906ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1906d0: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1906d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1906d4: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1906d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1906d8: 0xc4614d90  lwc1        $f1, 0x4D90($v1)
    ctx->pc = 0x1906d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 19856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1906dc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1906dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x1906e0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1906e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1906e4: 0xc4404d94  lwc1        $f0, 0x4D94($v0)
    ctx->pc = 0x1906e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1906e8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1906e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1906ec: 0x2463db5a  addiu       $v1, $v1, -0x24A6
    ctx->pc = 0x1906ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957914));
    // 0x1906f0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1906f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1906f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1906f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1906f8: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x1906f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1906fc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1906fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x190700: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x190700u;
    {
        const bool branch_taken_0x190700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x190704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190700u;
        // 0x190704: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x190700) {
            ctx->pc = 0x190780u;
            goto label_190780;
        }
    }
    ctx->pc = 0x190708u;
    // 0x190708: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x190708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19070c: 0x9045d9d8  lbu         $a1, -0x2628($v0)
    ctx->pc = 0x19070cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957528)));
    // 0x190710: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x190710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x190714: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x190714u;
    {
        const bool branch_taken_0x190714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190714) {
            ctx->pc = 0x190718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190714u;
            // 0x190718: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x190764u;
            goto label_190764;
        }
    }
    ctx->pc = 0x19071Cu;
    // 0x19071c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19071cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x190720: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x190720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x190724: 0x2463db90  addiu       $v1, $v1, -0x2470
    ctx->pc = 0x190724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957968));
    // 0x190728: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x190728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19072c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x19072cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x190730: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x190730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x190734: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x190734u;
    {
        const bool branch_taken_0x190734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x190734) {
            ctx->pc = 0x190738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190734u;
            // 0x190738: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190758u;
            goto label_190758;
        }
    }
    ctx->pc = 0x19073Cu;
    // 0x19073c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19073cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x190740: 0x2442db88  addiu       $v0, $v0, -0x2478
    ctx->pc = 0x190740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957960));
    // 0x190744: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x190744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x190748: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x190748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19074c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190750: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x190750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x190754: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x190754u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_190758:
    // 0x190758: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x190758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19075c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x19075cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x190760: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x190760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_190764:
    // 0x190764: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x190764u;
    {
        const bool branch_taken_0x190764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190764) {
            ctx->pc = 0x190768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190764u;
            // 0x190768: 0x326600ff  andi        $a2, $s3, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x190784u;
            goto label_190784;
        }
    }
    ctx->pc = 0x19076Cu;
    // 0x19076c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19076cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x190770: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x190770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x190774: 0x2442db8c  addiu       $v0, $v0, -0x2474
    ctx->pc = 0x190774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957964));
    // 0x190778: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x190778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19077c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x19077cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_190780:
    // 0x190780: 0x326600ff  andi        $a2, $s3, 0xFF
    ctx->pc = 0x190780u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_190784:
    // 0x190784: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x190784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190788: 0xc063404  jal         func_18D010
    ctx->pc = 0x190788u;
    SET_GPR_U32(ctx, 31, 0x190790u);
    ctx->pc = 0x19078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190788u;
    // 0x19078c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D010u, 0x190788u, 0x190790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190790u;
label_190790:
    // 0x190790: 0x326600ff  andi        $a2, $s3, 0xFF
    ctx->pc = 0x190790u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x190794: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x190794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190798: 0xc063404  jal         func_18D010
    ctx->pc = 0x190798u;
    SET_GPR_U32(ctx, 31, 0x1907A0u);
    ctx->pc = 0x19079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190798u;
    // 0x19079c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D010u, 0x190798u, 0x1907A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1907A0u;
label_1907a0:
    // 0x1907a0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1907a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1907a4: 0x3c039249  lui         $v1, 0x9249
    ctx->pc = 0x1907a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37449 << 16));
    // 0x1907a8: 0x2484db88  addiu       $a0, $a0, -0x2478
    ctx->pc = 0x1907a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957960));
    // 0x1907ac: 0x34682493  ori         $t0, $v1, 0x2493
    ctx->pc = 0x1907acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9363);
    // 0x1907b0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x1907b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1907b4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1907b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x1907b8: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x1907b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1907bc: 0x2463db8c  addiu       $v1, $v1, -0x2474
    ctx->pc = 0x1907bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957964));
    // 0x1907c0: 0x1090018  mult        $zero, $t0, $t1
    ctx->pc = 0x1907c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1907c4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x1907c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1907c8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1907c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1907cc: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x1907ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1907d0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1907d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1907d4: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x1907d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1907d8: 0x2010  mfhi        $a0
    ctx->pc = 0x1907d8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1907dc: 0x1060018  mult        $zero, $t0, $a2
    ctx->pc = 0x1907dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1907e0: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x1907e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1907e4: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x1907e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    // 0x1907e8: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x1907e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1907ec: 0x2010  mfhi        $a0
    ctx->pc = 0x1907ecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1907f0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1907f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1907f4: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x1907f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    // 0x1907f8: 0x10670003  beq         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1907F8u;
    {
        const bool branch_taken_0x1907f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1907FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1907F8u;
        // 0x1907fc: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1907f8) {
            ctx->pc = 0x190808u;
            goto label_190808;
        }
    }
    ctx->pc = 0x190800u;
    // 0x190800: 0xae27000c  sw          $a3, 0xC($s1)
    ctx->pc = 0x190800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 7));
    // 0x190804: 0x36520001  ori         $s2, $s2, 0x1
    ctx->pc = 0x190804u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
label_190808:
    // 0x190808: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x190808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x19080c: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x19080cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x190810: 0x5080003e  beql        $a0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x190810u;
    {
        const bool branch_taken_0x190810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190810) {
            ctx->pc = 0x190814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190810u;
            // 0x190814: 0x92240001  lbu         $a0, 0x1($s1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19090Cu;
            goto label_19090c;
        }
    }
    ctx->pc = 0x190818u;
    // 0x190818: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x190818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19081c: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x19081Cu;
    {
        const bool branch_taken_0x19081c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19081c) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x190824u;
    // 0x190824: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x190824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x190828: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x190828u;
    {
        const bool branch_taken_0x190828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190828) {
            ctx->pc = 0x190838u;
            goto label_190838;
        }
    }
    ctx->pc = 0x190830u;
    // 0x190830: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x190830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x190834: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x190834u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
label_190838:
    // 0x190838: 0x3c0301d5  lui         $v1, 0x1D5
    ctx->pc = 0x190838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)469 << 16));
    // 0x19083c: 0x8c63d918  lw          $v1, -0x26E8($v1)
    ctx->pc = 0x19083cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957336)));
    // 0x190840: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x190840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x190844: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x190844u;
    {
        const bool branch_taken_0x190844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190844) {
            ctx->pc = 0x190848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190844u;
            // 0x190848: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190900u;
            goto label_190900;
        }
    }
    ctx->pc = 0x19084Cu;
    // 0x19084c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x19084cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x190850: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x190850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190854: 0x50a3001c  beql        $a1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x190854u;
    {
        const bool branch_taken_0x190854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x190854) {
            ctx->pc = 0x190858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190854u;
            // 0x190858: 0x92250003  lbu         $a1, 0x3($s1) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1908C8u;
            goto label_1908c8;
        }
    }
    ctx->pc = 0x19085Cu;
    // 0x19085c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190860: 0x50a4000b  beql        $a1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x190860u;
    {
        const bool branch_taken_0x190860 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x190860) {
            ctx->pc = 0x190864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190860u;
            // 0x190864: 0x92250003  lbu         $a1, 0x3($s1) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190890u;
            goto label_190890;
        }
    }
    ctx->pc = 0x190868u;
    // 0x190868: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x190868u;
    {
        const bool branch_taken_0x190868 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x190868) {
            ctx->pc = 0x19086Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190868u;
            // 0x19086c: 0x92230003  lbu         $v1, 0x3($s1) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190878u;
            goto label_190878;
        }
    }
    ctx->pc = 0x190870u;
    // 0x190870: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x190870u;
    {
        const bool branch_taken_0x190870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190870) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x190878u;
label_190878:
    // 0x190878: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x190878u;
    {
        const bool branch_taken_0x190878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190878) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x190880u;
    // 0x190880: 0x10640021  beq         $v1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x190880u;
    {
        const bool branch_taken_0x190880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x190880) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x190888u;
    // 0x190888: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x190888u;
    {
        const bool branch_taken_0x190888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190888u;
        // 0x19088c: 0xa2200003  sb          $zero, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190888) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x190890u;
label_190890:
    // 0x190890: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x190890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x190894: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x190894u;
    {
        const bool branch_taken_0x190894 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x190894) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x19089Cu;
    // 0x19089c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x19089cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1908a0: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1908A0u;
    {
        const bool branch_taken_0x1908a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1908a0) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x1908A8u;
    // 0x1908a8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1908a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1908ac: 0x10a40016  beq         $a1, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1908ACu;
    {
        const bool branch_taken_0x1908ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1908ac) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x1908B4u;
    // 0x1908b4: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1908b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1908b8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1908B8u;
    {
        const bool branch_taken_0x1908b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1908b8) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x1908C0u;
    // 0x1908c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1908C0u;
    {
        const bool branch_taken_0x1908c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1908C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908C0u;
        // 0x1908c4: 0xa2240003  sb          $a0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1908c0) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x1908C8u;
label_1908c8:
    // 0x1908c8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1908c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1908cc: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1908CCu;
    {
        const bool branch_taken_0x1908cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1908cc) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x1908D4u;
    // 0x1908d4: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x1908d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1908d8: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1908D8u;
    {
        const bool branch_taken_0x1908d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1908d8) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x1908E0u;
    // 0x1908e0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1908e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1908e4: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1908E4u;
    {
        const bool branch_taken_0x1908e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1908e4) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x1908ECu;
    // 0x1908ec: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1908ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1908f0: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1908F0u;
    {
        const bool branch_taken_0x1908f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1908f0) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x1908F8u;
    // 0x1908f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1908F8u;
    {
        const bool branch_taken_0x1908f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1908FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1908F8u;
        // 0x1908fc: 0xa2240003  sb          $a0, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1908f8) {
            ctx->pc = 0x190908u;
            goto label_190908;
        }
    }
    ctx->pc = 0x190900u;
label_190900:
    // 0x190900: 0xc064300  jal         func_190C00
    ctx->pc = 0x190900u;
    SET_GPR_U32(ctx, 31, 0x190908u);
    ctx->pc = 0x190C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C00u, 0x190900u, 0x190908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190908u;
label_190908:
    // 0x190908: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x190908u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_19090c:
    // 0x19090c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x19090cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x190910: 0x50830025  beql        $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x190910u;
    {
        const bool branch_taken_0x190910 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x190910) {
            ctx->pc = 0x190914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190910u;
            // 0x190914: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1909A8u;
            goto label_1909a8;
        }
    }
    ctx->pc = 0x190918u;
    // 0x190918: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x190918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19091c: 0x50830018  beql        $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x19091Cu;
    {
        const bool branch_taken_0x19091c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19091c) {
            ctx->pc = 0x190920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19091Cu;
            // 0x190920: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190980u;
            goto label_190980;
        }
    }
    ctx->pc = 0x190924u;
    // 0x190924: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190928: 0x5085000e  beql        $a0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x190928u;
    {
        const bool branch_taken_0x190928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x190928) {
            ctx->pc = 0x19092Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190928u;
            // 0x19092c: 0x92240005  lbu         $a0, 0x5($s1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190964u;
            goto label_190964;
        }
    }
    ctx->pc = 0x190930u;
    // 0x190930: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x190930u;
    {
        const bool branch_taken_0x190930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190930) {
            ctx->pc = 0x190934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190930u;
            // 0x190934: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190940u;
            goto label_190940;
        }
    }
    ctx->pc = 0x190938u;
    // 0x190938: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x190938u;
    {
        const bool branch_taken_0x190938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190938) {
            ctx->pc = 0x1909A4u;
            goto label_1909a4;
        }
    }
    ctx->pc = 0x190940u;
label_190940:
    // 0x190940: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190944: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x190944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x190948: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x190948u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x19094c: 0x92240005  lbu         $a0, 0x5($s1)
    ctx->pc = 0x19094cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x190950: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x190950u;
    SET_GPR_U32(ctx, 31, 0x190958u);
    ctx->pc = 0x190954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190950u;
    // 0x190954: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x190950u, 0x190958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190958u;
label_190958:
    // 0x190958: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x190958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19095c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19095Cu;
    {
        const bool branch_taken_0x19095c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19095Cu;
        // 0x190960: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19095c) {
            ctx->pc = 0x1909A4u;
            goto label_1909a4;
        }
    }
    ctx->pc = 0x190964u;
label_190964:
    // 0x190964: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x190964u;
    SET_GPR_U32(ctx, 31, 0x19096Cu);
    ctx->pc = 0x190968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190964u;
    // 0x190968: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x190964u, 0x19096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19096Cu;
label_19096c:
    // 0x19096c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19096Cu;
    {
        const bool branch_taken_0x19096c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19096c) {
            ctx->pc = 0x1909A4u;
            goto label_1909a4;
        }
    }
    ctx->pc = 0x190974u;
    // 0x190974: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x190974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x190978: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x190978u;
    {
        const bool branch_taken_0x190978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190978u;
        // 0x19097c: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190978) {
            ctx->pc = 0x1909A4u;
            goto label_1909a4;
        }
    }
    ctx->pc = 0x190980u;
label_190980:
    // 0x190980: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190984: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190988: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x190988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x19098c: 0xa2220005  sb          $v0, 0x5($s1)
    ctx->pc = 0x19098cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x190990: 0x92240005  lbu         $a0, 0x5($s1)
    ctx->pc = 0x190990u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x190994: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x190994u;
    SET_GPR_U32(ctx, 31, 0x19099Cu);
    ctx->pc = 0x190998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190994u;
    // 0x190998: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x190994u, 0x19099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19099Cu;
label_19099c:
    // 0x19099c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x19099cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1909a0: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x1909a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_1909a4:
    // 0x1909a4: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x1909a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_1909a8:
    // 0x1909a8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x1909a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1909ac: 0x5083001e  beql        $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1909ACu;
    {
        const bool branch_taken_0x1909ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1909ac) {
            ctx->pc = 0x1909B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1909ACu;
            // 0x1909b0: 0x92240006  lbu         $a0, 0x6($s1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190A28u;
            goto label_190a28;
        }
    }
    ctx->pc = 0x1909B4u;
    // 0x1909b4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1909b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1909b8: 0x50830011  beql        $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1909B8u;
    {
        const bool branch_taken_0x1909b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1909b8) {
            ctx->pc = 0x1909BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1909B8u;
            // 0x1909bc: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190A00u;
            goto label_190a00;
        }
    }
    ctx->pc = 0x1909C0u;
    // 0x1909c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1909c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1909c4: 0x5085001e  beql        $a0, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1909C4u;
    {
        const bool branch_taken_0x1909c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1909c4) {
            ctx->pc = 0x1909C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1909C4u;
            // 0x1909c8: 0x92240003  lbu         $a0, 0x3($s1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190A40u;
            goto label_190a40;
        }
    }
    ctx->pc = 0x1909CCu;
    // 0x1909cc: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1909CCu;
    {
        const bool branch_taken_0x1909cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1909cc) {
            ctx->pc = 0x1909D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1909CCu;
            // 0x1909d0: 0x1310c0  sll         $v0, $s3, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1909DCu;
            goto label_1909dc;
        }
    }
    ctx->pc = 0x1909D4u;
    // 0x1909d4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1909D4u;
    {
        const bool branch_taken_0x1909d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1909d4) {
            ctx->pc = 0x190A3Cu;
            goto label_190a3c;
        }
    }
    ctx->pc = 0x1909DCu;
label_1909dc:
    // 0x1909dc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1909dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1909e0: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x1909e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1909e4: 0xa2220006  sb          $v0, 0x6($s1)
    ctx->pc = 0x1909e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x1909e8: 0x92240006  lbu         $a0, 0x6($s1)
    ctx->pc = 0x1909e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x1909ec: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x1909ECu;
    SET_GPR_U32(ctx, 31, 0x1909F4u);
    ctx->pc = 0x1909F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1909ECu;
    // 0x1909f0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x1909ECu, 0x1909F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1909F4u;
label_1909f4:
    // 0x1909f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1909f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1909f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1909F8u;
    {
        const bool branch_taken_0x1909f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1909FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1909F8u;
        // 0x1909fc: 0xa2230002  sb          $v1, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1909f8) {
            ctx->pc = 0x190A3Cu;
            goto label_190a3c;
        }
    }
    ctx->pc = 0x190A00u;
label_190a00:
    // 0x190a00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190a04: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190a08: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x190a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x190a0c: 0xa2220006  sb          $v0, 0x6($s1)
    ctx->pc = 0x190a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x190a10: 0x92240006  lbu         $a0, 0x6($s1)
    ctx->pc = 0x190a10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x190a14: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x190A14u;
    SET_GPR_U32(ctx, 31, 0x190A1Cu);
    ctx->pc = 0x190A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A14u;
    // 0x190a18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x190A14u, 0x190A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A1Cu;
label_190a1c:
    // 0x190a1c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x190a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x190a20: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x190A20u;
    {
        const bool branch_taken_0x190a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A20u;
        // 0x190a24: 0xa2230002  sb          $v1, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a20) {
            ctx->pc = 0x190A3Cu;
            goto label_190a3c;
        }
    }
    ctx->pc = 0x190A28u;
label_190a28:
    // 0x190a28: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x190A28u;
    SET_GPR_U32(ctx, 31, 0x190A30u);
    ctx->pc = 0x190A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190A28u;
    // 0x190a2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x190A28u, 0x190A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190A30u;
label_190a30:
    // 0x190a30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x190A30u;
    {
        const bool branch_taken_0x190a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190a30) {
            ctx->pc = 0x190A3Cu;
            goto label_190a3c;
        }
    }
    ctx->pc = 0x190A38u;
    // 0x190a38: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x190a38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_190a3c:
    // 0x190a3c: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x190a3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_190a40:
    // 0x190a40: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x190a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x190a44: 0x50830061  beql        $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x190A44u;
    {
        const bool branch_taken_0x190a44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x190a44) {
            ctx->pc = 0x190A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190A44u;
            // 0x190a48: 0x92240008  lbu         $a0, 0x8($s1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190BCCu;
            goto label_190bcc;
        }
    }
    ctx->pc = 0x190A4Cu;
    // 0x190a4c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x190a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x190a50: 0x5083004f  beql        $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x190A50u;
    {
        const bool branch_taken_0x190a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x190a50) {
            ctx->pc = 0x190A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190A50u;
            // 0x190a54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190B90u;
            goto label_190b90;
        }
    }
    ctx->pc = 0x190A58u;
    // 0x190a58: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x190a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x190a5c: 0x50830062  beql        $a0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x190A5Cu;
    {
        const bool branch_taken_0x190a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x190a5c) {
            ctx->pc = 0x190A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190A5Cu;
            // 0x190a60: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190BE8u;
            goto label_190be8;
        }
    }
    ctx->pc = 0x190A64u;
    // 0x190a64: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x190a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x190a68: 0x5083003a  beql        $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x190A68u;
    {
        const bool branch_taken_0x190a68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x190a68) {
            ctx->pc = 0x190A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190A68u;
            // 0x190a6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190B54u;
            goto label_190b54;
        }
    }
    ctx->pc = 0x190A70u;
    // 0x190a70: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x190a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x190a74: 0x50830030  beql        $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x190A74u;
    {
        const bool branch_taken_0x190a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x190a74) {
            ctx->pc = 0x190A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190A74u;
            // 0x190a78: 0x92240007  lbu         $a0, 0x7($s1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190B38u;
            goto label_190b38;
        }
    }
    ctx->pc = 0x190A7Cu;
    // 0x190a7c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x190a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x190a80: 0x50830020  beql        $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x190A80u;
    {
        const bool branch_taken_0x190a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x190a80) {
            ctx->pc = 0x190A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190A80u;
            // 0x190a84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190B04u;
            goto label_190b04;
        }
    }
    ctx->pc = 0x190A88u;
    // 0x190a88: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x190a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x190a8c: 0x10830055  beq         $a0, $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x190A8Cu;
    {
        const bool branch_taken_0x190a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x190a8c) {
            ctx->pc = 0x190BE4u;
            goto label_190be4;
        }
    }
    ctx->pc = 0x190A94u;
    // 0x190a94: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x190a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x190a98: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x190A98u;
    {
        const bool branch_taken_0x190a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x190a98) {
            ctx->pc = 0x190A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190A98u;
            // 0x190a9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190AD0u;
            goto label_190ad0;
        }
    }
    ctx->pc = 0x190AA0u;
    // 0x190aa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x190aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190aa4: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x190AA4u;
    {
        const bool branch_taken_0x190aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x190aa4) {
            ctx->pc = 0x190BE4u;
            goto label_190be4;
        }
    }
    ctx->pc = 0x190AACu;
    // 0x190aac: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x190AACu;
    {
        const bool branch_taken_0x190aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x190aac) {
            ctx->pc = 0x190AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190AACu;
            // 0x190ab0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190ABCu;
            goto label_190abc;
        }
    }
    ctx->pc = 0x190AB4u;
    // 0x190ab4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x190AB4u;
    {
        const bool branch_taken_0x190ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190ab4) {
            ctx->pc = 0x190BE4u;
            goto label_190be4;
        }
    }
    ctx->pc = 0x190ABCu;
label_190abc:
    // 0x190abc: 0xc064300  jal         func_190C00
    ctx->pc = 0x190ABCu;
    SET_GPR_U32(ctx, 31, 0x190AC4u);
    ctx->pc = 0x190C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C00u, 0x190ABCu, 0x190AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190AC4u;
label_190ac4:
    // 0x190ac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x190ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190ac8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x190AC8u;
    {
        const bool branch_taken_0x190ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AC8u;
        // 0x190acc: 0xa2230003  sb          $v1, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190ac8) {
            ctx->pc = 0x190BE4u;
            goto label_190be4;
        }
    }
    ctx->pc = 0x190AD0u;
label_190ad0:
    // 0x190ad0: 0xc064300  jal         func_190C00
    ctx->pc = 0x190AD0u;
    SET_GPR_U32(ctx, 31, 0x190AD8u);
    ctx->pc = 0x190C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C00u, 0x190AD0u, 0x190AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190AD8u;
label_190ad8:
    // 0x190ad8: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x190ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x190adc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190ae0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190ae4: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x190ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x190ae8: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x190ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x190aec: 0x92240007  lbu         $a0, 0x7($s1)
    ctx->pc = 0x190aecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x190af0: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x190AF0u;
    SET_GPR_U32(ctx, 31, 0x190AF8u);
    ctx->pc = 0x190AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190AF0u;
    // 0x190af4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x190AF0u, 0x190AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190AF8u;
label_190af8:
    // 0x190af8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x190af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x190afc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x190AFCu;
    {
        const bool branch_taken_0x190afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190AFCu;
        // 0x190b00: 0xa2230003  sb          $v1, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190afc) {
            ctx->pc = 0x190BE4u;
            goto label_190be4;
        }
    }
    ctx->pc = 0x190B04u;
label_190b04:
    // 0x190b04: 0xc064300  jal         func_190C00
    ctx->pc = 0x190B04u;
    SET_GPR_U32(ctx, 31, 0x190B0Cu);
    ctx->pc = 0x190C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C00u, 0x190B04u, 0x190B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B0Cu;
label_190b0c:
    // 0x190b0c: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x190b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x190b10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190b14: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190b18: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x190b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x190b1c: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x190b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x190b20: 0x92240007  lbu         $a0, 0x7($s1)
    ctx->pc = 0x190b20u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x190b24: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x190B24u;
    SET_GPR_U32(ctx, 31, 0x190B2Cu);
    ctx->pc = 0x190B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B24u;
    // 0x190b28: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x190B24u, 0x190B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B2Cu;
label_190b2c:
    // 0x190b2c: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x190b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x190b30: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x190B30u;
    {
        const bool branch_taken_0x190b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B30u;
        // 0x190b34: 0xa2230003  sb          $v1, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b30) {
            ctx->pc = 0x190BE4u;
            goto label_190be4;
        }
    }
    ctx->pc = 0x190B38u;
label_190b38:
    // 0x190b38: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x190B38u;
    SET_GPR_U32(ctx, 31, 0x190B40u);
    ctx->pc = 0x190B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B38u;
    // 0x190b3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x190B38u, 0x190B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B40u;
label_190b40:
    // 0x190b40: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x190B40u;
    {
        const bool branch_taken_0x190b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190b40) {
            ctx->pc = 0x190BE4u;
            goto label_190be4;
        }
    }
    ctx->pc = 0x190B48u;
    // 0x190b48: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x190b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x190b4c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x190B4Cu;
    {
        const bool branch_taken_0x190b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B4Cu;
        // 0x190b50: 0xa2230003  sb          $v1, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b4c) {
            ctx->pc = 0x190BE4u;
            goto label_190be4;
        }
    }
    ctx->pc = 0x190B54u;
label_190b54:
    // 0x190b54: 0xc064300  jal         func_190C00
    ctx->pc = 0x190B54u;
    SET_GPR_U32(ctx, 31, 0x190B5Cu);
    ctx->pc = 0x190C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C00u, 0x190B54u, 0x190B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B5Cu;
label_190b5c:
    // 0x190b5c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x190b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x190b60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190b64: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x190b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x190b68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x190b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x190b6c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190b70: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x190b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x190b74: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x190b74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x190b78: 0x92240008  lbu         $a0, 0x8($s1)
    ctx->pc = 0x190b78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x190b7c: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x190B7Cu;
    SET_GPR_U32(ctx, 31, 0x190B84u);
    ctx->pc = 0x190B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190B7Cu;
    // 0x190b80: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x190B7Cu, 0x190B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B84u;
label_190b84:
    // 0x190b84: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x190b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x190b88: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x190B88u;
    {
        const bool branch_taken_0x190b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190B88u;
        // 0x190b8c: 0xa2230003  sb          $v1, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190b88) {
            ctx->pc = 0x190BE4u;
            goto label_190be4;
        }
    }
    ctx->pc = 0x190B90u;
label_190b90:
    // 0x190b90: 0xc064300  jal         func_190C00
    ctx->pc = 0x190B90u;
    SET_GPR_U32(ctx, 31, 0x190B98u);
    ctx->pc = 0x190C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C00u, 0x190B90u, 0x190B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190B98u;
label_190b98:
    // 0x190b98: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x190b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x190b9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x190b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190ba0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x190ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x190ba4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x190ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x190ba8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190bac: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x190bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x190bb0: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x190bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x190bb4: 0x92240008  lbu         $a0, 0x8($s1)
    ctx->pc = 0x190bb4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x190bb8: 0xc0c8e24  jal         func_323890
    ctx->pc = 0x190BB8u;
    SET_GPR_U32(ctx, 31, 0x190BC0u);
    ctx->pc = 0x190BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190BB8u;
    // 0x190bbc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323890u, 0x190BB8u, 0x190BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190BC0u;
label_190bc0:
    // 0x190bc0: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x190bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x190bc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x190BC4u;
    {
        const bool branch_taken_0x190bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BC4u;
        // 0x190bc8: 0xa2230003  sb          $v1, 0x3($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190bc4) {
            ctx->pc = 0x190BE4u;
            goto label_190be4;
        }
    }
    ctx->pc = 0x190BCCu;
label_190bcc:
    // 0x190bcc: 0xc0c8ed0  jal         func_323B40
    ctx->pc = 0x190BCCu;
    SET_GPR_U32(ctx, 31, 0x190BD4u);
    ctx->pc = 0x190BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190BCCu;
    // 0x190bd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B40u, 0x190BCCu, 0x190BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190BD4u;
label_190bd4:
    // 0x190bd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x190BD4u;
    {
        const bool branch_taken_0x190bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190bd4) {
            ctx->pc = 0x190BE4u;
            goto label_190be4;
        }
    }
    ctx->pc = 0x190BDCu;
    // 0x190bdc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x190bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x190be0: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x190be0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
label_190be4:
    // 0x190be4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x190be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_190be8:
    // 0x190be8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x190be8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190bec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x190becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190bf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190bf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x190BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190BF8u;
        // 0x190bfc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190C00u;
}
