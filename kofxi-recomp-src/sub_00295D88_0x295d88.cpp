#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295D88
// Address: 0x295d88 - 0x295f60
void sub_00295D88_0x295d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295D88_0x295d88");
#endif

    switch (ctx->pc) {
        case 0x295db4u: goto label_295db4;
        case 0x295dbcu: goto label_295dbc;
        case 0x295dd4u: goto label_295dd4;
        case 0x295df4u: goto label_295df4;
        case 0x295e08u: goto label_295e08;
        case 0x295e28u: goto label_295e28;
        case 0x295e40u: goto label_295e40;
        case 0x295e64u: goto label_295e64;
        case 0x295e78u: goto label_295e78;
        case 0x295e90u: goto label_295e90;
        case 0x295ea0u: goto label_295ea0;
        case 0x295ed0u: goto label_295ed0;
        case 0x295f04u: goto label_295f04;
        case 0x295f10u: goto label_295f10;
        case 0x295f28u: goto label_295f28;
        case 0x295f38u: goto label_295f38;
        default: break;
    }

    ctx->pc = 0x295d88u;

    // 0x295d88: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x295d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x295d8c: 0xffb401d0  sd          $s4, 0x1D0($sp)
    ctx->pc = 0x295d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 20));
    // 0x295d90: 0xffb301c0  sd          $s3, 0x1C0($sp)
    ctx->pc = 0x295d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 19));
    // 0x295d94: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x295d94u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x295d98: 0xffb201b0  sd          $s2, 0x1B0($sp)
    ctx->pc = 0x295d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 18));
    // 0x295d9c: 0xffb101a0  sd          $s1, 0x1A0($sp)
    ctx->pc = 0x295d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 17));
    // 0x295da0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x295da0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295da4: 0xffb00190  sd          $s0, 0x190($sp)
    ctx->pc = 0x295da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 16));
    // 0x295da8: 0xffbf01e0  sd          $ra, 0x1E0($sp)
    ctx->pc = 0x295da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 31));
    // 0x295dac: 0xc0a3dd0  jal         func_28F740
    ctx->pc = 0x295DACu;
    SET_GPR_U32(ctx, 31, 0x295DB4u);
    ctx->pc = 0x295DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295DACu;
            // 0x295db0: 0x2691b4b8  addiu       $s1, $s4, -0x4B48 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (runtime->hasFunction(0x28F740u)) {
        auto targetFn = runtime->lookupFunction(0x28F740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295DB4u; }
        if (ctx->pc != 0x295DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F740_0x28f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295DB4u; }
        if (ctx->pc != 0x295DB4u) { return; }
    }
    ctx->pc = 0x295DB4u;
label_295db4:
    // 0x295db4: 0xc0a8b7c  jal         func_2A2DF0
    ctx->pc = 0x295DB4u;
    SET_GPR_U32(ctx, 31, 0x295DBCu);
    ctx->pc = 0x295DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295DB4u;
            // 0x295db8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2DF0u;
    if (runtime->hasFunction(0x2A2DF0u)) {
        auto targetFn = runtime->lookupFunction(0x2A2DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295DBCu; }
        if (ctx->pc != 0x295DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2DF0_0x2a2df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295DBCu; }
        if (ctx->pc != 0x295DBCu) { return; }
    }
    ctx->pc = 0x295DBCu;
label_295dbc:
    // 0x295dbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x295dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295dc0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x295dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x295dc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295dc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x295dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295dcc: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x295DCCu;
    SET_GPR_U32(ctx, 31, 0x295DD4u);
    ctx->pc = 0x295DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295DCCu;
            // 0x295dd0: 0x240702ae  addiu       $a3, $zero, 0x2AE (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 686));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295DD4u; }
        if (ctx->pc != 0x295DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295DD4u; }
        if (ctx->pc != 0x295DD4u) { return; }
    }
    ctx->pc = 0x295DD4u;
