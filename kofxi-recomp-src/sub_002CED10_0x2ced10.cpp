#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CED10
// Address: 0x2ced10 - 0x2cf0a0
void sub_002CED10_0x2ced10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CED10_0x2ced10");
#endif

    switch (ctx->pc) {
        case 0x2ced10u: goto label_2ced10;
        case 0x2ced14u: goto label_2ced14;
        case 0x2ced18u: goto label_2ced18;
        case 0x2ced1cu: goto label_2ced1c;
        case 0x2ced20u: goto label_2ced20;
        case 0x2ced24u: goto label_2ced24;
        case 0x2ced28u: goto label_2ced28;
        case 0x2ced2cu: goto label_2ced2c;
        case 0x2ced30u: goto label_2ced30;
        case 0x2ced34u: goto label_2ced34;
        case 0x2ced38u: goto label_2ced38;
        case 0x2ced3cu: goto label_2ced3c;
        case 0x2ced40u: goto label_2ced40;
        case 0x2ced44u: goto label_2ced44;
        case 0x2ced48u: goto label_2ced48;
        case 0x2ced4cu: goto label_2ced4c;
        case 0x2ced50u: goto label_2ced50;
        case 0x2ced54u: goto label_2ced54;
        case 0x2ced58u: goto label_2ced58;
        case 0x2ced5cu: goto label_2ced5c;
        case 0x2ced60u: goto label_2ced60;
        case 0x2ced64u: goto label_2ced64;
        case 0x2ced68u: goto label_2ced68;
        case 0x2ced6cu: goto label_2ced6c;
        case 0x2ced70u: goto label_2ced70;
        case 0x2ced74u: goto label_2ced74;
        case 0x2ced78u: goto label_2ced78;
        case 0x2ced7cu: goto label_2ced7c;
        case 0x2ced80u: goto label_2ced80;
        case 0x2ced84u: goto label_2ced84;
        case 0x2ced88u: goto label_2ced88;
        case 0x2ced8cu: goto label_2ced8c;
        case 0x2ced90u: goto label_2ced90;
        case 0x2ced94u: goto label_2ced94;
        case 0x2ced98u: goto label_2ced98;
        case 0x2ced9cu: goto label_2ced9c;
        case 0x2ceda0u: goto label_2ceda0;
        case 0x2ceda4u: goto label_2ceda4;
        case 0x2ceda8u: goto label_2ceda8;
        case 0x2cedacu: goto label_2cedac;
        case 0x2cedb0u: goto label_2cedb0;
        case 0x2cedb4u: goto label_2cedb4;
        case 0x2cedb8u: goto label_2cedb8;
        case 0x2cedbcu: goto label_2cedbc;
        case 0x2cedc0u: goto label_2cedc0;
        case 0x2cedc4u: goto label_2cedc4;
        case 0x2cedc8u: goto label_2cedc8;
        case 0x2cedccu: goto label_2cedcc;
        case 0x2cedd0u: goto label_2cedd0;
        case 0x2cedd4u: goto label_2cedd4;
        case 0x2cedd8u: goto label_2cedd8;
        case 0x2ceddcu: goto label_2ceddc;
        case 0x2cede0u: goto label_2cede0;
        case 0x2cede4u: goto label_2cede4;
        case 0x2cede8u: goto label_2cede8;
        case 0x2cedecu: goto label_2cedec;
        case 0x2cedf0u: goto label_2cedf0;
        case 0x2cedf4u: goto label_2cedf4;
        case 0x2cedf8u: goto label_2cedf8;
        case 0x2cedfcu: goto label_2cedfc;
        case 0x2cee00u: goto label_2cee00;
        case 0x2cee04u: goto label_2cee04;
        case 0x2cee08u: goto label_2cee08;
        case 0x2cee0cu: goto label_2cee0c;
        case 0x2cee10u: goto label_2cee10;
        case 0x2cee14u: goto label_2cee14;
        case 0x2cee18u: goto label_2cee18;
        case 0x2cee1cu: goto label_2cee1c;
        case 0x2cee20u: goto label_2cee20;
        case 0x2cee24u: goto label_2cee24;
        case 0x2cee28u: goto label_2cee28;
        case 0x2cee2cu: goto label_2cee2c;
        case 0x2cee30u: goto label_2cee30;
        case 0x2cee34u: goto label_2cee34;
        case 0x2cee38u: goto label_2cee38;
        case 0x2cee3cu: goto label_2cee3c;
        case 0x2cee40u: goto label_2cee40;
        case 0x2cee44u: goto label_2cee44;
        case 0x2cee48u: goto label_2cee48;
        case 0x2cee4cu: goto label_2cee4c;
        case 0x2cee50u: goto label_2cee50;
        case 0x2cee54u: goto label_2cee54;
        case 0x2cee58u: goto label_2cee58;
        case 0x2cee5cu: goto label_2cee5c;
        case 0x2cee60u: goto label_2cee60;
        case 0x2cee64u: goto label_2cee64;
        case 0x2cee68u: goto label_2cee68;
        case 0x2cee6cu: goto label_2cee6c;
        case 0x2cee70u: goto label_2cee70;
        case 0x2cee74u: goto label_2cee74;
        case 0x2cee78u: goto label_2cee78;
        case 0x2cee7cu: goto label_2cee7c;
        case 0x2cee80u: goto label_2cee80;
        case 0x2cee84u: goto label_2cee84;
        case 0x2cee88u: goto label_2cee88;
        case 0x2cee8cu: goto label_2cee8c;
        case 0x2cee90u: goto label_2cee90;
        case 0x2cee94u: goto label_2cee94;
        case 0x2cee98u: goto label_2cee98;
        case 0x2cee9cu: goto label_2cee9c;
        case 0x2ceea0u: goto label_2ceea0;
        case 0x2ceea4u: goto label_2ceea4;
        case 0x2ceea8u: goto label_2ceea8;
        case 0x2ceeacu: goto label_2ceeac;
        case 0x2ceeb0u: goto label_2ceeb0;
        case 0x2ceeb4u: goto label_2ceeb4;
        case 0x2ceeb8u: goto label_2ceeb8;
        case 0x2ceebcu: goto label_2ceebc;
        case 0x2ceec0u: goto label_2ceec0;
        case 0x2ceec4u: goto label_2ceec4;
        case 0x2ceec8u: goto label_2ceec8;
        case 0x2ceeccu: goto label_2ceecc;
        case 0x2ceed0u: goto label_2ceed0;
        case 0x2ceed4u: goto label_2ceed4;
        case 0x2ceed8u: goto label_2ceed8;
        case 0x2ceedcu: goto label_2ceedc;
        case 0x2ceee0u: goto label_2ceee0;
        case 0x2ceee4u: goto label_2ceee4;
        case 0x2ceee8u: goto label_2ceee8;
        case 0x2ceeecu: goto label_2ceeec;
        case 0x2ceef0u: goto label_2ceef0;
        case 0x2ceef4u: goto label_2ceef4;
        case 0x2ceef8u: goto label_2ceef8;
        case 0x2ceefcu: goto label_2ceefc;
        case 0x2cef00u: goto label_2cef00;
        case 0x2cef04u: goto label_2cef04;
        case 0x2cef08u: goto label_2cef08;
        case 0x2cef0cu: goto label_2cef0c;
        case 0x2cef10u: goto label_2cef10;
        case 0x2cef14u: goto label_2cef14;
        case 0x2cef18u: goto label_2cef18;
        case 0x2cef1cu: goto label_2cef1c;
        case 0x2cef20u: goto label_2cef20;
        case 0x2cef24u: goto label_2cef24;
        case 0x2cef28u: goto label_2cef28;
        case 0x2cef2cu: goto label_2cef2c;
        case 0x2cef30u: goto label_2cef30;
        case 0x2cef34u: goto label_2cef34;
        case 0x2cef38u: goto label_2cef38;
        case 0x2cef3cu: goto label_2cef3c;
        case 0x2cef40u: goto label_2cef40;
        case 0x2cef44u: goto label_2cef44;
        case 0x2cef48u: goto label_2cef48;
        case 0x2cef4cu: goto label_2cef4c;
        case 0x2cef50u: goto label_2cef50;
        case 0x2cef54u: goto label_2cef54;
        case 0x2cef58u: goto label_2cef58;
        case 0x2cef5cu: goto label_2cef5c;
        case 0x2cef60u: goto label_2cef60;
        case 0x2cef64u: goto label_2cef64;
        case 0x2cef68u: goto label_2cef68;
        case 0x2cef6cu: goto label_2cef6c;
        case 0x2cef70u: goto label_2cef70;
        case 0x2cef74u: goto label_2cef74;
        case 0x2cef78u: goto label_2cef78;
        case 0x2cef7cu: goto label_2cef7c;
        case 0x2cef80u: goto label_2cef80;
        case 0x2cef84u: goto label_2cef84;
        case 0x2cef88u: goto label_2cef88;
        case 0x2cef8cu: goto label_2cef8c;
        case 0x2cef90u: goto label_2cef90;
        case 0x2cef94u: goto label_2cef94;
        case 0x2cef98u: goto label_2cef98;
        case 0x2cef9cu: goto label_2cef9c;
        case 0x2cefa0u: goto label_2cefa0;
        case 0x2cefa4u: goto label_2cefa4;
        case 0x2cefa8u: goto label_2cefa8;
        case 0x2cefacu: goto label_2cefac;
        case 0x2cefb0u: goto label_2cefb0;
        case 0x2cefb4u: goto label_2cefb4;
        case 0x2cefb8u: goto label_2cefb8;
        case 0x2cefbcu: goto label_2cefbc;
        case 0x2cefc0u: goto label_2cefc0;
        case 0x2cefc4u: goto label_2cefc4;
        case 0x2cefc8u: goto label_2cefc8;
        case 0x2cefccu: goto label_2cefcc;
        case 0x2cefd0u: goto label_2cefd0;
        case 0x2cefd4u: goto label_2cefd4;
        case 0x2cefd8u: goto label_2cefd8;
        case 0x2cefdcu: goto label_2cefdc;
        case 0x2cefe0u: goto label_2cefe0;
        case 0x2cefe4u: goto label_2cefe4;
        case 0x2cefe8u: goto label_2cefe8;
        case 0x2cefecu: goto label_2cefec;
        case 0x2ceff0u: goto label_2ceff0;
        case 0x2ceff4u: goto label_2ceff4;
        case 0x2ceff8u: goto label_2ceff8;
        case 0x2ceffcu: goto label_2ceffc;
        case 0x2cf000u: goto label_2cf000;
        case 0x2cf004u: goto label_2cf004;
        case 0x2cf008u: goto label_2cf008;
        case 0x2cf00cu: goto label_2cf00c;
        case 0x2cf010u: goto label_2cf010;
        case 0x2cf014u: goto label_2cf014;
        case 0x2cf018u: goto label_2cf018;
        case 0x2cf01cu: goto label_2cf01c;
        case 0x2cf020u: goto label_2cf020;
        case 0x2cf024u: goto label_2cf024;
        case 0x2cf028u: goto label_2cf028;
        case 0x2cf02cu: goto label_2cf02c;
        case 0x2cf030u: goto label_2cf030;
        case 0x2cf034u: goto label_2cf034;
        case 0x2cf038u: goto label_2cf038;
        case 0x2cf03cu: goto label_2cf03c;
        case 0x2cf040u: goto label_2cf040;
        case 0x2cf044u: goto label_2cf044;
        case 0x2cf048u: goto label_2cf048;
        case 0x2cf04cu: goto label_2cf04c;
        case 0x2cf050u: goto label_2cf050;
        case 0x2cf054u: goto label_2cf054;
        case 0x2cf058u: goto label_2cf058;
        case 0x2cf05cu: goto label_2cf05c;
        case 0x2cf060u: goto label_2cf060;
        case 0x2cf064u: goto label_2cf064;
        case 0x2cf068u: goto label_2cf068;
        case 0x2cf06cu: goto label_2cf06c;
        case 0x2cf070u: goto label_2cf070;
        case 0x2cf074u: goto label_2cf074;
        case 0x2cf078u: goto label_2cf078;
        case 0x2cf07cu: goto label_2cf07c;
        case 0x2cf080u: goto label_2cf080;
        case 0x2cf084u: goto label_2cf084;
        case 0x2cf088u: goto label_2cf088;
        case 0x2cf08cu: goto label_2cf08c;
        case 0x2cf090u: goto label_2cf090;
        case 0x2cf094u: goto label_2cf094;
        case 0x2cf098u: goto label_2cf098;
        case 0x2cf09cu: goto label_2cf09c;
        default: break;
    }

    ctx->pc = 0x2ced10u;

