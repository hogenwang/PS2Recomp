#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D0F0
// Address: 0x10d0f0 - 0x10d180
void sub_0010D0F0_0x10d0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D0F0_0x10d0f0");
#endif

    switch (ctx->pc) {
        case 0x10d100u: goto label_10d100;
        case 0x10d124u: goto label_10d124;
        case 0x10d130u: goto label_10d130;
        case 0x10d154u: goto label_10d154;
        case 0x10d178u: goto label_10d178;
        default: break;
    }

    ctx->pc = 0x10d0f0u;

    // 0x10d0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d0f8: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10D0F8u;
    SET_GPR_U32(ctx, 31, 0x10D100u);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D100u; }
        if (ctx->pc != 0x10D100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D100u; }
        if (ctx->pc != 0x10D100u) { return; }
    }
    ctx->pc = 0x10D100u;
label_10d100:
    // 0x10d100: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10d100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10d104: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10d104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10d108: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10d108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10d10c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10d10cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x10d110: 0xf  sync
    ctx->pc = 0x10d110u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d114: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D114u;
    {
        const bool branch_taken_0x10d114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D114u;
            // 0x10d118: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d114) {
            ctx->pc = 0x10D128u;
            goto label_10d128;
        }
    }
    ctx->pc = 0x10D11Cu;
    // 0x10d11c: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x10D11Cu;
    SET_GPR_U32(ctx, 31, 0x10D124u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D124u; }
        if (ctx->pc != 0x10D124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D124u; }
        if (ctx->pc != 0x10D124u) { return; }
    }
    ctx->pc = 0x10D124u;
label_10d124:
    // 0x10d124: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10d124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_10d128:
    // 0x10d128: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10d128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10d12c: 0x0  nop
    ctx->pc = 0x10d12cu;
    // NOP
label_10d130:
    // 0x10d130: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10d130u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x10d134: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x10d134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x10d138: 0x0  nop
    ctx->pc = 0x10d138u;
    // NOP
    // 0x10d13c: 0x0  nop
    ctx->pc = 0x10d13cu;
    // NOP
    // 0x10d140: 0x0  nop
    ctx->pc = 0x10d140u;
    // NOP
    // 0x10d144: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10D144u;
    {
        const bool branch_taken_0x10d144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d144) {
            ctx->pc = 0x10D130u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10d130;
        }
    }
    ctx->pc = 0x10D14Cu;
    // 0x10d14c: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10D14Cu;
    SET_GPR_U32(ctx, 31, 0x10D154u);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D154u; }
        if (ctx->pc != 0x10D154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D154u; }
        if (ctx->pc != 0x10D154u) { return; }
    }
    ctx->pc = 0x10D154u;
label_10d154:
    // 0x10d154: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10d154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10d158: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10d158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10d15c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x10d15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x10d160: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10d160u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x10d164: 0xf  sync
    ctx->pc = 0x10d164u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d168: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D168u;
    {
        const bool branch_taken_0x10d168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D168u;
            // 0x10d16c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d168) {
            ctx->pc = 0x10D178u;
            goto label_10d178;
        }
    }
    ctx->pc = 0x10D170u;
    // 0x10d170: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x10D170u;
    ctx->pc = 0x10D174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D170u;
            // 0x10d174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10D178u;
label_10d178:
    // 0x10d178: 0x3e00008  jr          $ra
    ctx->pc = 0x10D178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D178u;
            // 0x10d17c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D180u;
    ctx->pc = 0x10d180u;
}
