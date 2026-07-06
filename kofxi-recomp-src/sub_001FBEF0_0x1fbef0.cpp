#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FBEF0
// Address: 0x1fbef0 - 0x1fc148
void sub_001FBEF0_0x1fbef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBEF0_0x1fbef0");
#endif

    switch (ctx->pc) {
        case 0x1fbef0u: goto label_1fbef0;
        case 0x1fbef4u: goto label_1fbef4;
        case 0x1fbef8u: goto label_1fbef8;
        case 0x1fbefcu: goto label_1fbefc;
        case 0x1fbf00u: goto label_1fbf00;
        case 0x1fbf04u: goto label_1fbf04;
        case 0x1fbf08u: goto label_1fbf08;
        case 0x1fbf0cu: goto label_1fbf0c;
        case 0x1fbf10u: goto label_1fbf10;
        case 0x1fbf14u: goto label_1fbf14;
        case 0x1fbf18u: goto label_1fbf18;
        case 0x1fbf1cu: goto label_1fbf1c;
        case 0x1fbf20u: goto label_1fbf20;
        case 0x1fbf24u: goto label_1fbf24;
        case 0x1fbf28u: goto label_1fbf28;
        case 0x1fbf2cu: goto label_1fbf2c;
        case 0x1fbf30u: goto label_1fbf30;
        case 0x1fbf34u: goto label_1fbf34;
        case 0x1fbf38u: goto label_1fbf38;
        case 0x1fbf3cu: goto label_1fbf3c;
        case 0x1fbf40u: goto label_1fbf40;
        case 0x1fbf44u: goto label_1fbf44;
        case 0x1fbf48u: goto label_1fbf48;
        case 0x1fbf4cu: goto label_1fbf4c;
        case 0x1fbf50u: goto label_1fbf50;
        case 0x1fbf54u: goto label_1fbf54;
        case 0x1fbf58u: goto label_1fbf58;
        case 0x1fbf5cu: goto label_1fbf5c;
        case 0x1fbf60u: goto label_1fbf60;
        case 0x1fbf64u: goto label_1fbf64;
        case 0x1fbf68u: goto label_1fbf68;
        case 0x1fbf6cu: goto label_1fbf6c;
        case 0x1fbf70u: goto label_1fbf70;
        case 0x1fbf74u: goto label_1fbf74;
        case 0x1fbf78u: goto label_1fbf78;
        case 0x1fbf7cu: goto label_1fbf7c;
        case 0x1fbf80u: goto label_1fbf80;
        case 0x1fbf84u: goto label_1fbf84;
        case 0x1fbf88u: goto label_1fbf88;
        case 0x1fbf8cu: goto label_1fbf8c;
        case 0x1fbf90u: goto label_1fbf90;
        case 0x1fbf94u: goto label_1fbf94;
        case 0x1fbf98u: goto label_1fbf98;
        case 0x1fbf9cu: goto label_1fbf9c;
        case 0x1fbfa0u: goto label_1fbfa0;
        case 0x1fbfa4u: goto label_1fbfa4;
        case 0x1fbfa8u: goto label_1fbfa8;
        case 0x1fbfacu: goto label_1fbfac;
        case 0x1fbfb0u: goto label_1fbfb0;
        case 0x1fbfb4u: goto label_1fbfb4;
        case 0x1fbfb8u: goto label_1fbfb8;
        case 0x1fbfbcu: goto label_1fbfbc;
        case 0x1fbfc0u: goto label_1fbfc0;
        case 0x1fbfc4u: goto label_1fbfc4;
        case 0x1fbfc8u: goto label_1fbfc8;
        case 0x1fbfccu: goto label_1fbfcc;
        case 0x1fbfd0u: goto label_1fbfd0;
        case 0x1fbfd4u: goto label_1fbfd4;
        case 0x1fbfd8u: goto label_1fbfd8;
        case 0x1fbfdcu: goto label_1fbfdc;
        case 0x1fbfe0u: goto label_1fbfe0;
        case 0x1fbfe4u: goto label_1fbfe4;
        case 0x1fbfe8u: goto label_1fbfe8;
        case 0x1fbfecu: goto label_1fbfec;
        case 0x1fbff0u: goto label_1fbff0;
        case 0x1fbff4u: goto label_1fbff4;
        case 0x1fbff8u: goto label_1fbff8;
        case 0x1fbffcu: goto label_1fbffc;
        case 0x1fc000u: goto label_1fc000;
        case 0x1fc004u: goto label_1fc004;
        case 0x1fc008u: goto label_1fc008;
        case 0x1fc00cu: goto label_1fc00c;
        case 0x1fc010u: goto label_1fc010;
        case 0x1fc014u: goto label_1fc014;
        case 0x1fc018u: goto label_1fc018;
        case 0x1fc01cu: goto label_1fc01c;
        case 0x1fc020u: goto label_1fc020;
        case 0x1fc024u: goto label_1fc024;
        case 0x1fc028u: goto label_1fc028;
        case 0x1fc02cu: goto label_1fc02c;
        case 0x1fc030u: goto label_1fc030;
        case 0x1fc034u: goto label_1fc034;
        case 0x1fc038u: goto label_1fc038;
        case 0x1fc03cu: goto label_1fc03c;
        case 0x1fc040u: goto label_1fc040;
        case 0x1fc044u: goto label_1fc044;
        case 0x1fc048u: goto label_1fc048;
        case 0x1fc04cu: goto label_1fc04c;
        case 0x1fc050u: goto label_1fc050;
        case 0x1fc054u: goto label_1fc054;
        case 0x1fc058u: goto label_1fc058;
        case 0x1fc05cu: goto label_1fc05c;
        case 0x1fc060u: goto label_1fc060;
        case 0x1fc064u: goto label_1fc064;
        case 0x1fc068u: goto label_1fc068;
        case 0x1fc06cu: goto label_1fc06c;
        case 0x1fc070u: goto label_1fc070;
        case 0x1fc074u: goto label_1fc074;
        case 0x1fc078u: goto label_1fc078;
        case 0x1fc07cu: goto label_1fc07c;
        case 0x1fc080u: goto label_1fc080;
        case 0x1fc084u: goto label_1fc084;
        case 0x1fc088u: goto label_1fc088;
        case 0x1fc08cu: goto label_1fc08c;
        case 0x1fc090u: goto label_1fc090;
        case 0x1fc094u: goto label_1fc094;
        case 0x1fc098u: goto label_1fc098;
        case 0x1fc09cu: goto label_1fc09c;
        case 0x1fc0a0u: goto label_1fc0a0;
        case 0x1fc0a4u: goto label_1fc0a4;
        case 0x1fc0a8u: goto label_1fc0a8;
        case 0x1fc0acu: goto label_1fc0ac;
        case 0x1fc0b0u: goto label_1fc0b0;
        case 0x1fc0b4u: goto label_1fc0b4;
        case 0x1fc0b8u: goto label_1fc0b8;
        case 0x1fc0bcu: goto label_1fc0bc;
        case 0x1fc0c0u: goto label_1fc0c0;
        case 0x1fc0c4u: goto label_1fc0c4;
        case 0x1fc0c8u: goto label_1fc0c8;
        case 0x1fc0ccu: goto label_1fc0cc;
        case 0x1fc0d0u: goto label_1fc0d0;
        case 0x1fc0d4u: goto label_1fc0d4;
        case 0x1fc0d8u: goto label_1fc0d8;
        case 0x1fc0dcu: goto label_1fc0dc;
        case 0x1fc0e0u: goto label_1fc0e0;
        case 0x1fc0e4u: goto label_1fc0e4;
        case 0x1fc0e8u: goto label_1fc0e8;
        case 0x1fc0ecu: goto label_1fc0ec;
        case 0x1fc0f0u: goto label_1fc0f0;
        case 0x1fc0f4u: goto label_1fc0f4;
        case 0x1fc0f8u: goto label_1fc0f8;
        case 0x1fc0fcu: goto label_1fc0fc;
        case 0x1fc100u: goto label_1fc100;
        case 0x1fc104u: goto label_1fc104;
        case 0x1fc108u: goto label_1fc108;
        case 0x1fc10cu: goto label_1fc10c;
        case 0x1fc110u: goto label_1fc110;
        case 0x1fc114u: goto label_1fc114;
        case 0x1fc118u: goto label_1fc118;
        case 0x1fc11cu: goto label_1fc11c;
        case 0x1fc120u: goto label_1fc120;
        case 0x1fc124u: goto label_1fc124;
        case 0x1fc128u: goto label_1fc128;
        case 0x1fc12cu: goto label_1fc12c;
        case 0x1fc130u: goto label_1fc130;
        case 0x1fc134u: goto label_1fc134;
        case 0x1fc138u: goto label_1fc138;
        case 0x1fc13cu: goto label_1fc13c;
        case 0x1fc140u: goto label_1fc140;
        case 0x1fc144u: goto label_1fc144;
        default: break;
    }

    ctx->pc = 0x1fbef0u;

