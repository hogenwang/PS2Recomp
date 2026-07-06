#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00267DB0
// Address: 0x267db0 - 0x267f68
void sub_00267DB0_0x267db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267DB0_0x267db0");
#endif

    switch (ctx->pc) {
        case 0x267e08u: goto label_267e08;
        case 0x267e28u: goto label_267e28;
        case 0x267e38u: goto label_267e38;
        case 0x267e54u: goto label_267e54;
        case 0x267e68u: goto label_267e68;
        case 0x267e78u: goto label_267e78;
        case 0x267e90u: goto label_267e90;
        case 0x267ea8u: goto label_267ea8;
        case 0x267ec8u: goto label_267ec8;
        case 0x267edcu: goto label_267edc;
        case 0x267ef0u: goto label_267ef0;
        case 0x267f04u: goto label_267f04;
        case 0x267f20u: goto label_267f20;
        case 0x267f34u: goto label_267f34;
        default: break;
    }

    ctx->pc = 0x267db0u;

    // 0x267db0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x267db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x267db4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x267db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267db8: 0xffb700d0  sd          $s7, 0xD0($sp)
    ctx->pc = 0x267db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
    // 0x267dbc: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x267dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x267dc0: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x267dc0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x267dc4: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x267dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x267dc8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x267dc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267dcc: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x267dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x267dd0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x267dd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267dd4: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x267dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x267dd8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x267dd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ddc: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x267ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x267de0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x267de0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267de4: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x267de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x267de8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x267de8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267dec: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x267decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x267df0: 0x1642004d  bne         $s2, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x267DF0u;
    {
        const bool branch_taken_0x267df0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x267DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267DF0u;
            // 0x267df4: 0xffb00060  sd          $s0, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267df0) {
            ctx->pc = 0x267F28u;
            goto label_267f28;
        }
    }
    ctx->pc = 0x267DF8u;
    // 0x267df8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x267df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267dfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x267dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267e00: 0xc0973ba  jal         func_25CEE8
    ctx->pc = 0x267E00u;
    SET_GPR_U32(ctx, 31, 0x267E08u);
    ctx->pc = 0x267E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267E00u;
            // 0x267e04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (runtime->hasFunction(0x25CEE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CEE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E08u; }
        if (ctx->pc != 0x267E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CEE8_0x25cee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E08u; }
        if (ctx->pc != 0x267E08u) { return; }
    }
    ctx->pc = 0x267E08u;
label_267e08:
    // 0x267e08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x267e08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e0c: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x267E0Cu;
    {
        const bool branch_taken_0x267e0c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x267E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267E0Cu;
            // 0x267e10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e0c) {
            ctx->pc = 0x267E1Cu;
            goto label_267e1c;
        }
    }
    ctx->pc = 0x267E14u;
    // 0x267e14: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x267E14u;
    {
        const bool branch_taken_0x267e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267E14u;
            // 0x267e18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e14) {
            ctx->pc = 0x267F38u;
            goto label_267f38;
        }
    }
    ctx->pc = 0x267E1Cu;
label_267e1c:
    // 0x267e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x267e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e20: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x267E20u;
    SET_GPR_U32(ctx, 31, 0x267E28u);
    ctx->pc = 0x267E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267E20u;
            // 0x267e24: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E28u; }
        if (ctx->pc != 0x267E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E28u; }
        if (ctx->pc != 0x267E28u) { return; }
    }
    ctx->pc = 0x267E28u;
label_267e28:
    // 0x267e28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x267e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e30: 0xc04a966  jal         func_12A598
    ctx->pc = 0x267E30u;
    SET_GPR_U32(ctx, 31, 0x267E38u);
    ctx->pc = 0x267E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267E30u;
            // 0x267e34: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E38u; }
        if (ctx->pc != 0x267E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E38u; }
        if (ctx->pc != 0x267E38u) { return; }
    }
    ctx->pc = 0x267E38u;
label_267e38:
    // 0x267e38: 0xa3b20011  sb          $s2, 0x11($sp)
    ctx->pc = 0x267e38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 18));
    // 0x267e3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x267e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e40: 0x3405c020  ori         $a1, $zero, 0xC020
    ctx->pc = 0x267e40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
    // 0x267e44: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x267e44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x267e48: 0x34a56921  ori         $a1, $a1, 0x6921
    ctx->pc = 0x267e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26913);
    // 0x267e4c: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x267E4Cu;
    SET_GPR_U32(ctx, 31, 0x267E54u);
    ctx->pc = 0x267E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267E4Cu;
            // 0x267e50: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E54u; }
        if (ctx->pc != 0x267E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E54u; }
        if (ctx->pc != 0x267E54u) { return; }
    }
    ctx->pc = 0x267E54u;
