#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B50B8
// Address: 0x1b50b8 - 0x1b5118
void sub_001B50B8_0x1b50b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B50B8_0x1b50b8");
#endif

    switch (ctx->pc) {
        case 0x1b50e0u: goto label_1b50e0;
        case 0x1b50e8u: goto label_1b50e8;
        case 0x1b50f8u: goto label_1b50f8;
        case 0x1b5108u: goto label_1b5108;
        default: break;
    }

    ctx->pc = 0x1b50b8u;

    // 0x1b50b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b50b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b50bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b50bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b50c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b50c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50c4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B50C4u;
    {
        const bool branch_taken_0x1b50c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50C4u;
            // 0x1b50c8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50c4) {
            ctx->pc = 0x1B5108u;
            goto label_1b5108;
        }
    }
    ctx->pc = 0x1B50CCu;
    // 0x1b50cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b50ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b50d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B50D0u;
    {
        const bool branch_taken_0x1b50d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50D0u;
            // 0x1b50d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50d0) {
            ctx->pc = 0x1B50E0u;
            goto label_1b50e0;
        }
    }
    ctx->pc = 0x1B50D8u;
    // 0x1b50d8: 0xc06acec  jal         func_1AB3B0
    ctx->pc = 0x1B50D8u;
    SET_GPR_U32(ctx, 31, 0x1B50E0u);
    ctx->pc = 0x1B50DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50D8u;
            // 0x1b50dc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB3B0u;
    if (runtime->hasFunction(0x1AB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x1AB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B50E0u; }
        if (ctx->pc != 0x1B50E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AB3B0_0x1ab3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B50E0u; }
        if (ctx->pc != 0x1B50E0u) { return; }
    }
    ctx->pc = 0x1B50E0u;
label_1b50e0:
    // 0x1b50e0: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1B50E0u;
    SET_GPR_U32(ctx, 31, 0x1B50E8u);
    ctx->pc = 0x1AD238u;
    if (runtime->hasFunction(0x1AD238u)) {
        auto targetFn = runtime->lookupFunction(0x1AD238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B50E8u; }
        if (ctx->pc != 0x1B50E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD238_0x1ad238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B50E8u; }
        if (ctx->pc != 0x1B50E8u) { return; }
    }
    ctx->pc = 0x1B50E8u;
label_1b50e8:
    // 0x1b50e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b50e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b50ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50f0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1B50F0u;
    SET_GPR_U32(ctx, 31, 0x1B50F8u);
    ctx->pc = 0x1B50F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B50F0u;
            // 0x1b50f4: 0x240600ac  addiu       $a2, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B50F8u; }
        if (ctx->pc != 0x1B50F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B50F8u; }
        if (ctx->pc != 0x1B50F8u) { return; }
    }
    ctx->pc = 0x1B50F8u;
label_1b50f8:
    // 0x1b50f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b50f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b50fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b50fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5100: 0x806b494  j           func_1AD250
    ctx->pc = 0x1B5100u;
    ctx->pc = 0x1B5104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5100u;
            // 0x1b5104: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD250_0x1ad250(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B5108u;
label_1b5108:
    // 0x1b5108: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b510c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b510cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5110: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5110u;
            // 0x1b5114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5118u;
    ctx->pc = 0x1b5118u;
}
