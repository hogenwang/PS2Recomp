#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011BA80
// Address: 0x11ba80 - 0x11bc88
void sub_0011BA80_0x11ba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BA80_0x11ba80");
#endif

    switch (ctx->pc) {
        case 0x11baa0u: goto label_11baa0;
        case 0x11baacu: goto label_11baac;
        case 0x11bad8u: goto label_11bad8;
        case 0x11baf0u: goto label_11baf0;
        case 0x11bb04u: goto label_11bb04;
        case 0x11bb14u: goto label_11bb14;
        case 0x11bb28u: goto label_11bb28;
        case 0x11bb30u: goto label_11bb30;
        case 0x11bb50u: goto label_11bb50;
        case 0x11bb64u: goto label_11bb64;
        case 0x11bb88u: goto label_11bb88;
        case 0x11bb90u: goto label_11bb90;
        case 0x11bbd8u: goto label_11bbd8;
        default: break;
    }

    ctx->pc = 0x11ba80u;

    // 0x11ba80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11ba80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11ba84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11ba84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11ba88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ba88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ba8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ba8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ba90: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11ba90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11ba94: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x11ba94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x11ba98: 0xc046c62  jal         func_11B188
    ctx->pc = 0x11BA98u;
    SET_GPR_U32(ctx, 31, 0x11BAA0u);
    ctx->pc = 0x11BA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BA98u;
            // 0x11ba9c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B188u;
    if (runtime->hasFunction(0x11B188u)) {
        auto targetFn = runtime->lookupFunction(0x11B188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAA0u; }
        if (ctx->pc != 0x11BAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011B188_0x11b188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAA0u; }
        if (ctx->pc != 0x11BAA0u) { return; }
    }
    ctx->pc = 0x11BAA0u;
label_11baa0:
    // 0x11baa0: 0x8e049dec  lw          $a0, -0x6214($s0)
    ctx->pc = 0x11baa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942188)));
    // 0x11baa4: 0xc04332c  jal         func_10CCB0
    ctx->pc = 0x11BAA4u;
    SET_GPR_U32(ctx, 31, 0x11BAACu);
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAACu; }
        if (ctx->pc != 0x11BAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAACu; }
        if (ctx->pc != 0x11BAACu) { return; }
    }
    ctx->pc = 0x11BAACu;
label_11baac:
    // 0x11baac: 0x8e039dec  lw          $v1, -0x6214($s0)
    ctx->pc = 0x11baacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942188)));
    // 0x11bab0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11BAB0u;
    {
        const bool branch_taken_0x11bab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BAB0u;
            // 0x11bab4: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bab0) {
            ctx->pc = 0x11BAE0u;
            goto label_11bae0;
        }
    }
    ctx->pc = 0x11BAB8u;
    // 0x11bab8: 0x8c439dd0  lw          $v1, -0x6230($v0)
    ctx->pc = 0x11bab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942160)));
    // 0x11babc: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11BABCu;
    {
        const bool branch_taken_0x11babc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11BAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BABCu;
            // 0x11bac0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11babc) {
            ctx->pc = 0x11BB04u;
            goto label_11bb04;
        }
    }
    ctx->pc = 0x11BAC4u;
    // 0x11bac4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x11bac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x11bac8: 0x8c469dd8  lw          $a2, -0x6228($v0)
    ctx->pc = 0x11bac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942168)));
    // 0x11bacc: 0x2484b2e0  addiu       $a0, $a0, -0x4D20
    ctx->pc = 0x11baccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947552));
    // 0x11bad0: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11BAD0u;
    SET_GPR_U32(ctx, 31, 0x11BAD8u);
    ctx->pc = 0x11BAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BAD0u;
            // 0x11bad4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAD8u; }
        if (ctx->pc != 0x11BAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAD8u; }
        if (ctx->pc != 0x11BAD8u) { return; }
    }
    ctx->pc = 0x11BAD8u;
label_11bad8:
    // 0x11bad8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x11BAD8u;
    {
        const bool branch_taken_0x11bad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BAD8u;
            // 0x11badc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bad8) {
            ctx->pc = 0x11BBC0u;
            goto label_11bbc0;
        }
    }
    ctx->pc = 0x11BAE0u;
label_11bae0:
    // 0x11bae0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11bae4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bae8: 0xc046e84  jal         func_11BA10
    ctx->pc = 0x11BAE8u;
    SET_GPR_U32(ctx, 31, 0x11BAF0u);
    ctx->pc = 0x11BAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BAE8u;
            // 0x11baec: 0xac519dd8  sw          $s1, -0x6228($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294942168), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BA10u;
    if (runtime->hasFunction(0x11BA10u)) {
        auto targetFn = runtime->lookupFunction(0x11BA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAF0u; }
        if (ctx->pc != 0x11BAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011BA10_0x11ba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAF0u; }
        if (ctx->pc != 0x11BAF0u) { return; }
    }
    ctx->pc = 0x11BAF0u;