label_1fbef0:
    // 0x1fbef0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fbef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fbef4:
    // 0x1fbef4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fbef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1fbef8:
    // 0x1fbef8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fbef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fbefc:
    // 0x1fbefc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fbefcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf00:
    // 0x1fbf00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fbf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1fbf04:
    // 0x1fbf04: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fbf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1fbf08:
    // 0x1fbf08: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fbf08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf0c:
    // 0x1fbf0c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1fbf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1fbf10:
    // 0x1fbf10: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fbf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1fbf14:
    // 0x1fbf14: 0xc07b670  jal         func_1ED9C0
label_1fbf18:
    if (ctx->pc == 0x1FBF18u) {
        ctx->pc = 0x1FBF18u;
            // 0x1fbf18: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF1Cu;
        goto label_1fbf1c;
    }
    ctx->pc = 0x1FBF14u;
    SET_GPR_U32(ctx, 31, 0x1FBF1Cu);
    ctx->pc = 0x1FBF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF14u;
            // 0x1fbf18: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF1Cu; }
        if (ctx->pc != 0x1FBF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF1Cu; }
        if (ctx->pc != 0x1FBF1Cu) { return; }
    }
    ctx->pc = 0x1FBF1Cu;
label_1fbf1c:
    // 0x1fbf1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf20:
    // 0x1fbf20: 0xc07ec02  jal         func_1FB008
