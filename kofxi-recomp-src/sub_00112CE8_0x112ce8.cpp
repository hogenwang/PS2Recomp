#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00112CE8
// Address: 0x112ce8 - 0x113258
void sub_00112CE8_0x112ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112CE8_0x112ce8");
#endif

    switch (ctx->pc) {
        case 0x112d28u: goto label_112d28;
        case 0x112d34u: goto label_112d34;
        case 0x112d50u: goto label_112d50;
        case 0x112d6cu: goto label_112d6c;
        case 0x112db4u: goto label_112db4;
        case 0x112dd8u: goto label_112dd8;
        case 0x112e18u: goto label_112e18;
        case 0x112e80u: goto label_112e80;
        case 0x112edcu: goto label_112edc;
        case 0x112f4cu: goto label_112f4c;
        case 0x112fa4u: goto label_112fa4;
        case 0x112fc4u: goto label_112fc4;
        case 0x112ff0u: goto label_112ff0;
        case 0x113000u: goto label_113000;
        case 0x113008u: goto label_113008;
        case 0x11301cu: goto label_11301c;
        case 0x11302cu: goto label_11302c;
        case 0x11303cu: goto label_11303c;
        case 0x113044u: goto label_113044;
        case 0x113070u: goto label_113070;
        case 0x1130b8u: goto label_1130b8;
        case 0x1130c4u: goto label_1130c4;
        case 0x1130dcu: goto label_1130dc;
        case 0x1130f8u: goto label_1130f8;
        case 0x113118u: goto label_113118;
        case 0x11313cu: goto label_11313c;
        case 0x113170u: goto label_113170;
        case 0x11319cu: goto label_11319c;
        case 0x1131d4u: goto label_1131d4;
        case 0x1131e4u: goto label_1131e4;
        case 0x1131ecu: goto label_1131ec;
        case 0x113200u: goto label_113200;
        case 0x113210u: goto label_113210;
        case 0x113220u: goto label_113220;
        case 0x113228u: goto label_113228;
        default: break;
    }

    ctx->pc = 0x112ce8u;

    // 0x112ce8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x112ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x112cec: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x112cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x112cf0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x112cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x112cf4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x112cf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112cf8: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x112cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x112cfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x112cfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d00: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x112d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x112d04: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x112d04u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x112d08: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x112d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x112d0c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x112d0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112d10: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x112d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x112d14: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x112d14u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x112d18: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x112d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x112d1c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x112d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x112d20: 0xc0445b2  jal         func_1116C8
    ctx->pc = 0x112D20u;
    SET_GPR_U32(ctx, 31, 0x112D28u);
    ctx->pc = 0x112D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112D20u;
            // 0x112d24: 0x26d38280  addiu       $s3, $s6, -0x7D80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1116C8u;
    if (runtime->hasFunction(0x1116C8u)) {
        auto targetFn = runtime->lookupFunction(0x1116C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112D28u; }
        if (ctx->pc != 0x112D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001116C8_0x1116c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112D28u; }
        if (ctx->pc != 0x112D28u) { return; }
    }
    ctx->pc = 0x112D28u;
label_112d28:
    // 0x112d28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112d2c: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x112D2Cu;
    SET_GPR_U32(ctx, 31, 0x112D34u);
    ctx->pc = 0x112D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112D2Cu;
            // 0x112d30: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (runtime->hasFunction(0x111B48u)) {
        auto targetFn = runtime->lookupFunction(0x111B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112D34u; }
        if (ctx->pc != 0x112D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B48_0x111b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112D34u; }
        if (ctx->pc != 0x112D34u) { return; }
    }
    ctx->pc = 0x112D34u;
label_112d34:
    // 0x112d34: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x112d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x112d38: 0xae928248  sw          $s2, -0x7DB8($s4)
    ctx->pc = 0x112d38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294935112), GPR_U32(ctx, 18));
    // 0x112d3c: 0x8c43873c  lw          $v1, -0x78C4($v0)
    ctx->pc = 0x112d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936380)));
    // 0x112d40: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x112D40u;
    {
        const bool branch_taken_0x112d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112d40) {
            ctx->pc = 0x112D50u;
            goto label_112d50;
        }
    }
    ctx->pc = 0x112D48u;
    // 0x112d48: 0xc04471c  jal         func_111C70
    ctx->pc = 0x112D48u;
    SET_GPR_U32(ctx, 31, 0x112D50u);
    ctx->pc = 0x111C70u;
    if (runtime->hasFunction(0x111C70u)) {
        auto targetFn = runtime->lookupFunction(0x111C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112D50u; }
        if (ctx->pc != 0x112D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111C70_0x111c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112D50u; }
        if (ctx->pc != 0x112D50u) { return; }
    }
    ctx->pc = 0x112D50u;