label_11baf0:
    // 0x11baf0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BAF0u;
    {
        const bool branch_taken_0x11baf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BAF0u;
            // 0x11baf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11baf0) {
            ctx->pc = 0x11BB0Cu;
            goto label_11bb0c;
        }
    }
    ctx->pc = 0x11BAF8u;
    // 0x11baf8: 0x8e049dec  lw          $a0, -0x6214($s0)
    ctx->pc = 0x11baf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294942188)));
    // 0x11bafc: 0xc043320  jal         func_10CC80
    ctx->pc = 0x11BAFCu;
    SET_GPR_U32(ctx, 31, 0x11BB04u);
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB04u; }
        if (ctx->pc != 0x11BB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB04u; }
        if (ctx->pc != 0x11BB04u) { return; }
    }
    ctx->pc = 0x11BB04u;
label_11bb04:
    // 0x11bb04: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x11BB04u;
    {
        const bool branch_taken_0x11bb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB04u;
            // 0x11bb08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb04) {
            ctx->pc = 0x11BBC0u;
            goto label_11bbc0;
        }
    }
    ctx->pc = 0x11BB0Cu;
label_11bb0c:
    // 0x11bb0c: 0xc0440ea  jal         func_1103A8
    ctx->pc = 0x11BB0Cu;
    SET_GPR_U32(ctx, 31, 0x11BB14u);
    ctx->pc = 0x11BB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB0Cu;
            // 0x11bb10: 0x3c120036  lui         $s2, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1103A8u;
    if (runtime->hasFunction(0x1103A8u)) {
        auto targetFn = runtime->lookupFunction(0x1103A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB14u; }
        if (ctx->pc != 0x11BB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001103A8_0x1103a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB14u; }
        if (ctx->pc != 0x11BB14u) { return; }
    }
    ctx->pc = 0x11BB14u;
label_11bb14:
    // 0x11bb14: 0x8e429e14  lw          $v0, -0x61EC($s2)
    ctx->pc = 0x11bb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294942228)));
    // 0x11bb18: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x11BB18u;
    {
        const bool branch_taken_0x11bb18 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11BB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB18u;
            // 0x11bb1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb18) {
            ctx->pc = 0x11BBC0u;
            goto label_11bbc0;
        }
    }
    ctx->pc = 0x11BB20u;
    // 0x11bb20: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11BB20u;
    {
        const bool branch_taken_0x11bb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB20u;
            // 0x11bb24: 0x3c110036  lui         $s1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb20) {
            ctx->pc = 0x11BB4Cu;
            goto label_11bb4c;
        }
    }
    ctx->pc = 0x11BB28u;
label_11bb28:
    // 0x11bb28: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x11bb2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11bb30:
    // 0x11bb30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11bb34: 0x0  nop
    ctx->pc = 0x11bb34u;
    // NOP
    // 0x11bb38: 0x0  nop
    ctx->pc = 0x11bb38u;
    // NOP
    // 0x11bb3c: 0x0  nop
    ctx->pc = 0x11bb3cu;
    // NOP
    // 0x11bb40: 0x0  nop
    ctx->pc = 0x11bb40u;
    // NOP
    // 0x11bb44: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11BB44u;
    {
        const bool branch_taken_0x11bb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11bb44) {
            ctx->pc = 0x11BB30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bb30;
        }
    }
    ctx->pc = 0x11BB4Cu;
label_11bb4c:
    // 0x11bb4c: 0x2630b940  addiu       $s0, $s1, -0x46C0
    ctx->pc = 0x11bb4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949184));
label_11bb50:
    // 0x11bb50: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11bb50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11bb54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb58: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x11bb58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x11bb5c: 0xc0442d4  jal         func_110B50
    ctx->pc = 0x11BB5Cu;
    SET_GPR_U32(ctx, 31, 0x11BB64u);
    ctx->pc = 0x11BB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB5Cu;
            // 0x11bb60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (runtime->hasFunction(0x110B50u)) {
        auto targetFn = runtime->lookupFunction(0x110B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB64u; }
        if (ctx->pc != 0x11BB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110B50_0x110b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB64u; }
        if (ctx->pc != 0x11BB64u) { return; }
    }
    ctx->pc = 0x11BB64u;
