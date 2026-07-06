#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BEC10
// Address: 0x1bec10 - 0x1bee00
void sub_001BEC10_0x1bec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEC10_0x1bec10");
#endif

    switch (ctx->pc) {
        case 0x1bec10u: goto label_1bec10;
        case 0x1bec14u: goto label_1bec14;
        case 0x1bec18u: goto label_1bec18;
        case 0x1bec1cu: goto label_1bec1c;
        case 0x1bec20u: goto label_1bec20;
        case 0x1bec24u: goto label_1bec24;
        case 0x1bec28u: goto label_1bec28;
        case 0x1bec2cu: goto label_1bec2c;
        case 0x1bec30u: goto label_1bec30;
        case 0x1bec34u: goto label_1bec34;
        case 0x1bec38u: goto label_1bec38;
        case 0x1bec3cu: goto label_1bec3c;
        case 0x1bec40u: goto label_1bec40;
        case 0x1bec44u: goto label_1bec44;
        case 0x1bec48u: goto label_1bec48;
        case 0x1bec4cu: goto label_1bec4c;
        case 0x1bec50u: goto label_1bec50;
        case 0x1bec54u: goto label_1bec54;
        case 0x1bec58u: goto label_1bec58;
        case 0x1bec5cu: goto label_1bec5c;
        case 0x1bec60u: goto label_1bec60;
        case 0x1bec64u: goto label_1bec64;
        case 0x1bec68u: goto label_1bec68;
        case 0x1bec6cu: goto label_1bec6c;
        case 0x1bec70u: goto label_1bec70;
        case 0x1bec74u: goto label_1bec74;
        case 0x1bec78u: goto label_1bec78;
        case 0x1bec7cu: goto label_1bec7c;
        case 0x1bec80u: goto label_1bec80;
        case 0x1bec84u: goto label_1bec84;
        case 0x1bec88u: goto label_1bec88;
        case 0x1bec8cu: goto label_1bec8c;
        case 0x1bec90u: goto label_1bec90;
        case 0x1bec94u: goto label_1bec94;
        case 0x1bec98u: goto label_1bec98;
        case 0x1bec9cu: goto label_1bec9c;
        case 0x1beca0u: goto label_1beca0;
        case 0x1beca4u: goto label_1beca4;
        case 0x1beca8u: goto label_1beca8;
        case 0x1becacu: goto label_1becac;
        case 0x1becb0u: goto label_1becb0;
        case 0x1becb4u: goto label_1becb4;
        case 0x1becb8u: goto label_1becb8;
        case 0x1becbcu: goto label_1becbc;
        case 0x1becc0u: goto label_1becc0;
        case 0x1becc4u: goto label_1becc4;
        case 0x1becc8u: goto label_1becc8;
        case 0x1becccu: goto label_1beccc;
        case 0x1becd0u: goto label_1becd0;
        case 0x1becd4u: goto label_1becd4;
        case 0x1becd8u: goto label_1becd8;
        case 0x1becdcu: goto label_1becdc;
        case 0x1bece0u: goto label_1bece0;
        case 0x1bece4u: goto label_1bece4;
        case 0x1bece8u: goto label_1bece8;
        case 0x1bececu: goto label_1becec;
        case 0x1becf0u: goto label_1becf0;
        case 0x1becf4u: goto label_1becf4;
        case 0x1becf8u: goto label_1becf8;
        case 0x1becfcu: goto label_1becfc;
        case 0x1bed00u: goto label_1bed00;
        case 0x1bed04u: goto label_1bed04;
        case 0x1bed08u: goto label_1bed08;
        case 0x1bed0cu: goto label_1bed0c;
        case 0x1bed10u: goto label_1bed10;
        case 0x1bed14u: goto label_1bed14;
        case 0x1bed18u: goto label_1bed18;
        case 0x1bed1cu: goto label_1bed1c;
        case 0x1bed20u: goto label_1bed20;
        case 0x1bed24u: goto label_1bed24;
        case 0x1bed28u: goto label_1bed28;
        case 0x1bed2cu: goto label_1bed2c;
        case 0x1bed30u: goto label_1bed30;
        case 0x1bed34u: goto label_1bed34;
        case 0x1bed38u: goto label_1bed38;
        case 0x1bed3cu: goto label_1bed3c;
        case 0x1bed40u: goto label_1bed40;
        case 0x1bed44u: goto label_1bed44;
        case 0x1bed48u: goto label_1bed48;
        case 0x1bed4cu: goto label_1bed4c;
        case 0x1bed50u: goto label_1bed50;
        case 0x1bed54u: goto label_1bed54;
        case 0x1bed58u: goto label_1bed58;
        case 0x1bed5cu: goto label_1bed5c;
        case 0x1bed60u: goto label_1bed60;
        case 0x1bed64u: goto label_1bed64;
        case 0x1bed68u: goto label_1bed68;
        case 0x1bed6cu: goto label_1bed6c;
        case 0x1bed70u: goto label_1bed70;
        case 0x1bed74u: goto label_1bed74;
        case 0x1bed78u: goto label_1bed78;
        case 0x1bed7cu: goto label_1bed7c;
        case 0x1bed80u: goto label_1bed80;
        case 0x1bed84u: goto label_1bed84;
        case 0x1bed88u: goto label_1bed88;
        case 0x1bed8cu: goto label_1bed8c;
        case 0x1bed90u: goto label_1bed90;
        case 0x1bed94u: goto label_1bed94;
        case 0x1bed98u: goto label_1bed98;
        case 0x1bed9cu: goto label_1bed9c;
        case 0x1beda0u: goto label_1beda0;
        case 0x1beda4u: goto label_1beda4;
        case 0x1beda8u: goto label_1beda8;
        case 0x1bedacu: goto label_1bedac;
        case 0x1bedb0u: goto label_1bedb0;
        case 0x1bedb4u: goto label_1bedb4;
        case 0x1bedb8u: goto label_1bedb8;
        case 0x1bedbcu: goto label_1bedbc;
        case 0x1bedc0u: goto label_1bedc0;
        case 0x1bedc4u: goto label_1bedc4;
        case 0x1bedc8u: goto label_1bedc8;
        case 0x1bedccu: goto label_1bedcc;
        case 0x1bedd0u: goto label_1bedd0;
        case 0x1bedd4u: goto label_1bedd4;
        case 0x1bedd8u: goto label_1bedd8;
        case 0x1beddcu: goto label_1beddc;
        case 0x1bede0u: goto label_1bede0;
        case 0x1bede4u: goto label_1bede4;
        case 0x1bede8u: goto label_1bede8;
        case 0x1bedecu: goto label_1bedec;
        case 0x1bedf0u: goto label_1bedf0;
        case 0x1bedf4u: goto label_1bedf4;
        case 0x1bedf8u: goto label_1bedf8;
        case 0x1bedfcu: goto label_1bedfc;
        default: break;
    }

    ctx->pc = 0x1bec10u;