label_112d50:
    // 0x112d50: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x112D50u;
    {
        const bool branch_taken_0x112d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x112d50) {
            ctx->pc = 0x112D64u;
            goto label_112d64;
        }
    }
    ctx->pc = 0x112D58u;
    // 0x112d58: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x112d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x112d5c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x112D5Cu;
    {
        const bool branch_taken_0x112d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112d5c) {
            ctx->pc = 0x112D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112D5Cu;
            // 0x112d60: 0xae600414  sw          $zero, 0x414($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1044), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112D74u;
            goto label_112d74;
        }
    }
    ctx->pc = 0x112D64u;
label_112d64:
    // 0x112d64: 0xc0446de  jal         func_111B78
    ctx->pc = 0x112D64u;
    SET_GPR_U32(ctx, 31, 0x112D6Cu);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112D6Cu; }
        if (ctx->pc != 0x112D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112D6Cu; }
        if (ctx->pc != 0x112D6Cu) { return; }
    }
    ctx->pc = 0x112D6Cu;
label_112d6c:
    // 0x112d6c: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x112D6Cu;
    {
        const bool branch_taken_0x112d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112D6Cu;
            // 0x112d70: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d6c) {
            ctx->pc = 0x113048u;
            goto label_113048;
        }
    }
    ctx->pc = 0x112D74u;
label_112d74:
    // 0x112d74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x112d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x112d78: 0x12220029  beq         $s1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x112D78u;
    {
        const bool branch_taken_0x112d78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x112D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112D78u;
            // 0x112d7c: 0xae600418  sw          $zero, 0x418($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1048), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d78) {
            ctx->pc = 0x112E20u;
            goto label_112e20;
        }
    }
    ctx->pc = 0x112D80u;
    // 0x112d80: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x112d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x112d84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112D84u;
    {
        const bool branch_taken_0x112d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112D84u;
            // 0x112d88: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d84) {
            ctx->pc = 0x112D9Cu;
            goto label_112d9c;
        }
    }
    ctx->pc = 0x112D8Cu;
    // 0x112d8c: 0x52350007  beql        $s1, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x112D8Cu;
    {
        const bool branch_taken_0x112d8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        if (branch_taken_0x112d8c) {
            ctx->pc = 0x112D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112D8Cu;
            // 0x112d90: 0x3c100036  lui         $s0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112DACu;
            goto label_112dac;
        }
    }
    ctx->pc = 0x112D94u;
    // 0x112d94: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x112D94u;
    {
        const bool branch_taken_0x112d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112D94u;
            // 0x112d98: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d94) {
            ctx->pc = 0x112E88u;
            goto label_112e88;
        }
    }
    ctx->pc = 0x112D9Cu;
label_112d9c:
    // 0x112d9c: 0x1222002c  beq         $s1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x112D9Cu;
    {
        const bool branch_taken_0x112d9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x112DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112D9Cu;
            // 0x112da0: 0x3c040036  lui         $a0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d9c) {
            ctx->pc = 0x112E50u;
            goto label_112e50;
        }
    }
    ctx->pc = 0x112DA4u;
    // 0x112da4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x112DA4u;
    {
        const bool branch_taken_0x112da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112DA4u;
            // 0x112da8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112da4) {
            ctx->pc = 0x112E88u;
            goto label_112e88;
        }
    }
    ctx->pc = 0x112DACu;
label_112dac:
    // 0x112dac: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x112DACu;
    SET_GPR_U32(ctx, 31, 0x112DB4u);
    ctx->pc = 0x112DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112DACu;
            // 0x112db0: 0x8e04874c  lw          $a0, -0x78B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112DB4u; }
        if (ctx->pc != 0x112DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112DB4u; }
        if (ctx->pc != 0x112DB4u) { return; }
    }
    ctx->pc = 0x112DB4u;
label_112db4:
    // 0x112db4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x112db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x112db8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x112db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112dbc: 0x8ca386b8  lw          $v1, -0x7948($a1)
    ctx->pc = 0x112dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936248)));
    // 0x112dc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x112dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x112dc4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x112DC4u;
    {
        const bool branch_taken_0x112dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x112DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112DC4u;
            // 0x112dc8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112dc4) {
            ctx->pc = 0x112DF4u;
            goto label_112df4;
        }
    }
    ctx->pc = 0x112DCCu;
    // 0x112dcc: 0x24a386b8  addiu       $v1, $a1, -0x7948
    ctx->pc = 0x112dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936248));
    // 0x112dd0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x112dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x112dd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x112dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_112dd8:
    // 0x112dd8: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x112dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x112ddc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x112DDCu;
    {
        const bool branch_taken_0x112ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112DDCu;
            // 0x112de0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ddc) {
            ctx->pc = 0x112DF0u;
            goto label_112df0;
        }
    }
    ctx->pc = 0x112DE4u;
    // 0x112de4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x112de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112de8: 0x5045fffb  beql        $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x112DE8u;
    {
        const bool branch_taken_0x112de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x112de8) {
            ctx->pc = 0x112DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x112DE8u;
            // 0x112dec: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x112DD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_112dd8;
        }
    }
    ctx->pc = 0x112DF0u;
