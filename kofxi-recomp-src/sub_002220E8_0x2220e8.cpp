#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002220E8
// Address: 0x2220e8 - 0x222110
void sub_002220E8_0x2220e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002220E8_0x2220e8");
#endif

    switch (ctx->pc) {
        case 0x222100u: goto label_222100;
        default: break;
    }

    ctx->pc = 0x2220e8u;

    // 0x2220e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2220e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2220ec: 0xac801048  sw          $zero, 0x1048($a0)
    ctx->pc = 0x2220ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4168), GPR_U32(ctx, 0));
    // 0x2220f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2220f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2220f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2220f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2220f8: 0xc089144  jal         func_224510
    ctx->pc = 0x2220F8u;
    SET_GPR_U32(ctx, 31, 0x222100u);
    ctx->pc = 0x2220FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2220F8u;
            // 0x2220fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224510u;
    if (runtime->hasFunction(0x224510u)) {
        auto targetFn = runtime->lookupFunction(0x224510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222100u; }
        if (ctx->pc != 0x222100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224510_0x224510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222100u; }
        if (ctx->pc != 0x222100u) { return; }
    }
    ctx->pc = 0x222100u;
label_222100:
    // 0x222100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222104: 0x3e00008  jr          $ra
    ctx->pc = 0x222104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x222104u;
            // 0x222108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22210Cu;
    // 0x22210c: 0x0  nop
    ctx->pc = 0x22210cu;
    // NOP
    ctx->pc = 0x222110u;
}