label_267e54:
    // 0x267e54: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x267E54u;
    {
        const bool branch_taken_0x267e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267E54u;
            // 0x267e58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e54) {
            ctx->pc = 0x267EA0u;
            goto label_267ea0;
        }
    }
    ctx->pc = 0x267E5Cu;
    // 0x267e5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x267e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e60: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x267E60u;
    SET_GPR_U32(ctx, 31, 0x267E68u);
    ctx->pc = 0x267E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267E60u;
            // 0x267e64: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E68u; }
        if (ctx->pc != 0x267E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E68u; }
        if (ctx->pc != 0x267E68u) { return; }
    }
    ctx->pc = 0x267E68u;
label_267e68:
    // 0x267e68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x267e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x267e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e70: 0xc04a966  jal         func_12A598
    ctx->pc = 0x267E70u;
    SET_GPR_U32(ctx, 31, 0x267E78u);
    ctx->pc = 0x267E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267E70u;
            // 0x267e74: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E78u; }
        if (ctx->pc != 0x267E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E78u; }
        if (ctx->pc != 0x267E78u) { return; }
    }
    ctx->pc = 0x267E78u;
label_267e78:
    // 0x267e78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x267e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267e7c: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x267e7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
    // 0x267e80: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x267e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x267e84: 0x34a56919  ori         $a1, $a1, 0x6919
    ctx->pc = 0x267e84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26905);
    // 0x267e88: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x267E88u;
    SET_GPR_U32(ctx, 31, 0x267E90u);
    ctx->pc = 0x267E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267E88u;
            // 0x267e8c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E90u; }
        if (ctx->pc != 0x267E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267E90u; }
        if (ctx->pc != 0x267E90u) { return; }
    }
    ctx->pc = 0x267E90u;
label_267e90:
    // 0x267e90: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x267E90u;
    {
        const bool branch_taken_0x267e90 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x267E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267E90u;
            // 0x267e94: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e90) {
            ctx->pc = 0x267F2Cu;
            goto label_267f2c;
        }
    }
    ctx->pc = 0x267E98u;
    // 0x267e98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x267E98u;
    {
        const bool branch_taken_0x267e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267E98u;
            // 0x267e9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e98) {
            ctx->pc = 0x267EBCu;
            goto label_267ebc;
        }
    }
    ctx->pc = 0x267EA0u;
label_267ea0:
    // 0x267ea0: 0xc0972fa  jal         func_25CBE8
    ctx->pc = 0x267EA0u;
    SET_GPR_U32(ctx, 31, 0x267EA8u);
    ctx->pc = 0x25CBE8u;
    if (runtime->hasFunction(0x25CBE8u)) {
        auto targetFn = runtime->lookupFunction(0x25CBE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267EA8u; }
        if (ctx->pc != 0x267EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CBE8_0x25cbe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267EA8u; }
        if (ctx->pc != 0x267EA8u) { return; }
    }
    ctx->pc = 0x267EA8u;
label_267ea8:
    // 0x267ea8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x267ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267eac: 0x2402007d  addiu       $v0, $zero, 0x7D
    ctx->pc = 0x267eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x267eb0: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x267EB0u;
    {
        const bool branch_taken_0x267eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x267EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267EB0u;
            // 0x267eb4: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267eb0) {
            ctx->pc = 0x267F2Cu;
            goto label_267f2c;
        }
    }
    ctx->pc = 0x267EB8u;
    // 0x267eb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x267eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267ebc:
    // 0x267ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ec0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x267EC0u;
    SET_GPR_U32(ctx, 31, 0x267EC8u);
    ctx->pc = 0x267EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267EC0u;
            // 0x267ec4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267EC8u; }
        if (ctx->pc != 0x267EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267EC8u; }
        if (ctx->pc != 0x267EC8u) { return; }
    }
    ctx->pc = 0x267EC8u;
label_267ec8:
    // 0x267ec8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x267ec8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x267ecc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x267eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ed4: 0xc04a966  jal         func_12A598
    ctx->pc = 0x267ED4u;
    SET_GPR_U32(ctx, 31, 0x267EDCu);
    ctx->pc = 0x267ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267ED4u;
            // 0x267ed8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267EDCu; }
        if (ctx->pc != 0x267EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267EDCu; }
        if (ctx->pc != 0x267EDCu) { return; }
    }
    ctx->pc = 0x267EDCu;