label_2ced10:
    // 0x2ced10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ced10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ced14:
    // 0x2ced14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ced14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ced18:
    // 0x2ced18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ced18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ced1c:
    // 0x2ced1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ced1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2ced20:
    // 0x2ced20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ced20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ced24:
    // 0x2ced24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2ced28:
    if (ctx->pc == 0x2CED28u) {
        ctx->pc = 0x2CED28u;
            // 0x2ced28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CED2Cu;
        goto label_2ced2c;
    }
    ctx->pc = 0x2CED24u;
    {
        const bool branch_taken_0x2ced24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CED28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED24u;
            // 0x2ced28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced24) {
            ctx->pc = 0x2CED50u;
            goto label_2ced50;
        }
    }
    ctx->pc = 0x2CED2Cu;
label_2ced2c:
    // 0x2ced2c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2ced2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ced30:
    // 0x2ced30: 0xc0b608e  jal         func_2D8238
label_2ced34:
    if (ctx->pc == 0x2CED34u) {
        ctx->pc = 0x2CED34u;
            // 0x2ced34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CED38u;
        goto label_2ced38;
    }
    ctx->pc = 0x2CED30u;
    SET_GPR_U32(ctx, 31, 0x2CED38u);
    ctx->pc = 0x2CED34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED30u;
            // 0x2ced34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED38u; }
        if (ctx->pc != 0x2CED38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED38u; }
        if (ctx->pc != 0x2CED38u) { return; }
    }
    ctx->pc = 0x2CED38u;
