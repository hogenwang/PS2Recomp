#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011AE40
// Address: 0x11ae40 - 0x11b188
void sub_0011AE40_0x11ae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AE40_0x11ae40");
#endif

    switch (ctx->pc) {
        case 0x11ae40u: goto label_11ae40;
        case 0x11ae44u: goto label_11ae44;
        case 0x11ae48u: goto label_11ae48;
        case 0x11ae4cu: goto label_11ae4c;
        case 0x11ae50u: goto label_11ae50;
        case 0x11ae54u: goto label_11ae54;
        case 0x11ae58u: goto label_11ae58;
        case 0x11ae5cu: goto label_11ae5c;
        case 0x11ae60u: goto label_11ae60;
        case 0x11ae64u: goto label_11ae64;
        case 0x11ae68u: goto label_11ae68;
        case 0x11ae6cu: goto label_11ae6c;
        case 0x11ae70u: goto label_11ae70;
        case 0x11ae74u: goto label_11ae74;
        case 0x11ae78u: goto label_11ae78;
        case 0x11ae7cu: goto label_11ae7c;
        case 0x11ae80u: goto label_11ae80;
        case 0x11ae84u: goto label_11ae84;
        case 0x11ae88u: goto label_11ae88;
        case 0x11ae8cu: goto label_11ae8c;
        case 0x11ae90u: goto label_11ae90;
        case 0x11ae94u: goto label_11ae94;
        case 0x11ae98u: goto label_11ae98;
        case 0x11ae9cu: goto label_11ae9c;
        case 0x11aea0u: goto label_11aea0;
        case 0x11aea4u: goto label_11aea4;
        case 0x11aea8u: goto label_11aea8;
        case 0x11aeacu: goto label_11aeac;
        case 0x11aeb0u: goto label_11aeb0;
        case 0x11aeb4u: goto label_11aeb4;
        case 0x11aeb8u: goto label_11aeb8;
        case 0x11aebcu: goto label_11aebc;
        case 0x11aec0u: goto label_11aec0;
        case 0x11aec4u: goto label_11aec4;
        case 0x11aec8u: goto label_11aec8;
        case 0x11aeccu: goto label_11aecc;
        case 0x11aed0u: goto label_11aed0;
        case 0x11aed4u: goto label_11aed4;
        case 0x11aed8u: goto label_11aed8;
        case 0x11aedcu: goto label_11aedc;
        case 0x11aee0u: goto label_11aee0;
        case 0x11aee4u: goto label_11aee4;
        case 0x11aee8u: goto label_11aee8;
        case 0x11aeecu: goto label_11aeec;
        case 0x11aef0u: goto label_11aef0;
        case 0x11aef4u: goto label_11aef4;
        case 0x11aef8u: goto label_11aef8;
        case 0x11aefcu: goto label_11aefc;
        case 0x11af00u: goto label_11af00;
        case 0x11af04u: goto label_11af04;
        case 0x11af08u: goto label_11af08;
        case 0x11af0cu: goto label_11af0c;
        case 0x11af10u: goto label_11af10;
        case 0x11af14u: goto label_11af14;
        case 0x11af18u: goto label_11af18;
        case 0x11af1cu: goto label_11af1c;
        case 0x11af20u: goto label_11af20;
        case 0x11af24u: goto label_11af24;
        case 0x11af28u: goto label_11af28;
        case 0x11af2cu: goto label_11af2c;
        case 0x11af30u: goto label_11af30;
        case 0x11af34u: goto label_11af34;
        case 0x11af38u: goto label_11af38;
        case 0x11af3cu: goto label_11af3c;
        case 0x11af40u: goto label_11af40;
        case 0x11af44u: goto label_11af44;
        case 0x11af48u: goto label_11af48;
        case 0x11af4cu: goto label_11af4c;
        case 0x11af50u: goto label_11af50;
        case 0x11af54u: goto label_11af54;
        case 0x11af58u: goto label_11af58;
        case 0x11af5cu: goto label_11af5c;
        case 0x11af60u: goto label_11af60;
        case 0x11af64u: goto label_11af64;
        case 0x11af68u: goto label_11af68;
        case 0x11af6cu: goto label_11af6c;
        case 0x11af70u: goto label_11af70;
        case 0x11af74u: goto label_11af74;
        case 0x11af78u: goto label_11af78;
        case 0x11af7cu: goto label_11af7c;
        case 0x11af80u: goto label_11af80;
        case 0x11af84u: goto label_11af84;
        case 0x11af88u: goto label_11af88;
        case 0x11af8cu: goto label_11af8c;
        case 0x11af90u: goto label_11af90;
        case 0x11af94u: goto label_11af94;
        case 0x11af98u: goto label_11af98;
        case 0x11af9cu: goto label_11af9c;
        case 0x11afa0u: goto label_11afa0;
        case 0x11afa4u: goto label_11afa4;
        case 0x11afa8u: goto label_11afa8;
        case 0x11afacu: goto label_11afac;
        case 0x11afb0u: goto label_11afb0;
        case 0x11afb4u: goto label_11afb4;
        case 0x11afb8u: goto label_11afb8;
        case 0x11afbcu: goto label_11afbc;
        case 0x11afc0u: goto label_11afc0;
        case 0x11afc4u: goto label_11afc4;
        case 0x11afc8u: goto label_11afc8;
        case 0x11afccu: goto label_11afcc;
        case 0x11afd0u: goto label_11afd0;
        case 0x11afd4u: goto label_11afd4;
        case 0x11afd8u: goto label_11afd8;
        case 0x11afdcu: goto label_11afdc;
        case 0x11afe0u: goto label_11afe0;
        case 0x11afe4u: goto label_11afe4;
        case 0x11afe8u: goto label_11afe8;
        case 0x11afecu: goto label_11afec;
        case 0x11aff0u: goto label_11aff0;
        case 0x11aff4u: goto label_11aff4;
        case 0x11aff8u: goto label_11aff8;
        case 0x11affcu: goto label_11affc;
        case 0x11b000u: goto label_11b000;
        case 0x11b004u: goto label_11b004;
        case 0x11b008u: goto label_11b008;
        case 0x11b00cu: goto label_11b00c;
        case 0x11b010u: goto label_11b010;
        case 0x11b014u: goto label_11b014;
        case 0x11b018u: goto label_11b018;
        case 0x11b01cu: goto label_11b01c;
        case 0x11b020u: goto label_11b020;
        case 0x11b024u: goto label_11b024;
        case 0x11b028u: goto label_11b028;
        case 0x11b02cu: goto label_11b02c;
        case 0x11b030u: goto label_11b030;
        case 0x11b034u: goto label_11b034;
        case 0x11b038u: goto label_11b038;
        case 0x11b03cu: goto label_11b03c;
        case 0x11b040u: goto label_11b040;
        case 0x11b044u: goto label_11b044;
        case 0x11b048u: goto label_11b048;
        case 0x11b04cu: goto label_11b04c;
        case 0x11b050u: goto label_11b050;
        case 0x11b054u: goto label_11b054;
        case 0x11b058u: goto label_11b058;
        case 0x11b05cu: goto label_11b05c;
        case 0x11b060u: goto label_11b060;
        case 0x11b064u: goto label_11b064;
        case 0x11b068u: goto label_11b068;
        case 0x11b06cu: goto label_11b06c;
        case 0x11b070u: goto label_11b070;
        case 0x11b074u: goto label_11b074;
        case 0x11b078u: goto label_11b078;
        case 0x11b07cu: goto label_11b07c;
        case 0x11b080u: goto label_11b080;
        case 0x11b084u: goto label_11b084;
        case 0x11b088u: goto label_11b088;
        case 0x11b08cu: goto label_11b08c;
        case 0x11b090u: goto label_11b090;
        case 0x11b094u: goto label_11b094;
        case 0x11b098u: goto label_11b098;
        case 0x11b09cu: goto label_11b09c;
        case 0x11b0a0u: goto label_11b0a0;
        case 0x11b0a4u: goto label_11b0a4;
        case 0x11b0a8u: goto label_11b0a8;
        case 0x11b0acu: goto label_11b0ac;
        case 0x11b0b0u: goto label_11b0b0;
        case 0x11b0b4u: goto label_11b0b4;
        case 0x11b0b8u: goto label_11b0b8;
        case 0x11b0bcu: goto label_11b0bc;
        case 0x11b0c0u: goto label_11b0c0;
        case 0x11b0c4u: goto label_11b0c4;
        case 0x11b0c8u: goto label_11b0c8;
        case 0x11b0ccu: goto label_11b0cc;
        case 0x11b0d0u: goto label_11b0d0;
        case 0x11b0d4u: goto label_11b0d4;
        case 0x11b0d8u: goto label_11b0d8;
        case 0x11b0dcu: goto label_11b0dc;
        case 0x11b0e0u: goto label_11b0e0;
        case 0x11b0e4u: goto label_11b0e4;
        case 0x11b0e8u: goto label_11b0e8;
        case 0x11b0ecu: goto label_11b0ec;
        case 0x11b0f0u: goto label_11b0f0;
        case 0x11b0f4u: goto label_11b0f4;
        case 0x11b0f8u: goto label_11b0f8;
        case 0x11b0fcu: goto label_11b0fc;
        case 0x11b100u: goto label_11b100;
        case 0x11b104u: goto label_11b104;
        case 0x11b108u: goto label_11b108;
        case 0x11b10cu: goto label_11b10c;
        case 0x11b110u: goto label_11b110;
        case 0x11b114u: goto label_11b114;
        case 0x11b118u: goto label_11b118;
        case 0x11b11cu: goto label_11b11c;
        case 0x11b120u: goto label_11b120;
        case 0x11b124u: goto label_11b124;
        case 0x11b128u: goto label_11b128;
        case 0x11b12cu: goto label_11b12c;
        case 0x11b130u: goto label_11b130;
        case 0x11b134u: goto label_11b134;
        case 0x11b138u: goto label_11b138;
        case 0x11b13cu: goto label_11b13c;
        case 0x11b140u: goto label_11b140;
        case 0x11b144u: goto label_11b144;
        case 0x11b148u: goto label_11b148;
        case 0x11b14cu: goto label_11b14c;
        case 0x11b150u: goto label_11b150;
        case 0x11b154u: goto label_11b154;
        case 0x11b158u: goto label_11b158;
        case 0x11b15cu: goto label_11b15c;
        case 0x11b160u: goto label_11b160;
        case 0x11b164u: goto label_11b164;
        case 0x11b168u: goto label_11b168;
        case 0x11b16cu: goto label_11b16c;
        case 0x11b170u: goto label_11b170;
        case 0x11b174u: goto label_11b174;
        case 0x11b178u: goto label_11b178;
        case 0x11b17cu: goto label_11b17c;
        case 0x11b180u: goto label_11b180;
        case 0x11b184u: goto label_11b184;
        default: break;
    }

    ctx->pc = 0x11ae40u;

