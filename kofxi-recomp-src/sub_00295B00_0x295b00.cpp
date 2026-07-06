#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295B00
// Address: 0x295b00 - 0x295b30
void sub_00295B00_0x295b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295B00_0x295b00");
#endif

    switch (ctx->pc) {
        case 0x295b20u: goto label_295b20;
        default: break;
    }

    ctx->pc = 0x295b00u;

    // 0x295b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x295b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x295b04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x295b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295b0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x295b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x295b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x295b14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b18: 0xc0a56d8  jal         func_295B60
    ctx->pc = 0x295B18u;
    SET_GPR_U32(ctx, 31, 0x295B20u);
    ctx->pc = 0x295B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295B18u;
            // 0x295b1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295B60u;
    if (runtime->hasFunction(0x295B60u)) {
        auto targetFn = runtime->lookupFunction(0x295B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295B20u; }
        if (ctx->pc != 0x295B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295B60_0x295b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295B20u; }
        if (ctx->pc != 0x295B20u) { return; }
    }
    ctx->pc = 0x295B20u;
label_295b20:
    // 0x295b20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295b24: 0x3e00008  jr          $ra
    ctx->pc = 0x295B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295B24u;
            // 0x295b28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295B2Cu;
    // 0x295b2c: 0x0  nop
    ctx->pc = 0x295b2cu;
    // NOP
    ctx->pc = 0x295b30u;
}