label_2ced38:
    // 0x2ced38: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ced38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ced3c:
    // 0x2ced3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ced3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ced40:
    // 0x2ced40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ced40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ced44:
    // 0x2ced44: 0x80b60dc  j           func_2D8370
label_2ced48:
    if (ctx->pc == 0x2CED48u) {
        ctx->pc = 0x2CED48u;
            // 0x2ced48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2CED4Cu;
        goto label_2ced4c;
    }
    ctx->pc = 0x2CED44u;
    ctx->pc = 0x2CED48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED44u;
            // 0x2ced48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002D8370_0x2d8370(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2CED4Cu;
label_2ced4c:
    // 0x2ced4c: 0x0  nop
    ctx->pc = 0x2ced4cu;
    // NOP
label_2ced50:
    // 0x2ced50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ced50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ced54:
    // 0x2ced54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ced54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ced58:
    // 0x2ced58: 0x3e00008  jr          $ra
label_2ced5c:
    if (ctx->pc == 0x2CED5Cu) {
        ctx->pc = 0x2CED5Cu;
            // 0x2ced5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2CED60u;
        goto label_2ced60;
    }
    ctx->pc = 0x2CED58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CED5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED58u;
            // 0x2ced5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CED60u;
label_2ced60:
    // 0x2ced60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2ced60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2ced64:
    // 0x2ced64: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2ced64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2ced68:
    // 0x2ced68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ced68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ced6c:
    // 0x2ced6c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2ced6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_2ced70:
    // 0x2ced70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ced70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ced74:
    // 0x2ced74: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2ced74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2ced78:
    // 0x2ced78: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2ced78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2ced7c:
    // 0x2ced7c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2ced7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2ced80:
    // 0x2ced80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ced80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ced84:
    // 0x2ced84: 0xc0b385e  jal         func_2CE178
label_2ced88:
    if (ctx->pc == 0x2CED88u) {
        ctx->pc = 0x2CED88u;
            // 0x2ced88: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CED8Cu;
        goto label_2ced8c;
    }
    ctx->pc = 0x2CED84u;
    SET_GPR_U32(ctx, 31, 0x2CED8Cu);
    ctx->pc = 0x2CED88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED84u;
            // 0x2ced88: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE178u;
    if (runtime->hasFunction(0x2CE178u)) {
        auto targetFn = runtime->lookupFunction(0x2CE178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED8Cu; }
        if (ctx->pc != 0x2CED8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE178_0x2ce178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CED8Cu; }
        if (ctx->pc != 0x2CED8Cu) { return; }
    }
    ctx->pc = 0x2CED8Cu;
label_2ced8c:
    // 0x2ced8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ced8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ced90:
    // 0x2ced90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2ced90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ced94:
    // 0x2ced94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2ced94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ced98:
    // 0x2ced98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ced98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ced9c:
    // 0x2ced9c: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