label_1bec10:
    // 0x1bec10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bec10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bec14:
    // 0x1bec14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bec18:
    // 0x1bec18: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_1bec1c:
    if (ctx->pc == 0x1BEC1Cu) {
        ctx->pc = 0x1BEC1Cu;
            // 0x1bec1c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x1BEC20u;
        goto label_1bec20;
    }
    ctx->pc = 0x1BEC18u;
    {
        const bool branch_taken_0x1bec18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC18u;
            // 0x1bec1c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec18) {
            ctx->pc = 0x1BEC38u;
            goto label_1bec38;
        }
    }
    ctx->pc = 0x1BEC20u;
label_1bec20:
    // 0x1bec20: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bec20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bec24:
    // 0x1bec24: 0xc06f838  jal         func_1BE0E0
label_1bec28:
    if (ctx->pc == 0x1BEC28u) {
        ctx->pc = 0x1BEC28u;
            // 0x1bec28: 0x24848c60  addiu       $a0, $a0, -0x73A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937696));
        ctx->pc = 0x1BEC2Cu;
        goto label_1bec2c;
    }
    ctx->pc = 0x1BEC24u;
    SET_GPR_U32(ctx, 31, 0x1BEC2Cu);
    ctx->pc = 0x1BEC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC24u;
            // 0x1bec28: 0x24848c60  addiu       $a0, $a0, -0x73A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (runtime->hasFunction(0x1BE0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEC2Cu; }
        if (ctx->pc != 0x1BEC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE0E0_0x1be0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEC2Cu; }
        if (ctx->pc != 0x1BEC2Cu) { return; }
    }
    ctx->pc = 0x1BEC2Cu;
