#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A8B60
// Address: 0x2a8b60 - 0x2a8ba8
void sub_002A8B60_0x2a8b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8B60_0x2a8b60");
#endif

    switch (ctx->pc) {
        case 0x2a8b74u: goto label_2a8b74;
        case 0x2a8b80u: goto label_2a8b80;
        case 0x2a8b8cu: goto label_2a8b8c;
        case 0x2a8b98u: goto label_2a8b98;
        default: break;
    }

    ctx->pc = 0x2a8b60u;

    // 0x2a8b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a8b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a8b64: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x2a8b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x2a8b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a8b6c: 0xc0aa5b8  jal         func_2A96E0
    ctx->pc = 0x2A8B6Cu;
    SET_GPR_U32(ctx, 31, 0x2A8B74u);
    ctx->pc = 0x2A8B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B6Cu;
            // 0x2a8b70: 0x248493d8  addiu       $a0, $a0, -0x6C28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A96E0u;
    if (runtime->hasFunction(0x2A96E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A96E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8B74u; }
        if (ctx->pc != 0x2A8B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A96E0_0x2a96e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8B74u; }
        if (ctx->pc != 0x2A8B74u) { return; }
    }
    ctx->pc = 0x2A8B74u;
label_2a8b74:
    // 0x2a8b74: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x2a8b74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x2a8b78: 0xc0aa5c0  jal         func_2A9700
    ctx->pc = 0x2A8B78u;
    SET_GPR_U32(ctx, 31, 0x2A8B80u);
    ctx->pc = 0x2A8B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B78u;
            // 0x2a8b7c: 0x24849570  addiu       $a0, $a0, -0x6A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9700u;
    if (runtime->hasFunction(0x2A9700u)) {
        auto targetFn = runtime->lookupFunction(0x2A9700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8B80u; }
        if (ctx->pc != 0x2A8B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9700_0x2a9700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8B80u; }
        if (ctx->pc != 0x2A8B80u) { return; }
    }
    ctx->pc = 0x2A8B80u;
label_2a8b80:
    // 0x2a8b80: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2a8b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x2a8b84: 0xc0aa5bc  jal         func_2A96F0
    ctx->pc = 0x2A8B84u;
    SET_GPR_U32(ctx, 31, 0x2A8B8Cu);
    ctx->pc = 0x2A8B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B84u;
            // 0x2a8b88: 0x24847c88  addiu       $a0, $a0, 0x7C88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A96F0u;
    if (runtime->hasFunction(0x2A96F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8B8Cu; }
        if (ctx->pc != 0x2A8B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A96F0_0x2a96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8B8Cu; }
        if (ctx->pc != 0x2A8B8Cu) { return; }
    }
    ctx->pc = 0x2A8B8Cu;
label_2a8b8c:
    // 0x2a8b8c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2a8b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x2a8b90: 0xc0aa5c4  jal         func_2A9710
    ctx->pc = 0x2A8B90u;
    SET_GPR_U32(ctx, 31, 0x2A8B98u);
    ctx->pc = 0x2A8B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8B90u;
            // 0x2a8b94: 0x24847db8  addiu       $a0, $a0, 0x7DB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9710u;
    if (runtime->hasFunction(0x2A9710u)) {
        auto targetFn = runtime->lookupFunction(0x2A9710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8B98u; }
        if (ctx->pc != 0x2A8B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9710_0x2a9710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8B98u; }
        if (ctx->pc != 0x2A8B98u) { return; }
    }
    ctx->pc = 0x2A8B98u;
label_2a8b98:
    // 0x2a8b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a8b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a8ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8BA0u;
            // 0x2a8ba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8BA8u;
    ctx->pc = 0x2a8ba8u;
}
