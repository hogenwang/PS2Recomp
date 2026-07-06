#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1E80
// Address: 0x1f1e80 - 0x1f1ec0
void sub_001F1E80_0x1f1e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1E80_0x1f1e80");
#endif

    switch (ctx->pc) {
        case 0x1f1eb0u: goto label_1f1eb0;
        default: break;
    }

    ctx->pc = 0x1f1e80u;

    // 0x1f1e80: 0x3c02055d  lui         $v0, 0x55D
    ctx->pc = 0x1f1e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1373 << 16));
    // 0x1f1e84: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1e84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f1e88: 0x34424a80  ori         $v0, $v0, 0x4A80
    ctx->pc = 0x1f1e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19072);
    // 0x1f1e8c: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x1f1e8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1f1e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f1e94: 0x1812  mflo        $v1
    ctx->pc = 0x1f1e94u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x1f1e98: 0x2010  mfhi        $a0
    ctx->pc = 0x1f1e98u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1f1e9c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f1e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f1ea0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1f1ea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1f1ea4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1f1ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1f1ea8: 0xc04818c  jal         func_120630
    ctx->pc = 0x1F1EA8u;
    SET_GPR_U32(ctx, 31, 0x1F1EB0u);
    ctx->pc = 0x1F1EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1EA8u;
            // 0x1f1eac: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x120630u;
    if (runtime->hasFunction(0x120630u)) {
        auto targetFn = runtime->lookupFunction(0x120630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1EB0u; }
        if (ctx->pc != 0x1F1EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00120630_0x120630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1EB0u; }
        if (ctx->pc != 0x1F1EB0u) { return; }
    }
    ctx->pc = 0x1F1EB0u;
label_1f1eb0:
    // 0x1f1eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1EB4u;
            // 0x1f1eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1EBCu;
    // 0x1f1ebc: 0x0  nop
    ctx->pc = 0x1f1ebcu;
    // NOP
    ctx->pc = 0x1f1ec0u;
}
