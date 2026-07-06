#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F180
// Address: 0x19f180 - 0x19f1e0
void sub_0019F180_0x19f180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F180_0x19f180");
#endif

    switch (ctx->pc) {
        case 0x19f19cu: goto label_19f19c;
        case 0x19f1a4u: goto label_19f1a4;
        default: break;
    }

    ctx->pc = 0x19f180u;

    // 0x19f180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19f180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19f184: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19f184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19f188: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19f18c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f190: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19f190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f194: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x19f194u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x19f198: 0x2610d5a0  addiu       $s0, $s0, -0x2A60
    ctx->pc = 0x19f198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956448));
label_19f19c:
    // 0x19f19c: 0xc067c48  jal         func_19F120
    ctx->pc = 0x19F19Cu;
    SET_GPR_U32(ctx, 31, 0x19F1A4u);
    ctx->pc = 0x19F120u;
    if (runtime->hasFunction(0x19F120u)) {
        auto targetFn = runtime->lookupFunction(0x19F120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1A4u; }
        if (ctx->pc != 0x19F1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F120_0x19f120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F1A4u; }
        if (ctx->pc != 0x19F1A4u) { return; }
    }
    ctx->pc = 0x19F1A4u;
label_19f1a4:
    // 0x19f1a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x19f1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19f1a8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x19f1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x19f1ac: 0x2a230100  slti        $v1, $s1, 0x100
    ctx->pc = 0x19f1acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x19f1b0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x19f1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x19f1b4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x19F1B4u;
    {
        const bool branch_taken_0x19f1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f1b4) {
            ctx->pc = 0x19F19Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19f19c;
        }
    }
    ctx->pc = 0x19F1BCu;
    // 0x19f1bc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19f1c0: 0xac60d588  sw          $zero, -0x2A78($v1)
    ctx->pc = 0x19f1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956424), GPR_U32(ctx, 0));
    // 0x19f1c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19f1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f1c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f1c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f1cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f1d0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F1D0u;
            // 0x19f1d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19F1D8u;
    // 0x19f1d8: 0x0  nop
    ctx->pc = 0x19f1d8u;
    // NOP
    // 0x19f1dc: 0x0  nop
    ctx->pc = 0x19f1dcu;
    // NOP
    ctx->pc = 0x19f1e0u;
}