label_1fbf24:
    if (ctx->pc == 0x1FBF24u) {
        ctx->pc = 0x1FBF24u;
            // 0x1fbf24: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x1FBF28u;
        goto label_1fbf28;
    }
    ctx->pc = 0x1FBF20u;
    SET_GPR_U32(ctx, 31, 0x1FBF28u);
    ctx->pc = 0x1FBF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF20u;
            // 0x1fbf24: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (runtime->hasFunction(0x1FB008u)) {
        auto targetFn = runtime->lookupFunction(0x1FB008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF28u; }
        if (ctx->pc != 0x1FBF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB008_0x1fb008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF28u; }
        if (ctx->pc != 0x1FBF28u) { return; }
    }
    ctx->pc = 0x1FBF28u;
label_1fbf28:
    // 0x1fbf28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf2c:
    // 0x1fbf2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fbf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1fbf30:
    // 0x1fbf30: 0x26300d88  addiu       $s0, $s1, 0xD88
    ctx->pc = 0x1fbf30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3464));
label_1fbf34:
    // 0x1fbf34: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1fbf34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1fbf38:
    // 0x1fbf38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fbf38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf3c:
    // 0x1fbf3c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fbf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fbf40:
    // 0x1fbf40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1fbf44:
    if (ctx->pc == 0x1FBF44u) {
        ctx->pc = 0x1FBF44u;
            // 0x1fbf44: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF48u;
        goto label_1fbf48;
    }
    ctx->pc = 0x1FBF40u;
    {
        const bool branch_taken_0x1fbf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF40u;
            // 0x1fbf44: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf40) {
            ctx->pc = 0x1FBF50u;
            goto label_1fbf50;
        }
    }
    ctx->pc = 0x1FBF48u;