label_11ae40:
    // 0x11ae40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11ae40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_11ae44:
    // 0x11ae44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11ae44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11ae48:
    // 0x11ae48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ae48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11ae4c:
    // 0x11ae4c: 0x8046718  j           func_119C60
label_11ae50:
    if (ctx->pc == 0x11AE50u) {
        ctx->pc = 0x11AE50u;
            // 0x11ae50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x11AE54u;
        goto label_11ae54;
    }
    ctx->pc = 0x11AE4Cu;
    ctx->pc = 0x11AE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE4Cu;
            // 0x11ae50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x119C60u;
    {
        auto targetFn = runtime->lookupFunction(0x119C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x11AE54u;
label_11ae54:
    // 0x11ae54: 0x0  nop
    ctx->pc = 0x11ae54u;
    // NOP
label_11ae58:
    // 0x11ae58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11ae58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11ae5c:
    // 0x11ae5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11ae5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11ae60:
    // 0x11ae60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ae60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11ae64:
    // 0x11ae64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11ae64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_11ae68:
    // 0x11ae68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ae68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11ae6c:
    // 0x11ae6c: 0xc046e5c  jal         func_11B970
label_11ae70:
    if (ctx->pc == 0x11AE70u) {
        ctx->pc = 0x11AE70u;
            // 0x11ae70: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x11AE74u;
        goto label_11ae74;
    }
    ctx->pc = 0x11AE6Cu;
    SET_GPR_U32(ctx, 31, 0x11AE74u);
    ctx->pc = 0x11AE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE6Cu;
            // 0x11ae70: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B970u;
    if (runtime->hasFunction(0x11B970u)) {
        auto targetFn = runtime->lookupFunction(0x11B970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE74u; }
        if (ctx->pc != 0x11AE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B970_0x11b970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE74u; }
        if (ctx->pc != 0x11AE74u) { return; }
    }
    ctx->pc = 0x11AE74u;
label_11ae74:
    // 0x11ae74: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_11ae78:
    if (ctx->pc == 0x11AE78u) {
        ctx->pc = 0x11AE78u;
            // 0x11ae78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11AE7Cu;
        goto label_11ae7c;
    }
    ctx->pc = 0x11AE74u;
    {
        const bool branch_taken_0x11ae74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE74u;
            // 0x11ae78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae74) {
            ctx->pc = 0x11AEACu;
            goto label_11aeac;
        }
    }
    ctx->pc = 0x11AE7Cu;
label_11ae7c:
    // 0x11ae7c: 0xc045ba8  jal         func_116EA0
label_11ae80:
    if (ctx->pc == 0x11AE80u) {
        ctx->pc = 0x11AE84u;
        goto label_11ae84;
    }
    ctx->pc = 0x11AE7Cu;
    SET_GPR_U32(ctx, 31, 0x11AE84u);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE84u; }
        if (ctx->pc != 0x11AE84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AE84u; }
        if (ctx->pc != 0x11AE84u) { return; }
    }
    ctx->pc = 0x11AE84u;