label_112df0:
    // 0x112df0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x112df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_112df4:
    // 0x112df4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x112DF4u;
    {
        const bool branch_taken_0x112df4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x112DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112DF4u;
            // 0x112df8: 0x8e838248  lw          $v1, -0x7DB8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112df4) {
            ctx->pc = 0x112E08u;
            goto label_112e08;
        }
    }
    ctx->pc = 0x112DFCu;
    // 0x112dfc: 0x8e828248  lw          $v0, -0x7DB8($s4)
    ctx->pc = 0x112dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935112)));
    // 0x112e00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112E00u;
    {
        const bool branch_taken_0x112e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112E00u;
            // 0x112e04: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e00) {
            ctx->pc = 0x112E10u;
            goto label_112e10;
        }
    }
    ctx->pc = 0x112E08u;
label_112e08:
    // 0x112e08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112e0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x112e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_112e10:
    // 0x112e10: 0xc043320  jal         func_10CC80
    ctx->pc = 0x112E10u;
    SET_GPR_U32(ctx, 31, 0x112E18u);
    ctx->pc = 0x112E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112E10u;
            // 0x112e14: 0x8e04874c  lw          $a0, -0x78B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112E18u; }
        if (ctx->pc != 0x112E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112E18u; }
        if (ctx->pc != 0x112E18u) { return; }
    }
    ctx->pc = 0x112E18u;
label_112e18:
    // 0x112e18: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x112E18u;
    {
        const bool branch_taken_0x112e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112e18) {
            ctx->pc = 0x112E78u;
            goto label_112e78;
        }
    }
    ctx->pc = 0x112E20u;
label_112e20:
    // 0x112e20: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x112e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x112e24: 0x24050440  addiu       $a1, $zero, 0x440
    ctx->pc = 0x112e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x112e28: 0x8c828738  lw          $v0, -0x78C8($a0)
    ctx->pc = 0x112e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936376)));
    // 0x112e2c: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x112e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x112e30: 0x24638f10  addiu       $v1, $v1, -0x70F0
    ctx->pc = 0x112e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938384));
    // 0x112e34: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x112e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x112e38: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x112e38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x112e3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112e40: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x112e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x112e44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x112e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112e48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x112E48u;
    {
        const bool branch_taken_0x112e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112E48u;
            // 0x112e4c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e48) {
            ctx->pc = 0x112E78u;
            goto label_112e78;
        }
    }
    ctx->pc = 0x112E50u;
label_112e50:
    // 0x112e50: 0x24050440  addiu       $a1, $zero, 0x440
    ctx->pc = 0x112e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    // 0x112e54: 0x8c828738  lw          $v0, -0x78C8($a0)
    ctx->pc = 0x112e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936376)));
    // 0x112e58: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x112e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x112e5c: 0x24638f10  addiu       $v1, $v1, -0x70F0
    ctx->pc = 0x112e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938384));
    // 0x112e60: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x112e60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x112e64: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x112e64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x112e68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x112e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112e6c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x112e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x112e70: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x112e70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112e74: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x112e74u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
label_112e78:
    // 0x112e78: 0xc0446de  jal         func_111B78
    ctx->pc = 0x112E78u;
    SET_GPR_U32(ctx, 31, 0x112E80u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112E80u; }
        if (ctx->pc != 0x112E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112E80u; }
        if (ctx->pc != 0x112E80u) { return; }
    }
    ctx->pc = 0x112E80u;
label_112e80:
    // 0x112e80: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x112E80u;
    {
        const bool branch_taken_0x112e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112E80u;
            // 0x112e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e80) {
            ctx->pc = 0x113048u;
            goto label_113048;
        }
    }
    ctx->pc = 0x112E88u;
label_112e88:
    // 0x112e88: 0xae710010  sw          $s1, 0x10($s3)
    ctx->pc = 0x112e88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 17));
    // 0x112e8c: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x112E8Cu;
    {
        const bool branch_taken_0x112e8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x112E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112E8Cu;
            // 0x112e90: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e8c) {
            ctx->pc = 0x112EACu;
            goto label_112eac;
        }
    }
    ctx->pc = 0x112E94u;
    // 0x112e94: 0xae60041c  sw          $zero, 0x41C($s3)
    ctx->pc = 0x112e94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1052), GPR_U32(ctx, 0));
    // 0x112e98: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x112e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x112e9c: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x112e9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x112ea0: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x112ea0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x112ea4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x112EA4u;
    {
        const bool branch_taken_0x112ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112EA4u;
            // 0x112ea8: 0x3c110041  lui         $s1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ea4) {
            ctx->pc = 0x112F80u;
            goto label_112f80;
        }
    }
    ctx->pc = 0x112EACu;
