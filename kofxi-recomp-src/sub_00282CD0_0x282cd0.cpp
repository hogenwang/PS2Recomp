#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282CD0
// Address: 0x282cd0 - 0x282ff8
void sub_00282CD0_0x282cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282CD0_0x282cd0");
#endif

    switch (ctx->pc) {
        case 0x282d0cu: goto label_282d0c;
        case 0x282d50u: goto label_282d50;
        case 0x282d64u: goto label_282d64;
        case 0x282db4u: goto label_282db4;
        case 0x282dd0u: goto label_282dd0;
        case 0x282decu: goto label_282dec;
        case 0x282e08u: goto label_282e08;
        case 0x282e24u: goto label_282e24;
        case 0x282e44u: goto label_282e44;
        case 0x282e64u: goto label_282e64;
        case 0x282e84u: goto label_282e84;
        case 0x282ea4u: goto label_282ea4;
        case 0x282ec4u: goto label_282ec4;
        case 0x282ee0u: goto label_282ee0;
        case 0x282f20u: goto label_282f20;
        case 0x282f5cu: goto label_282f5c;
        case 0x282f8cu: goto label_282f8c;
        case 0x282fd8u: goto label_282fd8;
        default: break;
    }

    ctx->pc = 0x282cd0u;

    // 0x282cd0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x282cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x282cd4: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x282cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x282cd8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x282cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x282cdc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x282cdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ce0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x282ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x282ce4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x282ce4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ce8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x282ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x282cec: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x282cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282cf0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x282CF0u;
    {
        const bool branch_taken_0x282cf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x282CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282CF0u;
            // 0x282cf4: 0xffb10030  sd          $s1, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282cf0) {
            ctx->pc = 0x282D04u;
            goto label_282d04;
        }
    }
    ctx->pc = 0x282CF8u;
    // 0x282cf8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x282cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x282cfc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x282CFCu;
    {
        const bool branch_taken_0x282cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282CFCu;
            // 0x282d00: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282cfc) {
            ctx->pc = 0x282D20u;
            goto label_282d20;
        }
    }
    ctx->pc = 0x282D04u;
label_282d04:
    // 0x282d04: 0xc0a0bfe  jal         func_282FF8
    ctx->pc = 0x282D04u;
    SET_GPR_U32(ctx, 31, 0x282D0Cu);
    ctx->pc = 0x282FF8u;
    if (runtime->hasFunction(0x282FF8u)) {
        auto targetFn = runtime->lookupFunction(0x282FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D0Cu; }
        if (ctx->pc != 0x282D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282FF8_0x282ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D0Cu; }
        if (ctx->pc != 0x282D0Cu) { return; }
    }
    ctx->pc = 0x282D0Cu;
label_282d0c:
    // 0x282d0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x282d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d10: 0x122000b2  beqz        $s1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x282D10u;
    {
        const bool branch_taken_0x282d10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x282D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282D10u;
            // 0x282d14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282d10) {
            ctx->pc = 0x282FDCu;
            goto label_282fdc;
        }
    }
    ctx->pc = 0x282D18u;
    // 0x282d18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x282D18u;
    {
        const bool branch_taken_0x282d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282D18u;
            // 0x282d1c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282d18) {
            ctx->pc = 0x282D24u;
            goto label_282d24;
        }
    }
    ctx->pc = 0x282D20u;
label_282d20:
    // 0x282d20: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x282d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_282d24:
    // 0x282d24: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x282d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x282d28: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x282d28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x282d2c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x282d2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x282d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d34: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x282d34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282d38: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x282d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x282d3c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x282d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x282d40: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x282d40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x282d44: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x282d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x282d48: 0xc0a0554  jal         func_281550
    ctx->pc = 0x282D48u;
    SET_GPR_U32(ctx, 31, 0x282D50u);
    ctx->pc = 0x282D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282D48u;
            // 0x282d4c: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281550u;
    if (runtime->hasFunction(0x281550u)) {
        auto targetFn = runtime->lookupFunction(0x281550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D50u; }
        if (ctx->pc != 0x282D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281550_0x281550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D50u; }
        if (ctx->pc != 0x282D50u) { return; }
    }
    ctx->pc = 0x282D50u;
