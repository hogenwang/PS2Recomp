#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBD60
// Address: 0x1bbd60 - 0x1bbdb8
void sub_001BBD60_0x1bbd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBD60_0x1bbd60");
#endif

    switch (ctx->pc) {
        case 0x1bbd78u: goto label_1bbd78;
        case 0x1bbd94u: goto label_1bbd94;
        case 0x1bbda0u: goto label_1bbda0;
        default: break;
    }

    ctx->pc = 0x1bbd60u;

    // 0x1bbd60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbd64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbd68: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bbd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bbd6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbd70: 0x806d85e  j           func_1B6178
    ctx->pc = 0x1BBD70u;
    ctx->pc = 0x1BBD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD70u;
            // 0x1bbd74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6178u;
    {
        auto targetFn = runtime->lookupFunction(0x1B6178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BBD78u;
label_1bbd78:
    // 0x1bbd78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bbd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bbd7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbd80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bbd80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bbd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bbd88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bbd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bbd8c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BBD8Cu;
    SET_GPR_U32(ctx, 31, 0x1BBD94u);
    ctx->pc = 0x1BBD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD8Cu;
            // 0x1bbd90: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (runtime->hasFunction(0x1AD268u)) {
        auto targetFn = runtime->lookupFunction(0x1AD268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD94u; }
        if (ctx->pc != 0x1BBD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD268_0x1ad268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBD94u; }
        if (ctx->pc != 0x1BBD94u) { return; }
    }
    ctx->pc = 0x1BBD94u;
label_1bbd94:
    // 0x1bbd94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbd98: 0xc06ef6e  jal         func_1BBDB8
    ctx->pc = 0x1BBD98u;
    SET_GPR_U32(ctx, 31, 0x1BBDA0u);
    ctx->pc = 0x1BBD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBD98u;
            // 0x1bbd9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBDB8u;
    if (runtime->hasFunction(0x1BBDB8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBDA0u; }
        if (ctx->pc != 0x1BBDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBDB8_0x1bbdb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBDA0u; }
        if (ctx->pc != 0x1BBDA0u) { return; }
    }
    ctx->pc = 0x1BBDA0u;
label_1bbda0:
    // 0x1bbda0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbda4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bbda4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbda8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bbda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbdac: 0x806b49c  j           func_1AD270
    ctx->pc = 0x1BBDACu;
    ctx->pc = 0x1BBDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBDACu;
            // 0x1bbdb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (runtime->hasFunction(0x1AD270u)) {
        auto targetFn = runtime->lookupFunction(0x1AD270u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD270_0x1ad270(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BBDB4u;
    // 0x1bbdb4: 0x0  nop
    ctx->pc = 0x1bbdb4u;
    // NOP
    ctx->pc = 0x1bbdb8u;
}