label_112eac:
    // 0x112eac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x112eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112eb0: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x112eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x112eb4: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x112eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x112eb8: 0xc41025  or          $v0, $a2, $a0
    ctx->pc = 0x112eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x112ebc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x112ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x112ec0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x112EC0u;
    {
        const bool branch_taken_0x112ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112EC0u;
            // 0x112ec4: 0xae63041c  sw          $v1, 0x41C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ec0) {
            ctx->pc = 0x112F38u;
            goto label_112f38;
        }
    }
    ctx->pc = 0x112EC8u;
    // 0x112ec8: 0x24c20400  addiu       $v0, $a2, 0x400
    ctx->pc = 0x112ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x112ecc: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x112eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x112ed0: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x112ed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x112ed4: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x112ed4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x112ed8: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x112ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
label_112edc:
    // 0x112edc: 0x68c50007  ldl         $a1, 0x7($a2)
    ctx->pc = 0x112edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x112ee0: 0x6cc50000  ldr         $a1, 0x0($a2)
    ctx->pc = 0x112ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x112ee4: 0x68c7000f  ldl         $a3, 0xF($a2)
    ctx->pc = 0x112ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x112ee8: 0x6cc70008  ldr         $a3, 0x8($a2)
    ctx->pc = 0x112ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x112eec: 0x68c80017  ldl         $t0, 0x17($a2)
    ctx->pc = 0x112eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x112ef0: 0x6cc80010  ldr         $t0, 0x10($a2)
    ctx->pc = 0x112ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x112ef4: 0x68c9001f  ldl         $t1, 0x1F($a2)
    ctx->pc = 0x112ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x112ef8: 0x6cc90018  ldr         $t1, 0x18($a2)
    ctx->pc = 0x112ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x112efc: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x112efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112f00: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x112f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112f04: 0xb087000f  sdl         $a3, 0xF($a0)
    ctx->pc = 0x112f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112f08: 0xb4870008  sdr         $a3, 0x8($a0)
    ctx->pc = 0x112f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112f0c: 0xb0880017  sdl         $t0, 0x17($a0)
    ctx->pc = 0x112f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112f10: 0xb4880010  sdr         $t0, 0x10($a0)
    ctx->pc = 0x112f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112f14: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x112f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112f18: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x112f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x112f1c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x112f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x112f20: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x112f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x112f24: 0x0  nop
    ctx->pc = 0x112f24u;
    // NOP
    // 0x112f28: 0x14c2ffec  bne         $a2, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x112F28u;
    {
        const bool branch_taken_0x112f28 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x112f28) {
            ctx->pc = 0x112EDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_112edc;
        }
    }
    ctx->pc = 0x112F30u;
    // 0x112f30: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x112F30u;
    {
        const bool branch_taken_0x112f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112F30u;
            // 0x112f34: 0x2463a8d8  addiu       $v1, $v1, -0x5728 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f30) {
            ctx->pc = 0x112F84u;
            goto label_112f84;
        }
    }
    ctx->pc = 0x112F38u;
label_112f38:
    // 0x112f38: 0x24c20400  addiu       $v0, $a2, 0x400
    ctx->pc = 0x112f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x112f3c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x112f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x112f40: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x112f40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x112f44: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x112f44u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x112f48: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x112f48u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
label_112f4c:
    // 0x112f4c: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x112f4cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x112f50: 0xdcc70008  ld          $a3, 0x8($a2)
    ctx->pc = 0x112f50u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x112f54: 0xdcc80010  ld          $t0, 0x10($a2)
    ctx->pc = 0x112f54u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x112f58: 0xdcc90018  ld          $t1, 0x18($a2)
    ctx->pc = 0x112f58u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x112f5c: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x112f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x112f60: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x112f60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x112f64: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x112f64u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x112f68: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x112f68u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x112f6c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x112f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x112f70: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x112f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x112f74: 0x0  nop
    ctx->pc = 0x112f74u;
    // NOP
    // 0x112f78: 0x14c2fff4  bne         $a2, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x112F78u;
    {
        const bool branch_taken_0x112f78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x112f78) {
            ctx->pc = 0x112F4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_112f4c;
        }
    }
    ctx->pc = 0x112F80u;
label_112f80:
    // 0x112f80: 0x2463a8d8  addiu       $v1, $v1, -0x5728
    ctx->pc = 0x112f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944984));
label_112f84:
    // 0x112f84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x112f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112f88: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x112f88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x112f8c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x112f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x112f90: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x112f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x112f94: 0x26348ec0  addiu       $s4, $s1, -0x7140
    ctx->pc = 0x112f94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294938304));
    // 0x112f98: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x112f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x112f9c: 0xc043318  jal         func_10CC60
    ctx->pc = 0x112F9Cu;
    SET_GPR_U32(ctx, 31, 0x112FA4u);
    ctx->pc = 0x112FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112F9Cu;
            // 0x112fa0: 0x26d08280  addiu       $s0, $s6, -0x7D80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112FA4u; }
        if (ctx->pc != 0x112FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112FA4u; }
        if (ctx->pc != 0x112FA4u) { return; }
    }
    ctx->pc = 0x112FA4u;