label_282d50:
    // 0x282d50: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x282d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x282d54: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x282D54u;
    {
        const bool branch_taken_0x282d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282d54) {
            ctx->pc = 0x282FB4u;
            goto label_282fb4;
        }
    }
    ctx->pc = 0x282D5Cu;
    // 0x282d5c: 0xc0a0c40  jal         func_283100
    ctx->pc = 0x282D5Cu;
    SET_GPR_U32(ctx, 31, 0x282D64u);
    ctx->pc = 0x282D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282D5Cu;
            // 0x282d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283100u;
    if (runtime->hasFunction(0x283100u)) {
        auto targetFn = runtime->lookupFunction(0x283100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D64u; }
        if (ctx->pc != 0x282D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283100_0x283100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D64u; }
        if (ctx->pc != 0x282D64u) { return; }
    }
    ctx->pc = 0x282D64u;
label_282d64:
    // 0x282d64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x282d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282d68: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x282d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x282d6c: 0x2c83001d  sltiu       $v1, $a0, 0x1D
    ctx->pc = 0x282d6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x282d70: 0x10600080  beqz        $v1, . + 4 + (0x80 << 2)
    ctx->pc = 0x282D70u;
    {
        const bool branch_taken_0x282d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282D70u;
            // 0x282d74: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282d70) {
            ctx->pc = 0x282F74u;
            goto label_282f74;
        }
    }
    ctx->pc = 0x282D78u;
    // 0x282d78: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x282d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x282d7c: 0x2442a620  addiu       $v0, $v0, -0x59E0
    ctx->pc = 0x282d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944288));
    // 0x282d80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x282d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x282d84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x282d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x282d88: 0x800008  jr          $a0
    ctx->pc = 0x282D88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282D90u: goto label_282d90;
            case 0x282DA0u: goto label_282da0;
            case 0x282DBCu: goto label_282dbc;
            case 0x282DD8u: goto label_282dd8;
            case 0x282DF4u: goto label_282df4;
            case 0x282E10u: goto label_282e10;
            case 0x282E2Cu: goto label_282e2c;
            case 0x282E4Cu: goto label_282e4c;
            case 0x282E6Cu: goto label_282e6c;
            case 0x282E8Cu: goto label_282e8c;
            case 0x282EACu: goto label_282eac;
            case 0x282ECCu: goto label_282ecc;
            case 0x282EF4u: goto label_282ef4;
            case 0x282F74u: goto label_282f74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282D90u;
label_282d90:
    // 0x282d90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x282d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282d94: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x282d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x282d98: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x282D98u;
    {
        const bool branch_taken_0x282d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282D98u;
            // 0x282d9c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282d98) {
            ctx->pc = 0x282F94u;
            goto label_282f94;
        }
    }
    ctx->pc = 0x282DA0u;
label_282da0:
    // 0x282da0: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x282da0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282da4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x282da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282da8: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x282da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x282dac: 0xc0a00b6  jal         func_2802D8
    ctx->pc = 0x282DACu;
    SET_GPR_U32(ctx, 31, 0x282DB4u);
    ctx->pc = 0x282DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282DACu;
            // 0x282db0: 0x2063023  subu        $a2, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2802D8u;
    if (runtime->hasFunction(0x2802D8u)) {
        auto targetFn = runtime->lookupFunction(0x2802D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DB4u; }
        if (ctx->pc != 0x282DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002802D8_0x2802d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DB4u; }
        if (ctx->pc != 0x282DB4u) { return; }
    }
    ctx->pc = 0x282DB4u;
label_282db4:
    // 0x282db4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x282DB4u;
    {
        const bool branch_taken_0x282db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282DB4u;
            // 0x282db8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282db4) {
            ctx->pc = 0x282EE4u;
            goto label_282ee4;
        }
    }
    ctx->pc = 0x282DBCu;
label_282dbc:
    // 0x282dbc: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x282dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282dc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x282dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282dc4: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x282dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x282dc8: 0xc09fc76  jal         func_27F1D8
    ctx->pc = 0x282DC8u;
    SET_GPR_U32(ctx, 31, 0x282DD0u);
    ctx->pc = 0x282DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282DC8u;
            // 0x282dcc: 0x2063023  subu        $a2, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F1D8u;
    if (runtime->hasFunction(0x27F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x27F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DD0u; }
        if (ctx->pc != 0x282DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F1D8_0x27f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DD0u; }
        if (ctx->pc != 0x282DD0u) { return; }
    }
    ctx->pc = 0x282DD0u;