label_295dd4:
    // 0x295dd4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x295dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x295dd8: 0x54600024  bnel        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x295DD8u;
    {
        const bool branch_taken_0x295dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x295dd8) {
            ctx->pc = 0x295DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x295DD8u;
            // 0x295ddc: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x295E6Cu;
            goto label_295e6c;
        }
    }
    ctx->pc = 0x295DE0u;
    // 0x295de0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x295de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x295de4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295de8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x295de8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295dec: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x295DECu;
    SET_GPR_U32(ctx, 31, 0x295DF4u);
    ctx->pc = 0x295DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295DECu;
            // 0x295df0: 0x240702b5  addiu       $a3, $zero, 0x2B5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 693));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295DF4u; }
        if (ctx->pc != 0x295DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295DF4u; }
        if (ctx->pc != 0x295DF4u) { return; }
    }
    ctx->pc = 0x295DF4u;
label_295df4:
    // 0x295df4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x295df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x295df8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295dfc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x295dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e00: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x295E00u;
    SET_GPR_U32(ctx, 31, 0x295E08u);
    ctx->pc = 0x295E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295E00u;
            // 0x295e04: 0x240702b6  addiu       $a3, $zero, 0x2B6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 694));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E08u; }
        if (ctx->pc != 0x295E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E08u; }
        if (ctx->pc != 0x295E08u) { return; }
    }
    ctx->pc = 0x295E08u;
label_295e08:
    // 0x295e08: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x295e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x295e0c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x295E0Cu;
    {
        const bool branch_taken_0x295e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x295E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295E0Cu;
            // 0x295e10: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e0c) {
            ctx->pc = 0x295E54u;
            goto label_295e54;
        }
    }
    ctx->pc = 0x295E14u;
    // 0x295e14: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x295e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x295e18: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x295e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x295e1c: 0x24845d58  addiu       $a0, $a0, 0x5D58
    ctx->pc = 0x295e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23896));
    // 0x295e20: 0xc0a6170  jal         func_2985C0
    ctx->pc = 0x295E20u;
    SET_GPR_U32(ctx, 31, 0x295E28u);
    ctx->pc = 0x295E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295E20u;
            // 0x295e24: 0x24a55d70  addiu       $a1, $a1, 0x5D70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2985C0u;
    if (runtime->hasFunction(0x2985C0u)) {
        auto targetFn = runtime->lookupFunction(0x2985C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E28u; }
        if (ctx->pc != 0x295E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002985C0_0x2985c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E28u; }
        if (ctx->pc != 0x295E28u) { return; }
    }
    ctx->pc = 0x295E28u;
label_295e28:
    // 0x295e28: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x295e28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x295e2c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x295e2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e30: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x295e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x295e34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295e38: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x295E38u;
    SET_GPR_U32(ctx, 31, 0x295E40u);
    ctx->pc = 0x295E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295E38u;
            // 0x295e3c: 0x240702bc  addiu       $a3, $zero, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E40u; }
        if (ctx->pc != 0x295E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E40u; }
        if (ctx->pc != 0x295E40u) { return; }
    }
    ctx->pc = 0x295E40u;
label_295e40:
    // 0x295e40: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x295e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x295e44: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x295E44u;
    {
        const bool branch_taken_0x295e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x295E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295E44u;
            // 0x295e48: 0x3c0201c9  lui         $v0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e44) {
            ctx->pc = 0x295E90u;
            goto label_295e90;
        }
    }
    ctx->pc = 0x295E4Cu;
    // 0x295e4c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x295E4Cu;
    {
        const bool branch_taken_0x295e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295E4Cu;
            // 0x295e50: 0x244246a0  addiu       $v0, $v0, 0x46A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e4c) {
            ctx->pc = 0x295F3Cu;
            goto label_295f3c;
        }
    }
    ctx->pc = 0x295E54u;
label_295e54:
    // 0x295e54: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x295e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x295e58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295e5c: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x295E5Cu;
    SET_GPR_U32(ctx, 31, 0x295E64u);
    ctx->pc = 0x295E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295E5Cu;
            // 0x295e60: 0x240702c9  addiu       $a3, $zero, 0x2C9 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 713));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E64u; }
        if (ctx->pc != 0x295E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E64u; }
        if (ctx->pc != 0x295E64u) { return; }
    }
    ctx->pc = 0x295E64u;