label_1bec2c:
    // 0x1bec2c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1bec30:
    if (ctx->pc == 0x1BEC30u) {
        ctx->pc = 0x1BEC30u;
            // 0x1bec30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC34u;
        goto label_1bec34;
    }
    ctx->pc = 0x1BEC2Cu;
    {
        const bool branch_taken_0x1bec2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC2Cu;
            // 0x1bec30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec2c) {
            ctx->pc = 0x1BEC68u;
            goto label_1bec68;
        }
    }
    ctx->pc = 0x1BEC34u;
label_1bec34:
    // 0x1bec34: 0x0  nop
    ctx->pc = 0x1bec34u;
    // NOP
label_1bec38:
    // 0x1bec38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bec38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bec3c:
    // 0x1bec3c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1bec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1bec40:
    // 0x1bec40: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1bec44:
    if (ctx->pc == 0x1BEC44u) {
        ctx->pc = 0x1BEC44u;
            // 0x1bec44: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x1BEC48u;
        goto label_1bec48;
    }
    ctx->pc = 0x1BEC40u;
    {
        const bool branch_taken_0x1bec40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bec40) {
            ctx->pc = 0x1BEC44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC40u;
            // 0x1bec44: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BEC58u;
            goto label_1bec58;
        }
    }
    ctx->pc = 0x1BEC48u;
label_1bec48:
    // 0x1bec48: 0x40f809  jalr        $v0
label_1bec4c:
    if (ctx->pc == 0x1BEC4Cu) {
        ctx->pc = 0x1BEC4Cu;
            // 0x1bec4c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x1BEC50u;
        goto label_1bec50;
    }
    ctx->pc = 0x1BEC48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BEC50u);
        ctx->pc = 0x1BEC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC48u;
            // 0x1bec4c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BEC50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BEC50u; }
            if (ctx->pc != 0x1BEC50u) { return; }
        }
        }
    }
    ctx->pc = 0x1BEC50u;
label_1bec50:
    // 0x1bec50: 0x10000004  b           . + 4 + (0x4 << 2)
label_1bec54:
    if (ctx->pc == 0x1BEC54u) {
        ctx->pc = 0x1BEC54u;
            // 0x1bec54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC58u;
        goto label_1bec58;
    }
    ctx->pc = 0x1BEC50u;
    {
        const bool branch_taken_0x1bec50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC50u;
            // 0x1bec54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec50) {
            ctx->pc = 0x1BEC64u;
            goto label_1bec64;
        }
    }
    ctx->pc = 0x1BEC58u;
label_1bec58:
    // 0x1bec58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bec58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bec5c:
    // 0x1bec5c: 0xc06f838  jal         func_1BE0E0
label_1bec60:
    if (ctx->pc == 0x1BEC60u) {
        ctx->pc = 0x1BEC60u;
            // 0x1bec60: 0x24848c80  addiu       $a0, $a0, -0x7380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937728));
        ctx->pc = 0x1BEC64u;
        goto label_1bec64;
    }
    ctx->pc = 0x1BEC5Cu;
    SET_GPR_U32(ctx, 31, 0x1BEC64u);
    ctx->pc = 0x1BEC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC5Cu;
            // 0x1bec60: 0x24848c80  addiu       $a0, $a0, -0x7380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (runtime->hasFunction(0x1BE0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEC64u; }
        if (ctx->pc != 0x1BEC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE0E0_0x1be0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEC64u; }
        if (ctx->pc != 0x1BEC64u) { return; }
    }
    ctx->pc = 0x1BEC64u;
label_1bec64:
    // 0x1bec64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bec64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bec68:
    // 0x1bec68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bec68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bec6c:
    // 0x1bec6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bec6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bec70:
    // 0x1bec70: 0x3e00008  jr          $ra
label_1bec74:
    if (ctx->pc == 0x1BEC74u) {
        ctx->pc = 0x1BEC74u;
            // 0x1bec74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BEC78u;
        goto label_1bec78;
    }
    ctx->pc = 0x1BEC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC70u;
            // 0x1bec74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEC78u;
