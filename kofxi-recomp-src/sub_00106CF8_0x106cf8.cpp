#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00106CF8
// Address: 0x106cf8 - 0x106fd8
void sub_00106CF8_0x106cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106CF8_0x106cf8");
#endif

    switch (ctx->pc) {
        case 0x106d30u: goto label_106d30;
        case 0x106d38u: goto label_106d38;
        case 0x106d54u: goto label_106d54;
        case 0x106df4u: goto label_106df4;
        case 0x106e18u: goto label_106e18;
        case 0x106e30u: goto label_106e30;
        case 0x106e70u: goto label_106e70;
        case 0x106ef8u: goto label_106ef8;
        case 0x106f54u: goto label_106f54;
        case 0x106f78u: goto label_106f78;
        case 0x106f8cu: goto label_106f8c;
        default: break;
    }

    ctx->pc = 0x106cf8u;

    // 0x106cf8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x106cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x106cfc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x106cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x106d00: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x106d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x106d04: 0x3c15003e  lui         $s5, 0x3E
    ctx->pc = 0x106d04u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)62 << 16));
    // 0x106d08: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x106d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x106d0c: 0x3c143000  lui         $s4, 0x3000
    ctx->pc = 0x106d0cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)12288 << 16));
    // 0x106d10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x106d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x106d14: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x106d14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x106d18: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x106d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x106d1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x106d1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d20: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x106d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x106d24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106d2c: 0x0  nop
    ctx->pc = 0x106d2cu;
    // NOP
label_106d30:
    // 0x106d30: 0xc041cda  jal         func_107368
    ctx->pc = 0x106D30u;
    SET_GPR_U32(ctx, 31, 0x106D38u);
    ctx->pc = 0x106D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106D30u;
            // 0x106d34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107368u;
    if (runtime->hasFunction(0x107368u)) {
        auto targetFn = runtime->lookupFunction(0x107368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106D38u; }
        if (ctx->pc != 0x106D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107368_0x107368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106D38u; }
        if (ctx->pc != 0x106D38u) { return; }
    }
    ctx->pc = 0x106D38u;
label_106d38:
    // 0x106d38: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106d3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d40: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x106d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x106d44: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x106d44u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x106d48: 0xae34082c  sw          $s4, 0x82C($s1)
    ctx->pc = 0x106d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 20));
    // 0x106d4c: 0xc041bf6  jal         func_106FD8
    ctx->pc = 0x106D4Cu;
    SET_GPR_U32(ctx, 31, 0x106D54u);
    ctx->pc = 0x106D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106D4Cu;
            // 0x106d50: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106FD8u;
    if (runtime->hasFunction(0x106FD8u)) {
        auto targetFn = runtime->lookupFunction(0x106FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106D54u; }
        if (ctx->pc != 0x106D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106FD8_0x106fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106D54u; }
        if (ctx->pc != 0x106D54u) { return; }
    }
    ctx->pc = 0x106D54u;
label_106d54:
    // 0x106d54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x106d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d58: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x106d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x106d5c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106d60: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x106d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x106d64: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x106d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x106d68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x106d68u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x106d6c: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x106d6cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x106d70: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x106d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x106d74: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x106d74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x106d78: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x106D78u;
    {
        const bool branch_taken_0x106d78 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x106D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106D78u;
            // 0x106d7c: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d78) {
            ctx->pc = 0x106D94u;
            goto label_106d94;
        }
    }
    ctx->pc = 0x106D80u;
    // 0x106d80: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x106d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x106d84: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x106d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x106d88: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x106d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x106d8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106D8Cu;
    {
        const bool branch_taken_0x106d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106D8Cu;
            // 0x106d90: 0xae22084c  sw          $v0, 0x84C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d8c) {
            ctx->pc = 0x106D98u;
            goto label_106d98;
        }
    }
    ctx->pc = 0x106D94u;
label_106d94:
    // 0x106d94: 0xae33084c  sw          $s3, 0x84C($s1)
    ctx->pc = 0x106d94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 19));
