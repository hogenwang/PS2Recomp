#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013CD10
// Address: 0x13cd10 - 0x13cd80
void sub_0013CD10_0x13cd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CD10_0x13cd10");
#endif

    switch (ctx->pc) {
        case 0x13cd10u: goto label_13cd10;
        case 0x13cd14u: goto label_13cd14;
        case 0x13cd18u: goto label_13cd18;
        case 0x13cd1cu: goto label_13cd1c;
        case 0x13cd20u: goto label_13cd20;
        case 0x13cd24u: goto label_13cd24;
        case 0x13cd28u: goto label_13cd28;
        case 0x13cd2cu: goto label_13cd2c;
        case 0x13cd30u: goto label_13cd30;
        case 0x13cd34u: goto label_13cd34;
        case 0x13cd38u: goto label_13cd38;
        case 0x13cd3cu: goto label_13cd3c;
        case 0x13cd40u: goto label_13cd40;
        case 0x13cd44u: goto label_13cd44;
        case 0x13cd48u: goto label_13cd48;
        case 0x13cd4cu: goto label_13cd4c;
        case 0x13cd50u: goto label_13cd50;
        case 0x13cd54u: goto label_13cd54;
        case 0x13cd58u: goto label_13cd58;
        case 0x13cd5cu: goto label_13cd5c;
        case 0x13cd60u: goto label_13cd60;
        case 0x13cd64u: goto label_13cd64;
        case 0x13cd68u: goto label_13cd68;
        case 0x13cd6cu: goto label_13cd6c;
        case 0x13cd70u: goto label_13cd70;
        case 0x13cd74u: goto label_13cd74;
        case 0x13cd78u: goto label_13cd78;
        case 0x13cd7cu: goto label_13cd7c;
        default: break;
    }

    ctx->pc = 0x13cd10u;

label_13cd10:
    // 0x13cd10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13cd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13cd14:
    // 0x13cd14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13cd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13cd18:
    // 0x13cd18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13cd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13cd1c:
    // 0x13cd1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13cd20:
    // 0x13cd20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13cd20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_13cd24:
    // 0x13cd24: 0xc04f530  jal         func_13D4C0
label_13cd28:
    if (ctx->pc == 0x13CD28u) {
        ctx->pc = 0x13CD28u;
            // 0x13cd28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13CD2Cu;
        goto label_13cd2c;
    }
    ctx->pc = 0x13CD24u;
    SET_GPR_U32(ctx, 31, 0x13CD2Cu);
    ctx->pc = 0x13CD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CD24u;
            // 0x13cd28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D4C0u;
    if (runtime->hasFunction(0x13D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD2Cu; }
        if (ctx->pc != 0x13CD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D4C0_0x13d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD2Cu; }
        if (ctx->pc != 0x13CD2Cu) { return; }
    }
    ctx->pc = 0x13CD2Cu;
label_13cd2c:
    // 0x13cd2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13cd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13cd30:
    // 0x13cd30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13cd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13cd34:
    // 0x13cd34: 0xc04f544  jal         func_13D510
label_13cd38:
    if (ctx->pc == 0x13CD38u) {
        ctx->pc = 0x13CD38u;
            // 0x13cd38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13CD3Cu;
        goto label_13cd3c;
    }
    ctx->pc = 0x13CD34u;
    SET_GPR_U32(ctx, 31, 0x13CD3Cu);
    ctx->pc = 0x13CD38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CD34u;
            // 0x13cd38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D510u;
    if (runtime->hasFunction(0x13D510u)) {
        auto targetFn = runtime->lookupFunction(0x13D510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD3Cu; }
        if (ctx->pc != 0x13CD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D510_0x13d510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CD3Cu; }
        if (ctx->pc != 0x13CD3Cu) { return; }
    }
    ctx->pc = 0x13CD3Cu;
label_13cd3c:
    // 0x13cd3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13cd3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13cd40:
    // 0x13cd40: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x13cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_13cd44:
    // 0x13cd44: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x13cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_13cd48:
    // 0x13cd48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13cd48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13cd4c:
    // 0x13cd4c: 0x2442dd10  addiu       $v0, $v0, -0x22F0
    ctx->pc = 0x13cd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958352));
label_13cd50:
    // 0x13cd50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13cd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13cd54:
    // 0x13cd54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13cd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13cd58:
    // 0x13cd58: 0x40f809  jalr        $v0
label_13cd5c:
    if (ctx->pc == 0x13CD5Cu) {
        ctx->pc = 0x13CD5Cu;
            // 0x13cd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x13CD60u;
        goto label_13cd60;
    }
    ctx->pc = 0x13CD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13CD60u);
        ctx->pc = 0x13CD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CD58u;
            // 0x13cd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13CD60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13CD60u; }
            if (ctx->pc != 0x13CD60u) { return; }
        }
        }
    }
    ctx->pc = 0x13CD60u;
label_13cd60:
    // 0x13cd60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13cd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13cd64:
    // 0x13cd64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13cd64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13cd68:
    // 0x13cd68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13cd68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13cd6c:
    // 0x13cd6c: 0x3e00008  jr          $ra
label_13cd70:
    if (ctx->pc == 0x13CD70u) {
        ctx->pc = 0x13CD70u;
            // 0x13cd70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x13CD74u;
        goto label_13cd74;
    }
    ctx->pc = 0x13CD6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CD6Cu;
            // 0x13cd70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13CD74u;
label_13cd74:
    // 0x13cd74: 0x0  nop
    ctx->pc = 0x13cd74u;
    // NOP
label_13cd78:
    // 0x13cd78: 0x0  nop
    ctx->pc = 0x13cd78u;
    // NOP
label_13cd7c:
    // 0x13cd7c: 0x0  nop
    ctx->pc = 0x13cd7cu;
    // NOP
    ctx->pc = 0x13cd80u;
}