label_2ceda0:
    if (ctx->pc == 0x2CEDA0u) {
        ctx->pc = 0x2CEDA0u;
            // 0x2ceda0: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2CEDA4u;
        goto label_2ceda4;
    }
    ctx->pc = 0x2CED9Cu;
    {
        const bool branch_taken_0x2ced9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CED9Cu;
            // 0x2ceda0: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced9c) {
            ctx->pc = 0x2CEDD0u;
            goto label_2cedd0;
        }
    }
    ctx->pc = 0x2CEDA4u;
label_2ceda4:
    // 0x2ceda4: 0xc0b38fa  jal         func_2CE3E8
label_2ceda8:
    if (ctx->pc == 0x2CEDA8u) {
        ctx->pc = 0x2CEDACu;
        goto label_2cedac;
    }
    ctx->pc = 0x2CEDA4u;
    SET_GPR_U32(ctx, 31, 0x2CEDACu);
    ctx->pc = 0x2CE3E8u;
    if (runtime->hasFunction(0x2CE3E8u)) {
        auto targetFn = runtime->lookupFunction(0x2CE3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEDACu; }
        if (ctx->pc != 0x2CEDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE3E8_0x2ce3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEDACu; }
        if (ctx->pc != 0x2CEDACu) { return; }
    }
    ctx->pc = 0x2CEDACu;
label_2cedac:
    // 0x2cedac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2cedacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cedb0:
    // 0x2cedb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2cedb4:
    // 0x2cedb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2cedb8:
    if (ctx->pc == 0x2CEDB8u) {
        ctx->pc = 0x2CEDB8u;
            // 0x2cedb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEDBCu;
        goto label_2cedbc;
    }
    ctx->pc = 0x2CEDB4u;
    {
        const bool branch_taken_0x2cedb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEDB4u;
            // 0x2cedb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cedb4) {
            ctx->pc = 0x2CEDC8u;
            goto label_2cedc8;
        }
    }
    ctx->pc = 0x2CEDBCu;
label_2cedbc:
    // 0x2cedbc: 0xc0b60dc  jal         func_2D8370
label_2cedc0:
    if (ctx->pc == 0x2CEDC0u) {
        ctx->pc = 0x2CEDC4u;
        goto label_2cedc4;
    }
    ctx->pc = 0x2CEDBCu;
    SET_GPR_U32(ctx, 31, 0x2CEDC4u);
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEDC4u; }
        if (ctx->pc != 0x2CEDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEDC4u; }
        if (ctx->pc != 0x2CEDC4u) { return; }
    }
    ctx->pc = 0x2CEDC4u;
label_2cedc4:
    // 0x2cedc4: 0x0  nop
    ctx->pc = 0x2cedc4u;
    // NOP
label_2cedc8:
    // 0x2cedc8: 0xc0b3872  jal         func_2CE1C8
label_2cedcc:
    if (ctx->pc == 0x2CEDCCu) {
        ctx->pc = 0x2CEDCCu;
            // 0x2cedcc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEDD0u;
        goto label_2cedd0;
    }
    ctx->pc = 0x2CEDC8u;
    SET_GPR_U32(ctx, 31, 0x2CEDD0u);
    ctx->pc = 0x2CEDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEDC8u;
            // 0x2cedcc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE1C8u;
    if (runtime->hasFunction(0x2CE1C8u)) {
        auto targetFn = runtime->lookupFunction(0x2CE1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEDD0u; }
        if (ctx->pc != 0x2CEDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE1C8_0x2ce1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEDD0u; }
        if (ctx->pc != 0x2CEDD0u) { return; }
    }
    ctx->pc = 0x2CEDD0u;
label_2cedd0:
    // 0x2cedd0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2cedd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cedd4:
    // 0x2cedd4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2cedd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2cedd8:
    // 0x2cedd8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2cedd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2ceddc:
    // 0x2ceddc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2ceddcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2cede0:
    // 0x2cede0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2cede0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2cede4:
    // 0x2cede4: 0x3e00008  jr          $ra
label_2cede8:
    if (ctx->pc == 0x2CEDE8u) {
        ctx->pc = 0x2CEDE8u;
            // 0x2cede8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2CEDECu;
        goto label_2cedec;
    }
    ctx->pc = 0x2CEDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEDE4u;
            // 0x2cede8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CEDECu;
label_2cedec:
    // 0x2cedec: 0x0  nop
    ctx->pc = 0x2cedecu;
    // NOP
label_2cedf0:
    // 0x2cedf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cedf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2cedf4:
    // 0x2cedf4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2cedf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2cedf8:
    // 0x2cedf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cedf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cedfc:
    // 0x2cedfc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2cedfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2cee00:
    // 0x2cee00: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2cee00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cee04:
    // 0x2cee04: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2cee04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2cee08:
    // 0x2cee08: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2cee08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2cee0c:
    // 0x2cee0c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2cee0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_2cee10:
    // 0x2cee10: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cee10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2cee14:
    // 0x2cee14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cee14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cee18:
    // 0x2cee18: 0xc0b385e  jal         func_2CE178
label_2cee1c:
    if (ctx->pc == 0x2CEE1Cu) {
        ctx->pc = 0x2CEE1Cu;
            // 0x2cee1c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEE20u;
        goto label_2cee20;
    }
    ctx->pc = 0x2CEE18u;
    SET_GPR_U32(ctx, 31, 0x2CEE20u);
    ctx->pc = 0x2CEE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEE18u;
            // 0x2cee1c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE178u;
    if (runtime->hasFunction(0x2CE178u)) {
        auto targetFn = runtime->lookupFunction(0x2CE178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE20u; }
        if (ctx->pc != 0x2CEE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE178_0x2ce178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE20u; }
        if (ctx->pc != 0x2CEE20u) { return; }
    }
    ctx->pc = 0x2CEE20u;
