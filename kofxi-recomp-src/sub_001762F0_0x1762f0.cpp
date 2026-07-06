#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001762F0
// Address: 0x1762f0 - 0x176330
void sub_001762F0_0x1762f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001762F0_0x1762f0");
#endif

    switch (ctx->pc) {
        case 0x17630cu: goto label_17630c;
        default: break;
    }

    ctx->pc = 0x1762f0u;

    // 0x1762f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1762f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1762f4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x1762f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x1762f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1762f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1762fc: 0x2484a240  addiu       $a0, $a0, -0x5DC0
    ctx->pc = 0x1762fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943296));
    // 0x176300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176304: 0xc067d6c  jal         func_19F5B0
    ctx->pc = 0x176304u;
    SET_GPR_U32(ctx, 31, 0x17630Cu);
    ctx->pc = 0x176308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x176304u;
            // 0x176308: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F5B0u;
    if (runtime->hasFunction(0x19F5B0u)) {
        auto targetFn = runtime->lookupFunction(0x19F5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17630Cu; }
        if (ctx->pc != 0x17630Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F5B0_0x19f5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17630Cu; }
        if (ctx->pc != 0x17630Cu) { return; }
    }
    ctx->pc = 0x17630Cu;
label_17630c:
    // 0x17630c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17630cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x176310: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x176310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x176314: 0xa080a220  sb          $zero, -0x5DE0($a0)
    ctx->pc = 0x176314u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294943264), (uint8_t)GPR_U32(ctx, 0));
    // 0x176318: 0xa060a230  sb          $zero, -0x5DD0($v1)
    ctx->pc = 0x176318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294943280), (uint8_t)GPR_U32(ctx, 0));
    // 0x17631c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17631cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176320: 0x3e00008  jr          $ra
    ctx->pc = 0x176320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x176320u;
            // 0x176324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x176328u;
    // 0x176328: 0x0  nop
    ctx->pc = 0x176328u;
    // NOP
    // 0x17632c: 0x0  nop
    ctx->pc = 0x17632cu;
    // NOP
    ctx->pc = 0x176330u;
}
