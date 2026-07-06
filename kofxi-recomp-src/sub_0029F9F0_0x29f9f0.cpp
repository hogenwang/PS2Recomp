#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029F9F0
// Address: 0x29f9f0 - 0x29fc0c
void sub_0029F9F0_0x29f9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F9F0_0x29f9f0");
#endif

    switch (ctx->pc) {
        case 0x29fa10u: goto label_29fa10;
        case 0x29fa18u: goto label_29fa18;
        case 0x29fa20u: goto label_29fa20;
        case 0x29fa28u: goto label_29fa28;
        case 0x29fa3cu: goto label_29fa3c;
        case 0x29fa44u: goto label_29fa44;
        case 0x29fa58u: goto label_29fa58;
        case 0x29fa94u: goto label_29fa94;
        case 0x29fab8u: goto label_29fab8;
        case 0x29fac0u: goto label_29fac0;
        case 0x29fadcu: goto label_29fadc;
        case 0x29faf4u: goto label_29faf4;
        case 0x29fafcu: goto label_29fafc;
        case 0x29fb04u: goto label_29fb04;
        case 0x29fb0cu: goto label_29fb0c;
        case 0x29fb34u: goto label_29fb34;
        case 0x29fb64u: goto label_29fb64;
        case 0x29fb98u: goto label_29fb98;
        case 0x29fbb0u: goto label_29fbb0;
        case 0x29fbecu: goto label_29fbec;
        case 0x29fc04u: goto label_29fc04;
        default: break;
    }

    ctx->pc = 0x29f9f0u;

label_29f9f0:
    // 0x29f9f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29f9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29f9f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29f9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29f9f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29f9fc: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x29f9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29fa00: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x29FA00u;
    {
        const bool branch_taken_0x29fa00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA00u;
            // 0x29fa04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fa00) {
            ctx->pc = 0x29FA48u;
            goto label_29fa48;
        }
    }
    ctx->pc = 0x29FA08u;
    // 0x29fa08: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x29FA08u;
    SET_GPR_U32(ctx, 31, 0x29FA10u);
    ctx->pc = 0x29FA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA08u;
            // 0x29fa0c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA10u; }
        if (ctx->pc != 0x29FA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA10u; }
        if (ctx->pc != 0x29FA10u) { return; }
    }
    ctx->pc = 0x29FA10u;
label_29fa10:
    // 0x29fa10: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x29FA10u;
    SET_GPR_U32(ctx, 31, 0x29FA18u);
    ctx->pc = 0x29FA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA10u;
            // 0x29fa14: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA18u; }
        if (ctx->pc != 0x29FA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA18u; }
        if (ctx->pc != 0x29FA18u) { return; }
    }
    ctx->pc = 0x29FA18u;
label_29fa18:
    // 0x29fa18: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x29FA18u;
    SET_GPR_U32(ctx, 31, 0x29FA20u);
    ctx->pc = 0x29FA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA18u;
            // 0x29fa1c: 0x26040034  addiu       $a0, $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA20u; }
        if (ctx->pc != 0x29FA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA20u; }
        if (ctx->pc != 0x29FA20u) { return; }
    }
    ctx->pc = 0x29FA20u;
label_29fa20:
    // 0x29fa20: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x29FA20u;
    SET_GPR_U32(ctx, 31, 0x29FA28u);
    ctx->pc = 0x29FA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA20u;
            // 0x29fa24: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (runtime->hasFunction(0x2868D8u)) {
        auto targetFn = runtime->lookupFunction(0x2868D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA28u; }
        if (ctx->pc != 0x29FA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002868D8_0x2868d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA28u; }
        if (ctx->pc != 0x29FA28u) { return; }
    }
    ctx->pc = 0x29FA28u;
label_29fa28:
    // 0x29fa28: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x29fa28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x29fa2c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FA2Cu;
    {
        const bool branch_taken_0x29fa2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fa2c) {
            ctx->pc = 0x29FA3Cu;
            goto label_29fa3c;
        }
    }
    ctx->pc = 0x29FA34u;
    // 0x29fa34: 0xc0a1d56  jal         func_287558
    ctx->pc = 0x29FA34u;
    SET_GPR_U32(ctx, 31, 0x29FA3Cu);
    ctx->pc = 0x287558u;
    if (runtime->hasFunction(0x287558u)) {
        auto targetFn = runtime->lookupFunction(0x287558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA3Cu; }
        if (ctx->pc != 0x29FA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287558_0x287558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA3Cu; }
        if (ctx->pc != 0x29FA3Cu) { return; }
    }
    ctx->pc = 0x29FA3Cu;