label_112fa4:
    // 0x112fa4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x112facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112fb0: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x112fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x112fb4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x112fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x112fb8: 0x24050420  addiu       $a1, $zero, 0x420
    ctx->pc = 0x112fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x112fbc: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x112FBCu;
    SET_GPR_U32(ctx, 31, 0x112FC4u);
    ctx->pc = 0x112FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112FBCu;
            // 0x112fc0: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (runtime->hasFunction(0x1102F8u)) {
        auto targetFn = runtime->lookupFunction(0x1102F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112FC4u; }
        if (ctx->pc != 0x112FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001102F8_0x1102f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112FC4u; }
        if (ctx->pc != 0x112FC4u) { return; }
    }
    ctx->pc = 0x112FC4u;
label_112fc4:
    // 0x112fc4: 0x26a49980  addiu       $a0, $s5, -0x6680
    ctx->pc = 0x112fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941056));
    // 0x112fc8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x112fc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fcc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x112fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x112fd0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x112fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x112fd4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x112fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x112fd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fdc: 0x24080420  addiu       $t0, $zero, 0x420
    ctx->pc = 0x112fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x112fe0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x112fe0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112fe4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x112fe4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112fe8: 0xc044576  jal         func_1115D8
    ctx->pc = 0x112FE8u;
    SET_GPR_U32(ctx, 31, 0x112FF0u);
    ctx->pc = 0x112FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112FE8u;
            // 0x112fec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (runtime->hasFunction(0x1115D8u)) {
        auto targetFn = runtime->lookupFunction(0x1115D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112FF0u; }
        if (ctx->pc != 0x112FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001115D8_0x1115d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112FF0u; }
        if (ctx->pc != 0x112FF0u) { return; }
    }
    ctx->pc = 0x112FF0u;
label_112ff0:
    // 0x112ff0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x112FF0u;
    {
        const bool branch_taken_0x112ff0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x112FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112FF0u;
            // 0x112ff4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ff0) {
            ctx->pc = 0x113010u;
            goto label_113010;
        }
    }
    ctx->pc = 0x112FF8u;
    // 0x112ff8: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x112FF8u;
    SET_GPR_U32(ctx, 31, 0x113000u);
    ctx->pc = 0x112FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112FF8u;
            // 0x112ffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113000u; }
        if (ctx->pc != 0x113000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113000u; }
        if (ctx->pc != 0x113000u) { return; }
    }
    ctx->pc = 0x113000u;
label_113000:
    // 0x113000: 0xc0446de  jal         func_111B78
    ctx->pc = 0x113000u;
    SET_GPR_U32(ctx, 31, 0x113008u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113008u; }
        if (ctx->pc != 0x113008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113008u; }
        if (ctx->pc != 0x113008u) { return; }
    }
    ctx->pc = 0x113008u;
label_113008:
    // 0x113008: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x113008u;
    {
        const bool branch_taken_0x113008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11300Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113008u;
            // 0x11300c: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113008) {
            ctx->pc = 0x113048u;
            goto label_113048;
        }
    }
    ctx->pc = 0x113010u;
label_113010:
    // 0x113010: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x113010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x113014: 0xc0446de  jal         func_111B78
    ctx->pc = 0x113014u;
    SET_GPR_U32(ctx, 31, 0x11301Cu);
    ctx->pc = 0x113018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113014u;
            // 0x113018: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11301Cu; }
        if (ctx->pc != 0x11301Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11301Cu; }
        if (ctx->pc != 0x11301Cu) { return; }
    }
    ctx->pc = 0x11301Cu;
label_11301c:
    // 0x11301c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11301Cu;
    {
        const bool branch_taken_0x11301c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11301c) {
            ctx->pc = 0x113034u;
            goto label_113034;
        }
    }
    ctx->pc = 0x113024u;
    // 0x113024: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113024u;
    SET_GPR_U32(ctx, 31, 0x11302Cu);
    ctx->pc = 0x113028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113024u;
            // 0x113028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11302Cu; }
        if (ctx->pc != 0x11302Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11302Cu; }
        if (ctx->pc != 0x11302Cu) { return; }
    }
    ctx->pc = 0x11302Cu;
label_11302c:
    // 0x11302c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11302Cu;
    {
        const bool branch_taken_0x11302c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11302Cu;
            // 0x113030: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11302c) {
            ctx->pc = 0x113048u;
            goto label_113048;
        }
    }
    ctx->pc = 0x113034u;
