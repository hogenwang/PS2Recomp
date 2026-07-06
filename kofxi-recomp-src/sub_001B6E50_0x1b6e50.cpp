#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6E50
// Address: 0x1b6e50 - 0x1b6e98
void sub_001B6E50_0x1b6e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6E50_0x1b6e50");
#endif

    switch (ctx->pc) {
        case 0x1b6e6cu: goto label_1b6e6c;
        case 0x1b6e74u: goto label_1b6e74;
        case 0x1b6e7cu: goto label_1b6e7c;
        default: break;
    }

    ctx->pc = 0x1b6e50u;

    // 0x1b6e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6e54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6e58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6e5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b6e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6e60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6e64: 0xc06e042  jal         func_1B8108
    ctx->pc = 0x1B6E64u;
    SET_GPR_U32(ctx, 31, 0x1B6E6Cu);
    ctx->pc = 0x1B6E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E64u;
            // 0x1b6e68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8108u;
    if (runtime->hasFunction(0x1B8108u)) {
        auto targetFn = runtime->lookupFunction(0x1B8108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E6Cu; }
        if (ctx->pc != 0x1B6E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8108_0x1b8108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E6Cu; }
        if (ctx->pc != 0x1B6E6Cu) { return; }
    }
    ctx->pc = 0x1B6E6Cu;
label_1b6e6c:
    // 0x1b6e6c: 0xc06db56  jal         func_1B6D58
    ctx->pc = 0x1B6E6Cu;
    SET_GPR_U32(ctx, 31, 0x1B6E74u);
    ctx->pc = 0x1B6E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E6Cu;
            // 0x1b6e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D58u;
    if (runtime->hasFunction(0x1B6D58u)) {
        auto targetFn = runtime->lookupFunction(0x1B6D58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E74u; }
        if (ctx->pc != 0x1B6E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6D58_0x1b6d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E74u; }
        if (ctx->pc != 0x1B6E74u) { return; }
    }
    ctx->pc = 0x1B6E74u;
label_1b6e74:
    // 0x1b6e74: 0xc06e048  jal         func_1B8120
    ctx->pc = 0x1B6E74u;
    SET_GPR_U32(ctx, 31, 0x1B6E7Cu);
    ctx->pc = 0x1B6E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E74u;
            // 0x1b6e78: 0xae11005c  sw          $s1, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8120u;
    if (runtime->hasFunction(0x1B8120u)) {
        auto targetFn = runtime->lookupFunction(0x1B8120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E7Cu; }
        if (ctx->pc != 0x1B6E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8120_0x1b8120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B6E7Cu; }
        if (ctx->pc != 0x1B6E7Cu) { return; }
    }
    ctx->pc = 0x1B6E7Cu;
label_1b6e7c:
    // 0x1b6e7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6e80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b6e80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6e84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b6e84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b6e88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6E8Cu;
            // 0x1b6e90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6E94u;
    // 0x1b6e94: 0x0  nop
    ctx->pc = 0x1b6e94u;
    // NOP
    ctx->pc = 0x1b6e98u;
}