label_1fbf48:
    // 0x1fbf48: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1fbf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1fbf4c:
    // 0x1fbf4c: 0x2442bf88  addiu       $v0, $v0, -0x4078
    ctx->pc = 0x1fbf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950792));
label_1fbf50:
    // 0x1fbf50: 0x40f809  jalr        $v0
label_1fbf54:
    if (ctx->pc == 0x1FBF54u) {
        ctx->pc = 0x1FBF58u;
        goto label_1fbf58;
    }
    ctx->pc = 0x1FBF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FBF58u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FBF58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF58u; }
            if (ctx->pc != 0x1FBF58u) { return; }
        }
        }
    }
    ctx->pc = 0x1FBF58u;
label_1fbf58:
    // 0x1fbf58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fbf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf5c:
    // 0x1fbf5c: 0xc07b676  jal         func_1ED9D8
label_1fbf60:
    if (ctx->pc == 0x1FBF60u) {
        ctx->pc = 0x1FBF60u;
            // 0x1fbf60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF64u;
        goto label_1fbf64;
    }
    ctx->pc = 0x1FBF5Cu;
    SET_GPR_U32(ctx, 31, 0x1FBF64u);
    ctx->pc = 0x1FBF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF5Cu;
            // 0x1fbf60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF64u; }
        if (ctx->pc != 0x1FBF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBF64u; }
        if (ctx->pc != 0x1FBF64u) { return; }
    }
    ctx->pc = 0x1FBF64u;
label_1fbf64:
    // 0x1fbf64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fbf64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf68:
    // 0x1fbf68: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fbf68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1fbf6c:
    // 0x1fbf6c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fbf6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fbf70:
    // 0x1fbf70: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fbf70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fbf74:
    // 0x1fbf74: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1fbf74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1fbf78:
    // 0x1fbf78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fbf78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fbf7c:
    // 0x1fbf7c: 0x3e00008  jr          $ra
label_1fbf80:
    if (ctx->pc == 0x1FBF80u) {
        ctx->pc = 0x1FBF80u;
            // 0x1fbf80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1FBF84u;
        goto label_1fbf84;
    }
    ctx->pc = 0x1FBF7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF7Cu;
            // 0x1fbf80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FBF84u;
label_1fbf84:
    // 0x1fbf84: 0x0  nop
    ctx->pc = 0x1fbf84u;
    // NOP
label_1fbf88:
    // 0x1fbf88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fbf8c:
    // 0x1fbf8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fbf90:
    // 0x1fbf90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fbf90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fbf94:
    // 0x1fbf94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fbf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1fbf98:
    // 0x1fbf98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fbf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fbf9c:
    // 0x1fbf9c: 0xc07f052  jal         func_1FC148
label_1fbfa0:
    if (ctx->pc == 0x1FBFA0u) {
        ctx->pc = 0x1FBFA0u;
            // 0x1fbfa0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FBFA4u;
        goto label_1fbfa4;
    }
    ctx->pc = 0x1FBF9Cu;
    SET_GPR_U32(ctx, 31, 0x1FBFA4u);
    ctx->pc = 0x1FBFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBF9Cu;
            // 0x1fbfa0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC148u;
    if (runtime->hasFunction(0x1FC148u)) {
        auto targetFn = runtime->lookupFunction(0x1FC148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBFA4u; }
        if (ctx->pc != 0x1FBFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FC148_0x1fc148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBFA4u; }
        if (ctx->pc != 0x1FBFA4u) { return; }
    }
    ctx->pc = 0x1FBFA4u;