label_282dd0:
    // 0x282dd0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x282DD0u;
    {
        const bool branch_taken_0x282dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282DD0u;
            // 0x282dd4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282dd0) {
            ctx->pc = 0x282EE4u;
            goto label_282ee4;
        }
    }
    ctx->pc = 0x282DD8u;
label_282dd8:
    // 0x282dd8: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x282dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282ddc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x282ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282de0: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x282de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x282de4: 0xc0a09a6  jal         func_282698
    ctx->pc = 0x282DE4u;
    SET_GPR_U32(ctx, 31, 0x282DECu);
    ctx->pc = 0x282DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282DE4u;
            // 0x282de8: 0x2063023  subu        $a2, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282698u;
    if (runtime->hasFunction(0x282698u)) {
        auto targetFn = runtime->lookupFunction(0x282698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DECu; }
        if (ctx->pc != 0x282DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282698_0x282698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DECu; }
        if (ctx->pc != 0x282DECu) { return; }
    }
    ctx->pc = 0x282DECu;
label_282dec:
    // 0x282dec: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x282DECu;
    {
        const bool branch_taken_0x282dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282DECu;
            // 0x282df0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282dec) {
            ctx->pc = 0x282EE4u;
            goto label_282ee4;
        }
    }
    ctx->pc = 0x282DF4u;
label_282df4:
    // 0x282df4: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x282df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282df8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x282df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282dfc: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x282dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x282e00: 0xc0a0330  jal         func_280CC0
    ctx->pc = 0x282E00u;
    SET_GPR_U32(ctx, 31, 0x282E08u);
    ctx->pc = 0x282E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282E00u;
            // 0x282e04: 0x2063023  subu        $a2, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280CC0u;
    if (runtime->hasFunction(0x280CC0u)) {
        auto targetFn = runtime->lookupFunction(0x280CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282E08u; }
        if (ctx->pc != 0x282E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280CC0_0x280cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282E08u; }
        if (ctx->pc != 0x282E08u) { return; }
    }
    ctx->pc = 0x282E08u;
label_282e08:
    // 0x282e08: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x282E08u;
    {
        const bool branch_taken_0x282e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282E08u;
            // 0x282e0c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e08) {
            ctx->pc = 0x282EE4u;
            goto label_282ee4;
        }
    }
    ctx->pc = 0x282E10u;
label_282e10:
    // 0x282e10: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x282e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282e14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x282e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e18: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x282e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x282e1c: 0xc0a03f0  jal         func_280FC0
    ctx->pc = 0x282E1Cu;
    SET_GPR_U32(ctx, 31, 0x282E24u);
    ctx->pc = 0x282E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282E1Cu;
            // 0x282e20: 0x2063023  subu        $a2, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280FC0u;
    if (runtime->hasFunction(0x280FC0u)) {
        auto targetFn = runtime->lookupFunction(0x280FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282E24u; }
        if (ctx->pc != 0x282E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280FC0_0x280fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282E24u; }
        if (ctx->pc != 0x282E24u) { return; }
    }
    ctx->pc = 0x282E24u;
label_282e24:
    // 0x282e24: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x282E24u;
    {
        const bool branch_taken_0x282e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282E24u;
            // 0x282e28: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e24) {
            ctx->pc = 0x282EE4u;
            goto label_282ee4;
        }
    }
    ctx->pc = 0x282E2Cu;
label_282e2c:
    // 0x282e2c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x282e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282e30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x282e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e34: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x282e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x282e38: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x282e38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x282e3c: 0xc09fd42  jal         func_27F508
    ctx->pc = 0x282E3Cu;
    SET_GPR_U32(ctx, 31, 0x282E44u);
    ctx->pc = 0x282E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282E3Cu;
            // 0x282e40: 0x2063023  subu        $a2, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F508u;
    if (runtime->hasFunction(0x27F508u)) {
        auto targetFn = runtime->lookupFunction(0x27F508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282E44u; }
        if (ctx->pc != 0x282E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F508_0x27f508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282E44u; }
        if (ctx->pc != 0x282E44u) { return; }
    }
    ctx->pc = 0x282E44u;