label_113034:
    // 0x113034: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x113034u;
    SET_GPR_U32(ctx, 31, 0x11303Cu);
    ctx->pc = 0x113038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113034u;
            // 0x113038: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11303Cu; }
        if (ctx->pc != 0x11303Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11303Cu; }
        if (ctx->pc != 0x11303Cu) { return; }
    }
    ctx->pc = 0x11303Cu;
label_11303c:
    // 0x11303c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x11303Cu;
    SET_GPR_U32(ctx, 31, 0x113044u);
    ctx->pc = 0x113040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11303Cu;
            // 0x113040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113044u; }
        if (ctx->pc != 0x113044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113044u; }
        if (ctx->pc != 0x113044u) { return; }
    }
    ctx->pc = 0x113044u;
label_113044:
    // 0x113044: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x113044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_113048:
    // 0x113048: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x113048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11304c: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x11304cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x113050: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x113050u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x113054: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x113054u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x113058: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x113058u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11305c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x11305cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113060: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x113060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113064: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x113064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113068: 0x3e00008  jr          $ra
    ctx->pc = 0x113068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11306Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113068u;
            // 0x11306c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x113070u;
label_113070:
    // 0x113070: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x113070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x113074: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x113074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x113078: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x113078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x11307c: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x11307cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113080: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x113080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x113084: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x113084u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113088: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x113088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x11308c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x11308cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113090: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x113090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x113094: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x113094u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113098: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x113098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x11309c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11309cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130a0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1130a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1130a4: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1130a4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1130a8: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1130a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1130ac: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1130acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1130b0: 0xc0445b2  jal         func_1116C8
    ctx->pc = 0x1130B0u;
    SET_GPR_U32(ctx, 31, 0x1130B8u);
    ctx->pc = 0x1130B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1130B0u;
            // 0x1130b4: 0x26d18280  addiu       $s1, $s6, -0x7D80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1116C8u;
    if (runtime->hasFunction(0x1116C8u)) {
        auto targetFn = runtime->lookupFunction(0x1116C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1130B8u; }
        if (ctx->pc != 0x1130B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001116C8_0x1116c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1130B8u; }
        if (ctx->pc != 0x1130B8u) { return; }
    }
    ctx->pc = 0x1130B8u;
label_1130b8:
    // 0x1130b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1130b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130bc: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x1130BCu;
    SET_GPR_U32(ctx, 31, 0x1130C4u);
    ctx->pc = 0x1130C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1130BCu;
            // 0x1130c0: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (runtime->hasFunction(0x111B48u)) {
        auto targetFn = runtime->lookupFunction(0x111B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1130C4u; }
        if (ctx->pc != 0x1130C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B48_0x111b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1130C4u; }
        if (ctx->pc != 0x1130C4u) { return; }
    }
    ctx->pc = 0x1130C4u;
label_1130c4:
    // 0x1130c4: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1130c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x1130c8: 0x8c43873c  lw          $v1, -0x78C4($v0)
    ctx->pc = 0x1130c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936380)));
    // 0x1130cc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1130CCu;
    {
        const bool branch_taken_0x1130cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1130cc) {
            ctx->pc = 0x1130DCu;
            goto label_1130dc;
        }
    }
    ctx->pc = 0x1130D4u;
    // 0x1130d4: 0xc04471c  jal         func_111C70
    ctx->pc = 0x1130D4u;
    SET_GPR_U32(ctx, 31, 0x1130DCu);
    ctx->pc = 0x111C70u;
    if (runtime->hasFunction(0x111C70u)) {
        auto targetFn = runtime->lookupFunction(0x111C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1130DCu; }
        if (ctx->pc != 0x1130DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111C70_0x111c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1130DCu; }
        if (ctx->pc != 0x1130DCu) { return; }
    }
    ctx->pc = 0x1130DCu;
label_1130dc:
    // 0x1130dc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1130DCu;
    {
        const bool branch_taken_0x1130dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1130dc) {
            ctx->pc = 0x1130F0u;
            goto label_1130f0;
        }
    }
    ctx->pc = 0x1130E4u;
    // 0x1130e4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1130e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1130e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1130E8u;
    {
        const bool branch_taken_0x1130e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1130ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1130E8u;
            // 0x1130ec: 0x2e620401  sltiu       $v0, $s3, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130e8) {
            ctx->pc = 0x113100u;
            goto label_113100;
        }
    }
    ctx->pc = 0x1130F0u;
label_1130f0:
    // 0x1130f0: 0xc0446de  jal         func_111B78
    ctx->pc = 0x1130F0u;
    SET_GPR_U32(ctx, 31, 0x1130F8u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1130F8u; }
        if (ctx->pc != 0x1130F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1130F8u; }
        if (ctx->pc != 0x1130F8u) { return; }
    }
    ctx->pc = 0x1130F8u;