label_1fbfa4:
    // 0x1fbfa4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1fbfa8:
    if (ctx->pc == 0x1FBFA8u) {
        ctx->pc = 0x1FBFA8u;
            // 0x1fbfa8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1FBFACu;
        goto label_1fbfac;
    }
    ctx->pc = 0x1FBFA4u;
    {
        const bool branch_taken_0x1fbfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBFA4u;
            // 0x1fbfa8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbfa4) {
            ctx->pc = 0x1FBFBCu;
            goto label_1fbfbc;
        }
    }
    ctx->pc = 0x1FBFACu;
label_1fbfac:
    // 0x1fbfac: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1fbfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1fbfb0:
    // 0x1fbfb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fbfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fbfb4:
    // 0x1fbfb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fbfb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fbfb8:
    // 0x1fbfb8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1fbfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1fbfbc:
    // 0x1fbfbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fbfbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fbfc0:
    // 0x1fbfc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fbfc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fbfc4:
    // 0x1fbfc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fbfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fbfc8:
    // 0x1fbfc8: 0x3e00008  jr          $ra
label_1fbfcc:
    if (ctx->pc == 0x1FBFCCu) {
        ctx->pc = 0x1FBFCCu;
            // 0x1fbfcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FBFD0u;
        goto label_1fbfd0;
    }
    ctx->pc = 0x1FBFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBFC8u;
            // 0x1fbfcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FBFD0u;
label_1fbfd0:
    // 0x1fbfd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fbfd4:
    // 0x1fbfd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fbfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fbfd8:
    // 0x1fbfd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fbfd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fbfdc:
    // 0x1fbfdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fbfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1fbfe0:
    // 0x1fbfe0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fbfe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fbfe4:
    // 0x1fbfe4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fbfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1fbfe8:
    // 0x1fbfe8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1fbfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1fbfec:
    // 0x1fbfec: 0xc07f052  jal         func_1FC148
label_1fbff0:
    if (ctx->pc == 0x1FBFF0u) {
        ctx->pc = 0x1FBFF0u;
            // 0x1fbff0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FBFF4u;
        goto label_1fbff4;
    }
    ctx->pc = 0x1FBFECu;
    SET_GPR_U32(ctx, 31, 0x1FBFF4u);
    ctx->pc = 0x1FBFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBFECu;
            // 0x1fbff0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC148u;
    if (runtime->hasFunction(0x1FC148u)) {
        auto targetFn = runtime->lookupFunction(0x1FC148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBFF4u; }
        if (ctx->pc != 0x1FBFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FC148_0x1fc148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FBFF4u; }
        if (ctx->pc != 0x1FBFF4u) { return; }
    }
    ctx->pc = 0x1FBFF4u;
label_1fbff4:
    // 0x1fbff4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1fbff8:
    if (ctx->pc == 0x1FBFF8u) {
        ctx->pc = 0x1FBFF8u;
            // 0x1fbff8: 0x26100d88  addiu       $s0, $s0, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
        ctx->pc = 0x1FBFFCu;
        goto label_1fbffc;
    }
    ctx->pc = 0x1FBFF4u;
    {
        const bool branch_taken_0x1fbff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FBFF4u;
            // 0x1fbff8: 0x26100d88  addiu       $s0, $s0, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbff4) {
            ctx->pc = 0x1FC014u;
            goto label_1fc014;
        }
    }
    ctx->pc = 0x1FBFFCu;
label_1fbffc:
    // 0x1fbffc: 0x8e0302a8  lw          $v1, 0x2A8($s0)
    ctx->pc = 0x1fbffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 680)));
label_1fc000:
    // 0x1fc000: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1fc000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
label_1fc004:
    // 0x1fc004: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fc004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc008:
    // 0x1fc008: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1fc008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1fc00c:
    // 0x1fc00c: 0x8c8316fc  lw          $v1, 0x16FC($a0)
    ctx->pc = 0x1fc00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5884)));
label_1fc010:
    // 0x1fc010: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1fc010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1fc014:
    // 0x1fc014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc018:
    // 0x1fc018: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fc01c:
    // 0x1fc01c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fc01cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc020:
    // 0x1fc020: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1fc020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1fc024:
    // 0x1fc024: 0x3e00008  jr          $ra
