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

// Function: sub_0014AAF0
// Address: 0x14aaf0 - 0x14ab80
void sub_0014AAF0_0x14aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AAF0_0x14aaf0");
#endif

    ctx->pc = 0x14aaf0u;

    // 0x14aaf0: 0x3c024479  lui         $v0, 0x4479
    ctx->pc = 0x14aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17529 << 16));
    // 0x14aaf4: 0x3c04437a  lui         $a0, 0x437A
    ctx->pc = 0x14aaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17274 << 16));
    // 0x14aaf8: 0x3443c000  ori         $v1, $v0, 0xC000
    ctx->pc = 0x14aaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x14aafc: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x14aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x14ab00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ab00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ab04: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14ab04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14ab08: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x14ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x14ab0c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x14ab0cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x14ab10: 0x9043b26b  lbu         $v1, -0x4D95($v0)
    ctx->pc = 0x14ab10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947435)));
    // 0x14ab14: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x14ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x14ab18: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x14ab18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x14ab1c: 0x2442e0e0  addiu       $v0, $v0, -0x1F20
    ctx->pc = 0x14ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959328));
    // 0x14ab20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14ab24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14ab28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x14ab28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ab2c: 0x0  nop
    ctx->pc = 0x14ab2cu;
    // NOP
    // 0x14ab30: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x14ab30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14ab34: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14ab34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14ab38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14ab38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ab3c: 0x0  nop
    ctx->pc = 0x14ab3cu;
    // NOP
    // 0x14ab40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14ab40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14ab44: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x14ab44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x14ab48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14ab48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14ab4c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x14AB4Cu;
    {
        const bool branch_taken_0x14ab4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ab4c) {
            ctx->pc = 0x14AB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AB4Cu;
            // 0x14ab50: 0x3c024479  lui         $v0, 0x4479 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17529 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AB5Cu;
            goto label_14ab5c;
        }
    }
    ctx->pc = 0x14AB54u;
    // 0x14ab54: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x14ab54u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x14ab58: 0x3c024479  lui         $v0, 0x4479
    ctx->pc = 0x14ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17529 << 16));
label_14ab5c:
    // 0x14ab5c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x14ab5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x14ab60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ab60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14ab64: 0x0  nop
    ctx->pc = 0x14ab64u;
    // NOP
    // 0x14ab68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x14ab68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x14ab6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14ab6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14ab70: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14ab70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14ab74: 0x3e00008  jr          $ra
    ctx->pc = 0x14AB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AB7Cu;
    // 0x14ab7c: 0x0  nop
    ctx->pc = 0x14ab7cu;
    // NOP
}
