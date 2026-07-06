#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00272400
// Address: 0x272400 - 0x2724f0
void sub_00272400_0x272400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272400_0x272400");
#endif

    switch (ctx->pc) {
        case 0x272438u: goto label_272438;
        case 0x272470u: goto label_272470;
        case 0x272478u: goto label_272478;
        default: break;
    }

    ctx->pc = 0x272400u;

    // 0x272400: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x272400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x272404: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x272404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x272408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x272408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27240c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27240cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272410: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x272410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x272414: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x272414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x272418: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x272418u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
    // 0x27241c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x27241cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x272420: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x272420u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x272424: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x272424u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x272428: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x272428u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27242c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27242cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x272430: 0xc09d3a4  jal         func_274E90
    ctx->pc = 0x272430u;
    SET_GPR_U32(ctx, 31, 0x272438u);
    ctx->pc = 0x272434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272430u;
            // 0x272434: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274E90u;
    if (runtime->hasFunction(0x274E90u)) {
        auto targetFn = runtime->lookupFunction(0x274E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272438u; }
        if (ctx->pc != 0x272438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274E90_0x274e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272438u; }
        if (ctx->pc != 0x272438u) { return; }
    }
    ctx->pc = 0x272438u;
label_272438:
    // 0x272438: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x272438u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27243c: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x27243cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272440: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x272440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x272444: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x272444u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x272448: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x272448u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x27244c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27244cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x272450: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x272450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x272454: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x272454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x272458: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x272458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x27245c: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x27245cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x272460: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x272460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x272464: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x272464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x272468: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x272468u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x27246c: 0x0  nop
    ctx->pc = 0x27246cu;
    // NOP
label_272470:
    // 0x272470: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x272470u;
    SET_GPR_U32(ctx, 31, 0x272478u);
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272478u; }
        if (ctx->pc != 0x272478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272478u; }
        if (ctx->pc != 0x272478u) { return; }
    }
    ctx->pc = 0x272478u;
label_272478:
    // 0x272478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x272478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27247c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27247cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x272480: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x272480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x272484: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x272484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x272488: 0x0  nop
    ctx->pc = 0x272488u;
    // NOP
    // 0x27248c: 0x0  nop
    ctx->pc = 0x27248cu;
    // NOP
    // 0x272490: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x272490u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x272494: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x272494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x272498: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x272498u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27249c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27249cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2724a0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2724a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2724a4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2724A4u;
    {
        const bool branch_taken_0x2724a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2724A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2724A4u;
            // 0x2724a8: 0x2e230002  sltiu       $v1, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2724a4) {
            ctx->pc = 0x2724BCu;
            goto label_2724bc;
        }
    }
    ctx->pc = 0x2724ACu;
    // 0x2724ac: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2724acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2724b0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2724b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2724b4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2724b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2724b8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x2724b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_2724bc:
    // 0x2724bc: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2724BCu;
    {
        const bool branch_taken_0x2724bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2724C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2724BCu;
            // 0x2724c0: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2724bc) {
            ctx->pc = 0x272470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_272470;
        }
    }
    ctx->pc = 0x2724C4u;
    // 0x2724c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2724c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2724c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2724c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2724cc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2724ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2724d0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2724d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2724d4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2724d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2724d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2724d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2724dc: 0xc7b60048  lwc1        $f22, 0x48($sp)
    ctx->pc = 0x2724dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2724e0: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x2724e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2724e4: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x2724e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2724e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2724E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2724ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2724E8u;
            // 0x2724ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2724F0u;
    ctx->pc = 0x2724f0u;
}