label_282e44:
    // 0x282e44: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x282E44u;
    {
        const bool branch_taken_0x282e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282E44u;
            // 0x282e48: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e44) {
            ctx->pc = 0x282EE4u;
            goto label_282ee4;
        }
    }
    ctx->pc = 0x282E4Cu;
label_282e4c:
    // 0x282e4c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x282e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282e50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x282e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e54: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x282e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x282e58: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x282e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x282e5c: 0xc09fd42  jal         func_27F508
    ctx->pc = 0x282E5Cu;
    SET_GPR_U32(ctx, 31, 0x282E64u);
    ctx->pc = 0x282E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282E5Cu;
            // 0x282e60: 0x2063023  subu        $a2, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F508u;
    if (runtime->hasFunction(0x27F508u)) {
        auto targetFn = runtime->lookupFunction(0x27F508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282E64u; }
        if (ctx->pc != 0x282E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F508_0x27f508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282E64u; }
        if (ctx->pc != 0x282E64u) { return; }
    }
    ctx->pc = 0x282E64u;
label_282e64:
    // 0x282e64: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x282E64u;
    {
        const bool branch_taken_0x282e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282E64u;
            // 0x282e68: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e64) {
            ctx->pc = 0x282EE4u;
            goto label_282ee4;
        }
    }
    ctx->pc = 0x282E6Cu;
label_282e6c:
    // 0x282e6c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x282e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282e70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x282e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e74: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x282e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x282e78: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x282e78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x282e7c: 0xc09fd42  jal         func_27F508
    ctx->pc = 0x282E7Cu;
    SET_GPR_U32(ctx, 31, 0x282E84u);
    ctx->pc = 0x282E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282E7Cu;
            // 0x282e80: 0x2063023  subu        $a2, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F508u;
    if (runtime->hasFunction(0x27F508u)) {
        auto targetFn = runtime->lookupFunction(0x27F508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282E84u; }
        if (ctx->pc != 0x282E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F508_0x27f508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282E84u; }
        if (ctx->pc != 0x282E84u) { return; }
    }
    ctx->pc = 0x282E84u;
label_282e84:
    // 0x282e84: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x282E84u;
    {
        const bool branch_taken_0x282e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282E84u;
            // 0x282e88: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282e84) {
            ctx->pc = 0x282EE4u;
            goto label_282ee4;
        }
    }
    ctx->pc = 0x282E8Cu;
label_282e8c:
    // 0x282e8c: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x282e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282e90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x282e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e94: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x282e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x282e98: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x282e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x282e9c: 0xc09fd42  jal         func_27F508
    ctx->pc = 0x282E9Cu;
    SET_GPR_U32(ctx, 31, 0x282EA4u);
    ctx->pc = 0x282EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282E9Cu;
            // 0x282ea0: 0x2063023  subu        $a2, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F508u;
    if (runtime->hasFunction(0x27F508u)) {
        auto targetFn = runtime->lookupFunction(0x27F508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282EA4u; }
        if (ctx->pc != 0x282EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F508_0x27f508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282EA4u; }
        if (ctx->pc != 0x282EA4u) { return; }
    }
    ctx->pc = 0x282EA4u;
label_282ea4:
    // 0x282ea4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x282EA4u;
    {
        const bool branch_taken_0x282ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282EA4u;
            // 0x282ea8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ea4) {
            ctx->pc = 0x282EE4u;
            goto label_282ee4;
        }
    }
    ctx->pc = 0x282EACu;
label_282eac:
    // 0x282eac: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x282eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282eb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x282eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282eb4: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x282eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x282eb8: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x282eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x282ebc: 0xc09fd42  jal         func_27F508
    ctx->pc = 0x282EBCu;
    SET_GPR_U32(ctx, 31, 0x282EC4u);
    ctx->pc = 0x282EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282EBCu;
            // 0x282ec0: 0x2063023  subu        $a2, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F508u;
    if (runtime->hasFunction(0x27F508u)) {
        auto targetFn = runtime->lookupFunction(0x27F508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282EC4u; }
        if (ctx->pc != 0x282EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F508_0x27f508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282EC4u; }
        if (ctx->pc != 0x282EC4u) { return; }
    }
    ctx->pc = 0x282EC4u;
