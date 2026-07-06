#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5D20
// Address: 0x1b5d20 - 0x1b5dc8
void sub_001B5D20_0x1b5d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5D20_0x1b5d20");
#endif

    switch (ctx->pc) {
        case 0x1b5d44u: goto label_1b5d44;
        case 0x1b5d4cu: goto label_1b5d4c;
        case 0x1b5d54u: goto label_1b5d54;
        case 0x1b5d6cu: goto label_1b5d6c;
        case 0x1b5d88u: goto label_1b5d88;
        case 0x1b5d9cu: goto label_1b5d9c;
        case 0x1b5da4u: goto label_1b5da4;
        case 0x1b5db8u: goto label_1b5db8;
        default: break;
    }

    ctx->pc = 0x1b5d20u;

    // 0x1b5d20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5d28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5d2c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b5d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b5d30: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x1b5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1b5d34: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5D34u;
    {
        const bool branch_taken_0x1b5d34 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b5d34) {
            ctx->pc = 0x1B5D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D34u;
            // 0x1b5d38: 0x82030001  lb          $v1, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5D58u;
            goto label_1b5d58;
        }
    }
    ctx->pc = 0x1B5D3Cu;
    // 0x1b5d3c: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1B5D3Cu;
    SET_GPR_U32(ctx, 31, 0x1B5D44u);
    ctx->pc = 0x1AD238u;
    if (runtime->hasFunction(0x1AD238u)) {
        auto targetFn = runtime->lookupFunction(0x1AD238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D44u; }
        if (ctx->pc != 0x1B5D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD238_0x1ad238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D44u; }
        if (ctx->pc != 0x1B5D44u) { return; }
    }
    ctx->pc = 0x1B5D44u;
label_1b5d44:
    // 0x1b5d44: 0xc06d772  jal         func_1B5DC8
    ctx->pc = 0x1B5D44u;
    SET_GPR_U32(ctx, 31, 0x1B5D4Cu);
    ctx->pc = 0x1B5D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D44u;
            // 0x1b5d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5DC8u;
    if (runtime->hasFunction(0x1B5DC8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D4Cu; }
        if (ctx->pc != 0x1B5D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5DC8_0x1b5dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D4Cu; }
        if (ctx->pc != 0x1B5D4Cu) { return; }
    }
    ctx->pc = 0x1B5D4Cu;
label_1b5d4c:
    // 0x1b5d4c: 0xc06b494  jal         func_1AD250
    ctx->pc = 0x1B5D4Cu;
    SET_GPR_U32(ctx, 31, 0x1B5D54u);
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D54u; }
        if (ctx->pc != 0x1B5D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD250_0x1ad250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D54u; }
        if (ctx->pc != 0x1B5D54u) { return; }
    }
    ctx->pc = 0x1B5D54u;
label_1b5d54:
    // 0x1b5d54: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x1b5d54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1b5d58:
    // 0x1b5d58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b5d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b5d5c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5D5Cu;
    {
        const bool branch_taken_0x1b5d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5d5c) {
            ctx->pc = 0x1B5D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D5Cu;
            // 0x1b5d60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5D78u;
            goto label_1b5d78;
        }
    }
    ctx->pc = 0x1B5D64u;
    // 0x1b5d64: 0xc06d71c  jal         func_1B5C70
    ctx->pc = 0x1B5D64u;
    SET_GPR_U32(ctx, 31, 0x1B5D6Cu);
    ctx->pc = 0x1B5D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D64u;
            // 0x1b5d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5C70u;
    if (runtime->hasFunction(0x1B5C70u)) {
        auto targetFn = runtime->lookupFunction(0x1B5C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D6Cu; }
        if (ctx->pc != 0x1B5D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5C70_0x1b5c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D6Cu; }
        if (ctx->pc != 0x1B5D6Cu) { return; }
    }
    ctx->pc = 0x1B5D6Cu;