label_1bec78:
    // 0x1bec78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bec78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bec7c:
    // 0x1bec7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bec7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bec80:
    // 0x1bec80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bec80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bec84:
    // 0x1bec84: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1bec88:
    if (ctx->pc == 0x1BEC88u) {
        ctx->pc = 0x1BEC88u;
            // 0x1bec88: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x1BEC8Cu;
        goto label_1bec8c;
    }
    ctx->pc = 0x1BEC84u;
    {
        const bool branch_taken_0x1bec84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC84u;
            // 0x1bec88: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec84) {
            ctx->pc = 0x1BECA0u;
            goto label_1beca0;
        }
    }
    ctx->pc = 0x1BEC8Cu;
label_1bec8c:
    // 0x1bec8c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bec90:
    // 0x1bec90: 0xc06f838  jal         func_1BE0E0
label_1bec94:
    if (ctx->pc == 0x1BEC94u) {
        ctx->pc = 0x1BEC94u;
            // 0x1bec94: 0x24848c98  addiu       $a0, $a0, -0x7368 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937752));
        ctx->pc = 0x1BEC98u;
        goto label_1bec98;
    }
    ctx->pc = 0x1BEC90u;
    SET_GPR_U32(ctx, 31, 0x1BEC98u);
    ctx->pc = 0x1BEC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC90u;
            // 0x1bec94: 0x24848c98  addiu       $a0, $a0, -0x7368 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (runtime->hasFunction(0x1BE0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEC98u; }
        if (ctx->pc != 0x1BEC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE0E0_0x1be0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEC98u; }
        if (ctx->pc != 0x1BEC98u) { return; }
    }
    ctx->pc = 0x1BEC98u;
label_1bec98:
    // 0x1bec98: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bec9c:
    if (ctx->pc == 0x1BEC9Cu) {
        ctx->pc = 0x1BEC9Cu;
            // 0x1bec9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BECA0u;
        goto label_1beca0;
    }
    ctx->pc = 0x1BEC98u;
    {
        const bool branch_taken_0x1bec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC98u;
            // 0x1bec9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec98) {
            ctx->pc = 0x1BECCCu;
            goto label_1beccc;
        }
    }
    ctx->pc = 0x1BECA0u;
label_1beca0:
    // 0x1beca0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1beca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1beca4:
    // 0x1beca4: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1beca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1beca8:
    // 0x1beca8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1becac:
    if (ctx->pc == 0x1BECACu) {
        ctx->pc = 0x1BECACu;
            // 0x1becac: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x1BECB0u;
        goto label_1becb0;
    }
    ctx->pc = 0x1BECA8u;
    {
        const bool branch_taken_0x1beca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beca8) {
            ctx->pc = 0x1BECACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECA8u;
            // 0x1becac: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BECC0u;
            goto label_1becc0;
        }
    }
    ctx->pc = 0x1BECB0u;
label_1becb0:
    // 0x1becb0: 0x40f809  jalr        $v0
label_1becb4:
    if (ctx->pc == 0x1BECB4u) {
        ctx->pc = 0x1BECB4u;
            // 0x1becb4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x1BECB8u;
        goto label_1becb8;
    }
    ctx->pc = 0x1BECB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BECB8u);
        ctx->pc = 0x1BECB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECB0u;
            // 0x1becb4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BECB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BECB8u; }
            if (ctx->pc != 0x1BECB8u) { return; }
        }
        }
    }
    ctx->pc = 0x1BECB8u;
label_1becb8:
    // 0x1becb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1becbc:
    if (ctx->pc == 0x1BECBCu) {
        ctx->pc = 0x1BECBCu;
            // 0x1becbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BECC0u;
        goto label_1becc0;
    }
    ctx->pc = 0x1BECB8u;
    {
        const bool branch_taken_0x1becb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BECBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECB8u;
            // 0x1becbc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1becb8) {
            ctx->pc = 0x1BECC8u;
            goto label_1becc8;
        }
    }
    ctx->pc = 0x1BECC0u;
label_1becc0:
    // 0x1becc0: 0xc06f838  jal         func_1BE0E0
