#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00189CD0
// Address: 0x189cd0 - 0x189dc0
void sub_00189CD0_0x189cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189CD0_0x189cd0");
#endif

    switch (ctx->pc) {
        case 0x189d30u: goto label_189d30;
        case 0x189d38u: goto label_189d38;
        case 0x189d44u: goto label_189d44;
        case 0x189d50u: goto label_189d50;
        case 0x189d58u: goto label_189d58;
        case 0x189d60u: goto label_189d60;
        case 0x189d68u: goto label_189d68;
        case 0x189d70u: goto label_189d70;
        case 0x189d78u: goto label_189d78;
        case 0x189d80u: goto label_189d80;
        case 0x189d88u: goto label_189d88;
        case 0x189d90u: goto label_189d90;
        case 0x189d98u: goto label_189d98;
        case 0x189da0u: goto label_189da0;
        case 0x189da8u: goto label_189da8;
        default: break;
    }

    ctx->pc = 0x189cd0u;

    // 0x189cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189cd4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x189cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x189cd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x189cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x189cdc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x189cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x189ce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189ce4: 0xacc400dc  sw          $a0, 0xDC($a2)
    ctx->pc = 0x189ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 220), GPR_U32(ctx, 4));
    // 0x189ce8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x189ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189cec: 0xa4c500ea  sh          $a1, 0xEA($a2)
    ctx->pc = 0x189cecu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 234), (uint16_t)GPR_U32(ctx, 5));
    // 0x189cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x189cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189cf4: 0xa4c000ec  sh          $zero, 0xEC($a2)
    ctx->pc = 0x189cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 236), (uint16_t)GPR_U32(ctx, 0));
    // 0x189cf8: 0xa4c300f0  sh          $v1, 0xF0($a2)
    ctx->pc = 0x189cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 240), (uint16_t)GPR_U32(ctx, 3));
    // 0x189cfc: 0xa4c300f2  sh          $v1, 0xF2($a2)
    ctx->pc = 0x189cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 242), (uint16_t)GPR_U32(ctx, 3));
    // 0x189d00: 0xa4c300f4  sh          $v1, 0xF4($a2)
    ctx->pc = 0x189d00u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 244), (uint16_t)GPR_U32(ctx, 3));
    // 0x189d04: 0xa0c200f6  sb          $v0, 0xF6($a2)
    ctx->pc = 0x189d04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 246), (uint8_t)GPR_U32(ctx, 2));
    // 0x189d08: 0xa0c000f7  sb          $zero, 0xF7($a2)
    ctx->pc = 0x189d08u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 247), (uint8_t)GPR_U32(ctx, 0));
    // 0x189d0c: 0xa4c005e2  sh          $zero, 0x5E2($a2)
    ctx->pc = 0x189d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x189d10: 0xacc0048c  sw          $zero, 0x48C($a2)
    ctx->pc = 0x189d10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1164), GPR_U32(ctx, 0));
    // 0x189d14: 0xacc00490  sw          $zero, 0x490($a2)
    ctx->pc = 0x189d14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1168), GPR_U32(ctx, 0));
    // 0x189d18: 0xacc00494  sw          $zero, 0x494($a2)
    ctx->pc = 0x189d18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1172), GPR_U32(ctx, 0));
    // 0x189d1c: 0xacc00498  sw          $zero, 0x498($a2)
    ctx->pc = 0x189d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1176), GPR_U32(ctx, 0));
    // 0x189d20: 0xacc0049c  sw          $zero, 0x49C($a2)
    ctx->pc = 0x189d20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1180), GPR_U32(ctx, 0));
    // 0x189d24: 0xacc004a0  sw          $zero, 0x4A0($a2)
    ctx->pc = 0x189d24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1184), GPR_U32(ctx, 0));
    // 0x189d28: 0xc05a078  jal         func_1681E0
    ctx->pc = 0x189D28u;
    SET_GPR_U32(ctx, 31, 0x189D30u);
    ctx->pc = 0x189D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D28u;
            // 0x189d2c: 0xa0c004f0  sb          $zero, 0x4F0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 1264), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1681E0u;
    if (runtime->hasFunction(0x1681E0u)) {
        auto targetFn = runtime->lookupFunction(0x1681E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D30u; }
        if (ctx->pc != 0x189D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001681E0_0x1681e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D30u; }
        if (ctx->pc != 0x189D30u) { return; }
    }
    ctx->pc = 0x189D30u;
