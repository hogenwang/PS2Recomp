#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00186E10
// Address: 0x186e10 - 0x186e70
void sub_00186E10_0x186e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186E10_0x186e10");
#endif

    switch (ctx->pc) {
        case 0x186e34u: goto label_186e34;
        case 0x186e3cu: goto label_186e3c;
        case 0x186e44u: goto label_186e44;
        case 0x186e4cu: goto label_186e4c;
        case 0x186e54u: goto label_186e54;
        case 0x186e5cu: goto label_186e5c;
        default: break;
    }

    ctx->pc = 0x186e10u;

    // 0x186e10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x186e14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x186e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x186e1c: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x186e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x186e20: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x186e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
    // 0x186e24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186E24u;
    {
        const bool branch_taken_0x186e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186E24u;
            // 0x186e28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e24) {
            ctx->pc = 0x186E34u;
            goto label_186e34;
        }
    }
    ctx->pc = 0x186E2Cu;
    // 0x186e2c: 0xc0633a0  jal         func_18CE80
    ctx->pc = 0x186E2Cu;
    SET_GPR_U32(ctx, 31, 0x186E34u);
    ctx->pc = 0x18CE80u;
    if (runtime->hasFunction(0x18CE80u)) {
        auto targetFn = runtime->lookupFunction(0x18CE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E34u; }
        if (ctx->pc != 0x186E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018CE80_0x18ce80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E34u; }
        if (ctx->pc != 0x186E34u) { return; }
    }
    ctx->pc = 0x186E34u;
label_186e34:
    // 0x186e34: 0xc054d48  jal         func_153520
    ctx->pc = 0x186E34u;
    SET_GPR_U32(ctx, 31, 0x186E3Cu);
    ctx->pc = 0x186E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186E34u;
            // 0x186e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153520u;
    if (runtime->hasFunction(0x153520u)) {
        auto targetFn = runtime->lookupFunction(0x153520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E3Cu; }
        if (ctx->pc != 0x186E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153520_0x153520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E3Cu; }
        if (ctx->pc != 0x186E3Cu) { return; }
    }
    ctx->pc = 0x186E3Cu;
label_186e3c:
    // 0x186e3c: 0xc064fcc  jal         func_193F30
    ctx->pc = 0x186E3Cu;
    SET_GPR_U32(ctx, 31, 0x186E44u);
    ctx->pc = 0x186E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186E3Cu;
            // 0x186e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193F30u;
    if (runtime->hasFunction(0x193F30u)) {
        auto targetFn = runtime->lookupFunction(0x193F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E44u; }
        if (ctx->pc != 0x186E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193F30_0x193f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E44u; }
        if (ctx->pc != 0x186E44u) { return; }
    }
    ctx->pc = 0x186E44u;
label_186e44:
    // 0x186e44: 0xc064fdc  jal         func_193F70
    ctx->pc = 0x186E44u;
    SET_GPR_U32(ctx, 31, 0x186E4Cu);
    ctx->pc = 0x186E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186E44u;
            // 0x186e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193F70u;
    if (runtime->hasFunction(0x193F70u)) {
        auto targetFn = runtime->lookupFunction(0x193F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E4Cu; }
        if (ctx->pc != 0x186E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193F70_0x193f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E4Cu; }
        if (ctx->pc != 0x186E4Cu) { return; }
    }
    ctx->pc = 0x186E4Cu;
label_186e4c:
    // 0x186e4c: 0xc064fec  jal         func_193FB0
    ctx->pc = 0x186E4Cu;
    SET_GPR_U32(ctx, 31, 0x186E54u);
    ctx->pc = 0x186E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186E4Cu;
            // 0x186e50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193FB0u;
    if (runtime->hasFunction(0x193FB0u)) {
        auto targetFn = runtime->lookupFunction(0x193FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E54u; }
        if (ctx->pc != 0x186E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193FB0_0x193fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E54u; }
        if (ctx->pc != 0x186E54u) { return; }
    }
    ctx->pc = 0x186E54u;
label_186e54:
    // 0x186e54: 0xc065014  jal         func_194050
    ctx->pc = 0x186E54u;
    SET_GPR_U32(ctx, 31, 0x186E5Cu);
    ctx->pc = 0x186E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186E54u;
            // 0x186e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x194050u;
    if (runtime->hasFunction(0x194050u)) {
        auto targetFn = runtime->lookupFunction(0x194050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E5Cu; }
        if (ctx->pc != 0x186E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00194050_0x194050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E5Cu; }
        if (ctx->pc != 0x186E5Cu) { return; }
    }
    ctx->pc = 0x186E5Cu;
label_186e5c:
    // 0x186e5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186e60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x186e60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186e64: 0x3e00008  jr          $ra
    ctx->pc = 0x186E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186E64u;
            // 0x186e68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186E6Cu;
    // 0x186e6c: 0x0  nop
    ctx->pc = 0x186e6cu;
    // NOP
    ctx->pc = 0x186e70u;
}