label_11ae84:
    // 0x11ae84: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x11ae84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_11ae88:
    // 0x11ae88: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11ae88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
label_11ae8c:
    // 0x11ae8c: 0x8c70d840  lw          $s0, -0x27C0($v1)
    ctx->pc = 0x11ae8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294957120)));
label_11ae90:
    // 0x11ae90: 0xac71d840  sw          $s1, -0x27C0($v1)
    ctx->pc = 0x11ae90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957120), GPR_U32(ctx, 17));
label_11ae94:
    // 0x11ae94: 0xac9cd844  sw          $gp, -0x27BC($a0)
    ctx->pc = 0x11ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294957124), GPR_U32(ctx, 28));
label_11ae98:
    // 0x11ae98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_11ae9c:
    if (ctx->pc == 0x11AE9Cu) {
        ctx->pc = 0x11AE9Cu;
            // 0x11ae9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11AEA0u;
        goto label_11aea0;
    }
    ctx->pc = 0x11AE98u;
    {
        const bool branch_taken_0x11ae98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AE98u;
            // 0x11ae9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae98) {
            ctx->pc = 0x11AEACu;
            goto label_11aeac;
        }
    }
    ctx->pc = 0x11AEA0u;
label_11aea0:
    // 0x11aea0: 0xc045bbc  jal         func_116EF0
label_11aea4:
    if (ctx->pc == 0x11AEA4u) {
        ctx->pc = 0x11AEA8u;
        goto label_11aea8;
    }
    ctx->pc = 0x11AEA0u;
    SET_GPR_U32(ctx, 31, 0x11AEA8u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AEA8u; }
        if (ctx->pc != 0x11AEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AEA8u; }
        if (ctx->pc != 0x11AEA8u) { return; }
    }
    ctx->pc = 0x11AEA8u;
label_11aea8:
    // 0x11aea8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11aea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11aeac:
    // 0x11aeac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11aeacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11aeb0:
    // 0x11aeb0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11aeb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11aeb4:
    // 0x11aeb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11aeb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11aeb8:
    // 0x11aeb8: 0x3e00008  jr          $ra
label_11aebc:
    if (ctx->pc == 0x11AEBCu) {
        ctx->pc = 0x11AEBCu;
            // 0x11aebc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x11AEC0u;
        goto label_11aec0;
    }
    ctx->pc = 0x11AEB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AEB8u;
            // 0x11aebc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11AEC0u;
label_11aec0:
    // 0x11aec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11aec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_11aec4:
    // 0x11aec4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x11aec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_11aec8:
    // 0x11aec8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11aec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11aecc:
    // 0x11aecc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11aeccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11aed0:
    // 0x11aed0: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x11aed0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_11aed4:
    // 0x11aed4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_11aed8:
    // 0x11aed8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x11aed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_11aedc:
    // 0x11aedc: 0xae039e20  sw          $v1, -0x61E0($s0)
    ctx->pc = 0x11aedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294942240), GPR_U32(ctx, 3));
label_11aee0:
    // 0x11aee0: 0x8e029e20  lw          $v0, -0x61E0($s0)
    ctx->pc = 0x11aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942240)));
label_11aee4:
    // 0x11aee4: 0xac829e24  sw          $v0, -0x61DC($a0)
    ctx->pc = 0x11aee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294942244), GPR_U32(ctx, 2));