label_2cee20:
    // 0x2cee20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cee20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cee24:
    // 0x2cee24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2cee24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cee28:
    // 0x2cee28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2cee28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cee2c:
    // 0x2cee2c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2cee2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cee30:
    // 0x2cee30: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
label_2cee34:
    if (ctx->pc == 0x2CEE34u) {
        ctx->pc = 0x2CEE34u;
            // 0x2cee34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEE38u;
        goto label_2cee38;
    }
    ctx->pc = 0x2CEE30u;
    {
        const bool branch_taken_0x2cee30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEE30u;
            // 0x2cee34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cee30) {
            ctx->pc = 0x2CEE4Cu;
            goto label_2cee4c;
        }
    }
    ctx->pc = 0x2CEE38u;
label_2cee38:
    // 0x2cee38: 0xc0b38fa  jal         func_2CE3E8
label_2cee3c:
    if (ctx->pc == 0x2CEE3Cu) {
        ctx->pc = 0x2CEE40u;
        goto label_2cee40;
    }
    ctx->pc = 0x2CEE38u;
    SET_GPR_U32(ctx, 31, 0x2CEE40u);
    ctx->pc = 0x2CE3E8u;
    if (runtime->hasFunction(0x2CE3E8u)) {
        auto targetFn = runtime->lookupFunction(0x2CE3E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE40u; }
        if (ctx->pc != 0x2CEE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE3E8_0x2ce3e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE40u; }
        if (ctx->pc != 0x2CEE40u) { return; }
    }
    ctx->pc = 0x2CEE40u;
label_2cee40:
    // 0x2cee40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cee40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cee44:
    // 0x2cee44: 0xc0b3872  jal         func_2CE1C8
label_2cee48:
    if (ctx->pc == 0x2CEE48u) {
        ctx->pc = 0x2CEE48u;
            // 0x2cee48: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEE4Cu;
        goto label_2cee4c;
    }
    ctx->pc = 0x2CEE44u;
    SET_GPR_U32(ctx, 31, 0x2CEE4Cu);
    ctx->pc = 0x2CEE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEE44u;
            // 0x2cee48: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE1C8u;
    if (runtime->hasFunction(0x2CE1C8u)) {
        auto targetFn = runtime->lookupFunction(0x2CE1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE4Cu; }
        if (ctx->pc != 0x2CEE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE1C8_0x2ce1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE4Cu; }
        if (ctx->pc != 0x2CEE4Cu) { return; }
    }
    ctx->pc = 0x2CEE4Cu;
label_2cee4c:
    // 0x2cee4c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2cee4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cee50:
    // 0x2cee50: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2cee50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cee54:
    // 0x2cee54: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2cee54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2cee58:
    // 0x2cee58: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2cee58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2cee5c:
    // 0x2cee5c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2cee5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2cee60:
    // 0x2cee60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cee60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2cee64:
    // 0x2cee64: 0x3e00008  jr          $ra
label_2cee68:
    if (ctx->pc == 0x2CEE68u) {
        ctx->pc = 0x2CEE68u;
            // 0x2cee68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2CEE6Cu;
        goto label_2cee6c;
    }
    ctx->pc = 0x2CEE64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEE64u;
            // 0x2cee68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CEE6Cu;
label_2cee6c:
    // 0x2cee6c: 0x0  nop
    ctx->pc = 0x2cee6cu;
    // NOP
label_2cee70:
    // 0x2cee70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cee70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2cee74:
    // 0x2cee74: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2cee74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2cee78:
    // 0x2cee78: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cee78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cee7c:
    // 0x2cee7c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2cee7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2cee80:
    // 0x2cee80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cee80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cee84:
    // 0x2cee84: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2cee84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cee88:
    // 0x2cee88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cee88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cee8c:
    // 0x2cee8c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2cee8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_2cee90:
    // 0x2cee90: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2cee90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2cee94:
    // 0x2cee94: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2cee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2cee98:
    // 0x2cee98: 0xc0b3b34  jal         func_2CECD0
label_2cee9c:
    if (ctx->pc == 0x2CEE9Cu) {
        ctx->pc = 0x2CEE9Cu;
            // 0x2cee9c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x2CEEA0u;
        goto label_2ceea0;
    }
    ctx->pc = 0x2CEE98u;
    SET_GPR_U32(ctx, 31, 0x2CEEA0u);
    ctx->pc = 0x2CEE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEE98u;
            // 0x2cee9c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CECD0u;
    if (runtime->hasFunction(0x2CECD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEEA0u; }
        if (ctx->pc != 0x2CEEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CECD0_0x2cecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEEA0u; }
        if (ctx->pc != 0x2CEEA0u) { return; }
    }
    ctx->pc = 0x2CEEA0u;
label_2ceea0:
    // 0x2ceea0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2ceea0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ceea4:
    // 0x2ceea4: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x2ceea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2ceea8:
    // 0x2ceea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ceea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ceeac:
    // 0x2ceeac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ceeacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ceeb0:
    // 0x2ceeb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ceeb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ceeb4:
    // 0x2ceeb4: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2ceeb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ceeb8:
    // 0x2ceeb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ceeb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ceebc:
    // 0x2ceebc: 0xc0b3526  jal         func_2CD498