label_1fc028:
    if (ctx->pc == 0x1FC028u) {
        ctx->pc = 0x1FC028u;
            // 0x1fc028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FC02Cu;
        goto label_1fc02c;
    }
    ctx->pc = 0x1FC024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC024u;
            // 0x1fc028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC02Cu;
label_1fc02c:
    // 0x1fc02c: 0x0  nop
    ctx->pc = 0x1fc02cu;
    // NOP
label_1fc030:
    // 0x1fc030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fc030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1fc034:
    // 0x1fc034: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fc038:
    // 0x1fc038: 0xc07f052  jal         func_1FC148
label_1fc03c:
    if (ctx->pc == 0x1FC03Cu) {
        ctx->pc = 0x1FC040u;
        goto label_1fc040;
    }
    ctx->pc = 0x1FC038u;
    SET_GPR_U32(ctx, 31, 0x1FC040u);
    ctx->pc = 0x1FC148u;
    if (runtime->hasFunction(0x1FC148u)) {
        auto targetFn = runtime->lookupFunction(0x1FC148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC040u; }
        if (ctx->pc != 0x1FC040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FC148_0x1fc148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC040u; }
        if (ctx->pc != 0x1FC040u) { return; }
    }
    ctx->pc = 0x1FC040u;
label_1fc040:
    // 0x1fc040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc044:
    // 0x1fc044: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fc044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc048:
    // 0x1fc048: 0x3e00008  jr          $ra
label_1fc04c:
    if (ctx->pc == 0x1FC04Cu) {
        ctx->pc = 0x1FC04Cu;
            // 0x1fc04c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1FC050u;
        goto label_1fc050;
    }
    ctx->pc = 0x1FC048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC048u;
            // 0x1fc04c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FC050u;
label_1fc050:
    // 0x1fc050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fc050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fc054:
    // 0x1fc054: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fc054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1fc058:
    // 0x1fc058: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fc058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fc05c:
    // 0x1fc05c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1fc05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1fc060:
    // 0x1fc060: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1fc060u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fc064:
    // 0x1fc064: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1fc064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1fc068:
    // 0x1fc068: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1fc068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1fc06c:
    // 0x1fc06c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fc06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1fc070:
    // 0x1fc070: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1fc070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1fc074:
    // 0x1fc074: 0xc07f052  jal         func_1FC148
label_1fc078:
    if (ctx->pc == 0x1FC078u) {
        ctx->pc = 0x1FC078u;
            // 0x1fc078: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FC07Cu;
        goto label_1fc07c;
    }
    ctx->pc = 0x1FC074u;
    SET_GPR_U32(ctx, 31, 0x1FC07Cu);
    ctx->pc = 0x1FC078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC074u;
            // 0x1fc078: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FC148u;
    if (runtime->hasFunction(0x1FC148u)) {
        auto targetFn = runtime->lookupFunction(0x1FC148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC07Cu; }
        if (ctx->pc != 0x1FC07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FC148_0x1fc148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC07Cu; }
        if (ctx->pc != 0x1FC07Cu) { return; }
    }
    ctx->pc = 0x1FC07Cu;
label_1fc07c:
    // 0x1fc07c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_1fc080:
    if (ctx->pc == 0x1FC080u) {
        ctx->pc = 0x1FC080u;
            // 0x1fc080: 0x26300d88  addiu       $s0, $s1, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3464));
        ctx->pc = 0x1FC084u;
        goto label_1fc084;
    }
    ctx->pc = 0x1FC07Cu;
    {
        const bool branch_taken_0x1fc07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC07Cu;
            // 0x1fc080: 0x26300d88  addiu       $s0, $s1, 0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc07c) {
            ctx->pc = 0x1FC128u;
            goto label_1fc128;
        }
    }
    ctx->pc = 0x1FC084u;
label_1fc084:
    // 0x1fc084: 0x8e0202d4  lw          $v0, 0x2D4($s0)
    ctx->pc = 0x1fc084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