label_282ec4:
    // 0x282ec4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x282EC4u;
    {
        const bool branch_taken_0x282ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282EC4u;
            // 0x282ec8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ec4) {
            ctx->pc = 0x282EE4u;
            goto label_282ee4;
        }
    }
    ctx->pc = 0x282ECCu;
label_282ecc:
    // 0x282ecc: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x282eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282ed0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x282ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ed4: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x282ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x282ed8: 0xc0a0462  jal         func_281188
    ctx->pc = 0x282ED8u;
    SET_GPR_U32(ctx, 31, 0x282EE0u);
    ctx->pc = 0x282EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282ED8u;
            // 0x282edc: 0x2063023  subu        $a2, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281188u;
    if (runtime->hasFunction(0x281188u)) {
        auto targetFn = runtime->lookupFunction(0x281188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282EE0u; }
        if (ctx->pc != 0x282EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281188_0x281188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282EE0u; }
        if (ctx->pc != 0x282EE0u) { return; }
    }
    ctx->pc = 0x282EE0u;
label_282ee0:
    // 0x282ee0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x282ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_282ee4:
    // 0x282ee4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x282EE4u;
    {
        const bool branch_taken_0x282ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282EE4u;
            // 0x282ee8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ee4) {
            ctx->pc = 0x282FB4u;
            goto label_282fb4;
        }
    }
    ctx->pc = 0x282EECu;
    // 0x282eec: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x282EECu;
    {
        const bool branch_taken_0x282eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282eec) {
            ctx->pc = 0x282F98u;
            goto label_282f98;
        }
    }
    ctx->pc = 0x282EF4u;
label_282ef4:
    // 0x282ef4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x282ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282ef8: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x282ef8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x282efc: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x282efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x282f00: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x282f00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x282f04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x282F04u;
    {
        const bool branch_taken_0x282f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F04u;
            // 0x282f08: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f04) {
            ctx->pc = 0x282F18u;
            goto label_282f18;
        }
    }
    ctx->pc = 0x282F0Cu;
    // 0x282f0c: 0x24050085  addiu       $a1, $zero, 0x85
    ctx->pc = 0x282f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x282f10: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x282F10u;
    {
        const bool branch_taken_0x282f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F10u;
            // 0x282f14: 0x24060089  addiu       $a2, $zero, 0x89 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f10) {
            ctx->pc = 0x282F80u;
            goto label_282f80;
        }
    }
    ctx->pc = 0x282F18u;
label_282f18:
    // 0x282f18: 0xc0a06ea  jal         func_281BA8
    ctx->pc = 0x282F18u;
    SET_GPR_U32(ctx, 31, 0x282F20u);
    ctx->pc = 0x281BA8u;
    if (runtime->hasFunction(0x281BA8u)) {
        auto targetFn = runtime->lookupFunction(0x281BA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282F20u; }
        if (ctx->pc != 0x282F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281BA8_0x281ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282F20u; }
        if (ctx->pc != 0x282F20u) { return; }
    }
    ctx->pc = 0x282F20u;
label_282f20:
    // 0x282f20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x282f20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f24: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x282F24u;
    {
        const bool branch_taken_0x282f24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F24u;
            // 0x282f28: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f24) {
            ctx->pc = 0x282FB4u;
            goto label_282fb4;
        }
    }
    ctx->pc = 0x282F2Cu;
    // 0x282f2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x282f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282f30: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x282f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x282f34: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x282f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282f38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x282f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282f3c: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x282f3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x282f40: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x282f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f44: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x282f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x282f48: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x282f48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x282f4c: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x282f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x282f50: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x282f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x282f54: 0xc0a06b2  jal         func_281AC8
    ctx->pc = 0x282F54u;
    SET_GPR_U32(ctx, 31, 0x282F5Cu);
    ctx->pc = 0x282F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282F54u;
            // 0x282f58: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281AC8u;
    if (runtime->hasFunction(0x281AC8u)) {
        auto targetFn = runtime->lookupFunction(0x281AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282F5Cu; }
        if (ctx->pc != 0x282F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281AC8_0x281ac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282F5Cu; }
        if (ctx->pc != 0x282F5Cu) { return; }
    }
    ctx->pc = 0x282F5Cu;
