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

// Function: sub_0019F470
// Address: 0x19f470 - 0x19f4d0
void sub_0019F470_0x19f470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F470_0x19f470");
#endif

    ctx->pc = 0x19f470u;

    // 0x19f470: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19f470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f474: 0x0  nop
    ctx->pc = 0x19f474u;
    // NOP
    // 0x19f478: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x19f478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f47c: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x19F47Cu;
    {
        const bool branch_taken_0x19f47c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f47c) {
            ctx->pc = 0x19F480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F47Cu;
            // 0x19f480: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS> (Delay Slot)
            { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F4A4u;
            goto label_19f4a4;
        }
    }
    ctx->pc = 0x19F484u;
    // 0x19f484: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19f484u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19f488: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19f488u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19f48c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19f48cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19f490: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x19f490u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f494: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x19F494u;
    {
        const bool branch_taken_0x19f494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f494) {
            ctx->pc = 0x19F4BCu;
            goto label_19f4bc;
        }
    }
    ctx->pc = 0x19F49Cu;
    // 0x19f49c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19F49Cu;
    {
        const bool branch_taken_0x19f49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F49Cu;
        // 0x19f4a0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f49c) {
            ctx->pc = 0x19F4BCu;
            goto label_19f4bc;
        }
    }
    ctx->pc = 0x19F4A4u;
label_19f4a4:
    // 0x19f4a4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19f4a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x19f4a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19f4a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19f4ac: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x19f4acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19f4b0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x19F4B0u;
    {
        const bool branch_taken_0x19f4b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19f4b0) {
            ctx->pc = 0x19F4BCu;
            goto label_19f4bc;
        }
    }
    ctx->pc = 0x19F4B8u;
    // 0x19f4b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19f4bc:
    // 0x19f4bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19f4bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19f4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4C0u;
        // 0x19f4c4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F4C8u;
    // 0x19f4c8: 0x0  nop
    ctx->pc = 0x19f4c8u;
    // NOP
    // 0x19f4cc: 0x0  nop
    ctx->pc = 0x19f4ccu;
    // NOP
}