label_1fc088:
    // 0x1fc088: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1fc08c:
    if (ctx->pc == 0x1FC08Cu) {
        ctx->pc = 0x1FC08Cu;
            // 0x1fc08c: 0x8e0402e8  lw          $a0, 0x2E8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
        ctx->pc = 0x1FC090u;
        goto label_1fc090;
    }
    ctx->pc = 0x1FC088u;
    {
        const bool branch_taken_0x1fc088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc088) {
            ctx->pc = 0x1FC08Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC088u;
            // 0x1fc08c: 0x8e0402e8  lw          $a0, 0x2E8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FC0A8u;
            goto label_1fc0a8;
        }
    }
    ctx->pc = 0x1FC090u;
label_1fc090:
    // 0x1fc090: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1fc090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1fc094:
    // 0x1fc094: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fc094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fc098:
    // 0x1fc098: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1fc098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1fc09c:
    // 0x1fc09c: 0x10000021  b           . + 4 + (0x21 << 2)
label_1fc0a0:
    if (ctx->pc == 0x1FC0A0u) {
        ctx->pc = 0x1FC0A0u;
            // 0x1fc0a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0A4u;
        goto label_1fc0a4;
    }
    ctx->pc = 0x1FC09Cu;
    {
        const bool branch_taken_0x1fc09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC09Cu;
            // 0x1fc0a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc09c) {
            ctx->pc = 0x1FC124u;
            goto label_1fc124;
        }
    }
    ctx->pc = 0x1FC0A4u;
label_1fc0a4:
    // 0x1fc0a4: 0x0  nop
    ctx->pc = 0x1fc0a4u;
    // NOP
label_1fc0a8:
    // 0x1fc0a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fc0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fc0ac:
    // 0x1fc0ac: 0x40f809  jalr        $v0
label_1fc0b0:
    if (ctx->pc == 0x1FC0B0u) {
        ctx->pc = 0x1FC0B0u;
            // 0x1fc0b0: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x1FC0B4u;
        goto label_1fc0b4;
    }
    ctx->pc = 0x1FC0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FC0B4u);
        ctx->pc = 0x1FC0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC0ACu;
            // 0x1fc0b0: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FC0B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FC0B4u; }
            if (ctx->pc != 0x1FC0B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1FC0B4u;
label_1fc0b4:
    // 0x1fc0b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fc0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fc0b8:
    // 0x1fc0b8: 0xc07ee72  jal         func_1FB9C8
label_1fc0bc:
    if (ctx->pc == 0x1FC0BCu) {
        ctx->pc = 0x1FC0BCu;
            // 0x1fc0bc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0C0u;
        goto label_1fc0c0;
    }
    ctx->pc = 0x1FC0B8u;
    SET_GPR_U32(ctx, 31, 0x1FC0C0u);
    ctx->pc = 0x1FC0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC0B8u;
            // 0x1fc0bc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FB9C8u;
    if (runtime->hasFunction(0x1FB9C8u)) {
        auto targetFn = runtime->lookupFunction(0x1FB9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC0C0u; }
        if (ctx->pc != 0x1FC0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FB9C8_0x1fb9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FC0C0u; }
        if (ctx->pc != 0x1FC0C0u) { return; }
    }
    ctx->pc = 0x1FC0C0u;
label_1fc0c0:
    // 0x1fc0c0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1fc0c4:
    if (ctx->pc == 0x1FC0C4u) {
        ctx->pc = 0x1FC0C4u;
            // 0x1fc0c4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1FC0C8u;
        goto label_1fc0c8;
    }
    ctx->pc = 0x1FC0C0u;
    {
        const bool branch_taken_0x1fc0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC0C0u;
            // 0x1fc0c4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0c0) {
            ctx->pc = 0x1FC108u;
            goto label_1fc108;
        }
    }
    ctx->pc = 0x1FC0C8u;
