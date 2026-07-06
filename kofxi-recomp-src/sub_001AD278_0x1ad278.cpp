#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AD278
// Address: 0x1ad278 - 0x1ad3d8
void sub_001AD278_0x1ad278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD278_0x1ad278");
#endif

    switch (ctx->pc) {
        case 0x1ad2d8u: goto label_1ad2d8;
        case 0x1ad310u: goto label_1ad310;
        case 0x1ad32cu: goto label_1ad32c;
        case 0x1ad368u: goto label_1ad368;
        default: break;
    }

    ctx->pc = 0x1ad278u;

    // 0x1ad278: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ad278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ad27c: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x1ad27cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1ad280: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1ad280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1ad284: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1ad284u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1ad288: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x1ad288u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1ad28c: 0x0  nop
    ctx->pc = 0x1ad28cu;
    // NOP
    // 0x1ad290: 0x0  nop
    ctx->pc = 0x1ad290u;
    // NOP
    // 0x1ad294: 0x46160504  c1          0x160504
    ctx->pc = 0x1ad294u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ad298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ad298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ad29c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ad29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ad2a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ad2a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ad2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ad2a8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1ad2a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ad2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ad2b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1ad2b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2b4: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x1ad2b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ad2b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ad2b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad2bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ad2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ad2c0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1ad2c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1ad2c4: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x1ad2c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ad2c8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD2C8u;
    {
        const bool branch_taken_0x1ad2c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AD2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD2C8u;
            // 0x1ad2cc: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad2c8) {
            ctx->pc = 0x1AD2DCu;
            goto label_1ad2dc;
        }
    }
    ctx->pc = 0x1AD2D0u;
    // 0x1ad2d0: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1AD2D0u;
    SET_GPR_U32(ctx, 31, 0x1AD2D8u);
    ctx->pc = 0x11AE40u;
    if (runtime->hasFunction(0x11AE40u)) {
        auto targetFn = runtime->lookupFunction(0x11AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD2D8u; }
        if (ctx->pc != 0x1AD2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011AE40_0x11ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD2D8u; }
        if (ctx->pc != 0x1AD2D8u) { return; }
    }
    ctx->pc = 0x1AD2D8u;
label_1ad2d8:
    // 0x1ad2d8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1ad2d8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1ad2dc:
    // 0x1ad2dc: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1ad2dcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ad2e0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1ad2e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ad2e4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x1ad2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x1ad2e8: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1ad2e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x1ad2ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad2ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad2f0: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1ad2f0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ad2f4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ad2f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ad2f8: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1ad2f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1ad2fc: 0x0  nop
    ctx->pc = 0x1ad2fcu;
    // NOP
    // 0x1ad300: 0x0  nop
    ctx->pc = 0x1ad300u;
    // NOP
    // 0x1ad304: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x1ad304u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x1ad308: 0xc046ac8  jal         func_11AB20
    ctx->pc = 0x1AD308u;
    SET_GPR_U32(ctx, 31, 0x1AD310u);
    ctx->pc = 0x11AB20u;
    if (runtime->hasFunction(0x11AB20u)) {
        auto targetFn = runtime->lookupFunction(0x11AB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD310u; }
        if (ctx->pc != 0x1AD310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011AB20_0x11ab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD310u; }
        if (ctx->pc != 0x1AD310u) { return; }
    }
    ctx->pc = 0x1AD310u;
label_1ad310:
    // 0x1ad310: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1ad310u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1ad314: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x1ad314u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
    // 0x1ad318: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x1ad318u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ad31c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD31Cu;
    {
        const bool branch_taken_0x1ad31c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AD320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD31Cu;
            // 0x1ad320: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad31c) {
            ctx->pc = 0x1AD330u;
            goto label_1ad330;
        }
    }
    ctx->pc = 0x1AD324u;
    // 0x1ad324: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1AD324u;
    SET_GPR_U32(ctx, 31, 0x1AD32Cu);
    ctx->pc = 0x11AE40u;
    if (runtime->hasFunction(0x11AE40u)) {
        auto targetFn = runtime->lookupFunction(0x11AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD32Cu; }
        if (ctx->pc != 0x1AD32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011AE40_0x11ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD32Cu; }
        if (ctx->pc != 0x1AD32Cu) { return; }
    }
    ctx->pc = 0x1AD32Cu;
label_1ad32c:
    // 0x1ad32c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1ad32cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1ad330:
    // 0x1ad330: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ad330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ad334: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ad338: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x1ad338u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ad33c: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x1ad33cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x1ad340: 0x4614ab00  add.s       $f12, $f21, $f20
    ctx->pc = 0x1ad340u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x1ad344: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1ad344u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1ad348: 0x0  nop
    ctx->pc = 0x1ad348u;
    // NOP
    // 0x1ad34c: 0x0  nop
    ctx->pc = 0x1ad34cu;
    // NOP
    // 0x1ad350: 0x460c0004  c1          0xC0004
    ctx->pc = 0x1ad350u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ad354: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x1ad354u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ad358: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1AD358u;
    {
        const bool branch_taken_0x1ad358 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ad358) {
            ctx->pc = 0x1AD35Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD358u;
            // 0x1ad35c: 0x4600a801  sub.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1AD36Cu;
            goto label_1ad36c;
        }
    }
    ctx->pc = 0x1AD360u;
    // 0x1ad360: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1AD360u;
    SET_GPR_U32(ctx, 31, 0x1AD368u);
    ctx->pc = 0x11AE40u;
    if (runtime->hasFunction(0x11AE40u)) {
        auto targetFn = runtime->lookupFunction(0x11AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD368u; }
        if (ctx->pc != 0x1AD368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011AE40_0x11ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD368u; }
        if (ctx->pc != 0x1AD368u) { return; }
    }
    ctx->pc = 0x1AD368u;
label_1ad368:
    // 0x1ad368: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x1ad368u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_1ad36c:
    // 0x1ad36c: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x1ad36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ad370: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x1ad370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x1ad374: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ad374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ad378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad37c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ad37cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad380: 0x0  nop
    ctx->pc = 0x1ad380u;
    // NOP
    // 0x1ad384: 0x0  nop
    ctx->pc = 0x1ad384u;
    // NOP
    // 0x1ad388: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x1ad388u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x1ad38c: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x1ad38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ad390: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ad390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad394: 0xc7b60038  lwc1        $f22, 0x38($sp)
    ctx->pc = 0x1ad394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ad398: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1ad398u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1ad39c: 0x46000080  add.s       $f2, $f0, $f0
    ctx->pc = 0x1ad39cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1ad3a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ad3a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ad3a4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1ad3a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1ad3a8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1ad3a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1ad3ac: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad3acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ad3b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ad3b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ad3b4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad3b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1ad3b8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ad3b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ad3bc: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x1ad3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ad3c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ad3c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ad3c4: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x1ad3c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ad3c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ad3c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD3CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AD3CCu;
            // 0x1ad3d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AD3D4u;
    // 0x1ad3d4: 0x0  nop
    ctx->pc = 0x1ad3d4u;
    // NOP
    ctx->pc = 0x1ad3d8u;
}
