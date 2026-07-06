#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7A18
// Address: 0x1e7a18 - 0x1e7a48
void sub_001E7A18_0x1e7a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7A18_0x1e7a18");
#endif

    switch (ctx->pc) {
        case 0x1e7a28u: goto label_1e7a28;
        case 0x1e7a30u: goto label_1e7a30;
        default: break;
    }

    ctx->pc = 0x1e7a18u;

    // 0x1e7a18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7a1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7a20: 0xc078a2a  jal         func_1E28A8
    ctx->pc = 0x1E7A20u;
    SET_GPR_U32(ctx, 31, 0x1E7A28u);
    ctx->pc = 0x1E28A8u;
    if (runtime->hasFunction(0x1E28A8u)) {
        auto targetFn = runtime->lookupFunction(0x1E28A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A28u; }
        if (ctx->pc != 0x1E7A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E28A8_0x1e28a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A28u; }
        if (ctx->pc != 0x1E7A28u) { return; }
    }
    ctx->pc = 0x1E7A28u;
label_1e7a28:
    // 0x1e7a28: 0xc079f52  jal         func_1E7D48
    ctx->pc = 0x1E7A28u;
    SET_GPR_U32(ctx, 31, 0x1E7A30u);
    ctx->pc = 0x1E7A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A28u;
            // 0x1e7a2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D48u;
    if (runtime->hasFunction(0x1E7D48u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A30u; }
        if (ctx->pc != 0x1E7A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7D48_0x1e7d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7A30u; }
        if (ctx->pc != 0x1E7A30u) { return; }
    }
    ctx->pc = 0x1E7A30u;
label_1e7a30:
    // 0x1e7a30: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e7a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e7a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7a38: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e7a38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e7a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7A3Cu;
            // 0x1e7a40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7A44u;
    // 0x1e7a44: 0x0  nop
    ctx->pc = 0x1e7a44u;
    // NOP
    ctx->pc = 0x1e7a48u;
}
