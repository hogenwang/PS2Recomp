#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E7948
// Address: 0x1e7948 - 0x1e7990
void sub_001E7948_0x1e7948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7948_0x1e7948");
#endif

    switch (ctx->pc) {
        case 0x1e7958u: goto label_1e7958;
        case 0x1e7968u: goto label_1e7968;
        case 0x1e7978u: goto label_1e7978;
        default: break;
    }

    ctx->pc = 0x1e7948u;

    // 0x1e7948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e794c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e794cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7950: 0xc0781e0  jal         func_1E0780
    ctx->pc = 0x1E7950u;
    SET_GPR_U32(ctx, 31, 0x1E7958u);
    ctx->pc = 0x1E0780u;
    if (runtime->hasFunction(0x1E0780u)) {
        auto targetFn = runtime->lookupFunction(0x1E0780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7958u; }
        if (ctx->pc != 0x1E7958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0780_0x1e0780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7958u; }
        if (ctx->pc != 0x1E7958u) { return; }
    }
    ctx->pc = 0x1E7958u;
label_1e7958:
    // 0x1e7958: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1e7958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1e795c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e795cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7960: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7960u;
            // 0x1e7964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E7968u;
label_1e7968:
    // 0x1e7968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e796c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e796cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7970: 0xc079e16  jal         func_1E7858
    ctx->pc = 0x1E7970u;
    SET_GPR_U32(ctx, 31, 0x1E7978u);
    ctx->pc = 0x1E7858u;
    if (runtime->hasFunction(0x1E7858u)) {
        auto targetFn = runtime->lookupFunction(0x1E7858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7978u; }
        if (ctx->pc != 0x1E7978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E7858_0x1e7858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7978u; }
        if (ctx->pc != 0x1E7978u) { return; }
    }
    ctx->pc = 0x1E7978u;
label_1e7978:
    // 0x1e7978: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e7978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1e797c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e797cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7980: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e7980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e7984: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E7984u;
            // 0x1e7988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E798Cu;
    // 0x1e798c: 0x0  nop
    ctx->pc = 0x1e798cu;
    // NOP
    ctx->pc = 0x1e7990u;
}