label_106d98:
    // 0x106d98: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x106d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x106d9c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x106d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x106da0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x106da0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x106da4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x106da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x106da8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x106da8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x106dac: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x106dacu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x106db0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x106db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x106db4: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x106DB4u;
    {
        const bool branch_taken_0x106db4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x106DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106DB4u;
            // 0x106db8: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106db4) {
            ctx->pc = 0x106E18u;
            goto label_106e18;
        }
    }
    ctx->pc = 0x106DBCu;
    // 0x106dbc: 0x2e020023  sltiu       $v0, $s0, 0x23
    ctx->pc = 0x106dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x106dc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x106DC0u;
    {
        const bool branch_taken_0x106dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106DC0u;
            // 0x106dc4: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106dc0) {
            ctx->pc = 0x106DD8u;
            goto label_106dd8;
        }
    }
    ctx->pc = 0x106DC8u;
    // 0x106dc8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x106DC8u;
    {
        const bool branch_taken_0x106dc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x106DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106DC8u;
            // 0x106dcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106dc8) {
            ctx->pc = 0x106DECu;
            goto label_106dec;
        }
    }
    ctx->pc = 0x106DD0u;
    // 0x106dd0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x106DD0u;
    {
        const bool branch_taken_0x106dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106DD0u;
            // 0x106dd4: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106dd0) {
            ctx->pc = 0x106E40u;
            goto label_106e40;
        }
    }
    ctx->pc = 0x106DD8u;
label_106dd8:
    // 0x106dd8: 0x56020019  bnel        $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x106DD8u;
    {
        const bool branch_taken_0x106dd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x106dd8) {
            ctx->pc = 0x106DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106DD8u;
            // 0x106ddc: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106E40u;
            goto label_106e40;
        }
    }
    ctx->pc = 0x106DE0u;
    // 0x106de0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106de4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x106DE4u;
    {
        const bool branch_taken_0x106de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106DE4u;
            // 0x106de8: 0x26520021  addiu       $s2, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106de4) {
            ctx->pc = 0x106E44u;
            goto label_106e44;
        }
    }
    ctx->pc = 0x106DECu;
label_106dec:
    // 0x106dec: 0xc041c90  jal         func_107240
    ctx->pc = 0x106DECu;
    SET_GPR_U32(ctx, 31, 0x106DF4u);
    ctx->pc = 0x106DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106DECu;
            // 0x106df0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107240u;
    if (runtime->hasFunction(0x107240u)) {
        auto targetFn = runtime->lookupFunction(0x107240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106DF4u; }
        if (ctx->pc != 0x106DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107240_0x107240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106DF4u; }
        if (ctx->pc != 0x106DF4u) { return; }
    }
    ctx->pc = 0x106DF4u;
label_106df4:
    // 0x106df4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x106df4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106df8: 0x8e220858  lw          $v0, 0x858($s1)
    ctx->pc = 0x106df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x106dfc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x106DFCu;
    {
        const bool branch_taken_0x106dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106DFCu;
            // 0x106e00: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106dfc) {
            ctx->pc = 0x106E20u;
            goto label_106e20;
        }
    }
    ctx->pc = 0x106E04u;
    // 0x106e04: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x106E04u;
    {
        const bool branch_taken_0x106e04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x106E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106E04u;
            // 0x106e08: 0x26a5a078  addiu       $a1, $s5, -0x5F88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e04) {
            ctx->pc = 0x106E24u;
            goto label_106e24;
        }
    }
    ctx->pc = 0x106E0Cu;
    // 0x106e0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106e10: 0xc041ce8  jal         func_1073A0
    ctx->pc = 0x106E10u;
    SET_GPR_U32(ctx, 31, 0x106E18u);
    ctx->pc = 0x106E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106E10u;
            // 0x106e14: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073A0u;
    if (runtime->hasFunction(0x1073A0u)) {
        auto targetFn = runtime->lookupFunction(0x1073A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106E18u; }
        if (ctx->pc != 0x106E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001073A0_0x1073a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106E18u; }
        if (ctx->pc != 0x106E18u) { return; }
    }
    ctx->pc = 0x106E18u;
label_106e18:
    // 0x106e18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x106E18u;
    {
        const bool branch_taken_0x106e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106E18u;
            // 0x106e1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e18) {
            ctx->pc = 0x106E44u;
            goto label_106e44;
        }
    }
    ctx->pc = 0x106E20u;
label_106e20:
    // 0x106e20: 0x26a5a078  addiu       $a1, $s5, -0x5F88
    ctx->pc = 0x106e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942840));
