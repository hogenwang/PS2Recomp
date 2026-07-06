#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EADE0
// Address: 0x1eade0 - 0x1eae80
void sub_001EADE0_0x1eade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EADE0_0x1eade0");
#endif

    switch (ctx->pc) {
        case 0x1eade0u: goto label_1eade0;
        case 0x1eade4u: goto label_1eade4;
        case 0x1eade8u: goto label_1eade8;
        case 0x1eadecu: goto label_1eadec;
        case 0x1eadf0u: goto label_1eadf0;
        case 0x1eadf4u: goto label_1eadf4;
        case 0x1eadf8u: goto label_1eadf8;
        case 0x1eadfcu: goto label_1eadfc;
        case 0x1eae00u: goto label_1eae00;
        case 0x1eae04u: goto label_1eae04;
        case 0x1eae08u: goto label_1eae08;
        case 0x1eae0cu: goto label_1eae0c;
        case 0x1eae10u: goto label_1eae10;
        case 0x1eae14u: goto label_1eae14;
        case 0x1eae18u: goto label_1eae18;
        case 0x1eae1cu: goto label_1eae1c;
        case 0x1eae20u: goto label_1eae20;
        case 0x1eae24u: goto label_1eae24;
        case 0x1eae28u: goto label_1eae28;
        case 0x1eae2cu: goto label_1eae2c;
        case 0x1eae30u: goto label_1eae30;
        case 0x1eae34u: goto label_1eae34;
        case 0x1eae38u: goto label_1eae38;
        case 0x1eae3cu: goto label_1eae3c;
        case 0x1eae40u: goto label_1eae40;
        case 0x1eae44u: goto label_1eae44;
        case 0x1eae48u: goto label_1eae48;
        case 0x1eae4cu: goto label_1eae4c;
        case 0x1eae50u: goto label_1eae50;
        case 0x1eae54u: goto label_1eae54;
        case 0x1eae58u: goto label_1eae58;
        case 0x1eae5cu: goto label_1eae5c;
        case 0x1eae60u: goto label_1eae60;
        case 0x1eae64u: goto label_1eae64;
        case 0x1eae68u: goto label_1eae68;
        case 0x1eae6cu: goto label_1eae6c;
        case 0x1eae70u: goto label_1eae70;
        case 0x1eae74u: goto label_1eae74;
        case 0x1eae78u: goto label_1eae78;
        case 0x1eae7cu: goto label_1eae7c;
        default: break;
    }

    ctx->pc = 0x1eade0u;

label_1eade0:
    // 0x1eade0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1eade0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1eade4:
    // 0x1eade4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eade4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1eade8:
    // 0x1eade8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1eade8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1eadec:
    // 0x1eadec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1eadecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1eadf0:
    // 0x1eadf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eadf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eadf4:
    // 0x1eadf4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1eadf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1eadf8:
    // 0x1eadf8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eadf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1eadfc:
    // 0x1eadfc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1eadfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1eae00:
    // 0x1eae00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eae00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1eae04:
    // 0x1eae04: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1eae04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1eae08:
    // 0x1eae08: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1eae08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1eae0c:
    // 0x1eae0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eae0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1eae10:
    // 0x1eae10: 0xc07b670  jal         func_1ED9C0
label_1eae14:
    if (ctx->pc == 0x1EAE14u) {
        ctx->pc = 0x1EAE14u;
            // 0x1eae14: 0x24701378  addiu       $s0, $v1, 0x1378 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4984));
        ctx->pc = 0x1EAE18u;
        goto label_1eae18;
    }
    ctx->pc = 0x1EAE10u;
    SET_GPR_U32(ctx, 31, 0x1EAE18u);
    ctx->pc = 0x1EAE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE10u;
            // 0x1eae14: 0x24701378  addiu       $s0, $v1, 0x1378 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE18u; }
        if (ctx->pc != 0x1EAE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE18u; }
        if (ctx->pc != 0x1EAE18u) { return; }
    }
    ctx->pc = 0x1EAE18u;
