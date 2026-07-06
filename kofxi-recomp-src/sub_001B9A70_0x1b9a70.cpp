#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9A70
// Address: 0x1b9a70 - 0x1b9ac0
void sub_001B9A70_0x1b9a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9A70_0x1b9a70");
#endif

    switch (ctx->pc) {
        case 0x1b9a84u: goto label_1b9a84;
        default: break;
    }

    ctx->pc = 0x1b9a70u;

    // 0x1b9a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b9a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b9a74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b9a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b9a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b9a7c: 0xc06e5d0  jal         func_1B9740
    ctx->pc = 0x1B9A7Cu;
    SET_GPR_U32(ctx, 31, 0x1B9A84u);
    ctx->pc = 0x1B9A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A7Cu;
            // 0x1b9a80: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9740u;
    if (runtime->hasFunction(0x1B9740u)) {
        auto targetFn = runtime->lookupFunction(0x1B9740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A84u; }
        if (ctx->pc != 0x1B9A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9740_0x1b9740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A84u; }
        if (ctx->pc != 0x1B9A84u) { return; }
    }
    ctx->pc = 0x1B9A84u;
label_1b9a84:
    // 0x1b9a84: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1b9a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9a88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b9a88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b9a8c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1b9a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1b9a90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b9a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9a94: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1b9a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b9a98: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b9a98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b9a9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b9a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9aa0: 0x0  nop
    ctx->pc = 0x1b9aa0u;
    // NOP
    // 0x1b9aa4: 0x0  nop
    ctx->pc = 0x1b9aa4u;
    // NOP
    // 0x1b9aa8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1b9aa8u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x1b9aac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b9aacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b9ab0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b9ab0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b9ab4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b9ab4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b9ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9AB8u;
            // 0x1b9abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9AC0u;
    ctx->pc = 0x1b9ac0u;
}