label_106e24:
    // 0x106e24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x106e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106e28: 0xc043070  jal         func_10C1C0
    ctx->pc = 0x106E28u;
    SET_GPR_U32(ctx, 31, 0x106E30u);
    ctx->pc = 0x106E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106E28u;
            // 0x106e2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1C0u;
    if (runtime->hasFunction(0x10C1C0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106E30u; }
        if (ctx->pc != 0x106E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1C0_0x10c1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106E30u; }
        if (ctx->pc != 0x106E30u) { return; }
    }
    ctx->pc = 0x106E30u;
label_106e30:
    // 0x106e30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x106e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106e34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x106e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x106e38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x106E38u;
    {
        const bool branch_taken_0x106e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106E38u;
            // 0x106e3c: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e38) {
            ctx->pc = 0x106E4Cu;
            goto label_106e4c;
        }
    }
    ctx->pc = 0x106E40u;
label_106e40:
    // 0x106e40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x106e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_106e44:
    // 0x106e44: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x106E44u;
    {
        const bool branch_taken_0x106e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106E44u;
            // 0x106e48: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e44) {
            ctx->pc = 0x106D30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106d30;
        }
    }
    ctx->pc = 0x106E4Cu;
label_106e4c:
    // 0x106e4c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x106e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106e50: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x106e50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106e54: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x106e54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106e58: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x106e58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106e5c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x106e5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106e60: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x106e60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106e64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106e68: 0x3e00008  jr          $ra
    ctx->pc = 0x106E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106E68u;
            // 0x106e6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106E70u;
label_106e70:
    // 0x106e70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x106e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x106e74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x106e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x106e78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x106e7c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x106e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x106e80: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x106e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x106e84: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x106e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x106e88: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x106e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x106e8c: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x106e8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x106e90: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x106e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x106e94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106e98: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x106e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x106e9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x106e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106ea0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x106ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x106ea4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x106ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x106ea8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x106ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x106eac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x106eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x106eb0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x106eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x106eb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106eb8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x106eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x106ebc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x106ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x106ec0: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x106EC0u;
    {
        const bool branch_taken_0x106ec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x106ec0) {
            ctx->pc = 0x106EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106EC0u;
            // 0x106ec4: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106FA8u;
            goto label_106fa8;
        }
    }
    ctx->pc = 0x106EC8u;
    // 0x106ec8: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x106ec8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x106ecc: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x106eccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x106ed0: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x106ed0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x106ed4: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x106ed4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x106ed8: 0x36942020  ori         $s4, $s4, 0x2020
    ctx->pc = 0x106ed8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8224);
    // 0x106edc: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x106edcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x106ee0: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x106ee0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x106ee4: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x106ee4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x106ee8: 0x3673b420  ori         $s3, $s3, 0xB420
    ctx->pc = 0x106ee8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46112);
    // 0x106eec: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x106eecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x106ef0: 0x36314000  ori         $s1, $s1, 0x4000
    ctx->pc = 0x106ef0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
    // 0x106ef4: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x106ef4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
label_106ef8:
    // 0x106ef8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x106ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x106efc: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x106efcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x106f00: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x106f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x106f04: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x106f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x106f08: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x106f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x106f0c: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x106f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x106f10: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x106f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x106f14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x106f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106f18: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x106f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x106f1c: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x106F1Cu;
    {
        const bool branch_taken_0x106f1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x106F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106F1Cu;
            // 0x106f20: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f1c) {
            ctx->pc = 0x106F34u;
            goto label_106f34;
        }
    }
    ctx->pc = 0x106F24u;
    // 0x106f24: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x106F24u;
    {
        const bool branch_taken_0x106f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x106f24) {
            ctx->pc = 0x106F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106F24u;
            // 0x106f28: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x106F38u;
            goto label_106f38;
        }
    }
    ctx->pc = 0x106F2Cu;
    // 0x106f2c: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x106F2Cu;
    {
        const bool branch_taken_0x106f2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x106f2c) {
            ctx->pc = 0x106F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x106F2Cu;
            // 0x106f30: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x106F64u;
            goto label_106f64;
        }
    }
    ctx->pc = 0x106F34u;
