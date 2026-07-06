#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025FAF8
// Address: 0x25faf8 - 0x25fb88
void sub_0025FAF8_0x25faf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FAF8_0x25faf8");
#endif

    switch (ctx->pc) {
        case 0x25fb0cu: goto label_25fb0c;
        case 0x25fb20u: goto label_25fb20;
        case 0x25fb34u: goto label_25fb34;
        case 0x25fb3cu: goto label_25fb3c;
        case 0x25fb44u: goto label_25fb44;
        case 0x25fb4cu: goto label_25fb4c;
        case 0x25fb54u: goto label_25fb54;
        case 0x25fb5cu: goto label_25fb5c;
        case 0x25fb64u: goto label_25fb64;
        case 0x25fb6cu: goto label_25fb6c;
        case 0x25fb74u: goto label_25fb74;
        default: break;
    }

    ctx->pc = 0x25faf8u;

    // 0x25faf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25faf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25fafc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25fafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25fb00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25fb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25fb04: 0xc097334  jal         func_25CCD0
    ctx->pc = 0x25FB04u;
    SET_GPR_U32(ctx, 31, 0x25FB0Cu);
    ctx->pc = 0x25CCD0u;
    if (runtime->hasFunction(0x25CCD0u)) {
        auto targetFn = runtime->lookupFunction(0x25CCD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB0Cu; }
        if (ctx->pc != 0x25FB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CCD0_0x25ccd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB0Cu; }
        if (ctx->pc != 0x25FB0Cu) { return; }
    }
    ctx->pc = 0x25FB0Cu;
label_25fb0c:
    // 0x25fb0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25fb0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb10: 0x6000019  bltz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x25FB10u;
    {
        const bool branch_taken_0x25fb10 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x25FB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FB10u;
            // 0x25fb14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb10) {
            ctx->pc = 0x25FB78u;
            goto label_25fb78;
        }
    }
    ctx->pc = 0x25FB18u;
    // 0x25fb18: 0xc09898c  jal         func_262630
    ctx->pc = 0x25FB18u;
    SET_GPR_U32(ctx, 31, 0x25FB20u);
    ctx->pc = 0x262630u;
    if (runtime->hasFunction(0x262630u)) {
        auto targetFn = runtime->lookupFunction(0x262630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB20u; }
        if (ctx->pc != 0x25FB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262630_0x262630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB20u; }
        if (ctx->pc != 0x25FB20u) { return; }
    }
    ctx->pc = 0x25FB20u;
label_25fb20:
    // 0x25fb20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25fb20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fb24: 0x6000014  bltz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x25FB24u;
    {
        const bool branch_taken_0x25fb24 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x25FB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FB24u;
            // 0x25fb28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fb24) {
            ctx->pc = 0x25FB78u;
            goto label_25fb78;
        }
    }
    ctx->pc = 0x25FB2Cu;
    // 0x25fb2c: 0xc097f5a  jal         func_25FD68
    ctx->pc = 0x25FB2Cu;
    SET_GPR_U32(ctx, 31, 0x25FB34u);
    ctx->pc = 0x25FD68u;
    if (runtime->hasFunction(0x25FD68u)) {
        auto targetFn = runtime->lookupFunction(0x25FD68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB34u; }
        if (ctx->pc != 0x25FB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025FD68_0x25fd68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB34u; }
        if (ctx->pc != 0x25FB34u) { return; }
    }
    ctx->pc = 0x25FB34u;
label_25fb34:
    // 0x25fb34: 0xc097dea  jal         func_25F7A8
    ctx->pc = 0x25FB34u;
    SET_GPR_U32(ctx, 31, 0x25FB3Cu);
    ctx->pc = 0x25F7A8u;
    if (runtime->hasFunction(0x25F7A8u)) {
        auto targetFn = runtime->lookupFunction(0x25F7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB3Cu; }
        if (ctx->pc != 0x25FB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F7A8_0x25f7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB3Cu; }
        if (ctx->pc != 0x25FB3Cu) { return; }
    }
    ctx->pc = 0x25FB3Cu;