label_267edc:
    // 0x267edc: 0xa3b20031  sb          $s2, 0x31($sp)
    ctx->pc = 0x267edcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 18));
    // 0x267ee0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x267ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ee4: 0xa3b30030  sb          $s3, 0x30($sp)
    ctx->pc = 0x267ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 19));
    // 0x267ee8: 0xc099226  jal         func_264898
    ctx->pc = 0x267EE8u;
    SET_GPR_U32(ctx, 31, 0x267EF0u);
    ctx->pc = 0x267EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267EE8u;
            // 0x267eec: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264898u;
    if (runtime->hasFunction(0x264898u)) {
        auto targetFn = runtime->lookupFunction(0x264898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267EF0u; }
        if (ctx->pc != 0x267EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264898_0x264898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267EF0u; }
        if (ctx->pc != 0x267EF0u) { return; }
    }
    ctx->pc = 0x267EF0u;
label_267ef0:
    // 0x267ef0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x267EF0u;
    {
        const bool branch_taken_0x267ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267EF0u;
            // 0x267ef4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ef0) {
            ctx->pc = 0x267F2Cu;
            goto label_267f2c;
        }
    }
    ctx->pc = 0x267EF8u;
    // 0x267ef8: 0xa3b30050  sb          $s3, 0x50($sp)
    ctx->pc = 0x267ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 19));
    // 0x267efc: 0xc099226  jal         func_264898
    ctx->pc = 0x267EFCu;
    SET_GPR_U32(ctx, 31, 0x267F04u);
    ctx->pc = 0x267F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267EFCu;
            // 0x267f00: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264898u;
    if (runtime->hasFunction(0x264898u)) {
        auto targetFn = runtime->lookupFunction(0x264898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F04u; }
        if (ctx->pc != 0x267F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264898_0x264898(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F04u; }
        if (ctx->pc != 0x267F04u) { return; }
    }
    ctx->pc = 0x267F04u;
label_267f04:
    // 0x267f04: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x267F04u;
    {
        const bool branch_taken_0x267f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267F04u;
            // 0x267f08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f04) {
            ctx->pc = 0x267F2Cu;
            goto label_267f2c;
        }
    }
    ctx->pc = 0x267F0Cu;
    // 0x267f0c: 0x34058040  ori         $a1, $zero, 0x8040
    ctx->pc = 0x267f0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
    // 0x267f10: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x267f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x267f14: 0x34a5691a  ori         $a1, $a1, 0x691A
    ctx->pc = 0x267f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26906);
    // 0x267f18: 0xc097bf2  jal         func_25EFC8
    ctx->pc = 0x267F18u;
    SET_GPR_U32(ctx, 31, 0x267F20u);
    ctx->pc = 0x267F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267F18u;
            // 0x267f1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25EFC8u;
    if (runtime->hasFunction(0x25EFC8u)) {
        auto targetFn = runtime->lookupFunction(0x25EFC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F20u; }
        if (ctx->pc != 0x267F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025EFC8_0x25efc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F20u; }
        if (ctx->pc != 0x267F20u) { return; }
    }
    ctx->pc = 0x267F20u;
label_267f20:
    // 0x267f20: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x267F20u;
    {
        const bool branch_taken_0x267f20 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x267f20) {
            ctx->pc = 0x267F2Cu;
            goto label_267f2c;
        }
    }
    ctx->pc = 0x267F28u;
label_267f28:
    // 0x267f28: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x267f28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267f2c:
    // 0x267f2c: 0xc097c9e  jal         func_25F278
    ctx->pc = 0x267F2Cu;
    SET_GPR_U32(ctx, 31, 0x267F34u);
    ctx->pc = 0x267F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x267F2Cu;
            // 0x267f30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (runtime->hasFunction(0x25F278u)) {
        auto targetFn = runtime->lookupFunction(0x25F278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F34u; }
        if (ctx->pc != 0x267F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F278_0x25f278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x267F34u; }
        if (ctx->pc != 0x267F34u) { return; }
    }
    ctx->pc = 0x267F34u;
label_267f34:
    // 0x267f34: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x267f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_267f38:
    // 0x267f38: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x267f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x267f3c: 0xdfb700d0  ld          $s7, 0xD0($sp)
    ctx->pc = 0x267f3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x267f40: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x267f40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x267f44: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x267f44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x267f48: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x267f48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x267f4c: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x267f4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x267f50: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x267f50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x267f54: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x267f54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x267f58: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x267f58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x267F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x267F5Cu;
            // 0x267f60: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x267F64u;
    // 0x267f64: 0x0  nop
    ctx->pc = 0x267f64u;
    // NOP
    ctx->pc = 0x267f68u;
}