label_2ceec0:
    if (ctx->pc == 0x2CEEC0u) {
        ctx->pc = 0x2CEEC0u;
            // 0x2ceec0: 0x27ab0024  addiu       $t3, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->pc = 0x2CEEC4u;
        goto label_2ceec4;
    }
    ctx->pc = 0x2CEEBCu;
    SET_GPR_U32(ctx, 31, 0x2CEEC4u);
    ctx->pc = 0x2CEEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEEBCu;
            // 0x2ceec0: 0x27ab0024  addiu       $t3, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD498u;
    if (runtime->hasFunction(0x2CD498u)) {
        auto targetFn = runtime->lookupFunction(0x2CD498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEEC4u; }
        if (ctx->pc != 0x2CEEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CD498_0x2cd498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEEC4u; }
        if (ctx->pc != 0x2CEEC4u) { return; }
    }
    ctx->pc = 0x2CEEC4u;
label_2ceec4:
    // 0x2ceec4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ceec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ceec8:
    // 0x2ceec8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2ceec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2ceecc:
    // 0x2ceecc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ceed0:
    if (ctx->pc == 0x2CEED0u) {
        ctx->pc = 0x2CEED0u;
            // 0x2ceed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEED4u;
        goto label_2ceed4;
    }
    ctx->pc = 0x2CEECCu;
    {
        const bool branch_taken_0x2ceecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEECCu;
            // 0x2ceed0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ceecc) {
            ctx->pc = 0x2CEEDCu;
            goto label_2ceedc;
        }
    }
    ctx->pc = 0x2CEED4u;
label_2ceed4:
    // 0x2ceed4: 0xc0b60dc  jal         func_2D8370
label_2ceed8:
    if (ctx->pc == 0x2CEED8u) {
        ctx->pc = 0x2CEEDCu;
        goto label_2ceedc;
    }
    ctx->pc = 0x2CEED4u;
    SET_GPR_U32(ctx, 31, 0x2CEEDCu);
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEEDCu; }
        if (ctx->pc != 0x2CEEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEEDCu; }
        if (ctx->pc != 0x2CEEDCu) { return; }
    }
    ctx->pc = 0x2CEEDCu;
label_2ceedc:
    // 0x2ceedc: 0xc0b3b44  jal         func_2CED10
label_2ceee0:
    if (ctx->pc == 0x2CEEE0u) {
        ctx->pc = 0x2CEEE0u;
            // 0x2ceee0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEEE4u;
        goto label_2ceee4;
    }
    ctx->pc = 0x2CEEDCu;
    SET_GPR_U32(ctx, 31, 0x2CEEE4u);
    ctx->pc = 0x2CEEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEEDCu;
            // 0x2ceee0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CED10u;
    goto label_2ced10;
    ctx->pc = 0x2CEEE4u;
label_2ceee4:
    // 0x2ceee4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ceee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ceee8:
    // 0x2ceee8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2ceee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2ceeec:
    // 0x2ceeec: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2ceeecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ceef0:
    // 0x2ceef0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2ceef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ceef4:
    // 0x2ceef4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2ceef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2ceef8:
    // 0x2ceef8: 0x3e00008  jr          $ra
label_2ceefc:
    if (ctx->pc == 0x2CEEFCu) {
        ctx->pc = 0x2CEEFCu;
            // 0x2ceefc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2CEF00u;
        goto label_2cef00;
    }
    ctx->pc = 0x2CEEF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEEF8u;
            // 0x2ceefc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CEF00u;
label_2cef00:
    // 0x2cef00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2cef00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2cef04:
    // 0x2cef04: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2cef04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2cef08:
    // 0x2cef08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cef08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cef0c:
    // 0x2cef0c: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2cef0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_2cef10:
    // 0x2cef10: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2cef10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cef14:
    // 0x2cef14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2cef14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2cef18:
    // 0x2cef18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cef18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cef1c:
    // 0x2cef1c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2cef1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_2cef20:
    // 0x2cef20: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2cef20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2cef24:
    // 0x2cef24: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2cef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_2cef28:
    // 0x2cef28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2cef28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2cef2c:
    // 0x2cef2c: 0xc0b3b34  jal         func_2CECD0
label_2cef30:
    if (ctx->pc == 0x2CEF30u) {
        ctx->pc = 0x2CEF30u;
            // 0x2cef30: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF34u;
        goto label_2cef34;
    }
    ctx->pc = 0x2CEF2Cu;
    SET_GPR_U32(ctx, 31, 0x2CEF34u);
    ctx->pc = 0x2CEF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEF2Cu;
            // 0x2cef30: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CECD0u;
    if (runtime->hasFunction(0x2CECD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CECD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF34u; }
        if (ctx->pc != 0x2CEF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CECD0_0x2cecd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF34u; }
        if (ctx->pc != 0x2CEF34u) { return; }
    }
    ctx->pc = 0x2CEF34u;
label_2cef34:
    // 0x2cef34: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2cef34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cef38:
    // 0x2cef38: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x2cef38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2cef3c:
    // 0x2cef3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cef3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cef40:
    // 0x2cef40: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x2cef40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cef44:
    // 0x2cef44: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x2cef44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cef48:
    // 0x2cef48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2cef48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2cef4c:
    // 0x2cef4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cef4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cef50:
    // 0x2cef50: 0xc0b3526  jal         func_2CD498
label_2cef54:
    if (ctx->pc == 0x2CEF54u) {
        ctx->pc = 0x2CEF54u;
            // 0x2cef54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF58u;
        goto label_2cef58;
    }
    ctx->pc = 0x2CEF50u;
    SET_GPR_U32(ctx, 31, 0x2CEF58u);
    ctx->pc = 0x2CEF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEF50u;
            // 0x2cef54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD498u;
    if (runtime->hasFunction(0x2CD498u)) {
        auto targetFn = runtime->lookupFunction(0x2CD498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF58u; }
        if (ctx->pc != 0x2CEF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CD498_0x2cd498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEF58u; }
        if (ctx->pc != 0x2CEF58u) { return; }
    }
    ctx->pc = 0x2CEF58u;