label_1becc4:
    if (ctx->pc == 0x1BECC4u) {
        ctx->pc = 0x1BECC4u;
            // 0x1becc4: 0x24848cb8  addiu       $a0, $a0, -0x7348 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937784));
        ctx->pc = 0x1BECC8u;
        goto label_1becc8;
    }
    ctx->pc = 0x1BECC0u;
    SET_GPR_U32(ctx, 31, 0x1BECC8u);
    ctx->pc = 0x1BECC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECC0u;
            // 0x1becc4: 0x24848cb8  addiu       $a0, $a0, -0x7348 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (runtime->hasFunction(0x1BE0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BECC8u; }
        if (ctx->pc != 0x1BECC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE0E0_0x1be0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BECC8u; }
        if (ctx->pc != 0x1BECC8u) { return; }
    }
    ctx->pc = 0x1BECC8u;
label_1becc8:
    // 0x1becc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1becc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1beccc:
    // 0x1beccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1becccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1becd0:
    // 0x1becd0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1becd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1becd4:
    // 0x1becd4: 0x3e00008  jr          $ra
label_1becd8:
    if (ctx->pc == 0x1BECD8u) {
        ctx->pc = 0x1BECD8u;
            // 0x1becd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BECDCu;
        goto label_1becdc;
    }
    ctx->pc = 0x1BECD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BECD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECD4u;
            // 0x1becd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BECDCu;
label_1becdc:
    // 0x1becdc: 0x0  nop
    ctx->pc = 0x1becdcu;
    // NOP
label_1bece0:
    // 0x1bece0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bece0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bece4:
    // 0x1bece4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1bece8:
    if (ctx->pc == 0x1BECE8u) {
        ctx->pc = 0x1BECE8u;
            // 0x1bece8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1BECECu;
        goto label_1becec;
    }
    ctx->pc = 0x1BECE4u;
    {
        const bool branch_taken_0x1bece4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BECE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECE4u;
            // 0x1bece8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bece4) {
            ctx->pc = 0x1BED00u;
            goto label_1bed00;
        }
    }
    ctx->pc = 0x1BECECu;
label_1becec:
    // 0x1becec: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bececu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1becf0:
    // 0x1becf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1becf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1becf4:
    // 0x1becf4: 0x24848cd0  addiu       $a0, $a0, -0x7330
    ctx->pc = 0x1becf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937808));
label_1becf8:
    // 0x1becf8: 0x806f838  j           func_1BE0E0
label_1becfc:
    if (ctx->pc == 0x1BECFCu) {
        ctx->pc = 0x1BECFCu;
            // 0x1becfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BED00u;
        goto label_1bed00;
    }
    ctx->pc = 0x1BECF8u;
    ctx->pc = 0x1BECFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BECF8u;
            // 0x1becfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (runtime->hasFunction(0x1BE0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE0E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE0E0_0x1be0e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BED00u;
label_1bed00:
    // 0x1bed00: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bed04:
    // 0x1bed04: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1bed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1bed08:
    // 0x1bed08: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1bed0c:
    if (ctx->pc == 0x1BED0Cu) {
        ctx->pc = 0x1BED0Cu;
            // 0x1bed0c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x1BED10u;
        goto label_1bed10;
    }
    ctx->pc = 0x1BED08u;
    {
        const bool branch_taken_0x1bed08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bed08) {
            ctx->pc = 0x1BED0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED08u;
            // 0x1bed0c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BED28u;
            goto label_1bed28;
        }
    }
    ctx->pc = 0x1BED10u;
label_1bed10:
    // 0x1bed10: 0x40f809  jalr        $v0
label_1bed14:
    if (ctx->pc == 0x1BED14u) {
        ctx->pc = 0x1BED14u;
            // 0x1bed14: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x1BED18u;
        goto label_1bed18;
    }
    ctx->pc = 0x1BED10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BED18u);
        ctx->pc = 0x1BED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED10u;
            // 0x1bed14: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BED18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BED18u; }
            if (ctx->pc != 0x1BED18u) { return; }
        }
        }
    }
    ctx->pc = 0x1BED18u;
label_1bed18:
    // 0x1bed18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bed18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bed1c:
    // 0x1bed1c: 0x3e00008  jr          $ra
label_1bed20:
    if (ctx->pc == 0x1BED20u) {
        ctx->pc = 0x1BED20u;
            // 0x1bed20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BED24u;
        goto label_1bed24;
    }
    ctx->pc = 0x1BED1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BED20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED1Cu;
            // 0x1bed20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BED24u;