label_295e64:
    // 0x295e64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x295E64u;
    {
        const bool branch_taken_0x295e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x295e64) {
            ctx->pc = 0x295E90u;
            goto label_295e90;
        }
    }
    ctx->pc = 0x295E6Cu;
label_295e6c:
    // 0x295e6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x295e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e70: 0xc0a6246  jal         func_298918
    ctx->pc = 0x295E70u;
    SET_GPR_U32(ctx, 31, 0x295E78u);
    ctx->pc = 0x295E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295E70u;
            // 0x295e74: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298918u;
    if (runtime->hasFunction(0x298918u)) {
        auto targetFn = runtime->lookupFunction(0x298918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E78u; }
        if (ctx->pc != 0x295E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298918_0x298918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E78u; }
        if (ctx->pc != 0x295E78u) { return; }
    }
    ctx->pc = 0x295E78u;
label_295e78:
    // 0x295e78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x295e78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e7c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x295e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e80: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x295e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x295e84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295e88: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x295E88u;
    SET_GPR_U32(ctx, 31, 0x295E90u);
    ctx->pc = 0x295E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295E88u;
            // 0x295e8c: 0x240702d4  addiu       $a3, $zero, 0x2D4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 724));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E90u; }
        if (ctx->pc != 0x295E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295E90u; }
        if (ctx->pc != 0x295E90u) { return; }
    }
    ctx->pc = 0x295E90u;
label_295e90:
    // 0x295e90: 0x1640002a  bnez        $s2, . + 4 + (0x2A << 2)
    ctx->pc = 0x295E90u;
    {
        const bool branch_taken_0x295e90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x295E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295E90u;
            // 0x295e94: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e90) {
            ctx->pc = 0x295F3Cu;
            goto label_295f3c;
        }
    }
    ctx->pc = 0x295E98u;
    // 0x295e98: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x295E98u;
    SET_GPR_U32(ctx, 31, 0x295EA0u);
    ctx->pc = 0x295E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295E98u;
            // 0x295e9c: 0x24040190  addiu       $a0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295EA0u; }
        if (ctx->pc != 0x295EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295EA0u; }
        if (ctx->pc != 0x295EA0u) { return; }
    }
    ctx->pc = 0x295EA0u;
label_295ea0:
    // 0x295ea0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x295ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ea4: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x295EA4u;
    {
        const bool branch_taken_0x295ea4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x295ea4) {
            ctx->pc = 0x295EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x295EA4u;
            // 0x295ea8: 0xfe500000  sd          $s0, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x295EB8u;
            goto label_295eb8;
        }
    }
    ctx->pc = 0x295EACu;
    // 0x295eac: 0x3c0201c9  lui         $v0, 0x1C9
    ctx->pc = 0x295eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)457 << 16));
    // 0x295eb0: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x295EB0u;
    {
        const bool branch_taken_0x295eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295EB0u;
            // 0x295eb4: 0x244246a0  addiu       $v0, $v0, 0x46A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295eb0) {
            ctx->pc = 0x295F3Cu;
            goto label_295f3c;
        }
    }
    ctx->pc = 0x295EB8u;
label_295eb8:
    // 0x295eb8: 0x264300c8  addiu       $v1, $s2, 0xC8
    ctx->pc = 0x295eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 200));
    // 0x295ebc: 0xae400188  sw          $zero, 0x188($s2)
    ctx->pc = 0x295ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
    // 0x295ec0: 0x26420088  addiu       $v0, $s2, 0x88
    ctx->pc = 0x295ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 136));
    // 0x295ec4: 0xae40018c  sw          $zero, 0x18C($s2)
    ctx->pc = 0x295ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 0));
    // 0x295ec8: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x295ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x295ecc: 0x0  nop
    ctx->pc = 0x295eccu;
    // NOP