label_11bb64:
    // 0x11bb64: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11BB64u;
    {
        const bool branch_taken_0x11bb64 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11bb64) {
            ctx->pc = 0x11BB68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB64u;
            // 0x11bb68: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BBB4u;
            goto label_11bbb4;
        }
    }
    ctx->pc = 0x11BB6Cu;
    // 0x11bb6c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11bb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11bb70: 0x8c439dd0  lw          $v1, -0x6230($v0)
    ctx->pc = 0x11bb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942160)));
    // 0x11bb74: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11BB74u;
    {
        const bool branch_taken_0x11bb74 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11BB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB74u;
            // 0x11bb78: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb74) {
            ctx->pc = 0x11BB8Cu;
            goto label_11bb8c;
        }
    }
    ctx->pc = 0x11BB7Cu;
    // 0x11bb7c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x11bb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x11bb80: 0xc043e52  jal         func_10F948
    ctx->pc = 0x11BB80u;
    SET_GPR_U32(ctx, 31, 0x11BB88u);
    ctx->pc = 0x11BB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB80u;
            // 0x11bb84: 0x2484b308  addiu       $a0, $a0, -0x4CF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (runtime->hasFunction(0x10F948u)) {
        auto targetFn = runtime->lookupFunction(0x10F948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB88u; }
        if (ctx->pc != 0x11BB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F948_0x10f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB88u; }
        if (ctx->pc != 0x11BB88u) { return; }
    }
    ctx->pc = 0x11BB88u;
label_11bb88:
    // 0x11bb88: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_11bb8c:
    // 0x11bb8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11bb90:
    // 0x11bb90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11bb94: 0x0  nop
    ctx->pc = 0x11bb94u;
    // NOP
    // 0x11bb98: 0x0  nop
    ctx->pc = 0x11bb98u;
    // NOP
    // 0x11bb9c: 0x0  nop
    ctx->pc = 0x11bb9cu;
    // NOP
    // 0x11bba0: 0x0  nop
    ctx->pc = 0x11bba0u;
    // NOP
    // 0x11bba4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11BBA4u;
    {
        const bool branch_taken_0x11bba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11bba4) {
            ctx->pc = 0x11BB90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bb90;
        }
    }
    ctx->pc = 0x11BBACu;
    // 0x11bbac: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11BBACu;
    {
        const bool branch_taken_0x11bbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBACu;
            // 0x11bbb0: 0x2630b940  addiu       $s0, $s1, -0x46C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294949184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbac) {
            ctx->pc = 0x11BB50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bb50;
        }
    }
    ctx->pc = 0x11BBB4u;
label_11bbb4:
    // 0x11bbb4: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x11BBB4u;
    {
        const bool branch_taken_0x11bbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBB4u;
            // 0x11bbb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbb4) {
            ctx->pc = 0x11BB28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11bb28;
        }
    }
    ctx->pc = 0x11BBBCu;
    // 0x11bbbc: 0xae409e14  sw          $zero, -0x61EC($s2)
    ctx->pc = 0x11bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294942228), GPR_U32(ctx, 0));
label_11bbc0:
    // 0x11bbc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11bbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bbc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11bbc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bbc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11bbc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bbcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11bbccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x11BBD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBD0u;
            // 0x11bbd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11BBD8u;
