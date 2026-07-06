#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7CB8
// Address: 0x1f7cb8 - 0x1f7d68
void sub_001F7CB8_0x1f7cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7CB8_0x1f7cb8");
#endif

    switch (ctx->pc) {
        case 0x1f7cdcu: goto label_1f7cdc;
        case 0x1f7cf4u: goto label_1f7cf4;
        case 0x1f7d18u: goto label_1f7d18;
        case 0x1f7d28u: goto label_1f7d28;
        case 0x1f7d3cu: goto label_1f7d3c;
        case 0x1f7d48u: goto label_1f7d48;
        default: break;
    }

    ctx->pc = 0x1f7cb8u;

    // 0x1f7cb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f7cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f7cbc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f7cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f7cc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f7cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7cc4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f7cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f7cc8: 0x26110950  addiu       $s1, $s0, 0x950
    ctx->pc = 0x1f7cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    // 0x1f7ccc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f7cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f7cd0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f7cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f7cd4: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1F7CD4u;
    SET_GPR_U32(ctx, 31, 0x1F7CDCu);
    ctx->pc = 0x1F7CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7CD4u;
            // 0x1f7cd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7CDCu; }
        if (ctx->pc != 0x1F7CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7CDCu; }
        if (ctx->pc != 0x1F7CDCu) { return; }
    }
    ctx->pc = 0x1F7CDCu;
label_1f7cdc:
    // 0x1f7cdc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1f7cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1f7ce0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f7ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ce4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F7CE4u;
    {
        const bool branch_taken_0x1f7ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7CE4u;
            // 0x1f7ce8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ce4) {
            ctx->pc = 0x1F7D20u;
            goto label_1f7d20;
        }
    }
    ctx->pc = 0x1F7CECu;
    // 0x1f7cec: 0xc07df5a  jal         func_1F7D68
    ctx->pc = 0x1F7CECu;
    SET_GPR_U32(ctx, 31, 0x1F7CF4u);
    ctx->pc = 0x1F7D68u;
    if (runtime->hasFunction(0x1F7D68u)) {
        auto targetFn = runtime->lookupFunction(0x1F7D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7CF4u; }
        if (ctx->pc != 0x1F7CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7D68_0x1f7d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7CF4u; }
        if (ctx->pc != 0x1F7CF4u) { return; }
    }
    ctx->pc = 0x1F7CF4u;
label_1f7cf4:
    // 0x1f7cf4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F7CF4u;
    {
        const bool branch_taken_0x1f7cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7CF4u;
            // 0x1f7cf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7cf4) {
            ctx->pc = 0x1F7D40u;
            goto label_1f7d40;
        }
    }
    ctx->pc = 0x1F7CFCu;
    // 0x1f7cfc: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1f7cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1f7d00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f7d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7d04: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1f7d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1f7d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f7d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f7d10: 0xc07dc64  jal         func_1F7190
    ctx->pc = 0x1F7D10u;
    SET_GPR_U32(ctx, 31, 0x1F7D18u);
    ctx->pc = 0x1F7D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D10u;
            // 0x1f7d14: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7190u;
    if (runtime->hasFunction(0x1F7190u)) {
        auto targetFn = runtime->lookupFunction(0x1F7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7D18u; }
        if (ctx->pc != 0x1F7D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7190_0x1f7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7D18u; }
        if (ctx->pc != 0x1F7D18u) { return; }
    }
    ctx->pc = 0x1F7D18u;
label_1f7d18:
    // 0x1f7d18: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7D18u;
    {
        const bool branch_taken_0x1f7d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D18u;
            // 0x1f7d1c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d18) {
            ctx->pc = 0x1F7D40u;
            goto label_1f7d40;
        }
    }
    ctx->pc = 0x1F7D20u;
label_1f7d20:
    // 0x1f7d20: 0xc07dfba  jal         func_1F7EE8
    ctx->pc = 0x1F7D20u;
    SET_GPR_U32(ctx, 31, 0x1F7D28u);
    ctx->pc = 0x1F7D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D20u;
            // 0x1f7d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EE8u;
    if (runtime->hasFunction(0x1F7EE8u)) {
        auto targetFn = runtime->lookupFunction(0x1F7EE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7D28u; }
        if (ctx->pc != 0x1F7D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7EE8_0x1f7ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7D28u; }
        if (ctx->pc != 0x1F7D28u) { return; }
    }
    ctx->pc = 0x1F7D28u;
label_1f7d28:
    // 0x1f7d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7D2Cu;
    {
        const bool branch_taken_0x1f7d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D2Cu;
            // 0x1f7d30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d2c) {
            ctx->pc = 0x1F7D40u;
            goto label_1f7d40;
        }
    }
    ctx->pc = 0x1F7D34u;
    // 0x1f7d34: 0xc07dc64  jal         func_1F7190
    ctx->pc = 0x1F7D34u;
    SET_GPR_U32(ctx, 31, 0x1F7D3Cu);
    ctx->pc = 0x1F7D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D34u;
            // 0x1f7d38: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7190u;
    if (runtime->hasFunction(0x1F7190u)) {
        auto targetFn = runtime->lookupFunction(0x1F7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7D3Cu; }
        if (ctx->pc != 0x1F7D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7190_0x1f7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7D3Cu; }
        if (ctx->pc != 0x1F7D3Cu) { return; }
    }
    ctx->pc = 0x1F7D3Cu;
label_1f7d3c:
    // 0x1f7d3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f7d3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f7d40:
    // 0x1f7d40: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1F7D40u;
    SET_GPR_U32(ctx, 31, 0x1F7D48u);
    ctx->pc = 0x1F7D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D40u;
            // 0x1f7d44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7D48u; }
        if (ctx->pc != 0x1F7D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7D48u; }
        if (ctx->pc != 0x1F7D48u) { return; }
    }
    ctx->pc = 0x1F7D48u;
label_1f7d48:
    // 0x1f7d48: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1f7d48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f7d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7d50: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f7d50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f7d54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f7d54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7d58: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f7d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f7d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D5Cu;
            // 0x1f7d60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F7D64u;
    // 0x1f7d64: 0x0  nop
    ctx->pc = 0x1f7d64u;
    // NOP
    ctx->pc = 0x1f7d68u;
}