label_1bed24:
    // 0x1bed24: 0x0  nop
    ctx->pc = 0x1bed24u;
    // NOP
label_1bed28:
    // 0x1bed28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bed28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bed2c:
    // 0x1bed2c: 0x24848cf0  addiu       $a0, $a0, -0x7310
    ctx->pc = 0x1bed2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937840));
label_1bed30:
    // 0x1bed30: 0x806f838  j           func_1BE0E0
label_1bed34:
    if (ctx->pc == 0x1BED34u) {
        ctx->pc = 0x1BED34u;
            // 0x1bed34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BED38u;
        goto label_1bed38;
    }
    ctx->pc = 0x1BED30u;
    ctx->pc = 0x1BED34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED30u;
            // 0x1bed34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (runtime->hasFunction(0x1BE0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE0E0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE0E0_0x1be0e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BED38u;
label_1bed38:
    // 0x1bed38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bed38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bed3c:
    // 0x1bed3c: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1bed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1bed40:
    // 0x1bed40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bed40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1bed44:
    // 0x1bed44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bed44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bed48:
    // 0x1bed48: 0x24505590  addiu       $s0, $v0, 0x5590
    ctx->pc = 0x1bed48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21904));
label_1bed4c:
    // 0x1bed4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bed4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bed50:
    // 0x1bed50: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1bed50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1bed54:
    // 0x1bed54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bed54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bed58:
    // 0x1bed58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1bed5c:
    if (ctx->pc == 0x1BED5Cu) {
        ctx->pc = 0x1BED5Cu;
            // 0x1bed5c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x1BED60u;
        goto label_1bed60;
    }
    ctx->pc = 0x1BED58u;
    {
        const bool branch_taken_0x1bed58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BED5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED58u;
            // 0x1bed5c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bed58) {
            ctx->pc = 0x1BED74u;
            goto label_1bed74;
        }
    }
    ctx->pc = 0x1BED60u;
label_1bed60:
    // 0x1bed60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bed60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bed64:
    // 0x1bed64: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1bed68:
    if (ctx->pc == 0x1BED68u) {
        ctx->pc = 0x1BED68u;
            // 0x1bed68: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x1BED6Cu;
        goto label_1bed6c;
    }
    ctx->pc = 0x1BED64u;
    {
        const bool branch_taken_0x1bed64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bed64) {
            ctx->pc = 0x1BED68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED64u;
            // 0x1bed68: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BED78u;
            goto label_1bed78;
        }
    }
    ctx->pc = 0x1BED6Cu;
label_1bed6c:
    // 0x1bed6c: 0x40f809  jalr        $v0
label_1bed70:
    if (ctx->pc == 0x1BED70u) {
        ctx->pc = 0x1BED74u;
        goto label_1bed74;
    }
    ctx->pc = 0x1BED6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BED74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BED74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BED74u; }
            if (ctx->pc != 0x1BED74u) { return; }
        }
        }
    }
    ctx->pc = 0x1BED74u;
label_1bed74:
    // 0x1bed74: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1bed74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1bed78:
    // 0x1bed78: 0x623fff7  bgezl       $s1, . + 4 + (-0x9 << 2)
label_1bed7c:
    if (ctx->pc == 0x1BED7Cu) {
        ctx->pc = 0x1BED7Cu;
            // 0x1bed7c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1BED80u;
        goto label_1bed80;
    }
    ctx->pc = 0x1BED78u;
    {
        const bool branch_taken_0x1bed78 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1bed78) {
            ctx->pc = 0x1BED7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED78u;
            // 0x1bed7c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BED58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bed58;
        }
    }
    ctx->pc = 0x1BED80u;
label_1bed80:
    // 0x1bed80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bed80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bed84:
    // 0x1bed84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bed84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bed88:
    // 0x1bed88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bed88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bed8c:
    // 0x1bed8c: 0x3e00008  jr          $ra
label_1bed90:
    if (ctx->pc == 0x1BED90u) {
        ctx->pc = 0x1BED90u;
            // 0x1bed90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BED94u;
        goto label_1bed94;
    }
    ctx->pc = 0x1BED8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BED90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED8Cu;
            // 0x1bed90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BED94u;