label_29fa3c:
    // 0x29fa3c: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x29FA3Cu;
    SET_GPR_U32(ctx, 31, 0x29FA44u);
    ctx->pc = 0x29FA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA3Cu;
            // 0x29fa40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA44u; }
        if (ctx->pc != 0x29FA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA44u; }
        if (ctx->pc != 0x29FA44u) { return; }
    }
    ctx->pc = 0x29FA44u;
label_29fa44:
    // 0x29fa44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29fa44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29fa48:
    // 0x29fa48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29fa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29fa4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29fa4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29fa50: 0x3e00008  jr          $ra
    ctx->pc = 0x29FA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA50u;
            // 0x29fa54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29FA58u;
label_29fa58:
    // 0x29fa58: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29fa58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29fa5c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x29fa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x29fa60: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x29fa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x29fa64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29fa64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa68: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x29fa68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x29fa6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29fa6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa70: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x29fa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x29fa74: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x29fa74u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fa78: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x29fa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x29fa7c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x29fa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x29fa80: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x29fa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x29fa84: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x29fa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x29fa88: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x29fa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x29fa8c: 0xc0a1a9e  jal         func_286A78
    ctx->pc = 0x29FA8Cu;
    SET_GPR_U32(ctx, 31, 0x29FA94u);
    ctx->pc = 0x29FA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA8Cu;
            // 0x29fa90: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A78u;
    if (runtime->hasFunction(0x286A78u)) {
        auto targetFn = runtime->lookupFunction(0x286A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA94u; }
        if (ctx->pc != 0x29FA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A78_0x286a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA94u; }
        if (ctx->pc != 0x29FA94u) { return; }
    }
    ctx->pc = 0x29FA94u;
label_29fa94:
    // 0x29fa94: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29fa94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fa98: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FA98u;
    {
        const bool branch_taken_0x29fa98 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fa98) {
            ctx->pc = 0x29FA9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA98u;
            // 0x29fa9c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29FAA8u;
            goto label_29faa8;
        }
    }
    ctx->pc = 0x29FAA0u;
    // 0x29faa0: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x29FAA0u;
    {
        const bool branch_taken_0x29faa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FAA0u;
            // 0x29faa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29faa0) {
            ctx->pc = 0x29FD24u;
            return;
        }
    }
    ctx->pc = 0x29FAA8u;
label_29faa8:
    // 0x29faa8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FAA8u;
    {
        const bool branch_taken_0x29faa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29faa8) {
            ctx->pc = 0x29FAB8u;
            goto label_29fab8;
        }
    }
    ctx->pc = 0x29FAB0u;
    // 0x29fab0: 0xc0a7e7c  jal         func_29F9F0
    ctx->pc = 0x29FAB0u;
    SET_GPR_U32(ctx, 31, 0x29FAB8u);
    ctx->pc = 0x29FAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FAB0u;
            // 0x29fab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29F9F0u;
    goto label_29f9f0;
    ctx->pc = 0x29FAB8u;
label_29fab8:
    // 0x29fab8: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x29FAB8u;
    SET_GPR_U32(ctx, 31, 0x29FAC0u);
    ctx->pc = 0x29FABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FAB8u;
            // 0x29fabc: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FAC0u; }
        if (ctx->pc != 0x29FAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FAC0u; }
        if (ctx->pc != 0x29FAC0u) { return; }
    }
    ctx->pc = 0x29FAC0u;
label_29fac0:
    // 0x29fac0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29fac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fac4: 0x12000092  beqz        $s0, . + 4 + (0x92 << 2)
    ctx->pc = 0x29FAC4u;
    {
        const bool branch_taken_0x29fac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FAC4u;
            // 0x29fac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fac4) {
            ctx->pc = 0x29FD10u;
            return;
        }
    }
    ctx->pc = 0x29FACCu;
    // 0x29facc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29faccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fad0: 0x24060068  addiu       $a2, $zero, 0x68
    ctx->pc = 0x29fad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x29fad4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x29FAD4u;
    SET_GPR_U32(ctx, 31, 0x29FADCu);
    ctx->pc = 0x29FAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FAD4u;
            // 0x29fad8: 0x2613000c  addiu       $s3, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FADCu; }
        if (ctx->pc != 0x29FADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FADCu; }
        if (ctx->pc != 0x29FADCu) { return; }
    }
    ctx->pc = 0x29FADCu;
