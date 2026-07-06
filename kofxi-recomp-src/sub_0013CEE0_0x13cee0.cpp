#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013CEE0
// Address: 0x13cee0 - 0x13cf30
void sub_0013CEE0_0x13cee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CEE0_0x13cee0");
#endif

    switch (ctx->pc) {
        case 0x13cf0cu: goto label_13cf0c;
        case 0x13cf20u: goto label_13cf20;
        default: break;
    }

    ctx->pc = 0x13cee0u;

    // 0x13cee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13cee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13cee4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13cee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13cee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ceec: 0x94830248  lhu         $v1, 0x248($a0)
    ctx->pc = 0x13ceecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 584)));
    // 0x13cef0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13CEF0u;
    {
        const bool branch_taken_0x13cef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CEF0u;
            // 0x13cef4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13cef0) {
            ctx->pc = 0x13CF04u;
            goto label_13cf04;
        }
    }
    ctx->pc = 0x13CEF8u;
    // 0x13cef8: 0x9603024a  lhu         $v1, 0x24A($s0)
    ctx->pc = 0x13cef8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 586)));
    // 0x13cefc: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13CEFCu;
    {
        const bool branch_taken_0x13cefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cefc) {
            ctx->pc = 0x13CF00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13CEFCu;
            // 0x13cf00: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13CF24u;
            goto label_13cf24;
        }
    }
    ctx->pc = 0x13CF04u;
label_13cf04:
    // 0x13cf04: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x13CF04u;
    SET_GPR_U32(ctx, 31, 0x13CF0Cu);
    ctx->pc = 0x13CF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CF04u;
            // 0x13cf08: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CF0Cu; }
        if (ctx->pc != 0x13CF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CF0Cu; }
        if (ctx->pc != 0x13CF0Cu) { return; }
    }
    ctx->pc = 0x13CF0Cu;
label_13cf0c:
    // 0x13cf0c: 0x9605024a  lhu         $a1, 0x24A($s0)
    ctx->pc = 0x13cf0cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 586)));
    // 0x13cf10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13cf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf14: 0x96060248  lhu         $a2, 0x248($s0)
    ctx->pc = 0x13cf14u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x13cf18: 0xc05a888  jal         func_16A220
    ctx->pc = 0x13CF18u;
    SET_GPR_U32(ctx, 31, 0x13CF20u);
    ctx->pc = 0x13CF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CF18u;
            // 0x13cf1c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CF20u; }
        if (ctx->pc != 0x13CF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CF20u; }
        if (ctx->pc != 0x13CF20u) { return; }
    }
    ctx->pc = 0x13CF20u;
label_13cf20:
    // 0x13cf20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13cf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13cf24:
    // 0x13cf24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13cf24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cf28: 0x3e00008  jr          $ra
    ctx->pc = 0x13CF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CF28u;
            // 0x13cf2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13CF30u;
    ctx->pc = 0x13cf30u;
}
