#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BC5B0
// Address: 0x2bc5b0 - 0x2bc5d8
void sub_002BC5B0_0x2bc5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC5B0_0x2bc5b0");
#endif

    switch (ctx->pc) {
        case 0x2bc5c4u: goto label_2bc5c4;
        default: break;
    }

    ctx->pc = 0x2bc5b0u;

    // 0x2bc5b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bc5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bc5b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bc5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bc5b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bc5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bc5bc: 0xc0af148  jal         func_2BC520
    ctx->pc = 0x2BC5BCu;
    SET_GPR_U32(ctx, 31, 0x2BC5C4u);
    ctx->pc = 0x2BC5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC5BCu;
            // 0x2bc5c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC520u;
    if (runtime->hasFunction(0x2BC520u)) {
        auto targetFn = runtime->lookupFunction(0x2BC520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC5C4u; }
        if (ctx->pc != 0x2BC5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BC520_0x2bc520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC5C4u; }
        if (ctx->pc != 0x2BC5C4u) { return; }
    }
    ctx->pc = 0x2BC5C4u;
label_2bc5c4:
    // 0x2bc5c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc5c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bc5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc5cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bc5ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc5d0: 0x80af176  j           func_2BC5D8
    ctx->pc = 0x2BC5D0u;
    ctx->pc = 0x2BC5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BC5D0u;
            // 0x2bc5d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D8u;
    if (runtime->hasFunction(0x2BC5D8u)) {
        auto targetFn = runtime->lookupFunction(0x2BC5D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002BC5D8_0x2bc5d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2BC5D8u;
    ctx->pc = 0x2bc5d8u;
}
