#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DD6E0
// Address: 0x2dd6e0 - 0x2dd7d0
void sub_002DD6E0_0x2dd6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD6E0_0x2dd6e0");
#endif

    switch (ctx->pc) {
        case 0x2dd728u: goto label_2dd728;
        case 0x2dd730u: goto label_2dd730;
        case 0x2dd788u: goto label_2dd788;
        default: break;
    }

    ctx->pc = 0x2dd6e0u;

    // 0x2dd6e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dd6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dd6e4: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x2dd6e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2dd6e8: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2dd6e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2dd6ec: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2dd6ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2dd6f0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2dd6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2dd6f4: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x2dd6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x2dd6f8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x2dd6f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x2dd6fc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2dd6fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2dd700: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2dd700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x2dd704: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2dd704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2dd708: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2dd708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x2dd70c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2dd70cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2dd710: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dd710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dd714: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2dd714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd718: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dd718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dd71c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dd71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd720: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2dd720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2dd724: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x2dd724u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
label_2dd728:
    // 0x2dd728: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DD728u;
    SET_GPR_U32(ctx, 31, 0x2DD730u);
    ctx->pc = 0x2DF1D8u;
    if (runtime->hasFunction(0x2DF1D8u)) {
        auto targetFn = runtime->lookupFunction(0x2DF1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD730u; }
        if (ctx->pc != 0x2DD730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF1D8_0x2df1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD730u; }
        if (ctx->pc != 0x2DD730u) { return; }
    }
    ctx->pc = 0x2DD730u;
label_2dd730:
    // 0x2dd730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dd730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dd734: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2dd734u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2dd738: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x2dd738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2dd73c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2dd73cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2dd740: 0x0  nop
    ctx->pc = 0x2dd740u;
    // NOP
    // 0x2dd744: 0x0  nop
    ctx->pc = 0x2dd744u;
    // NOP
    // 0x2dd748: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x2dd748u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
    // 0x2dd74c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2dd74cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2dd750: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2dd750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dd754: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd754u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2dd758: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2dd758u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dd75c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2DD75Cu;
    {
        const bool branch_taken_0x2dd75c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DD760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD75Cu;
            // 0x2dd760: 0x2a030010  slti        $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd75c) {
            ctx->pc = 0x2DD774u;
            goto label_2dd774;
        }
    }
    ctx->pc = 0x2DD764u;
    // 0x2dd764: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2dd764u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2dd768: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2dd768u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2dd76c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2dd76cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2dd770: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x2dd770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_2dd774:
    // 0x2dd774: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2DD774u;
    {
        const bool branch_taken_0x2dd774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD774u;
            // 0x2dd778: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd774) {
            ctx->pc = 0x2DD728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dd728;
        }
    }
    ctx->pc = 0x2DD77Cu;
    // 0x2dd77c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2dd77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2dd780: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2dd780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd784: 0x2447dfa8  addiu       $a3, $v0, -0x2058
    ctx->pc = 0x2dd784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959016));
label_2dd788:
    // 0x2dd788: 0x2262821  addu        $a1, $s1, $a2
    ctx->pc = 0x2dd788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2dd78c: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x2dd78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2dd790: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2dd790u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dd794: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2dd794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2dd798: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2dd798u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2dd79c: 0x28c30010  slti        $v1, $a2, 0x10
    ctx->pc = 0x2dd79cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2dd7a0: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2dd7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2dd7a4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DD7A4u;
    {
        const bool branch_taken_0x2dd7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD7A4u;
            // 0x2dd7a8: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd7a4) {
            ctx->pc = 0x2DD788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dd788;
        }
    }
    ctx->pc = 0x2DD7ACu;
    // 0x2dd7ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dd7acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd7b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dd7b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dd7b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dd7b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd7b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2dd7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dd7bc: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x2dd7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2dd7c0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2dd7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2dd7c4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2dd7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dd7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD7C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD7C8u;
            // 0x2dd7cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DD7D0u;
    ctx->pc = 0x2dd7d0u;
}