label_11aee8:
    // 0x11aee8: 0x8e039e20  lw          $v1, -0x61E0($s0)
    ctx->pc = 0x11aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942240)));
label_11aeec:
    // 0x11aeec: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
label_11aef0:
    if (ctx->pc == 0x11AEF0u) {
        ctx->pc = 0x11AEF0u;
            // 0x11aef0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x11AEF4u;
        goto label_11aef4;
    }
    ctx->pc = 0x11AEECu;
    {
        const bool branch_taken_0x11aeec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x11AEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AEECu;
            // 0x11aef0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aeec) {
            ctx->pc = 0x11AF08u;
            goto label_11af08;
        }
    }
    ctx->pc = 0x11AEF4u;
label_11aef4:
    // 0x11aef4: 0xae009e20  sw          $zero, -0x61E0($s0)
    ctx->pc = 0x11aef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294942240), GPR_U32(ctx, 0));
label_11aef8:
    // 0x11aef8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_11aefc:
    // 0x11aefc: 0xac409df4  sw          $zero, -0x620C($v0)
    ctx->pc = 0x11aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942196), GPR_U32(ctx, 0));
label_11af00:
    // 0x11af00: 0x10000014  b           . + 4 + (0x14 << 2)
label_11af04:
    if (ctx->pc == 0x11AF04u) {
        ctx->pc = 0x11AF04u;
            // 0x11af04: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x11AF08u;
        goto label_11af08;
    }
    ctx->pc = 0x11AF00u;
    {
        const bool branch_taken_0x11af00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF00u;
            // 0x11af04: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af00) {
            ctx->pc = 0x11AF54u;
            goto label_11af54;
        }
    }
    ctx->pc = 0x11AF08u;
label_11af08:
    // 0x11af08: 0x8c449de8  lw          $a0, -0x6218($v0)
    ctx->pc = 0x11af08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942184)));
label_11af0c:
    // 0x11af0c: 0xc043324  jal         func_10CC90
label_11af10:
    if (ctx->pc == 0x11AF10u) {
        ctx->pc = 0x11AF14u;
        goto label_11af14;
    }
    ctx->pc = 0x11AF0Cu;
    SET_GPR_U32(ctx, 31, 0x11AF14u);
    ctx->pc = 0x10CC90u;
    if (runtime->hasFunction(0x10CC90u)) {
        auto targetFn = runtime->lookupFunction(0x10CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF14u; }
        if (ctx->pc != 0x11AF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF14u; }
        if (ctx->pc != 0x11AF14u) { return; }
    }
    ctx->pc = 0x11AF14u;
label_11af14:
    // 0x11af14: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x11af14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_11af18:
    // 0x11af18: 0x8c629dd4  lw          $v0, -0x622C($v1)
    ctx->pc = 0x11af18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942164)));
label_11af1c:
    // 0x11af1c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_11af20:
    if (ctx->pc == 0x11AF20u) {
        ctx->pc = 0x11AF20u;
            // 0x11af20: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->pc = 0x11AF24u;
        goto label_11af24;
    }
    ctx->pc = 0x11AF1Cu;
    {
        const bool branch_taken_0x11af1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF1Cu;
            // 0x11af20: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af1c) {
            ctx->pc = 0x11AF44u;
            goto label_11af44;
        }
    }
    ctx->pc = 0x11AF24u;
label_11af24:
    // 0x11af24: 0x8c43d840  lw          $v1, -0x27C0($v0)
    ctx->pc = 0x11af24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957120)));
label_11af28:
    // 0x11af28: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_11af2c:
    if (ctx->pc == 0x11AF2Cu) {
        ctx->pc = 0x11AF2Cu;
            // 0x11af2c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x11AF30u;
        goto label_11af30;
    }
    ctx->pc = 0x11AF28u;
    {
        const bool branch_taken_0x11af28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF28u;
            // 0x11af2c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11af28) {
            ctx->pc = 0x11AF44u;
            goto label_11af44;
        }
    }
    ctx->pc = 0x11AF30u;
label_11af30:
    // 0x11af30: 0x8c449de0  lw          $a0, -0x6220($v0)
    ctx->pc = 0x11af30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942176)));
label_11af34:
    // 0x11af34: 0xc043324  jal         func_10CC90
label_11af38:
    if (ctx->pc == 0x11AF38u) {
        ctx->pc = 0x11AF3Cu;
        goto label_11af3c;
    }
    ctx->pc = 0x11AF34u;
    SET_GPR_U32(ctx, 31, 0x11AF3Cu);
    ctx->pc = 0x10CC90u;
    if (runtime->hasFunction(0x10CC90u)) {
        auto targetFn = runtime->lookupFunction(0x10CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF3Cu; }
        if (ctx->pc != 0x11AF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AF3Cu; }
        if (ctx->pc != 0x11AF3Cu) { return; }
    }
    ctx->pc = 0x11AF3Cu;
label_11af3c:
    // 0x11af3c: 0x10000003  b           . + 4 + (0x3 << 2)
label_11af40:
    if (ctx->pc == 0x11AF40u) {
        ctx->pc = 0x11AF44u;
        goto label_11af44;
    }
    ctx->pc = 0x11AF3Cu;
    {
        const bool branch_taken_0x11af3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11af3c) {
            ctx->pc = 0x11AF4Cu;
            goto label_11af4c;
        }
    }
    ctx->pc = 0x11AF44u;
label_11af44:
    // 0x11af44: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11af44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_11af48:
    // 0x11af48: 0xac409df4  sw          $zero, -0x620C($v0)
    ctx->pc = 0x11af48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942196), GPR_U32(ctx, 0));
label_11af4c:
    // 0x11af4c: 0xae009e20  sw          $zero, -0x61E0($s0)
    ctx->pc = 0x11af4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294942240), GPR_U32(ctx, 0));