label_106f34:
    // 0x106f34: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x106f34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_106f38:
    // 0x106f38: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x106F38u;
    {
        const bool branch_taken_0x106f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106F38u;
            // 0x106f3c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f38) {
            ctx->pc = 0x106F64u;
            goto label_106f64;
        }
    }
    ctx->pc = 0x106F40u;
    // 0x106f40: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x106f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x106f44: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x106F44u;
    {
        const bool branch_taken_0x106f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106F44u;
            // 0x106f48: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f44) {
            ctx->pc = 0x106F64u;
            goto label_106f64;
        }
    }
    ctx->pc = 0x106F4Cu;
    // 0x106f4c: 0xc042a22  jal         func_10A888
    ctx->pc = 0x106F4Cu;
    SET_GPR_U32(ctx, 31, 0x106F54u);
    ctx->pc = 0x106F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106F4Cu;
            // 0x106f50: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A888u;
    if (runtime->hasFunction(0x10A888u)) {
        auto targetFn = runtime->lookupFunction(0x10A888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106F54u; }
        if (ctx->pc != 0x106F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A888_0x10a888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106F54u; }
        if (ctx->pc != 0x106F54u) { return; }
    }
    ctx->pc = 0x106F54u;
label_106f54:
    // 0x106f54: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x106f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x106f58: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x106F58u;
    {
        const bool branch_taken_0x106f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106F58u;
            // 0x106f5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f58) {
            ctx->pc = 0x106F84u;
            goto label_106f84;
        }
    }
    ctx->pc = 0x106F60u;
    // 0x106f60: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x106f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_106f64:
    // 0x106f64: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x106f64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x106f68: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x106F68u;
    {
        const bool branch_taken_0x106f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x106F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106F68u;
            // 0x106f6c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f68) {
            ctx->pc = 0x106F94u;
            goto label_106f94;
        }
    }
    ctx->pc = 0x106F70u;
    // 0x106f70: 0xc042a22  jal         func_10A888
    ctx->pc = 0x106F70u;
    SET_GPR_U32(ctx, 31, 0x106F78u);
    ctx->pc = 0x106F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x106F70u;
            // 0x106f74: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A888u;
    if (runtime->hasFunction(0x10A888u)) {
        auto targetFn = runtime->lookupFunction(0x10A888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106F78u; }
        if (ctx->pc != 0x106F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A888_0x10a888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106F78u; }
        if (ctx->pc != 0x106F78u) { return; }
    }
    ctx->pc = 0x106F78u;
label_106f78:
    // 0x106f78: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x106f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x106f7c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x106F7Cu;
    {
        const bool branch_taken_0x106f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106F7Cu;
            // 0x106f80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f7c) {
            ctx->pc = 0x106F94u;
            goto label_106f94;
        }
    }
    ctx->pc = 0x106F84u;
label_106f84:
    // 0x106f84: 0xc043000  jal         func_10C000
    ctx->pc = 0x106F84u;
    SET_GPR_U32(ctx, 31, 0x106F8Cu);
    ctx->pc = 0x10C000u;
    if (runtime->hasFunction(0x10C000u)) {
        auto targetFn = runtime->lookupFunction(0x10C000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106F8Cu; }
        if (ctx->pc != 0x106F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C000_0x10c000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x106F8Cu; }
        if (ctx->pc != 0x106F8Cu) { return; }
    }
    ctx->pc = 0x106F8Cu;
label_106f8c:
    // 0x106f8c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x106F8Cu;
    {
        const bool branch_taken_0x106f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106F8Cu;
            // 0x106f90: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f8c) {
            ctx->pc = 0x106FA8u;
            goto label_106fa8;
        }
    }
    ctx->pc = 0x106F94u;
label_106f94:
    // 0x106f94: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x106f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x106f98: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x106f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x106f9c: 0x1055ffd6  beq         $v0, $s5, . + 4 + (-0x2A << 2)
    ctx->pc = 0x106F9Cu;
    {
        const bool branch_taken_0x106f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x106f9c) {
            ctx->pc = 0x106EF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_106ef8;
        }
    }
    ctx->pc = 0x106FA4u;
    // 0x106fa4: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x106fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_106fa8:
    // 0x106fa8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x106fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x106fac: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x106facu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x106fb0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x106fb0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x106fb4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x106fb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106fb8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x106fb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106fbc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x106fbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106fc0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x106fc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106fc4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x106fc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106fc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x106fc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x106FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106FD0u;
            // 0x106fd4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106FD8u;
    ctx->pc = 0x106fd8u;
}