label_1b5d6c:
    // 0x1b5d6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5D6Cu;
    {
        const bool branch_taken_0x1b5d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D6Cu;
            // 0x1b5d70: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5d6c) {
            ctx->pc = 0x1B5D8Cu;
            goto label_1b5d8c;
        }
    }
    ctx->pc = 0x1B5D74u;
    // 0x1b5d74: 0x0  nop
    ctx->pc = 0x1b5d74u;
    // NOP
label_1b5d78:
    // 0x1b5d78: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5D78u;
    {
        const bool branch_taken_0x1b5d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b5d78) {
            ctx->pc = 0x1B5D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D78u;
            // 0x1b5d7c: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5D8Cu;
            goto label_1b5d8c;
        }
    }
    ctx->pc = 0x1B5D80u;
    // 0x1b5d80: 0xc06d490  jal         func_1B5240
    ctx->pc = 0x1B5D80u;
    SET_GPR_U32(ctx, 31, 0x1B5D88u);
    ctx->pc = 0x1B5D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D80u;
            // 0x1b5d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5240u;
    if (runtime->hasFunction(0x1B5240u)) {
        auto targetFn = runtime->lookupFunction(0x1B5240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D88u; }
        if (ctx->pc != 0x1B5D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5240_0x1b5240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D88u; }
        if (ctx->pc != 0x1B5D88u) { return; }
    }
    ctx->pc = 0x1B5D88u;
label_1b5d88:
    // 0x1b5d88: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x1b5d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1b5d8c:
    // 0x1b5d8c: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B5D8Cu;
    {
        const bool branch_taken_0x1b5d8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1b5d8c) {
            ctx->pc = 0x1B5D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D8Cu;
            // 0x1b5d90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5DB8u;
            goto label_1b5db8;
        }
    }
    ctx->pc = 0x1B5D94u;
    // 0x1b5d94: 0xc06b48e  jal         func_1AD238
    ctx->pc = 0x1B5D94u;
    SET_GPR_U32(ctx, 31, 0x1B5D9Cu);
    ctx->pc = 0x1AD238u;
    if (runtime->hasFunction(0x1AD238u)) {
        auto targetFn = runtime->lookupFunction(0x1AD238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D9Cu; }
        if (ctx->pc != 0x1B5D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD238_0x1ad238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5D9Cu; }
        if (ctx->pc != 0x1B5D9Cu) { return; }
    }
    ctx->pc = 0x1B5D9Cu;
label_1b5d9c:
    // 0x1b5d9c: 0xc06d7c6  jal         func_1B5F18
    ctx->pc = 0x1B5D9Cu;
    SET_GPR_U32(ctx, 31, 0x1B5DA4u);
    ctx->pc = 0x1B5DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5D9Cu;
            // 0x1b5da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5F18u;
    if (runtime->hasFunction(0x1B5F18u)) {
        auto targetFn = runtime->lookupFunction(0x1B5F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5DA4u; }
        if (ctx->pc != 0x1B5DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5F18_0x1b5f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5DA4u; }
        if (ctx->pc != 0x1B5DA4u) { return; }
    }
    ctx->pc = 0x1B5DA4u;
label_1b5da4:
    // 0x1b5da4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5da8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b5da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5dac: 0x806b494  j           func_1AD250
    ctx->pc = 0x1B5DACu;
    ctx->pc = 0x1B5DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5DACu;
            // 0x1b5db0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD250u;
    if (runtime->hasFunction(0x1AD250u)) {
        auto targetFn = runtime->lookupFunction(0x1AD250u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001AD250_0x1ad250(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B5DB4u;
    // 0x1b5db4: 0x0  nop
    ctx->pc = 0x1b5db4u;
    // NOP
label_1b5db8:
    // 0x1b5db8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b5db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5DBCu;
            // 0x1b5dc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5DC4u;
    // 0x1b5dc4: 0x0  nop
    ctx->pc = 0x1b5dc4u;
    // NOP
    ctx->pc = 0x1b5dc8u;
}