label_25fb3c:
    // 0x25fb3c: 0xc098006  jal         func_260018
    ctx->pc = 0x25FB3Cu;
    SET_GPR_U32(ctx, 31, 0x25FB44u);
    ctx->pc = 0x260018u;
    if (runtime->hasFunction(0x260018u)) {
        auto targetFn = runtime->lookupFunction(0x260018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB44u; }
        if (ctx->pc != 0x25FB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260018_0x260018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB44u; }
        if (ctx->pc != 0x25FB44u) { return; }
    }
    ctx->pc = 0x25FB44u;
label_25fb44:
    // 0x25fb44: 0xc097350  jal         func_25CD40
    ctx->pc = 0x25FB44u;
    SET_GPR_U32(ctx, 31, 0x25FB4Cu);
    ctx->pc = 0x25CD40u;
    if (runtime->hasFunction(0x25CD40u)) {
        auto targetFn = runtime->lookupFunction(0x25CD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB4Cu; }
        if (ctx->pc != 0x25FB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CD40_0x25cd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB4Cu; }
        if (ctx->pc != 0x25FB4Cu) { return; }
    }
    ctx->pc = 0x25FB4Cu;
label_25fb4c:
    // 0x25fb4c: 0xc08c672  jal         func_2319C8
    ctx->pc = 0x25FB4Cu;
    SET_GPR_U32(ctx, 31, 0x25FB54u);
    ctx->pc = 0x2319C8u;
    if (runtime->hasFunction(0x2319C8u)) {
        auto targetFn = runtime->lookupFunction(0x2319C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB54u; }
        if (ctx->pc != 0x25FB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002319C8_0x2319c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB54u; }
        if (ctx->pc != 0x25FB54u) { return; }
    }
    ctx->pc = 0x25FB54u;
label_25fb54:
    // 0x25fb54: 0xc08b64c  jal         func_22D930
    ctx->pc = 0x25FB54u;
    SET_GPR_U32(ctx, 31, 0x25FB5Cu);
    ctx->pc = 0x22D930u;
    if (runtime->hasFunction(0x22D930u)) {
        auto targetFn = runtime->lookupFunction(0x22D930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB5Cu; }
        if (ctx->pc != 0x25FB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D930_0x22d930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB5Cu; }
        if (ctx->pc != 0x25FB5Cu) { return; }
    }
    ctx->pc = 0x25FB5Cu;
label_25fb5c:
    // 0x25fb5c: 0xc08a044  jal         func_228110
    ctx->pc = 0x25FB5Cu;
    SET_GPR_U32(ctx, 31, 0x25FB64u);
    ctx->pc = 0x228110u;
    if (runtime->hasFunction(0x228110u)) {
        auto targetFn = runtime->lookupFunction(0x228110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB64u; }
        if (ctx->pc != 0x25FB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228110_0x228110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB64u; }
        if (ctx->pc != 0x25FB64u) { return; }
    }
    ctx->pc = 0x25FB64u;
label_25fb64:
    // 0x25fb64: 0xc097f70  jal         func_25FDC0
    ctx->pc = 0x25FB64u;
    SET_GPR_U32(ctx, 31, 0x25FB6Cu);
    ctx->pc = 0x25FDC0u;
    if (runtime->hasFunction(0x25FDC0u)) {
        auto targetFn = runtime->lookupFunction(0x25FDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB6Cu; }
        if (ctx->pc != 0x25FB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025FDC0_0x25fdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB6Cu; }
        if (ctx->pc != 0x25FB6Cu) { return; }
    }
    ctx->pc = 0x25FB6Cu;
label_25fb6c:
    // 0x25fb6c: 0xc08a5fc  jal         func_2297F0
    ctx->pc = 0x25FB6Cu;
    SET_GPR_U32(ctx, 31, 0x25FB74u);
    ctx->pc = 0x2297F0u;
    if (runtime->hasFunction(0x2297F0u)) {
        auto targetFn = runtime->lookupFunction(0x2297F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB74u; }
        if (ctx->pc != 0x25FB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002297F0_0x2297f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FB74u; }
        if (ctx->pc != 0x25FB74u) { return; }
    }
    ctx->pc = 0x25FB74u;
label_25fb74:
    // 0x25fb74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25fb74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25fb78:
    // 0x25fb78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25fb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25fb7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25fb7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25fb80: 0x3e00008  jr          $ra
    ctx->pc = 0x25FB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FB80u;
            // 0x25fb84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FB88u;
    ctx->pc = 0x25fb88u;
}