label_29fadc:
    // 0x29fadc: 0x26150020  addiu       $s5, $s0, 0x20
    ctx->pc = 0x29fadcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x29fae0: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x29fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x29fae4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29fae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fae8: 0x26170034  addiu       $s7, $s0, 0x34
    ctx->pc = 0x29fae8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x29faec: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x29FAECu;
    SET_GPR_U32(ctx, 31, 0x29FAF4u);
    ctx->pc = 0x29FAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FAECu;
            // 0x29faf0: 0x26160048  addiu       $s6, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FAF4u; }
        if (ctx->pc != 0x29FAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FAF4u; }
        if (ctx->pc != 0x29FAF4u) { return; }
    }
    ctx->pc = 0x29FAF4u;
label_29faf4:
    // 0x29faf4: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x29FAF4u;
    SET_GPR_U32(ctx, 31, 0x29FAFCu);
    ctx->pc = 0x29FAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FAF4u;
            // 0x29faf8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FAFCu; }
        if (ctx->pc != 0x29FAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FAFCu; }
        if (ctx->pc != 0x29FAFCu) { return; }
    }
    ctx->pc = 0x29FAFCu;
label_29fafc:
    // 0x29fafc: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x29FAFCu;
    SET_GPR_U32(ctx, 31, 0x29FB04u);
    ctx->pc = 0x29FB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FAFCu;
            // 0x29fb00: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB04u; }
        if (ctx->pc != 0x29FB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB04u; }
        if (ctx->pc != 0x29FB04u) { return; }
    }
    ctx->pc = 0x29FB04u;
label_29fb04:
    // 0x29fb04: 0xc0a1a88  jal         func_286A20
    ctx->pc = 0x29FB04u;
    SET_GPR_U32(ctx, 31, 0x29FB0Cu);
    ctx->pc = 0x29FB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB04u;
            // 0x29fb08: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286A20u;
    if (runtime->hasFunction(0x286A20u)) {
        auto targetFn = runtime->lookupFunction(0x286A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB0Cu; }
        if (ctx->pc != 0x29FB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286A20_0x286a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB0Cu; }
        if (ctx->pc != 0x29FB0Cu) { return; }
    }
    ctx->pc = 0x29FB0Cu;
label_29fb0c:
    // 0x29fb0c: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x29fb0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x29fb10: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x29fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x29fb14: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x29fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x29fb18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29fb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29fb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fb20: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29fb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29fb24: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x29fb24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb28: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x29fb28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb2c: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x29FB2Cu;
    SET_GPR_U32(ctx, 31, 0x29FB34u);
    ctx->pc = 0x29FB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB2Cu;
            // 0x29fb30: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB34u; }
        if (ctx->pc != 0x29FB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB34u; }
        if (ctx->pc != 0x29FB34u) { return; }
    }
    ctx->pc = 0x29FB34u;
label_29fb34:
    // 0x29fb34: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x29fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29fb38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29FB38u;
    {
        const bool branch_taken_0x29fb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB38u;
            // 0x29fb3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb38) {
            ctx->pc = 0x29FB44u;
            goto label_29fb44;
        }
    }
    ctx->pc = 0x29FB40u;
    // 0x29fb40: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x29fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_29fb44:
    // 0x29fb44: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x29fb44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x29fb48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29fb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29fb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fb50: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x29fb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29fb54: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x29fb54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb58: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x29fb58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb5c: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x29FB5Cu;
    SET_GPR_U32(ctx, 31, 0x29FB64u);
    ctx->pc = 0x29FB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB5Cu;
            // 0x29fb60: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB64u; }
        if (ctx->pc != 0x29FB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB64u; }
        if (ctx->pc != 0x29FB64u) { return; }
    }
    ctx->pc = 0x29FB64u;