label_11bbd8:
    // 0x11bbd8: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x11bbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x11bbdc: 0x10820026  beq         $a0, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x11BBDCu;
    {
        const bool branch_taken_0x11bbdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBDCu;
            // 0x11bbe0: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbdc) {
            ctx->pc = 0x11BC78u;
            goto label_11bc78;
        }
    }
    ctx->pc = 0x11BBE4u;
    // 0x11bbe4: 0x34028003  ori         $v0, $zero, 0x8003
    ctx->pc = 0x11bbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32771);
    // 0x11bbe8: 0x10820021  beq         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x11BBE8u;
    {
        const bool branch_taken_0x11bbe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBE8u;
            // 0x11bbec: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbe8) {
            ctx->pc = 0x11BC70u;
            goto label_11bc70;
        }
    }
    ctx->pc = 0x11BBF0u;
    // 0x11bbf0: 0x34028002  ori         $v0, $zero, 0x8002
    ctx->pc = 0x11bbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x11bbf4: 0x1082001c  beq         $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11BBF4u;
    {
        const bool branch_taken_0x11bbf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBF4u;
            // 0x11bbf8: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbf4) {
            ctx->pc = 0x11BC68u;
            goto label_11bc68;
        }
    }
    ctx->pc = 0x11BBFCu;
    // 0x11bbfc: 0x34028004  ori         $v0, $zero, 0x8004
    ctx->pc = 0x11bbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x11bc00: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11BC00u;
    {
        const bool branch_taken_0x11bc00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC00u;
            // 0x11bc04: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc00) {
            ctx->pc = 0x11BC60u;
            goto label_11bc60;
        }
    }
    ctx->pc = 0x11BC08u;
    // 0x11bc08: 0x34028011  ori         $v0, $zero, 0x8011
    ctx->pc = 0x11bc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32785);
    // 0x11bc0c: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11BC0Cu;
    {
        const bool branch_taken_0x11bc0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC0Cu;
            // 0x11bc10: 0x34028013  ori         $v0, $zero, 0x8013 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32787);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc0c) {
            ctx->pc = 0x11BC50u;
            goto label_11bc50;
        }
    }
    ctx->pc = 0x11BC14u;
    // 0x11bc14: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11BC14u;
    {
        const bool branch_taken_0x11bc14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC14u;
            // 0x11bc18: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc14) {
            ctx->pc = 0x11BC48u;
            goto label_11bc48;
        }
    }
    ctx->pc = 0x11BC1Cu;
    // 0x11bc1c: 0x34028012  ori         $v0, $zero, 0x8012
    ctx->pc = 0x11bc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32786);
    // 0x11bc20: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11BC20u;
    {
        const bool branch_taken_0x11bc20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC20u;
            // 0x11bc24: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc20) {
            ctx->pc = 0x11BC40u;
            goto label_11bc40;
        }
    }
    ctx->pc = 0x11BC28u;
    // 0x11bc28: 0x34028014  ori         $v0, $zero, 0x8014
    ctx->pc = 0x11bc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32788);
    // 0x11bc2c: 0x54820013  bnel        $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11BC2Cu;
    {
        const bool branch_taken_0x11bc2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x11bc2c) {
            ctx->pc = 0x11BC30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC2Cu;
            // 0x11bc30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BC7Cu;
            goto label_11bc7c;
        }
    }
    ctx->pc = 0x11BC34u;
    // 0x11bc34: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11bc38: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x11BC38u;
    {
        const bool branch_taken_0x11bc38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC38u;
            // 0x11bc3c: 0x2442b940  addiu       $v0, $v0, -0x46C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc38) {
            ctx->pc = 0x11BC7Cu;
            goto label_11bc7c;
        }
    }
    ctx->pc = 0x11BC40u;
label_11bc40:
    // 0x11bc40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11BC40u;
    {
        const bool branch_taken_0x11bc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC40u;
            // 0x11bc44: 0x2442b400  addiu       $v0, $v0, -0x4C00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc40) {
            ctx->pc = 0x11BC7Cu;
            goto label_11bc7c;
        }
    }
    ctx->pc = 0x11BC48u;
label_11bc48:
    // 0x11bc48: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11BC48u;
    {
        const bool branch_taken_0x11bc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC48u;
            // 0x11bc4c: 0x2442afc0  addiu       $v0, $v0, -0x5040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc48) {
            ctx->pc = 0x11BC7Cu;
            goto label_11bc7c;
        }
    }
    ctx->pc = 0x11BC50u;
label_11bc50:
    // 0x11bc50: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x11bc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x11bc54: 0x8c429dec  lw          $v0, -0x6214($v0)
    ctx->pc = 0x11bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942188)));
    // 0x11bc58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11BC58u;
    {
        const bool branch_taken_0x11bc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC58u;
            // 0x11bc5c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc58) {
            ctx->pc = 0x11BC80u;
            goto label_11bc80;
        }
    }
    ctx->pc = 0x11BC60u;
label_11bc60:
    // 0x11bc60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11BC60u;
    {
        const bool branch_taken_0x11bc60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC60u;
            // 0x11bc64: 0x2442af90  addiu       $v0, $v0, -0x5070 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc60) {
            ctx->pc = 0x11BC7Cu;
            goto label_11bc7c;
        }
    }
    ctx->pc = 0x11BC68u;
label_11bc68:
    // 0x11bc68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11BC68u;
    {
        const bool branch_taken_0x11bc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC68u;
            // 0x11bc6c: 0x24429ec0  addiu       $v0, $v0, -0x6140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc68) {
            ctx->pc = 0x11BC7Cu;
            goto label_11bc7c;
        }
    }
    ctx->pc = 0x11BC70u;
label_11bc70:
    // 0x11bc70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BC70u;
    {
        const bool branch_taken_0x11bc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC70u;
            // 0x11bc74: 0x24429e40  addiu       $v0, $v0, -0x61C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc70) {
            ctx->pc = 0x11BC7Cu;
            goto label_11bc7c;
        }
    }
    ctx->pc = 0x11BC78u;
label_11bc78:
    // 0x11bc78: 0x8c429de8  lw          $v0, -0x6218($v0)
    ctx->pc = 0x11bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294942184)));
label_11bc7c:
    // 0x11bc7c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x11bc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_11bc80:
    // 0x11bc80: 0x3e00008  jr          $ra
    ctx->pc = 0x11BC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC80u;
            // 0x11bc84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11BC88u;
    ctx->pc = 0x11bc88u;
}