label_2cef58:
    // 0x2cef58: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cef58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cef5c:
    // 0x2cef5c: 0xc0b3b44  jal         func_2CED10
label_2cef60:
    if (ctx->pc == 0x2CEF60u) {
        ctx->pc = 0x2CEF60u;
            // 0x2cef60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEF64u;
        goto label_2cef64;
    }
    ctx->pc = 0x2CEF5Cu;
    SET_GPR_U32(ctx, 31, 0x2CEF64u);
    ctx->pc = 0x2CEF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEF5Cu;
            // 0x2cef60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CED10u;
    goto label_2ced10;
    ctx->pc = 0x2CEF64u;
label_2cef64:
    // 0x2cef64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cef64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cef68:
    // 0x2cef68: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2cef68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2cef6c:
    // 0x2cef6c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2cef6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2cef70:
    // 0x2cef70: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2cef70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2cef74:
    // 0x2cef74: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2cef74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2cef78:
    // 0x2cef78: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2cef78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2cef7c:
    // 0x2cef7c: 0x3e00008  jr          $ra
label_2cef80:
    if (ctx->pc == 0x2CEF80u) {
        ctx->pc = 0x2CEF80u;
            // 0x2cef80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2CEF84u;
        goto label_2cef84;
    }
    ctx->pc = 0x2CEF7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEF7Cu;
            // 0x2cef80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CEF84u;
label_2cef84:
    // 0x2cef84: 0x0  nop
    ctx->pc = 0x2cef84u;
    // NOP
label_2cef88:
    // 0x2cef88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cef88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cef8c:
    // 0x2cef8c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2cef8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2cef90:
    // 0x2cef90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cef90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cef94:
    // 0x2cef94: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2cef94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2cef98:
    // 0x2cef98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cef98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2cef9c:
    // 0x2cef9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2cef9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2cefa0:
    // 0x2cefa0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2cefa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_2cefa4:
    // 0x2cefa4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2cefa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2cefa8:
    // 0x2cefa8: 0x1480000e  bnez        $a0, . + 4 + (0xE << 2)
label_2cefac:
    if (ctx->pc == 0x2CEFACu) {
        ctx->pc = 0x2CEFACu;
            // 0x2cefac: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CEFB0u;
        goto label_2cefb0;
    }
    ctx->pc = 0x2CEFA8u;
    {
        const bool branch_taken_0x2cefa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CEFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEFA8u;
            // 0x2cefac: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cefa8) {
            ctx->pc = 0x2CEFE4u;
            goto label_2cefe4;
        }
    }
    ctx->pc = 0x2CEFB0u;
label_2cefb0:
    // 0x2cefb0: 0xc0b60b8  jal         func_2D82E0
label_2cefb4:
    if (ctx->pc == 0x2CEFB4u) {
        ctx->pc = 0x2CEFB4u;
            // 0x2cefb4: 0x24047d00  addiu       $a0, $zero, 0x7D00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
        ctx->pc = 0x2CEFB8u;
        goto label_2cefb8;
    }
    ctx->pc = 0x2CEFB0u;
    SET_GPR_U32(ctx, 31, 0x2CEFB8u);
    ctx->pc = 0x2CEFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEFB0u;
            // 0x2cefb4: 0x24047d00  addiu       $a0, $zero, 0x7D00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEFB8u; }
        if (ctx->pc != 0x2CEFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEFB8u; }
        if (ctx->pc != 0x2CEFB8u) { return; }
    }
    ctx->pc = 0x2CEFB8u;
label_2cefb8:
    // 0x2cefb8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2cefb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cefbc:
    // 0x2cefbc: 0x24020803  addiu       $v0, $zero, 0x803
    ctx->pc = 0x2cefbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2051));
label_2cefc0:
    // 0x2cefc0: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_2cefc4:
    if (ctx->pc == 0x2CEFC4u) {
        ctx->pc = 0x2CEFC4u;
            // 0x2cefc4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x2CEFC8u;
        goto label_2cefc8;
    }
    ctx->pc = 0x2CEFC0u;
    {
        const bool branch_taken_0x2cefc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CEFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEFC0u;
            // 0x2cefc4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cefc0) {
            ctx->pc = 0x2CF084u;
            goto label_2cf084;
        }
    }
    ctx->pc = 0x2CEFC8u;
label_2cefc8:
    // 0x2cefc8: 0x24627d00  addiu       $v0, $v1, 0x7D00
    ctx->pc = 0x2cefc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32000));
label_2cefcc:
    // 0x2cefcc: 0x24037d00  addiu       $v1, $zero, 0x7D00
    ctx->pc = 0x2cefccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
label_2cefd0:
    // 0x2cefd0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cefd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cefd4:
    // 0x2cefd4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2cefd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2cefd8:
    // 0x2cefd8: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2cefd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_2cefdc:
    // 0x2cefdc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2cefdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2cefe0:
    // 0x2cefe0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2cefe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2cefe4:
    // 0x2cefe4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cefe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cefe8:
    // 0x2cefe8: 0x10440022  beq         $v0, $a0, . + 4 + (0x22 << 2)
label_2cefec:
    if (ctx->pc == 0x2CEFECu) {
        ctx->pc = 0x2CEFECu;
            // 0x2cefec: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x2CEFF0u;
        goto label_2ceff0;
    }
    ctx->pc = 0x2CEFE8u;
    {
        const bool branch_taken_0x2cefe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2CEFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEFE8u;
            // 0x2cefec: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cefe8) {
            ctx->pc = 0x2CF074u;
            goto label_2cf074;
        }
    }
    ctx->pc = 0x2CEFF0u;
label_2ceff0:
    // 0x2ceff0: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2ceff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ceff4:
    // 0x2ceff4: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x2ceff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2ceff8:
    // 0x2ceff8: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2ceff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_2ceffc:
    // 0x2ceffc: 0xc0b60a2  jal         func_2D8288