label_1130f8:
    // 0x1130f8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1130F8u;
    {
        const bool branch_taken_0x1130f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1130FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1130F8u;
            // 0x1130fc: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1130f8) {
            ctx->pc = 0x11322Cu;
            goto label_11322c;
        }
    }
    ctx->pc = 0x113100u;
label_113100:
    // 0x113100: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113100u;
    {
        const bool branch_taken_0x113100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113100u;
            // 0x113104: 0x2e820401  sltiu       $v0, $s4, 0x401 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113100) {
            ctx->pc = 0x113110u;
            goto label_113110;
        }
    }
    ctx->pc = 0x113108u;
    // 0x113108: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113108u;
    {
        const bool branch_taken_0x113108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113108) {
            ctx->pc = 0x113120u;
            goto label_113120;
        }
    }
    ctx->pc = 0x113110u;
label_113110:
    // 0x113110: 0xc0446de  jal         func_111B78
    ctx->pc = 0x113110u;
    SET_GPR_U32(ctx, 31, 0x113118u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113118u; }
        if (ctx->pc != 0x113118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113118u; }
        if (ctx->pc != 0x113118u) { return; }
    }
    ctx->pc = 0x113118u;
label_113118:
    // 0x113118: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x113118u;
    {
        const bool branch_taken_0x113118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11311Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113118u;
            // 0x11311c: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113118) {
            ctx->pc = 0x11322Cu;
            goto label_11322c;
        }
    }
    ctx->pc = 0x113120u;
label_113120:
    // 0x113120: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113120u;
    {
        const bool branch_taken_0x113120 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x113124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113120u;
            // 0x113124: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113120) {
            ctx->pc = 0x113130u;
            goto label_113130;
        }
    }
    ctx->pc = 0x113128u;
    // 0x113128: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x113128u;
    {
        const bool branch_taken_0x113128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11312Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113128u;
            // 0x11312c: 0xae20041c  sw          $zero, 0x41C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113128) {
            ctx->pc = 0x11313Cu;
            goto label_11313c;
        }
    }
    ctx->pc = 0x113130u;
label_113130:
    // 0x113130: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x113130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x113134: 0xc049c48  jal         func_127120
    ctx->pc = 0x113134u;
    SET_GPR_U32(ctx, 31, 0x11313Cu);
    ctx->pc = 0x113138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113134u;
            // 0x113138: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11313Cu; }
        if (ctx->pc != 0x11313Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11313Cu; }
        if (ctx->pc != 0x11313Cu) { return; }
    }
    ctx->pc = 0x11313Cu;
label_11313c:
    // 0x11313c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x11313cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x113140: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x113140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x113144: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x113144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
    // 0x113148: 0x2442a8f0  addiu       $v0, $v0, -0x5710
    ctx->pc = 0x113148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945008));
    // 0x11314c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x11314cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x113150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x113150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x113154: 0xae33041c  sw          $s3, 0x41C($s1)
    ctx->pc = 0x113154u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 19));
    // 0x113158: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x113158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11315c: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x11315cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x113160: 0x26d08280  addiu       $s0, $s6, -0x7D80
    ctx->pc = 0x113160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294935168));
    // 0x113164: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x113164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x113168: 0xc043318  jal         func_10CC60
    ctx->pc = 0x113168u;
    SET_GPR_U32(ctx, 31, 0x113170u);
    ctx->pc = 0x11316Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113168u;
            // 0x11316c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113170u; }
        if (ctx->pc != 0x113170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113170u; }
        if (ctx->pc != 0x113170u) { return; }
    }
    ctx->pc = 0x113170u;
label_113170:
    // 0x113170: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x113170u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113174: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x113174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x113178: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x113178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11317c: 0xae340418  sw          $s4, 0x418($s1)
    ctx->pc = 0x11317cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1048), GPR_U32(ctx, 20));
    // 0x113180: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x113180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x113184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113188: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x113188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x11318c: 0x24050420  addiu       $a1, $zero, 0x420
    ctx->pc = 0x11318cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x113190: 0xae370414  sw          $s7, 0x414($s1)
    ctx->pc = 0x113190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1044), GPR_U32(ctx, 23));
    // 0x113194: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x113194u;
    SET_GPR_U32(ctx, 31, 0x11319Cu);
    ctx->pc = 0x113198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113194u;
            // 0x113198: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (runtime->hasFunction(0x1102F8u)) {
        auto targetFn = runtime->lookupFunction(0x1102F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11319Cu; }
        if (ctx->pc != 0x11319Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001102F8_0x1102f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11319Cu; }
        if (ctx->pc != 0x11319Cu) { return; }
    }
    ctx->pc = 0x11319Cu;
