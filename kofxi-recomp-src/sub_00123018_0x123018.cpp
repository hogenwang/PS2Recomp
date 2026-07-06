#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00123018
// Address: 0x123018 - 0x123048
void sub_00123018_0x123018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123018_0x123018");
#endif

    switch (ctx->pc) {
        case 0x123038u: goto label_123038;
        default: break;
    }

    ctx->pc = 0x123018u;

    // 0x123018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x123018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12301c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12301cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x123020: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x123020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x123024: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x123024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x123028: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x123028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12302c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x12302cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x123030: 0xc048966  jal         func_122598
    ctx->pc = 0x123030u;
    SET_GPR_U32(ctx, 31, 0x123038u);
    ctx->pc = 0x123034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x123030u;
            // 0x123034: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x122598u;
    if (runtime->hasFunction(0x122598u)) {
        auto targetFn = runtime->lookupFunction(0x122598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123038u; }
        if (ctx->pc != 0x123038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00122598_0x122598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x123038u; }
        if (ctx->pc != 0x123038u) { return; }
    }
    ctx->pc = 0x123038u;
label_123038:
    // 0x123038: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x123038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12303c: 0x3e00008  jr          $ra
    ctx->pc = 0x12303Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12303Cu;
            // 0x123040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x123044u;
    // 0x123044: 0x0  nop
    ctx->pc = 0x123044u;
    // NOP
    ctx->pc = 0x123048u;
}
