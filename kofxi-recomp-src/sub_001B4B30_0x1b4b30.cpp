#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4B30
// Address: 0x1b4b30 - 0x1b4b98
void sub_001B4B30_0x1b4b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4B30_0x1b4b30");
#endif

    switch (ctx->pc) {
        case 0x1b4b48u: goto label_1b4b48;
        case 0x1b4b54u: goto label_1b4b54;
        case 0x1b4b68u: goto label_1b4b68;
        case 0x1b4b80u: goto label_1b4b80;
        default: break;
    }

    ctx->pc = 0x1b4b30u;

    // 0x1b4b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4b34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4b3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b4b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b4b40: 0xc07273e  jal         func_1C9CF8
    ctx->pc = 0x1B4B40u;
    SET_GPR_U32(ctx, 31, 0x1B4B48u);
    ctx->pc = 0x1B4B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B40u;
            // 0x1b4b44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9CF8u;
    if (runtime->hasFunction(0x1C9CF8u)) {
        auto targetFn = runtime->lookupFunction(0x1C9CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B48u; }
        if (ctx->pc != 0x1B4B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9CF8_0x1c9cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B48u; }
        if (ctx->pc != 0x1B4B48u) { return; }
    }
    ctx->pc = 0x1B4B48u;
label_1b4b48:
    // 0x1b4b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b4c: 0xc072718  jal         func_1C9C60
    ctx->pc = 0x1B4B4Cu;
    SET_GPR_U32(ctx, 31, 0x1B4B54u);
    ctx->pc = 0x1B4B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B4Cu;
            // 0x1b4b50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9C60u;
    if (runtime->hasFunction(0x1C9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1C9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B54u; }
        if (ctx->pc != 0x1B4B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9C60_0x1c9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4B54u; }
        if (ctx->pc != 0x1B4B54u) { return; }
    }
    ctx->pc = 0x1B4B54u;
label_1b4b54:
    // 0x1b4b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4b58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b4b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b4b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b4b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4b60: 0x80726b4  j           func_1C9AD0
    ctx->pc = 0x1B4B60u;
    ctx->pc = 0x1B4B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B60u;
            // 0x1b4b64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9AD0u;
    {
        auto targetFn = runtime->lookupFunction(0x1C9AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B4B68u;
label_1b4b68:
    // 0x1b4b68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4b6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4b74: 0x80726ee  j           func_1C9BB8
    ctx->pc = 0x1B4B74u;
    ctx->pc = 0x1B4B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B74u;
            // 0x1b4b78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9BB8u;
    {
        auto targetFn = runtime->lookupFunction(0x1C9BB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B4B7Cu;
    // 0x1b4b7c: 0x0  nop
    ctx->pc = 0x1b4b7cu;
    // NOP
label_1b4b80:
    // 0x1b4b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b4b84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4b8c: 0x8072700  j           func_1C9C00
    ctx->pc = 0x1B4B8Cu;
    ctx->pc = 0x1B4B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4B8Cu;
            // 0x1b4b90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9C00u;
    {
        auto targetFn = runtime->lookupFunction(0x1C9C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B4B94u;
    // 0x1b4b94: 0x0  nop
    ctx->pc = 0x1b4b94u;
    // NOP
    ctx->pc = 0x1b4b98u;
}