label_1eae18:
    // 0x1eae18: 0x8e110020  lw          $s1, 0x20($s0)
    ctx->pc = 0x1eae18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1eae1c:
    // 0x1eae1c: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_1eae20:
    if (ctx->pc == 0x1EAE20u) {
        ctx->pc = 0x1EAE20u;
            // 0x1eae20: 0x8e120024  lw          $s2, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1EAE24u;
        goto label_1eae24;
    }
    ctx->pc = 0x1EAE1Cu;
    {
        const bool branch_taken_0x1eae1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE1Cu;
            // 0x1eae20: 0x8e120024  lw          $s2, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eae1c) {
            ctx->pc = 0x1EAE48u;
            goto label_1eae48;
        }
    }
    ctx->pc = 0x1EAE24u;
label_1eae24:
    // 0x1eae24: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_1eae28:
    if (ctx->pc == 0x1EAE28u) {
        ctx->pc = 0x1EAE28u;
            // 0x1eae28: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->pc = 0x1EAE2Cu;
        goto label_1eae2c;
    }
    ctx->pc = 0x1EAE24u;
    {
        const bool branch_taken_0x1eae24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE24u;
            // 0x1eae28: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eae24) {
            ctx->pc = 0x1EAE4Cu;
            goto label_1eae4c;
        }
    }
    ctx->pc = 0x1EAE2Cu;
label_1eae2c:
    // 0x1eae2c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1eae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1eae30:
    // 0x1eae30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1eae30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eae34:
    // 0x1eae34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1eae34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eae38:
    // 0x1eae38: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1eae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1eae3c:
    // 0x1eae3c: 0x40f809  jalr        $v0
label_1eae40:
    if (ctx->pc == 0x1EAE40u) {
        ctx->pc = 0x1EAE40u;
            // 0x1eae40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1EAE44u;
        goto label_1eae44;
    }
    ctx->pc = 0x1EAE3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EAE44u);
        ctx->pc = 0x1EAE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE3Cu;
            // 0x1eae40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EAE44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE44u; }
            if (ctx->pc != 0x1EAE44u) { return; }
        }
        }
    }
    ctx->pc = 0x1EAE44u;
label_1eae44:
    // 0x1eae44: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x1eae44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1eae48:
    // 0x1eae48: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1eae48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1eae4c:
    // 0x1eae4c: 0x2a230000  slti        $v1, $s1, 0x0
    ctx->pc = 0x1eae4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
label_1eae50:
    // 0x1eae50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1eae50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1eae54:
    // 0x1eae54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1eae54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1eae58:
    // 0x1eae58: 0xc07b676  jal         func_1ED9D8
label_1eae5c:
    if (ctx->pc == 0x1EAE5Cu) {
        ctx->pc = 0x1EAE5Cu;
            // 0x1eae5c: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->pc = 0x1EAE60u;
        goto label_1eae60;
    }
    ctx->pc = 0x1EAE58u;
    SET_GPR_U32(ctx, 31, 0x1EAE60u);
    ctx->pc = 0x1EAE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE58u;
            // 0x1eae5c: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE60u; }
        if (ctx->pc != 0x1EAE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAE60u; }
        if (ctx->pc != 0x1EAE60u) { return; }
    }
    ctx->pc = 0x1EAE60u;
label_1eae60:
    // 0x1eae60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1eae60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eae64:
    // 0x1eae64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1eae64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eae68:
    // 0x1eae68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1eae68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1eae6c:
    // 0x1eae6c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1eae6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1eae70:
    // 0x1eae70: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1eae70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1eae74:
    // 0x1eae74: 0x3e00008  jr          $ra
label_1eae78:
    if (ctx->pc == 0x1EAE78u) {
        ctx->pc = 0x1EAE78u;
            // 0x1eae78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1EAE7Cu;
        goto label_1eae7c;
    }
    ctx->pc = 0x1EAE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAE74u;
            // 0x1eae78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EAE7Cu;
label_1eae7c:
    // 0x1eae7c: 0x0  nop
    ctx->pc = 0x1eae7cu;
    // NOP
    ctx->pc = 0x1eae80u;
}