label_1fc0c8:
    // 0x1fc0c8: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x1fc0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_1fc0cc:
    // 0x1fc0cc: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1fc0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_1fc0d0:
    // 0x1fc0d0: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_1fc0d4:
    if (ctx->pc == 0x1FC0D4u) {
        ctx->pc = 0x1FC0D4u;
            // 0x1fc0d4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1FC0D8u;
        goto label_1fc0d8;
    }
    ctx->pc = 0x1FC0D0u;
    {
        const bool branch_taken_0x1fc0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FC0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC0D0u;
            // 0x1fc0d4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc0d0) {
            ctx->pc = 0x1FC10Cu;
            goto label_1fc10c;
        }
    }
    ctx->pc = 0x1FC0D8u;
label_1fc0d8:
    // 0x1fc0d8: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1fc0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
label_1fc0dc:
    // 0x1fc0dc: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x1fc0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1fc0e0:
    // 0x1fc0e0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1fc0e4:
    if (ctx->pc == 0x1FC0E4u) {
        ctx->pc = 0x1FC0E8u;
        goto label_1fc0e8;
    }
    ctx->pc = 0x1FC0E0u;
    {
        const bool branch_taken_0x1fc0e0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1fc0e0) {
            ctx->pc = 0x1FC0F4u;
            goto label_1fc0f4;
        }
    }
    ctx->pc = 0x1FC0E8u;
label_1fc0e8:
    // 0x1fc0e8: 0x8e0202e4  lw          $v0, 0x2E4($s0)
    ctx->pc = 0x1fc0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_1fc0ec:
    // 0x1fc0ec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fc0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1fc0f0:
    // 0x1fc0f0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1fc0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1fc0f4:
    // 0x1fc0f4: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1fc0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_1fc0f8:
    // 0x1fc0f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fc0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1fc0fc:
    // 0x1fc0fc: 0xae0202dc  sw          $v0, 0x2DC($s0)
    ctx->pc = 0x1fc0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 2));
label_1fc100:
    // 0x1fc100: 0x10000002  b           . + 4 + (0x2 << 2)
label_1fc104:
    if (ctx->pc == 0x1FC104u) {
        ctx->pc = 0x1FC104u;
            // 0x1fc104: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1FC108u;
        goto label_1fc108;
    }
    ctx->pc = 0x1FC100u;
    {
        const bool branch_taken_0x1fc100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC100u;
            // 0x1fc104: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc100) {
            ctx->pc = 0x1FC10Cu;
            goto label_1fc10c;
        }
    }
    ctx->pc = 0x1FC108u;
label_1fc108:
    // 0x1fc108: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1fc108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1fc10c:
    // 0x1fc10c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1fc10cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1fc110:
    // 0x1fc110: 0xae0402d8  sw          $a0, 0x2D8($s0)
    ctx->pc = 0x1fc110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 4));
label_1fc114:
    // 0x1fc114: 0xae0302e0  sw          $v1, 0x2E0($s0)
    ctx->pc = 0x1fc114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 3));
label_1fc118:
    // 0x1fc118: 0x8e0402dc  lw          $a0, 0x2DC($s0)
    ctx->pc = 0x1fc118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
label_1fc11c:
    // 0x1fc11c: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1fc11cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_1fc120:
    // 0x1fc120: 0x8e0302e0  lw          $v1, 0x2E0($s0)
    ctx->pc = 0x1fc120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
label_1fc124:
    // 0x1fc124: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1fc124u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1fc128:
    // 0x1fc128: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1fc128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fc12c:
    // 0x1fc12c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1fc12cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1fc130:
    // 0x1fc130: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1fc130u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fc134:
    // 0x1fc134: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1fc134u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1fc138:
    // 0x1fc138: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1fc138u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fc13c:
    // 0x1fc13c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1fc13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1fc140:
    // 0x1fc140: 0x3e00008  jr          $ra
label_1fc144:
    if (ctx->pc == 0x1FC144u) {
        ctx->pc = 0x1FC144u;
            // 0x1fc144: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1FC148u;
        goto label_fallthrough_0x1fc140;
    }
    ctx->pc = 0x1FC140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FC140u;
            // 0x1fc144: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1fc140:
    ctx->pc = 0x1FC148u;
    ctx->pc = 0x1fc148u;
}