label_2cf000:
    if (ctx->pc == 0x2CF000u) {
        ctx->pc = 0x2CF000u;
            // 0x2cf000: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2CF004u;
        goto label_2cf004;
    }
    ctx->pc = 0x2CEFFCu;
    SET_GPR_U32(ctx, 31, 0x2CF004u);
    ctx->pc = 0x2CF000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CEFFCu;
            // 0x2cf000: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8288u;
    if (runtime->hasFunction(0x2D8288u)) {
        auto targetFn = runtime->lookupFunction(0x2D8288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF004u; }
        if (ctx->pc != 0x2CF004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8288_0x2d8288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CF004u; }
        if (ctx->pc != 0x2CF004u) { return; }
    }
    ctx->pc = 0x2CF004u;
label_2cf004:
    // 0x2cf004: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2cf004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2cf008:
    // 0x2cf008: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2cf008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2cf00c:
    // 0x2cf00c: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_2cf010:
    if (ctx->pc == 0x2CF010u) {
        ctx->pc = 0x2CF010u;
            // 0x2cf010: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2CF014u;
        goto label_2cf014;
    }
    ctx->pc = 0x2CF00Cu;
    {
        const bool branch_taken_0x2cf00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf00c) {
            ctx->pc = 0x2CF010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF00Cu;
            // 0x2cf010: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF074u;
            goto label_2cf074;
        }
    }
    ctx->pc = 0x2CF014u;
label_2cf014:
    // 0x2cf014: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2cf014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2cf018:
    // 0x2cf018: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2cf018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2cf01c:
    // 0x2cf01c: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x2cf01cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cf020:
    // 0x2cf020: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2cf020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cf024:
    // 0x2cf024: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2cf024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2cf028:
    // 0x2cf028: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x2cf028u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cf02c:
    // 0x2cf02c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2cf02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2cf030:
    // 0x2cf030: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x2cf030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_2cf034:
    // 0x2cf034: 0x40f809  jalr        $v0
label_2cf038:
    if (ctx->pc == 0x2CF038u) {
        ctx->pc = 0x2CF038u;
            // 0x2cf038: 0xe83823  subu        $a3, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->pc = 0x2CF03Cu;
        goto label_2cf03c;
    }
    ctx->pc = 0x2CF034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2CF03Cu);
        ctx->pc = 0x2CF038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF034u;
            // 0x2cf038: 0xe83823  subu        $a3, $a3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CF03Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CF03Cu; }
            if (ctx->pc != 0x2CF03Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2CF03Cu;
label_2cf03c:
    // 0x2cf03c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_2cf040:
    if (ctx->pc == 0x2CF040u) {
        ctx->pc = 0x2CF040u;
            // 0x2cf040: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2CF044u;
        goto label_2cf044;
    }
    ctx->pc = 0x2CF03Cu;
    {
        const bool branch_taken_0x2cf03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf03c) {
            ctx->pc = 0x2CF040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF03Cu;
            // 0x2cf040: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CF088u;
            goto label_2cf088;
        }
    }
    ctx->pc = 0x2CF044u;
label_2cf044:
    // 0x2cf044: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2cf044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cf048:
    // 0x2cf048: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2cf048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2cf04c:
    // 0x2cf04c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2cf04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cf050:
    // 0x2cf050: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cf050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2cf054:
    // 0x2cf054: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x2cf054u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2cf058:
    // 0x2cf058: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2cf05c:
    if (ctx->pc == 0x2CF05Cu) {
        ctx->pc = 0x2CF05Cu;
            // 0x2cf05c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x2CF060u;
        goto label_2cf060;
    }
    ctx->pc = 0x2CF058u;
    {
        const bool branch_taken_0x2cf058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF058u;
            // 0x2cf05c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf058) {
            ctx->pc = 0x2CF070u;
            goto label_2cf070;
        }
    }
    ctx->pc = 0x2CF060u;
label_2cf060:
    // 0x2cf060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf064:
    // 0x2cf064: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2cf064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2cf068:
    // 0x2cf068: 0x10000002  b           . + 4 + (0x2 << 2)
label_2cf06c:
    if (ctx->pc == 0x2CF06Cu) {
        ctx->pc = 0x2CF06Cu;
            // 0x2cf06c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x2CF070u;
        goto label_2cf070;
    }
    ctx->pc = 0x2CF068u;
    {
        const bool branch_taken_0x2cf068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF068u;
            // 0x2cf06c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf068) {
            ctx->pc = 0x2CF074u;
            goto label_2cf074;
        }
    }
    ctx->pc = 0x2CF070u;
label_2cf070:
    // 0x2cf070: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2cf070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2cf074:
    // 0x2cf074: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2cf074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_2cf078:
    // 0x2cf078: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cf078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cf07c:
    // 0x2cf07c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2cf07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2cf080:
    // 0x2cf080: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2cf080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2cf084:
    // 0x2cf084: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2cf084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2cf088:
    // 0x2cf088: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2cf088u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2cf08c:
    // 0x2cf08c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2cf08cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cf090:
    // 0x2cf090: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cf090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2cf094:
    // 0x2cf094: 0x3e00008  jr          $ra
label_2cf098:
    if (ctx->pc == 0x2CF098u) {
        ctx->pc = 0x2CF098u;
            // 0x2cf098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CF09Cu;
        goto label_2cf09c;
    }
    ctx->pc = 0x2CF094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CF094u;
            // 0x2cf098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CF09Cu;
label_2cf09c:
    // 0x2cf09c: 0x0  nop
    ctx->pc = 0x2cf09cu;
    // NOP
    ctx->pc = 0x2cf0a0u;
}