label_1bed94:
    // 0x1bed94: 0x0  nop
    ctx->pc = 0x1bed94u;
    // NOP
label_1bed98:
    // 0x1bed98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bed98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bed9c:
    // 0x1bed9c: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1bed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1beda0:
    // 0x1beda0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1beda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1beda4:
    // 0x1beda4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1beda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1beda8:
    // 0x1beda8: 0x24505590  addiu       $s0, $v0, 0x5590
    ctx->pc = 0x1beda8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21904));
label_1bedac:
    // 0x1bedac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bedacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bedb0:
    // 0x1bedb0: 0x2411001f  addiu       $s1, $zero, 0x1F
    ctx->pc = 0x1bedb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1bedb4:
    // 0x1bedb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1bedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bedb8:
    // 0x1bedb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1bedbc:
    if (ctx->pc == 0x1BEDBCu) {
        ctx->pc = 0x1BEDBCu;
            // 0x1bedbc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x1BEDC0u;
        goto label_1bedc0;
    }
    ctx->pc = 0x1BEDB8u;
    {
        const bool branch_taken_0x1bedb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEDB8u;
            // 0x1bedbc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedb8) {
            ctx->pc = 0x1BEDDCu;
            goto label_1beddc;
        }
    }
    ctx->pc = 0x1BEDC0u;
label_1bedc0:
    // 0x1bedc0: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1bedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1bedc4:
    // 0x1bedc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1bedc8:
    if (ctx->pc == 0x1BEDC8u) {
        ctx->pc = 0x1BEDC8u;
            // 0x1bedc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDCCu;
        goto label_1bedcc;
    }
    ctx->pc = 0x1BEDC4u;
    {
        const bool branch_taken_0x1bedc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEDC4u;
            // 0x1bedc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedc4) {
            ctx->pc = 0x1BEDDCu;
            goto label_1beddc;
        }
    }
    ctx->pc = 0x1BEDCCu;
label_1bedcc:
    // 0x1bedcc: 0x24050190  addiu       $a1, $zero, 0x190
    ctx->pc = 0x1bedccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1bedd0:
    // 0x1bedd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bedd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bedd4:
    // 0x1bedd4: 0x40f809  jalr        $v0
label_1bedd8:
    if (ctx->pc == 0x1BEDD8u) {
        ctx->pc = 0x1BEDD8u;
            // 0x1bedd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDDCu;
        goto label_1beddc;
    }
    ctx->pc = 0x1BEDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BEDDCu);
        ctx->pc = 0x1BEDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEDD4u;
            // 0x1bedd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BEDDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BEDDCu; }
            if (ctx->pc != 0x1BEDDCu) { return; }
        }
        }
    }
    ctx->pc = 0x1BEDDCu;
label_1beddc:
    // 0x1beddc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1beddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1bede0:
    // 0x1bede0: 0x623fff5  bgezl       $s1, . + 4 + (-0xB << 2)
label_1bede4:
    if (ctx->pc == 0x1BEDE4u) {
        ctx->pc = 0x1BEDE4u;
            // 0x1bede4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1BEDE8u;
        goto label_1bede8;
    }
    ctx->pc = 0x1BEDE0u;
    {
        const bool branch_taken_0x1bede0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1bede0) {
            ctx->pc = 0x1BEDE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEDE0u;
            // 0x1bede4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BEDB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bedb8;
        }
    }
    ctx->pc = 0x1BEDE8u;
label_1bede8:
    // 0x1bede8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bede8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bedec:
    // 0x1bedec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bedecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bedf0:
    // 0x1bedf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bedf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bedf4:
    // 0x1bedf4: 0x3e00008  jr          $ra
label_1bedf8:
    if (ctx->pc == 0x1BEDF8u) {
        ctx->pc = 0x1BEDF8u;
            // 0x1bedf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BEDFCu;
        goto label_1bedfc;
    }
    ctx->pc = 0x1BEDF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEDF4u;
            // 0x1bedf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEDFCu;
label_1bedfc:
    // 0x1bedfc: 0x0  nop
    ctx->pc = 0x1bedfcu;
    // NOP
    ctx->pc = 0x1bee00u;
}