label_189d30:
    // 0x189d30: 0xc04ba30  jal         func_12E8C0
    ctx->pc = 0x189D30u;
    SET_GPR_U32(ctx, 31, 0x189D38u);
    ctx->pc = 0x189D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D30u;
            // 0x189d34: 0x8e0400dc  lw          $a0, 0xDC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E8C0u;
    if (runtime->hasFunction(0x12E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x12E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D38u; }
        if (ctx->pc != 0x189D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E8C0_0x12e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D38u; }
        if (ctx->pc != 0x189D38u) { return; }
    }
    ctx->pc = 0x189D38u;
label_189d38:
    // 0x189d38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x189d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189d3c: 0xc04ba3c  jal         func_12E8F0
    ctx->pc = 0x189D3Cu;
    SET_GPR_U32(ctx, 31, 0x189D44u);
    ctx->pc = 0x189D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D3Cu;
            // 0x189d40: 0x2604028c  addiu       $a0, $s0, 0x28C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E8F0u;
    if (runtime->hasFunction(0x12E8F0u)) {
        auto targetFn = runtime->lookupFunction(0x12E8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D44u; }
        if (ctx->pc != 0x189D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E8F0_0x12e8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D44u; }
        if (ctx->pc != 0x189D44u) { return; }
    }
    ctx->pc = 0x189D44u;
label_189d44:
    // 0x189d44: 0x2604029c  addiu       $a0, $s0, 0x29C
    ctx->pc = 0x189d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 668));
    // 0x189d48: 0xc05ceb0  jal         func_173AC0
    ctx->pc = 0x189D48u;
    SET_GPR_U32(ctx, 31, 0x189D50u);
    ctx->pc = 0x189D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D48u;
            // 0x189d4c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173AC0u;
    if (runtime->hasFunction(0x173AC0u)) {
        auto targetFn = runtime->lookupFunction(0x173AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D50u; }
        if (ctx->pc != 0x189D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173AC0_0x173ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D50u; }
        if (ctx->pc != 0x189D50u) { return; }
    }
    ctx->pc = 0x189D50u;
label_189d50:
    // 0x189d50: 0xc057b5c  jal         func_15ED70
    ctx->pc = 0x189D50u;
    SET_GPR_U32(ctx, 31, 0x189D58u);
    ctx->pc = 0x189D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D50u;
            // 0x189d54: 0x26040268  addiu       $a0, $s0, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ED70u;
    if (runtime->hasFunction(0x15ED70u)) {
        auto targetFn = runtime->lookupFunction(0x15ED70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D58u; }
        if (ctx->pc != 0x189D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ED70_0x15ed70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D58u; }
        if (ctx->pc != 0x189D58u) { return; }
    }
    ctx->pc = 0x189D58u;
label_189d58:
    // 0x189d58: 0xc0583f4  jal         func_160FD0
    ctx->pc = 0x189D58u;
    SET_GPR_U32(ctx, 31, 0x189D60u);
    ctx->pc = 0x189D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D58u;
            // 0x189d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160FD0u;
    if (runtime->hasFunction(0x160FD0u)) {
        auto targetFn = runtime->lookupFunction(0x160FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D60u; }
        if (ctx->pc != 0x189D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160FD0_0x160fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D60u; }
        if (ctx->pc != 0x189D60u) { return; }
    }
    ctx->pc = 0x189D60u;
label_189d60:
    // 0x189d60: 0xc05fa70  jal         func_17E9C0
    ctx->pc = 0x189D60u;
    SET_GPR_U32(ctx, 31, 0x189D68u);
    ctx->pc = 0x189D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D60u;
            // 0x189d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9C0u;
    if (runtime->hasFunction(0x17E9C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D68u; }
        if (ctx->pc != 0x189D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9C0_0x17e9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D68u; }
        if (ctx->pc != 0x189D68u) { return; }
    }
    ctx->pc = 0x189D68u;
label_189d68:
    // 0x189d68: 0xc057170  jal         func_15C5C0
    ctx->pc = 0x189D68u;
    SET_GPR_U32(ctx, 31, 0x189D70u);
    ctx->pc = 0x189D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D68u;
            // 0x189d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C5C0u;
    if (runtime->hasFunction(0x15C5C0u)) {
        auto targetFn = runtime->lookupFunction(0x15C5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D70u; }
        if (ctx->pc != 0x189D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C5C0_0x15c5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D70u; }
        if (ctx->pc != 0x189D70u) { return; }
    }
    ctx->pc = 0x189D70u;
