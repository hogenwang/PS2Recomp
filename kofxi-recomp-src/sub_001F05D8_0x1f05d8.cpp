#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F05D8
// Address: 0x1f05d8 - 0x1f0638
void sub_001F05D8_0x1f05d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F05D8_0x1f05d8");
#endif

    switch (ctx->pc) {
        case 0x1f05ecu: goto label_1f05ec;
        case 0x1f05fcu: goto label_1f05fc;
        case 0x1f060cu: goto label_1f060c;
        default: break;
    }

    ctx->pc = 0x1f05d8u;

    // 0x1f05d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f05d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f05dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f05dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f05e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f05e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f05e4: 0xc07d4a0  jal         func_1F5280
    ctx->pc = 0x1F05E4u;
    SET_GPR_U32(ctx, 31, 0x1F05ECu);
    ctx->pc = 0x1F05E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F05E4u;
            // 0x1f05e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5280u;
    if (runtime->hasFunction(0x1F5280u)) {
        auto targetFn = runtime->lookupFunction(0x1F5280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F05ECu; }
        if (ctx->pc != 0x1F05ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5280_0x1f5280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F05ECu; }
        if (ctx->pc != 0x1F05ECu) { return; }
    }
    ctx->pc = 0x1F05ECu;
label_1f05ec:
    // 0x1f05ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F05ECu;
    {
        const bool branch_taken_0x1f05ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F05F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F05ECu;
            // 0x1f05f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f05ec) {
            ctx->pc = 0x1F0614u;
            goto label_1f0614;
        }
    }
    ctx->pc = 0x1F05F4u;
    // 0x1f05f4: 0xc07c18e  jal         func_1F0638
    ctx->pc = 0x1F05F4u;
    SET_GPR_U32(ctx, 31, 0x1F05FCu);
    ctx->pc = 0x1F0638u;
    if (runtime->hasFunction(0x1F0638u)) {
        auto targetFn = runtime->lookupFunction(0x1F0638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F05FCu; }
        if (ctx->pc != 0x1F05FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0638_0x1f0638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F05FCu; }
        if (ctx->pc != 0x1F05FCu) { return; }
    }
    ctx->pc = 0x1F05FCu;
label_1f05fc:
    // 0x1f05fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F05FCu;
    {
        const bool branch_taken_0x1f05fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F05FCu;
            // 0x1f0600: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f05fc) {
            ctx->pc = 0x1F0620u;
            goto label_1f0620;
        }
    }
    ctx->pc = 0x1F0604u;
    // 0x1f0604: 0xc07c1a8  jal         func_1F06A0
    ctx->pc = 0x1F0604u;
    SET_GPR_U32(ctx, 31, 0x1F060Cu);
    ctx->pc = 0x1F06A0u;
    if (runtime->hasFunction(0x1F06A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F06A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F060Cu; }
        if (ctx->pc != 0x1F060Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F06A0_0x1f06a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F060Cu; }
        if (ctx->pc != 0x1F060Cu) { return; }
    }
    ctx->pc = 0x1F060Cu;
label_1f060c:
    // 0x1f060c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F060Cu;
    {
        const bool branch_taken_0x1f060c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f060c) {
            ctx->pc = 0x1F0610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F060Cu;
            // 0x1f0610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F0624u;
            goto label_1f0624;
        }
    }
    ctx->pc = 0x1F0614u;
label_1f0614:
    // 0x1f0614: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0614u;
    {
        const bool branch_taken_0x1f0614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0614u;
            // 0x1f0618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0614) {
            ctx->pc = 0x1F0624u;
            goto label_1f0624;
        }
    }
    ctx->pc = 0x1F061Cu;
    // 0x1f061c: 0x0  nop
    ctx->pc = 0x1f061cu;
    // NOP
label_1f0620:
    // 0x1f0620: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f0620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0624:
    // 0x1f0624: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0624u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0628: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f0628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f062c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F062Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F062Cu;
            // 0x1f0630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0634u;
    // 0x1f0634: 0x0  nop
    ctx->pc = 0x1f0634u;
    // NOP
    ctx->pc = 0x1f0638u;
}