label_29fb64:
    // 0x29fb64: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x29fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29fb68: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29FB68u;
    {
        const bool branch_taken_0x29fb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB68u;
            // 0x29fb6c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb68) {
            ctx->pc = 0x29FB74u;
            goto label_29fb74;
        }
    }
    ctx->pc = 0x29FB70u;
    // 0x29fb70: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x29fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_29fb74:
    // 0x29fb74: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x29fb74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x29fb78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29fb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x29fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x29fb80: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x29fb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x29fb84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29fb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fb88: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x29fb88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb8c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x29fb8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fb90: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x29FB90u;
    SET_GPR_U32(ctx, 31, 0x29FB98u);
    ctx->pc = 0x29FB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB90u;
            // 0x29fb94: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB98u; }
        if (ctx->pc != 0x29FB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB98u; }
        if (ctx->pc != 0x29FB98u) { return; }
    }
    ctx->pc = 0x29FB98u;
label_29fb98:
    // 0x29fb98: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x29fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29fb9c: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x29FB9Cu;
    {
        const bool branch_taken_0x29fb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB9Cu;
            // 0x29fba0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fb9c) {
            ctx->pc = 0x29FD10u;
            return;
        }
    }
    ctx->pc = 0x29FBA4u;
    // 0x29fba4: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x29fba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29fba8: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x29FBA8u;
    SET_GPR_U32(ctx, 31, 0x29FBB0u);
    ctx->pc = 0x29FBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FBA8u;
            // 0x29fbac: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FBB0u; }
        if (ctx->pc != 0x29FBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FBB0u; }
        if (ctx->pc != 0x29FBB0u) { return; }
    }
    ctx->pc = 0x29FBB0u;
label_29fbb0:
    // 0x29fbb0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x29fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x29fbb4: 0x18600056  blez        $v1, . + 4 + (0x56 << 2)
    ctx->pc = 0x29FBB4u;
    {
        const bool branch_taken_0x29fbb4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x29fbb4) {
            ctx->pc = 0x29FD10u;
            return;
        }
    }
    ctx->pc = 0x29FBBCu;
    // 0x29fbbc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x29fbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29fbc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29fbc4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29fbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29fbc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29fbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29fbcc: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x29FBCCu;
    {
        const bool branch_taken_0x29fbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FBCCu;
            // 0x29fbd0: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fbcc) {
            ctx->pc = 0x29FD10u;
            return;
        }
    }
    ctx->pc = 0x29FBD4u;
    // 0x29fbd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29fbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fbd8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x29fbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29fbdc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x29fbdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fbe0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x29fbe0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fbe4: 0xc0a898c  jal         func_2A2630
    ctx->pc = 0x29FBE4u;
    SET_GPR_U32(ctx, 31, 0x29FBECu);
    ctx->pc = 0x29FBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FBE4u;
            // 0x29fbe8: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2630u;
    if (runtime->hasFunction(0x2A2630u)) {
        auto targetFn = runtime->lookupFunction(0x2A2630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FBECu; }
        if (ctx->pc != 0x29FBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2630_0x2a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FBECu; }
        if (ctx->pc != 0x29FBECu) { return; }
    }
    ctx->pc = 0x29FBECu;
label_29fbec:
    // 0x29fbec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x29fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x29fbf0: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x29FBF0u;
    {
        const bool branch_taken_0x29fbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FBF0u;
            // 0x29fbf4: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fbf0) {
            ctx->pc = 0x29FD10u;
            return;
        }
    }
    ctx->pc = 0x29FBF8u;
    // 0x29fbf8: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x29fbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29fbfc: 0xc0a1b8c  jal         func_286E30
    ctx->pc = 0x29FBFCu;
    SET_GPR_U32(ctx, 31, 0x29FC04u);
    ctx->pc = 0x29FC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FBFCu;
            // 0x29fc00: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286E30u;
    if (runtime->hasFunction(0x286E30u)) {
        auto targetFn = runtime->lookupFunction(0x286E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC04u; }
        if (ctx->pc != 0x29FC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00286E30_0x286e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC04u; }
        if (ctx->pc != 0x29FC04u) { return; }
    }
    ctx->pc = 0x29FC04u;
label_29fc04:
    // 0x29fc04: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29fc08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29fc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29fc0cu;
}