label_282f5c:
    // 0x282f5c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x282F5Cu;
    {
        const bool branch_taken_0x282f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F5Cu;
            // 0x282f60: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f5c) {
            ctx->pc = 0x282FB4u;
            goto label_282fb4;
        }
    }
    ctx->pc = 0x282F64u;
    // 0x282f64: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x282f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x282f68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x282f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x282f6c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x282F6Cu;
    {
        const bool branch_taken_0x282f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F6Cu;
            // 0x282f70: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f6c) {
            ctx->pc = 0x282F94u;
            goto label_282f94;
        }
    }
    ctx->pc = 0x282F74u;
label_282f74:
    // 0x282f74: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x282f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x282f78: 0x24050085  addiu       $a1, $zero, 0x85
    ctx->pc = 0x282f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x282f7c: 0x2406006a  addiu       $a2, $zero, 0x6A
    ctx->pc = 0x282f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_282f80:
    // 0x282f80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x282f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282f84: 0xc0a5648  jal         func_295920
    ctx->pc = 0x282F84u;
    SET_GPR_U32(ctx, 31, 0x282F8Cu);
    ctx->pc = 0x282F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282F84u;
            // 0x282f88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282F8Cu; }
        if (ctx->pc != 0x282F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282F8Cu; }
        if (ctx->pc != 0x282F8Cu) { return; }
    }
    ctx->pc = 0x282F8Cu;
label_282f8c:
    // 0x282f8c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x282F8Cu;
    {
        const bool branch_taken_0x282f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282f8c) {
            ctx->pc = 0x282FB4u;
            goto label_282fb4;
        }
    }
    ctx->pc = 0x282F94u;
label_282f94:
    // 0x282f94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x282f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_282f98:
    // 0x282f98: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x282F98u;
    {
        const bool branch_taken_0x282f98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x282F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282F98u;
            // 0x282f9c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f98) {
            ctx->pc = 0x282FA4u;
            goto label_282fa4;
        }
    }
    ctx->pc = 0x282FA0u;
    // 0x282fa0: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x282fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_282fa4:
    // 0x282fa4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x282fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x282fa8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x282fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282fac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x282FACu;
    {
        const bool branch_taken_0x282fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282FACu;
            // 0x282fb0: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282fac) {
            ctx->pc = 0x282FDCu;
            goto label_282fdc;
        }
    }
    ctx->pc = 0x282FB4u;
label_282fb4:
    // 0x282fb4: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x282FB4u;
    {
        const bool branch_taken_0x282fb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x282FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282FB4u;
            // 0x282fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282fb4) {
            ctx->pc = 0x282FDCu;
            goto label_282fdc;
        }
    }
    ctx->pc = 0x282FBCu;
    // 0x282fbc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x282FBCu;
    {
        const bool branch_taken_0x282fbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x282fbc) {
            ctx->pc = 0x282FD0u;
            goto label_282fd0;
        }
    }
    ctx->pc = 0x282FC4u;
    // 0x282fc4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x282fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x282fc8: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x282FC8u;
    {
        const bool branch_taken_0x282fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x282FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282FC8u;
            // 0x282fcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282fc8) {
            ctx->pc = 0x282FDCu;
            goto label_282fdc;
        }
    }
    ctx->pc = 0x282FD0u;
label_282fd0:
    // 0x282fd0: 0xc0a0c14  jal         func_283050
    ctx->pc = 0x282FD0u;
    SET_GPR_U32(ctx, 31, 0x282FD8u);
    ctx->pc = 0x282FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282FD0u;
            // 0x282fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283050u;
    if (runtime->hasFunction(0x283050u)) {
        auto targetFn = runtime->lookupFunction(0x283050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282FD8u; }
        if (ctx->pc != 0x282FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283050_0x283050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282FD8u; }
        if (ctx->pc != 0x282FD8u) { return; }
    }
    ctx->pc = 0x282FD8u;
label_282fd8:
    // 0x282fd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x282fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282fdc:
    // 0x282fdc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x282fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x282fe0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x282fe0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282fe4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x282fe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282fe8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x282fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282fec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x282fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x282FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282FF0u;
            // 0x282ff4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282FF8u;
    ctx->pc = 0x282ff8u;
}