label_189d70:
    // 0x189d70: 0xc05069c  jal         func_141A70
    ctx->pc = 0x189D70u;
    SET_GPR_U32(ctx, 31, 0x189D78u);
    ctx->pc = 0x189D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D70u;
            // 0x189d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A70u;
    if (runtime->hasFunction(0x141A70u)) {
        auto targetFn = runtime->lookupFunction(0x141A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D78u; }
        if (ctx->pc != 0x189D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A70_0x141a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D78u; }
        if (ctx->pc != 0x189D78u) { return; }
    }
    ctx->pc = 0x189D78u;
label_189d78:
    // 0x189d78: 0xc0611c0  jal         func_184700
    ctx->pc = 0x189D78u;
    SET_GPR_U32(ctx, 31, 0x189D80u);
    ctx->pc = 0x189D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D78u;
            // 0x189d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184700u;
    if (runtime->hasFunction(0x184700u)) {
        auto targetFn = runtime->lookupFunction(0x184700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D80u; }
        if (ctx->pc != 0x189D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184700_0x184700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D80u; }
        if (ctx->pc != 0x189D80u) { return; }
    }
    ctx->pc = 0x189D80u;
label_189d80:
    // 0x189d80: 0xc04ee24  jal         func_13B890
    ctx->pc = 0x189D80u;
    SET_GPR_U32(ctx, 31, 0x189D88u);
    ctx->pc = 0x189D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D80u;
            // 0x189d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B890u;
    if (runtime->hasFunction(0x13B890u)) {
        auto targetFn = runtime->lookupFunction(0x13B890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D88u; }
        if (ctx->pc != 0x189D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013B890_0x13b890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D88u; }
        if (ctx->pc != 0x189D88u) { return; }
    }
    ctx->pc = 0x189D88u;
label_189d88:
    // 0x189d88: 0xc062664  jal         func_189990
    ctx->pc = 0x189D88u;
    SET_GPR_U32(ctx, 31, 0x189D90u);
    ctx->pc = 0x189D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D88u;
            // 0x189d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189990u;
    if (runtime->hasFunction(0x189990u)) {
        auto targetFn = runtime->lookupFunction(0x189990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D90u; }
        if (ctx->pc != 0x189D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189990_0x189990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D90u; }
        if (ctx->pc != 0x189D90u) { return; }
    }
    ctx->pc = 0x189D90u;
label_189d90:
    // 0x189d90: 0xc064fa8  jal         func_193EA0
    ctx->pc = 0x189D90u;
    SET_GPR_U32(ctx, 31, 0x189D98u);
    ctx->pc = 0x189D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D90u;
            // 0x189d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193EA0u;
    if (runtime->hasFunction(0x193EA0u)) {
        auto targetFn = runtime->lookupFunction(0x193EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D98u; }
        if (ctx->pc != 0x189D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193EA0_0x193ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189D98u; }
        if (ctx->pc != 0x189D98u) { return; }
    }
    ctx->pc = 0x189D98u;
label_189d98:
    // 0x189d98: 0xc062708  jal         func_189C20
    ctx->pc = 0x189D98u;
    SET_GPR_U32(ctx, 31, 0x189DA0u);
    ctx->pc = 0x189D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189D98u;
            // 0x189d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x189C20u;
    if (runtime->hasFunction(0x189C20u)) {
        auto targetFn = runtime->lookupFunction(0x189C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DA0u; }
        if (ctx->pc != 0x189DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00189C20_0x189c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DA0u; }
        if (ctx->pc != 0x189DA0u) { return; }
    }
    ctx->pc = 0x189DA0u;
label_189da0:
    // 0x189da0: 0xc05866c  jal         func_1619B0
    ctx->pc = 0x189DA0u;
    SET_GPR_U32(ctx, 31, 0x189DA8u);
    ctx->pc = 0x189DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x189DA0u;
            // 0x189da4: 0x260405f8  addiu       $a0, $s0, 0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1619B0u;
    if (runtime->hasFunction(0x1619B0u)) {
        auto targetFn = runtime->lookupFunction(0x1619B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DA8u; }
        if (ctx->pc != 0x189DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001619B0_0x1619b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x189DA8u; }
        if (ctx->pc != 0x189DA8u) { return; }
    }
    ctx->pc = 0x189DA8u;
label_189da8:
    // 0x189da8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x189da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189dac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189db0: 0x3e00008  jr          $ra
    ctx->pc = 0x189DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x189DB0u;
            // 0x189db4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x189DB8u;
    // 0x189db8: 0x0  nop
    ctx->pc = 0x189db8u;
    // NOP
    // 0x189dbc: 0x0  nop
    ctx->pc = 0x189dbcu;
    // NOP
    ctx->pc = 0x189dc0u;
}