label_11319c:
    // 0x11319c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11319cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1131a0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1131a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x1131a4: 0x24518ec0  addiu       $s1, $v0, -0x7140
    ctx->pc = 0x1131a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938304));
    // 0x1131a8: 0x24849980  addiu       $a0, $a0, -0x6680
    ctx->pc = 0x1131a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941056));
    // 0x1131ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1131acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1131b0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1131b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1131b4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1131b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1131b8: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1131b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1131bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1131bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1131c0: 0x24080420  addiu       $t0, $zero, 0x420
    ctx->pc = 0x1131c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x1131c4: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1131c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1131c8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1131c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1131cc: 0xc044576  jal         func_1115D8
    ctx->pc = 0x1131CCu;
    SET_GPR_U32(ctx, 31, 0x1131D4u);
    ctx->pc = 0x1131D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1131CCu;
            // 0x1131d0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (runtime->hasFunction(0x1115D8u)) {
        auto targetFn = runtime->lookupFunction(0x1115D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1131D4u; }
        if (ctx->pc != 0x1131D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001115D8_0x1115d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1131D4u; }
        if (ctx->pc != 0x1131D4u) { return; }
    }
    ctx->pc = 0x1131D4u;
label_1131d4:
    // 0x1131d4: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1131D4u;
    {
        const bool branch_taken_0x1131d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1131D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1131D4u;
            // 0x1131d8: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131d4) {
            ctx->pc = 0x1131F4u;
            goto label_1131f4;
        }
    }
    ctx->pc = 0x1131DCu;
    // 0x1131dc: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x1131DCu;
    SET_GPR_U32(ctx, 31, 0x1131E4u);
    ctx->pc = 0x1131E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1131DCu;
            // 0x1131e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1131E4u; }
        if (ctx->pc != 0x1131E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1131E4u; }
        if (ctx->pc != 0x1131E4u) { return; }
    }
    ctx->pc = 0x1131E4u;
label_1131e4:
    // 0x1131e4: 0xc0446de  jal         func_111B78
    ctx->pc = 0x1131E4u;
    SET_GPR_U32(ctx, 31, 0x1131ECu);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1131ECu; }
        if (ctx->pc != 0x1131ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1131ECu; }
        if (ctx->pc != 0x1131ECu) { return; }
    }
    ctx->pc = 0x1131ECu;
label_1131ec:
    // 0x1131ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1131ECu;
    {
        const bool branch_taken_0x1131ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1131F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1131ECu;
            // 0x1131f0: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131ec) {
            ctx->pc = 0x11322Cu;
            goto label_11322c;
        }
    }
    ctx->pc = 0x1131F4u;
label_1131f4:
    // 0x1131f4: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x1131f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1131f8: 0xc0446de  jal         func_111B78
    ctx->pc = 0x1131F8u;
    SET_GPR_U32(ctx, 31, 0x113200u);
    ctx->pc = 0x1131FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1131F8u;
            // 0x1131fc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113200u; }
        if (ctx->pc != 0x113200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113200u; }
        if (ctx->pc != 0x113200u) { return; }
    }
    ctx->pc = 0x113200u;
label_113200:
    // 0x113200: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113200u;
    {
        const bool branch_taken_0x113200 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x113200) {
            ctx->pc = 0x113218u;
            goto label_113218;
        }
    }
    ctx->pc = 0x113208u;
    // 0x113208: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113208u;
    SET_GPR_U32(ctx, 31, 0x113210u);
    ctx->pc = 0x11320Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113208u;
            // 0x11320c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113210u; }
        if (ctx->pc != 0x113210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113210u; }
        if (ctx->pc != 0x113210u) { return; }
    }
    ctx->pc = 0x113210u;
label_113210:
    // 0x113210: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113210u;
    {
        const bool branch_taken_0x113210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113210u;
            // 0x113214: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113210) {
            ctx->pc = 0x11322Cu;
            goto label_11322c;
        }
    }
    ctx->pc = 0x113218u;
label_113218:
    // 0x113218: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x113218u;
    SET_GPR_U32(ctx, 31, 0x113220u);
    ctx->pc = 0x11321Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113218u;
            // 0x11321c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113220u; }
        if (ctx->pc != 0x113220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113220u; }
        if (ctx->pc != 0x113220u) { return; }
    }
    ctx->pc = 0x113220u;
label_113220:
    // 0x113220: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x113220u;
    SET_GPR_U32(ctx, 31, 0x113228u);
    ctx->pc = 0x113224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x113220u;
            // 0x113224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113228u; }
        if (ctx->pc != 0x113228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x113228u; }
        if (ctx->pc != 0x113228u) { return; }
    }
    ctx->pc = 0x113228u;
label_113228:
    // 0x113228: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x113228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11322c:
    // 0x11322c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x11322cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x113230: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x113230u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x113234: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x113234u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x113238: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x113238u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11323c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x11323cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x113240: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x113240u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x113244: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x113244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113248: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x113248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11324c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x11324cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113250: 0x3e00008  jr          $ra
    ctx->pc = 0x113250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x113250u;
            // 0x113254: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x113258u;
    ctx->pc = 0x113258u;
}
