#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B97A0
// Address: 0x2b97a0 - 0x2b97e0
void sub_002B97A0_0x2b97a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B97A0_0x2b97a0");
#endif

    switch (ctx->pc) {
        case 0x2b97bcu: goto label_2b97bc;
        case 0x2b97c4u: goto label_2b97c4;
        default: break;
    }

    ctx->pc = 0x2b97a0u;

    // 0x2b97a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b97a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b97a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b97a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b97a8: 0x2c840002  sltiu       $a0, $a0, 0x2
    ctx->pc = 0x2b97a8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b97ac: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B97ACu;
    {
        const bool branch_taken_0x2b97ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B97B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B97ACu;
            // 0x2b97b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b97ac) {
            ctx->pc = 0x2B97CCu;
            goto label_2b97cc;
        }
    }
    ctx->pc = 0x2B97B4u;
    // 0x2b97b4: 0xc0bf0fc  jal         func_2FC3F0
    ctx->pc = 0x2B97B4u;
    SET_GPR_U32(ctx, 31, 0x2B97BCu);
    ctx->pc = 0x2FC3F0u;
    if (runtime->hasFunction(0x2FC3F0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B97BCu; }
        if (ctx->pc != 0x2B97BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC3F0_0x2fc3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B97BCu; }
        if (ctx->pc != 0x2B97BCu) { return; }
    }
    ctx->pc = 0x2B97BCu;
label_2b97bc:
    // 0x2b97bc: 0xc0ae5f8  jal         func_2B97E0
    ctx->pc = 0x2B97BCu;
    SET_GPR_U32(ctx, 31, 0x2B97C4u);
    ctx->pc = 0x2B97C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B97BCu;
            // 0x2b97c0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B97E0u;
    if (runtime->hasFunction(0x2B97E0u)) {
        auto targetFn = runtime->lookupFunction(0x2B97E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B97C4u; }
        if (ctx->pc != 0x2B97C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B97E0_0x2b97e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B97C4u; }
        if (ctx->pc != 0x2B97C4u) { return; }
    }
    ctx->pc = 0x2B97C4u;
label_2b97c4:
    // 0x2b97c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B97C4u;
    {
        const bool branch_taken_0x2b97c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B97C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B97C4u;
            // 0x2b97c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b97c4) {
            ctx->pc = 0x2B97D4u;
            goto label_2b97d4;
        }
    }
    ctx->pc = 0x2B97CCu;
label_2b97cc:
    // 0x2b97cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b97ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b97d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b97d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b97d4:
    // 0x2b97d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B97D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B97D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B97D4u;
            // 0x2b97d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B97DCu;
    // 0x2b97dc: 0x0  nop
    ctx->pc = 0x2b97dcu;
    // NOP
    ctx->pc = 0x2b97e0u;
}