label_11af50:
    // 0x11af50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11af50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11af54:
    // 0x11af54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11af54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11af58:
    // 0x11af58: 0x3e00008  jr          $ra
label_11af5c:
    if (ctx->pc == 0x11AF5Cu) {
        ctx->pc = 0x11AF5Cu;
            // 0x11af5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x11AF60u;
        goto label_11af60;
    }
    ctx->pc = 0x11AF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AF58u;
            // 0x11af5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11AF60u;
label_11af60:
    // 0x11af60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11af60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_11af64:
    // 0x11af64: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x11af64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_11af68:
    // 0x11af68: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x11af68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_11af6c:
    // 0x11af6c: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x11af6cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
label_11af70:
    // 0x11af70: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11af70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_11af74:
    // 0x11af74: 0x3c170036  lui         $s7, 0x36
    ctx->pc = 0x11af74u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)54 << 16));
label_11af78:
    // 0x11af78: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x11af78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_11af7c:
    // 0x11af7c: 0x3c16003e  lui         $s6, 0x3E
    ctx->pc = 0x11af7cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)62 << 16));
label_11af80:
    // 0x11af80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11af80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_11af84:
    // 0x11af84: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x11af84u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
label_11af88:
    // 0x11af88: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11af88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_11af8c:
    // 0x11af8c: 0x3c140036  lui         $s4, 0x36
    ctx->pc = 0x11af8cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)54 << 16));
label_11af90:
    // 0x11af90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11af90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11af94:
    // 0x11af94: 0x3c130036  lui         $s3, 0x36
    ctx->pc = 0x11af94u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)54 << 16));
label_11af98:
    // 0x11af98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11af98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11af9c:
    // 0x11af9c: 0x3c120041  lui         $s2, 0x41
    ctx->pc = 0x11af9cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
label_11afa0:
    // 0x11afa0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11afa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_11afa4:
    // 0x11afa4: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x11afa4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
label_11afa8:
    // 0x11afa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11afa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11afac:
    // 0x11afac: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11afacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_11afb0:
    // 0x11afb0: 0xc043328  jal         func_10CCA0
label_11afb4:
    if (ctx->pc == 0x11AFB4u) {
        ctx->pc = 0x11AFB4u;
            // 0x11afb4: 0x8c449de0  lw          $a0, -0x6220($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942176)));
        ctx->pc = 0x11AFB8u;
        goto label_11afb8;
    }
    ctx->pc = 0x11AFB0u;
    SET_GPR_U32(ctx, 31, 0x11AFB8u);
    ctx->pc = 0x11AFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AFB0u;
            // 0x11afb4: 0x8c449de0  lw          $a0, -0x6220($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AFB8u; }
        if (ctx->pc != 0x11AFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AFB8u; }
        if (ctx->pc != 0x11AFB8u) { return; }
    }
    ctx->pc = 0x11AFB8u;
label_11afb8:
    // 0x11afb8: 0x8e839e20  lw          $v1, -0x61E0($s4)
    ctx->pc = 0x11afb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294942240)));
label_11afbc:
    // 0x11afbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11afbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11afc0:
    // 0x11afc0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_11afc4:
    if (ctx->pc == 0x11AFC4u) {
        ctx->pc = 0x11AFC4u;
            // 0x11afc4: 0x8ee29dd0  lw          $v0, -0x6230($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294942160)));
        ctx->pc = 0x11AFC8u;
        goto label_11afc8;
    }
    ctx->pc = 0x11AFC0u;
    {
        const bool branch_taken_0x11afc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11AFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AFC0u;
            // 0x11afc4: 0x8ee29dd0  lw          $v0, -0x6230($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294942160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afc0) {
            ctx->pc = 0x11AFE4u;
            goto label_11afe4;
        }
    }
    ctx->pc = 0x11AFC8u;
label_11afc8:
    // 0x11afc8: 0xae609df4  sw          $zero, -0x620C($s3)
    ctx->pc = 0x11afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294942196), GPR_U32(ctx, 0));
label_11afcc:
    // 0x11afcc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11afccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_11afd0:
    // 0x11afd0: 0xae809e20  sw          $zero, -0x61E0($s4)
    ctx->pc = 0x11afd0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294942240), GPR_U32(ctx, 0));
label_11afd4:
    // 0x11afd4: 0x0  nop
    ctx->pc = 0x11afd4u;
    // NOP
label_11afd8:
    // 0x11afd8: 0xc0432a8  jal         func_10CAA0
label_11afdc:
    if (ctx->pc == 0x11AFDCu) {
        ctx->pc = 0x11AFDCu;
            // 0x11afdc: 0xafc0d854  sw          $zero, -0x27AC($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294957140), GPR_U32(ctx, 0));
        ctx->pc = 0x11AFE0u;
        goto label_11afe0;
    }
    ctx->pc = 0x11AFD8u;
    SET_GPR_U32(ctx, 31, 0x11AFE0u);
    ctx->pc = 0x11AFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AFD8u;
            // 0x11afdc: 0xafc0d854  sw          $zero, -0x27AC($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294957140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAA0u;
    if (runtime->hasFunction(0x10CAA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AFE0u; }
        if (ctx->pc != 0x11AFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallExitDeleteThreadWrapper_0x10caa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AFE0u; }
        if (ctx->pc != 0x11AFE0u) { return; }
    }
    ctx->pc = 0x11AFE0u;
label_11afe0:
    // 0x11afe0: 0x8ee29dd0  lw          $v0, -0x6230($s7)
    ctx->pc = 0x11afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294942160)));