label_295ed0:
    // 0x295ed0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x295ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x295ed4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x295ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x295ed8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x295ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x295edc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x295edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x295ee0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x295ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x295ee4: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x295EE4u;
    {
        const bool branch_taken_0x295ee4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x295ee4) {
            ctx->pc = 0x295ED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295ed0;
        }
    }
    ctx->pc = 0x295EECu;
    // 0x295eec: 0x2690b4b8  addiu       $s0, $s4, -0x4B48
    ctx->pc = 0x295eecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294948024));
    // 0x295ef0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x295ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x295ef4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295ef8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x295ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295efc: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x295EFCu;
    SET_GPR_U32(ctx, 31, 0x295F04u);
    ctx->pc = 0x295F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295EFCu;
            // 0x295f00: 0x240702ea  addiu       $a3, $zero, 0x2EA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 746));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F04u; }
        if (ctx->pc != 0x295F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F04u; }
        if (ctx->pc != 0x295F04u) { return; }
    }
    ctx->pc = 0x295F04u;
label_295f04:
    // 0x295f04: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x295f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x295f08: 0xc0a61dc  jal         func_298770
    ctx->pc = 0x295F08u;
    SET_GPR_U32(ctx, 31, 0x295F10u);
    ctx->pc = 0x295F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295F08u;
            // 0x295f0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298770u;
    if (runtime->hasFunction(0x298770u)) {
        auto targetFn = runtime->lookupFunction(0x298770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F10u; }
        if (ctx->pc != 0x295F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298770_0x298770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F10u; }
        if (ctx->pc != 0x295F10u) { return; }
    }
    ctx->pc = 0x295F10u;
label_295f10:
    // 0x295f10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x295f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x295f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f18: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x295f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x295f1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x295f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295f20: 0xc0a8b3a  jal         func_2A2CE8
    ctx->pc = 0x295F20u;
    SET_GPR_U32(ctx, 31, 0x295F28u);
    ctx->pc = 0x295F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295F20u;
            // 0x295f24: 0x240702f1  addiu       $a3, $zero, 0x2F1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 753));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A2CE8u;
    if (runtime->hasFunction(0x2A2CE8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F28u; }
        if (ctx->pc != 0x295F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2CE8_0x2a2ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F28u; }
        if (ctx->pc != 0x295F28u) { return; }
    }
    ctx->pc = 0x295F28u;
label_295f28:
    // 0x295f28: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x295F28u;
    {
        const bool branch_taken_0x295f28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x295F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295F28u;
            // 0x295f2c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295f28) {
            ctx->pc = 0x295F3Cu;
            goto label_295f3c;
        }
    }
    ctx->pc = 0x295F30u;
    // 0x295f30: 0xc0a5608  jal         func_295820
    ctx->pc = 0x295F30u;
    SET_GPR_U32(ctx, 31, 0x295F38u);
    ctx->pc = 0x295F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295F30u;
            // 0x295f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295820u;
    if (runtime->hasFunction(0x295820u)) {
        auto targetFn = runtime->lookupFunction(0x295820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F38u; }
        if (ctx->pc != 0x295F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295820_0x295820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295F38u; }
        if (ctx->pc != 0x295F38u) { return; }
    }
    ctx->pc = 0x295F38u;
label_295f38:
    // 0x295f38: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x295f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_295f3c:
    // 0x295f3c: 0xdfbf01e0  ld          $ra, 0x1E0($sp)
    ctx->pc = 0x295f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x295f40: 0xdfb401d0  ld          $s4, 0x1D0($sp)
    ctx->pc = 0x295f40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x295f44: 0xdfb301c0  ld          $s3, 0x1C0($sp)
    ctx->pc = 0x295f44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x295f48: 0xdfb201b0  ld          $s2, 0x1B0($sp)
    ctx->pc = 0x295f48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x295f4c: 0xdfb101a0  ld          $s1, 0x1A0($sp)
    ctx->pc = 0x295f4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x295f50: 0xdfb00190  ld          $s0, 0x190($sp)
    ctx->pc = 0x295f50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x295f54: 0x3e00008  jr          $ra
    ctx->pc = 0x295F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295F54u;
            // 0x295f58: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x295F5Cu;
    // 0x295f5c: 0x0  nop
    ctx->pc = 0x295f5cu;
    // NOP
    ctx->pc = 0x295f60u;
}
