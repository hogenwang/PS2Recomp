#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8B30
// Address: 0x1a8b30 - 0x1a8b70
void sub_001A8B30_0x1a8b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8B30_0x1a8b30");
#endif

    switch (ctx->pc) {
        case 0x1a8b44u: goto label_1a8b44;
        case 0x1a8b60u: goto label_1a8b60;
        default: break;
    }

    ctx->pc = 0x1a8b30u;

    // 0x1a8b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a8b34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8b38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a8b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a8b3c: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A8B3Cu;
    SET_GPR_U32(ctx, 31, 0x1A8B44u);
    ctx->pc = 0x1A8B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B3Cu;
            // 0x1a8b40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7F60u;
    if (runtime->hasFunction(0x1A7F60u)) {
        auto targetFn = runtime->lookupFunction(0x1A7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B44u; }
        if (ctx->pc != 0x1A8B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7F60_0x1a7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B44u; }
        if (ctx->pc != 0x1A8B44u) { return; }
    }
    ctx->pc = 0x1A8B44u;
label_1a8b44:
    // 0x1a8b44: 0x3c0501bf  lui         $a1, 0x1BF
    ctx->pc = 0x1a8b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)447 << 16));
    // 0x1a8b48: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1a8b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1a8b4c: 0xacb03280  sw          $s0, 0x3280($a1)
    ctx->pc = 0x1a8b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12928), GPR_U32(ctx, 16));
    // 0x1a8b50: 0x24843240  addiu       $a0, $a0, 0x3240
    ctx->pc = 0x1a8b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12864));
    // 0x1a8b54: 0x24a53280  addiu       $a1, $a1, 0x3280
    ctx->pc = 0x1a8b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12928));
    // 0x1a8b58: 0xc06a3de  jal         func_1A8F78
    ctx->pc = 0x1A8B58u;
    SET_GPR_U32(ctx, 31, 0x1A8B60u);
    ctx->pc = 0x1A8B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B58u;
            // 0x1a8b5c: 0x24060065  addiu       $a2, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F78u;
    if (runtime->hasFunction(0x1A8F78u)) {
        auto targetFn = runtime->lookupFunction(0x1A8F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B60u; }
        if (ctx->pc != 0x1A8B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8F78_0x1a8f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8B60u; }
        if (ctx->pc != 0x1A8B60u) { return; }
    }
    ctx->pc = 0x1A8B60u;
label_1a8b60:
    // 0x1a8b60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8b68: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8B68u;
            // 0x1a8b6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8B70u;
    ctx->pc = 0x1a8b70u;
}