label_11afe4:
    // 0x11afe4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_11afe8:
    if (ctx->pc == 0x11AFE8u) {
        ctx->pc = 0x11AFE8u;
            // 0x11afe8: 0x26c4b188  addiu       $a0, $s6, -0x4E78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947208));
        ctx->pc = 0x11AFECu;
        goto label_11afec;
    }
    ctx->pc = 0x11AFE4u;
    {
        const bool branch_taken_0x11afe4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11AFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11AFE4u;
            // 0x11afe8: 0x26c4b188  addiu       $a0, $s6, -0x4E78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11afe4) {
            ctx->pc = 0x11AFF8u;
            goto label_11aff8;
        }
    }
    ctx->pc = 0x11AFECu;
label_11afec:
    // 0x11afec: 0x8e45d840  lw          $a1, -0x27C0($s2)
    ctx->pc = 0x11afecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294957120)));
label_11aff0:
    // 0x11aff0: 0xc043e52  jal         func_10F948
label_11aff4:
    if (ctx->pc == 0x11AFF4u) {
        ctx->pc = 0x11AFF4u;
            // 0x11aff4: 0x8e269e24  lw          $a2, -0x61DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942244)));
        ctx->pc = 0x11AFF8u;
        goto label_11aff8;
    }
    ctx->pc = 0x11AFF0u;
    SET_GPR_U32(ctx, 31, 0x11AFF8u);
    ctx->pc = 0x11AFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11AFF0u;
            // 0x11aff4: 0x8e269e24  lw          $a2, -0x61DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942244)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AFF8u; }
        if (ctx->pc != 0x11AFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11AFF8u; }
        if (ctx->pc != 0x11AFF8u) { return; }
    }
    ctx->pc = 0x11AFF8u;
label_11aff8:
    // 0x11aff8: 0x8e43d840  lw          $v1, -0x27C0($s2)
    ctx->pc = 0x11aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294957120)));
label_11affc:
    // 0x11affc: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_11b000:
    if (ctx->pc == 0x11B000u) {
        ctx->pc = 0x11B004u;
        goto label_11b004;
    }
    ctx->pc = 0x11AFFCu;
    {
        const bool branch_taken_0x11affc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11affc) {
            ctx->pc = 0x11B024u;
            goto label_11b024;
        }
    }
    ctx->pc = 0x11B004u;
label_11b004:
    // 0x11b004: 0x8e229e24  lw          $v0, -0x61DC($s1)
    ctx->pc = 0x11b004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942244)));
label_11b008:
    // 0x11b008: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_11b00c:
    if (ctx->pc == 0x11B00Cu) {
        ctx->pc = 0x11B010u;
        goto label_11b010;
    }
    ctx->pc = 0x11B008u;
    {
        const bool branch_taken_0x11b008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b008) {
            ctx->pc = 0x11B024u;
            goto label_11b024;
        }
    }
    ctx->pc = 0x11B010u;
label_11b010:
    // 0x11b010: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x11b010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_11b014:
    // 0x11b014: 0x8ebcd844  lw          $gp, -0x27BC($s5)
    ctx->pc = 0x11b014u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294957124)));
label_11b018:
    // 0x11b018: 0x60f809  jalr        $v1
label_11b01c:
    if (ctx->pc == 0x11B01Cu) {
        ctx->pc = 0x11B01Cu;
            // 0x11b01c: 0x8e249e24  lw          $a0, -0x61DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942244)));
        ctx->pc = 0x11B020u;
        goto label_11b020;
    }
    ctx->pc = 0x11B018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x11B020u);
        ctx->pc = 0x11B01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B018u;
            // 0x11b01c: 0x8e249e24  lw          $a0, -0x61DC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942244)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11B020u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11B020u; }
            if (ctx->pc != 0x11B020u) { return; }
        }
        }
    }
    ctx->pc = 0x11B020u;
label_11b020:
    // 0x11b020: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x11b020u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b024:
    // 0x11b024: 0xae609df4  sw          $zero, -0x620C($s3)
    ctx->pc = 0x11b024u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294942196), GPR_U32(ctx, 0));
label_11b028:
    // 0x11b028: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
label_11b02c:
    if (ctx->pc == 0x11B02Cu) {
        ctx->pc = 0x11B02Cu;
            // 0x11b02c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x11B030u;
        goto label_11b030;
    }
    ctx->pc = 0x11B028u;
    {
        const bool branch_taken_0x11b028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B028u;
            // 0x11b02c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b028) {
            ctx->pc = 0x11AFB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11afb0;
        }
    }
    ctx->pc = 0x11B030u;
label_11b030:
    // 0x11b030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_11b034:
    // 0x11b034: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x11b034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11b038:
    // 0x11b038: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11b038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_11b03c:
    // 0x11b03c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x11b03cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11b040:
    // 0x11b040: 0x3c110036  lui         $s1, 0x36
    ctx->pc = 0x11b040u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
label_11b044:
    // 0x11b044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11b044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11b048:
    // 0x11b048: 0x8e249dd4  lw          $a0, -0x622C($s1)
    ctx->pc = 0x11b048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942164)));
label_11b04c:
    // 0x11b04c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x11b04cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b050:
    // 0x11b050: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
label_11b054:
    if (ctx->pc == 0x11B054u) {
        ctx->pc = 0x11B054u;
            // 0x11b054: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->pc = 0x11B058u;
        goto label_11b058;
    }
    ctx->pc = 0x11B050u;
    {
        const bool branch_taken_0x11b050 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B050u;
            // 0x11b054: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b050) {
            ctx->pc = 0x11B0A8u;
            goto label_11b0a8;
        }
    }
    ctx->pc = 0x11B058u;
label_11b058:
    // 0x11b058: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11b058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_11b05c:
    // 0x11b05c: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x11b05cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
label_11b060:
    // 0x11b060: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x11b060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
label_11b064:
    // 0x11b064: 0x2442d858  addiu       $v0, $v0, -0x27A8
    ctx->pc = 0x11b064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957144));
label_11b068:
    // 0x11b068: 0x2463af60  addiu       $v1, $v1, -0x50A0
    ctx->pc = 0x11b068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946656));
