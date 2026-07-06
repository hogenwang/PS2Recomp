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

// Function: sub_00142AF0
// Address: 0x142af0 - 0x142bb0
void sub_00142AF0_0x142af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142AF0_0x142af0");
#endif

    ctx->pc = 0x142af0u;

    // 0x142af0: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x142af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x142af4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x142af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142af8: 0x0  nop
    ctx->pc = 0x142af8u;
    // NOP
    // 0x142afc: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x142afcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142b00: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x142B00u;
    {
        const bool branch_taken_0x142b00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x142B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142B00u;
        // 0x142b04: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142b00) {
            ctx->pc = 0x142B44u;
            goto label_142b44;
        }
    }
    ctx->pc = 0x142B08u;
    // 0x142b08: 0x0  nop
    ctx->pc = 0x142b08u;
    // NOP
    // 0x142b0c: 0x0  nop
    ctx->pc = 0x142b0cu;
    // NOP
    // 0x142b10: 0x46016003  div.s       $f0, $f12, $f1
    ctx->pc = 0x142b10u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[0] = ctx->f[12] / ctx->f[1];
    // 0x142b14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142b14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142b18: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x142b18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x142b1c: 0x0  nop
    ctx->pc = 0x142b1cu;
    // NOP
    // 0x142b20: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x142b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x142b24: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x142b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142b28: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x142b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x142b2c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x142b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142b30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x142b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x142b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142b38: 0x0  nop
    ctx->pc = 0x142b38u;
    // NOP
    // 0x142b3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x142b3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x142b40: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x142b40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_142b44:
    // 0x142b44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x142b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142b48: 0x0  nop
    ctx->pc = 0x142b48u;
    // NOP
    // 0x142b4c: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x142b4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142b50: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x142B50u;
    {
        const bool branch_taken_0x142b50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x142b50) {
            ctx->pc = 0x142B9Cu;
            goto label_142b9c;
        }
    }
    ctx->pc = 0x142B58u;
    // 0x142b58: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x142b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x142b5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x142b5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142b60: 0x0  nop
    ctx->pc = 0x142b60u;
    // NOP
    // 0x142b64: 0x46016003  div.s       $f0, $f12, $f1
    ctx->pc = 0x142b64u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[0] = ctx->f[12] / ctx->f[1];
    // 0x142b68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x142b68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x142b6c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x142b6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x142b70: 0x0  nop
    ctx->pc = 0x142b70u;
    // NOP
    // 0x142b74: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x142b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x142b78: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x142b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142b7c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x142b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x142b80: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x142b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142b84: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x142b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x142b88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x142b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142b8c: 0x0  nop
    ctx->pc = 0x142b8cu;
    // NOP
    // 0x142b90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x142b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x142b94: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x142b94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x142b98: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x142b98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_142b9c:
    // 0x142b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x142B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142BA4u;
    // 0x142ba4: 0x0  nop
    ctx->pc = 0x142ba4u;
    // NOP
    // 0x142ba8: 0x0  nop
    ctx->pc = 0x142ba8u;
    // NOP
    // 0x142bac: 0x0  nop
    ctx->pc = 0x142bacu;
    // NOP
    if (ctx->pc == 0x142bacu) { ctx->pc = 0x142bb0u; }
}