label_11b06c:
    // 0x11b06c: 0x24a5b1b0  addiu       $a1, $a1, -0x4E50
    ctx->pc = 0x11b06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947248));
label_11b070:
    // 0x11b070: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x11b070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
label_11b074:
    // 0x11b074: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11b074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11b078:
    // 0x11b078: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x11b078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_11b07c:
    // 0x11b07c: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x11b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
label_11b080:
    // 0x11b080: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x11b080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
label_11b084:
    // 0x11b084: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x11b084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
label_11b088:
    // 0x11b088: 0xc043298  jal         func_10CA60
label_11b08c:
    if (ctx->pc == 0x11B08Cu) {
        ctx->pc = 0x11B08Cu;
            // 0x11b08c: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x11B090u;
        goto label_11b090;
    }
    ctx->pc = 0x11B088u;
    SET_GPR_U32(ctx, 31, 0x11B090u);
    ctx->pc = 0x11B08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B088u;
            // 0x11b08c: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA60u;
    if (runtime->hasFunction(0x10CA60u)) {
        auto targetFn = runtime->lookupFunction(0x10CA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B090u; }
        if (ctx->pc != 0x11B090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateThreadWrapper_0x10ca60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B090u; }
        if (ctx->pc != 0x11B090u) { return; }
    }
    ctx->pc = 0x11B090u;
label_11b090:
    // 0x11b090: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b094:
    // 0x11b094: 0xae229dd4  sw          $v0, -0x622C($s1)
    ctx->pc = 0x11b094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294942164), GPR_U32(ctx, 2));
label_11b098:
    // 0x11b098: 0xc043768  jal         func_10DDA0
label_11b09c:
    if (ctx->pc == 0x11B09Cu) {
        ctx->pc = 0x11B09Cu;
            // 0x11b09c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11B0A0u;
        goto label_11b0a0;
    }
    ctx->pc = 0x11B098u;
    SET_GPR_U32(ctx, 31, 0x11B0A0u);
    ctx->pc = 0x11B09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B098u;
            // 0x11b09c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10DDA0u;
    if (runtime->hasFunction(0x10DDA0u)) {
        auto targetFn = runtime->lookupFunction(0x10DDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B0A0u; }
        if (ctx->pc != 0x11B0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiThreadStartWithContextInit_0x10dda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B0A0u; }
        if (ctx->pc != 0x11B0A0u) { return; }
    }
    ctx->pc = 0x11B0A0u;
label_11b0a0:
    // 0x11b0a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_11b0a4:
    if (ctx->pc == 0x11B0A4u) {
        ctx->pc = 0x11B0A4u;
            // 0x11b0a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11B0A8u;
        goto label_11b0a8;
    }
    ctx->pc = 0x11B0A0u;
    {
        const bool branch_taken_0x11b0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0A0u;
            // 0x11b0a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0a0) {
            ctx->pc = 0x11B0B8u;
            goto label_11b0b8;
        }
    }
    ctx->pc = 0x11B0A8u;
label_11b0a8:
    // 0x11b0a8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x11b0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_11b0ac:
    // 0x11b0ac: 0xc0432bc  jal         func_10CAF0
label_11b0b0:
    if (ctx->pc == 0x11B0B0u) {
        ctx->pc = 0x11B0B0u;
            // 0x11b0b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11B0B4u;
        goto label_11b0b4;
    }
    ctx->pc = 0x11B0ACu;
    SET_GPR_U32(ctx, 31, 0x11B0B4u);
    ctx->pc = 0x11B0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0ACu;
            // 0x11b0b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (runtime->hasFunction(0x10CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B0B4u; }
        if (ctx->pc != 0x11B0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11B0B4u; }
        if (ctx->pc != 0x11B0B4u) { return; }
    }
    ctx->pc = 0x11B0B4u;
label_11b0b4:
    // 0x11b0b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11b0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b0b8:
    // 0x11b0b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11b0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11b0bc:
    // 0x11b0bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11b0bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11b0c0:
    // 0x11b0c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11b0c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b0c4:
    // 0x11b0c4: 0x3e00008  jr          $ra
label_11b0c8:
    if (ctx->pc == 0x11B0C8u) {
        ctx->pc = 0x11B0C8u;
            // 0x11b0c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x11B0CCu;
        goto label_11b0cc;
    }
    ctx->pc = 0x11B0C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0C4u;
            // 0x11b0c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11B0CCu;
label_11b0cc:
    // 0x11b0cc: 0x0  nop
    ctx->pc = 0x11b0ccu;
    // NOP
label_11b0d0:
    // 0x11b0d0: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x11b0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_11b0d4:
    // 0x11b0d4: 0x853825  or          $a3, $a0, $a1
    ctx->pc = 0x11b0d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_11b0d8:
    // 0x11b0d8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x11b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_11b0dc:
    // 0x11b0dc: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_11b0e0:
    if (ctx->pc == 0x11B0E0u) {
        ctx->pc = 0x11B0E0u;
            // 0x11b0e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x11B0E4u;
        goto label_11b0e4;
    }
    ctx->pc = 0x11B0DCu;
    {
        const bool branch_taken_0x11b0dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11B0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0DCu;
            // 0x11b0e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0dc) {
            ctx->pc = 0x11B130u;
            goto label_11b130;
        }
    }
    ctx->pc = 0x11B0E4u;
label_11b0e4:
    // 0x11b0e4: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x11b0e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_11b0e8:
    // 0x11b0e8: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_11b0ec:
    if (ctx->pc == 0x11B0ECu) {
        ctx->pc = 0x11B0ECu;
            // 0x11b0ec: 0x1255025  or          $t2, $t1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
        ctx->pc = 0x11B0F0u;
        goto label_11b0f0;
    }
    ctx->pc = 0x11B0E8u;
    {
        const bool branch_taken_0x11b0e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11B0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B0E8u;
            // 0x11b0ec: 0x1255025  or          $t2, $t1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b0e8) {
            ctx->pc = 0x11B130u;
            goto label_11b130;
        }
    }
    ctx->pc = 0x11B0F0u;
label_11b0f0:
    // 0x11b0f0: 0x24e80010  addiu       $t0, $a3, 0x10
    ctx->pc = 0x11b0f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_11b0f4:
    // 0x11b0f4: 0x3c0b0036  lui         $t3, 0x36
    ctx->pc = 0x11b0f4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)54 << 16));
label_11b0f8:
    // 0x11b0f8: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x11b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_11b0fc:
    // 0x11b0fc: 0x0  nop
    ctx->pc = 0x11b0fcu;
    // NOP
label_11b100:
    // 0x11b100: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x11b100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_11b104:
    // 0x11b104: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11b104u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_11b108:
    // 0x11b108: 0x1262021  addu        $a0, $t1, $a2
    ctx->pc = 0x11b108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_11b10c:
    // 0x11b10c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11b10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_11b110:
    // 0x11b110: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x11b110u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_11b114:
    // 0x11b114: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11b114u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_11b118:
    // 0x11b118: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x11b118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_11b11c:
    // 0x11b11c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x11b11cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11b120:
    // 0x11b120: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_11b124:
    if (ctx->pc == 0x11B124u) {
        ctx->pc = 0x11B124u;
            // 0x11b124: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->pc = 0x11B128u;
        goto label_11b128;
    }
    ctx->pc = 0x11B120u;
    {
        const bool branch_taken_0x11b120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B120u;
            // 0x11b124: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b120) {
            ctx->pc = 0x11B100u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b100;
        }
    }
    ctx->pc = 0x11B128u;
label_11b128:
    // 0x11b128: 0x10000003  b           . + 4 + (0x3 << 2)
label_11b12c:
    if (ctx->pc == 0x11B12Cu) {
        ctx->pc = 0x11B12Cu;
            // 0x11b12c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->pc = 0x11B130u;
        goto label_11b130;
    }
    ctx->pc = 0x11B128u;
    {
        const bool branch_taken_0x11b128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B128u;
            // 0x11b12c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b128) {
            ctx->pc = 0x11B138u;
            goto label_11b138;
        }
    }
    ctx->pc = 0x11B130u;
label_11b130:
    // 0x11b130: 0x3c0b0036  lui         $t3, 0x36
    ctx->pc = 0x11b130u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)54 << 16));
label_11b134:
    // 0x11b134: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x11b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_11b138:
    // 0x11b138: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
label_11b13c:
    if (ctx->pc == 0x11B13Cu) {
        ctx->pc = 0x11B13Cu;
            // 0x11b13c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->pc = 0x11B140u;
        goto label_11b140;
    }
    ctx->pc = 0x11B138u;
    {
        const bool branch_taken_0x11b138 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11B13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B138u;
            // 0x11b13c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b138) {
            ctx->pc = 0x11B180u;
            goto label_11b180;
        }
    }
    ctx->pc = 0x11B140u;
label_11b140:
    // 0x11b140: 0x8ce9000c  lw          $t1, 0xC($a3)
    ctx->pc = 0x11b140u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_11b144:
    // 0x11b144: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11b144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b148:
    // 0x11b148: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_11b14c:
    if (ctx->pc == 0x11B14Cu) {
        ctx->pc = 0x11B14Cu;
            // 0x11b14c: 0x1225025  or          $t2, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->pc = 0x11B150u;
        goto label_11b150;
    }
    ctx->pc = 0x11B148u;
    {
        const bool branch_taken_0x11b148 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11B14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B148u;
            // 0x11b14c: 0x1225025  or          $t2, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b148) {
            ctx->pc = 0x11B180u;
            goto label_11b180;
        }
    }
    ctx->pc = 0x11B150u;
label_11b150:
    // 0x11b150: 0x24e80050  addiu       $t0, $a3, 0x50
    ctx->pc = 0x11b150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
label_11b154:
    // 0x11b154: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x11b154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_11b158:
    // 0x11b158: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x11b158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_11b15c:
    // 0x11b15c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11b15cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_11b160:
    // 0x11b160: 0x1262021  addu        $a0, $t1, $a2
    ctx->pc = 0x11b160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_11b164:
    // 0x11b164: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11b164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_11b168:
    // 0x11b168: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x11b168u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_11b16c:
    // 0x11b16c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11b16cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_11b170:
    // 0x11b170: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x11b170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_11b174:
    // 0x11b174: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x11b174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_11b178:
    // 0x11b178: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_11b17c:
    if (ctx->pc == 0x11B17Cu) {
        ctx->pc = 0x11B17Cu;
            // 0x11b17c: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->pc = 0x11B180u;
        goto label_11b180;
    }
    ctx->pc = 0x11B178u;
    {
        const bool branch_taken_0x11b178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11B178u;
            // 0x11b17c: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b178) {
            ctx->pc = 0x11B158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11b158;
        }
    }
    ctx->pc = 0x11B180u;
label_11b180:
    // 0x11b180: 0x8046bb0  j           func_11AEC0
label_11b184:
    if (ctx->pc == 0x11B184u) {
        ctx->pc = 0x11B184u;
            // 0x11b184: 0x25649e20  addiu       $a0, $t3, -0x61E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294942240));
        ctx->pc = 0x11B188u;
        goto label_fallthrough_0x11b180;
    }
    ctx->pc = 0x11B180u;
    ctx->pc = 0x11B184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11B180u;
            // 0x11b184: 0x25649e20  addiu       $a0, $t3, -0x61E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294942240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AEC0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_11aec0;
label_fallthrough_0x11b180:
    ctx->pc = 0x11B188u;
    ctx->pc = 0x11b188u;
}
