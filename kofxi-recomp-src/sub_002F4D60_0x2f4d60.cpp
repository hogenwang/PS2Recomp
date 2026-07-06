#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F4D60
// Address: 0x2f4d60 - 0x2f5028
void sub_002F4D60_0x2f4d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4D60_0x2f4d60");
#endif

    switch (ctx->pc) {
        case 0x2f4d94u: goto label_2f4d94;
        case 0x2f4dacu: goto label_2f4dac;
        case 0x2f4dc8u: goto label_2f4dc8;
        case 0x2f4dd8u: goto label_2f4dd8;
        case 0x2f4df0u: goto label_2f4df0;
        case 0x2f4e04u: goto label_2f4e04;
        case 0x2f4e24u: goto label_2f4e24;
        case 0x2f4e68u: goto label_2f4e68;
        case 0x2f4e80u: goto label_2f4e80;
        case 0x2f4ea0u: goto label_2f4ea0;
        case 0x2f4ec4u: goto label_2f4ec4;
        case 0x2f4ed8u: goto label_2f4ed8;
        case 0x2f4ee8u: goto label_2f4ee8;
        case 0x2f4f18u: goto label_2f4f18;
        case 0x2f4f5cu: goto label_2f4f5c;
        case 0x2f4f7cu: goto label_2f4f7c;
        case 0x2f4f98u: goto label_2f4f98;
        case 0x2f4fa8u: goto label_2f4fa8;
        case 0x2f4fccu: goto label_2f4fcc;
        case 0x2f4fe0u: goto label_2f4fe0;
        case 0x2f5000u: goto label_2f5000;
        default: break;
    }

    ctx->pc = 0x2f4d60u;

    // 0x2f4d60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f4d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f4d64: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2f4d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f4d68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f4d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f4d6c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2f4d6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f4d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d74: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f4d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f4d78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f4d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f4d7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f4d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4d80: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f4d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f4d84: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x2f4d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2f4d88: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f4d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f4d8c: 0xc0be428  jal         func_2F90A0
    ctx->pc = 0x2F4D8Cu;
    SET_GPR_U32(ctx, 31, 0x2F4D94u);
    ctx->pc = 0x2F4D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4D8Cu;
            // 0x2f4d90: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F90A0u;
    if (runtime->hasFunction(0x2F90A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F90A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4D94u; }
        if (ctx->pc != 0x2F4D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F90A0_0x2f90a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4D94u; }
        if (ctx->pc != 0x2F4D94u) { return; }
    }
    ctx->pc = 0x2F4D94u;
label_2f4d94:
    // 0x2f4d94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f4d94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d98: 0x12600099  beqz        $s3, . + 4 + (0x99 << 2)
    ctx->pc = 0x2F4D98u;
    {
        const bool branch_taken_0x2f4d98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4D98u;
            // 0x2f4d9c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4d98) {
            ctx->pc = 0x2F5000u;
            goto label_2f5000;
        }
    }
    ctx->pc = 0x2F4DA0u;
    // 0x2f4da0: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x2f4da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2f4da4: 0xc04a726  jal         func_129C98
    ctx->pc = 0x2F4DA4u;
    SET_GPR_U32(ctx, 31, 0x2F4DACu);
    ctx->pc = 0x2F4DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DA4u;
            // 0x2f4da8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (runtime->hasFunction(0x129C98u)) {
        auto targetFn = runtime->lookupFunction(0x129C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4DACu; }
        if (ctx->pc != 0x2F4DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129C98_0x129c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4DACu; }
        if (ctx->pc != 0x2F4DACu) { return; }
    }
    ctx->pc = 0x2F4DACu;
label_2f4dac:
    // 0x2f4dac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f4dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4db0: 0x12000091  beqz        $s0, . + 4 + (0x91 << 2)
    ctx->pc = 0x2F4DB0u;
    {
        const bool branch_taken_0x2f4db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DB0u;
            // 0x2f4db4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4db0) {
            ctx->pc = 0x2F4FF8u;
            goto label_2f4ff8;
        }
    }
    ctx->pc = 0x2F4DB8u;
    // 0x2f4db8: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x2f4db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f4dbc: 0x24a51e68  addiu       $a1, $a1, 0x1E68
    ctx->pc = 0x2f4dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7784));
    // 0x2f4dc0: 0xc04a8f8  jal         func_12A3E0
    ctx->pc = 0x2F4DC0u;
    SET_GPR_U32(ctx, 31, 0x2F4DC8u);
    ctx->pc = 0x2F4DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DC0u;
            // 0x2f4dc4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4DC8u; }
        if (ctx->pc != 0x2F4DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4DC8u; }
        if (ctx->pc != 0x2F4DC8u) { return; }
    }
    ctx->pc = 0x2F4DC8u;
label_2f4dc8:
    // 0x2f4dc8: 0x1440008b  bnez        $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x2F4DC8u;
    {
        const bool branch_taken_0x2f4dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DC8u;
            // 0x2f4dcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4dc8) {
            ctx->pc = 0x2F4FF8u;
            goto label_2f4ff8;
        }
    }
    ctx->pc = 0x2F4DD0u;
    // 0x2f4dd0: 0xc0bd95c  jal         func_2F6570
    ctx->pc = 0x2F4DD0u;
    SET_GPR_U32(ctx, 31, 0x2F4DD8u);
    ctx->pc = 0x2F4DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DD0u;
            // 0x2f4dd4: 0x2042823  subu        $a1, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6570u;
    if (runtime->hasFunction(0x2F6570u)) {
        auto targetFn = runtime->lookupFunction(0x2F6570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4DD8u; }
        if (ctx->pc != 0x2F4DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6570_0x2f6570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4DD8u; }
        if (ctx->pc != 0x2F4DD8u) { return; }
    }
    ctx->pc = 0x2F4DD8u;
label_2f4dd8:
    // 0x2f4dd8: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x2F4DD8u;
    {
        const bool branch_taken_0x2f4dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DD8u;
            // 0x2f4ddc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4dd8) {
            ctx->pc = 0x2F4FF8u;
            goto label_2f4ff8;
        }
    }
    ctx->pc = 0x2F4DE0u;
    // 0x2f4de0: 0x26120003  addiu       $s2, $s0, 0x3
    ctx->pc = 0x2f4de0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x2f4de4: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2f4de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2f4de8: 0xc04a726  jal         func_129C98
    ctx->pc = 0x2F4DE8u;
    SET_GPR_U32(ctx, 31, 0x2F4DF0u);
    ctx->pc = 0x2F4DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DE8u;
            // 0x2f4dec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (runtime->hasFunction(0x129C98u)) {
        auto targetFn = runtime->lookupFunction(0x129C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4DF0u; }
        if (ctx->pc != 0x2F4DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129C98_0x129c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4DF0u; }
        if (ctx->pc != 0x2F4DF0u) { return; }
    }
    ctx->pc = 0x2F4DF0u;
label_2f4df0:
    // 0x2f4df0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f4df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4df4: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F4DF4u;
    {
        const bool branch_taken_0x2f4df4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DF4u;
            // 0x2f4df8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4df4) {
            ctx->pc = 0x2F4E8Cu;
            goto label_2f4e8c;
        }
    }
    ctx->pc = 0x2F4DFCu;
    // 0x2f4dfc: 0xc04a726  jal         func_129C98
    ctx->pc = 0x2F4DFCu;
    SET_GPR_U32(ctx, 31, 0x2F4E04u);
    ctx->pc = 0x2F4E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4DFCu;
            // 0x2f4e00: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (runtime->hasFunction(0x129C98u)) {
        auto targetFn = runtime->lookupFunction(0x129C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E04u; }
        if (ctx->pc != 0x2F4E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129C98_0x129c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E04u; }
        if (ctx->pc != 0x2F4E04u) { return; }
    }
    ctx->pc = 0x2F4E04u;
label_2f4e04:
    // 0x2f4e04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f4e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e08: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4E08u;
    {
        const bool branch_taken_0x2f4e08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E08u;
            // 0x2f4e0c: 0x211102b  sltu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e08) {
            ctx->pc = 0x2F4E18u;
            goto label_2f4e18;
        }
    }
    ctx->pc = 0x2F4E10u;
    // 0x2f4e10: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F4E10u;
    {
        const bool branch_taken_0x2f4e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4e10) {
            ctx->pc = 0x2F4E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E10u;
            // 0x2f4e14: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F4E90u;
            goto label_2f4e90;
        }
    }
    ctx->pc = 0x2F4E18u;
label_2f4e18:
    // 0x2f4e18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f4e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e1c: 0xc04a726  jal         func_129C98
    ctx->pc = 0x2F4E1Cu;
    SET_GPR_U32(ctx, 31, 0x2F4E24u);
    ctx->pc = 0x2F4E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E1Cu;
            // 0x2f4e20: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (runtime->hasFunction(0x129C98u)) {
        auto targetFn = runtime->lookupFunction(0x129C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E24u; }
        if (ctx->pc != 0x2F4E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129C98_0x129c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E24u; }
        if (ctx->pc != 0x2F4E24u) { return; }
    }
    ctx->pc = 0x2F4E24u;
label_2f4e24:
    // 0x2f4e24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f4e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e28: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F4E28u;
    {
        const bool branch_taken_0x2f4e28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E28u;
            // 0x2f4e2c: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e28) {
            ctx->pc = 0x2F4E74u;
            goto label_2f4e74;
        }
    }
    ctx->pc = 0x2F4E30u;
    // 0x2f4e30: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x2f4e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2f4e34: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F4E34u;
    {
        const bool branch_taken_0x2f4e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E34u;
            // 0x2f4e38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e34) {
            ctx->pc = 0x2F4E78u;
            goto label_2f4e78;
        }
    }
    ctx->pc = 0x2F4E3Cu;
    // 0x2f4e3c: 0x16500006  bne         $s2, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F4E3Cu;
    {
        const bool branch_taken_0x2f4e3c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x2F4E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E3Cu;
            // 0x2f4e40: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e3c) {
            ctx->pc = 0x2F4E58u;
            goto label_2f4e58;
        }
    }
    ctx->pc = 0x2F4E44u;
    // 0x2f4e44: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2f4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f4e48: 0x10510010  beq         $v0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F4E48u;
    {
        const bool branch_taken_0x2f4e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F4E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E48u;
            // 0x2f4e4c: 0x26920001  addiu       $s2, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e48) {
            ctx->pc = 0x2F4E8Cu;
            goto label_2f4e8c;
        }
    }
    ctx->pc = 0x2F4E50u;
    // 0x2f4e50: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x2F4E50u;
    {
        const bool branch_taken_0x2f4e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4e50) {
            ctx->pc = 0x2F4FF8u;
            goto label_2f4ff8;
        }
    }
    ctx->pc = 0x2F4E58u;
label_2f4e58:
    // 0x2f4e58: 0x10910005  beq         $a0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4E58u;
    {
        const bool branch_taken_0x2f4e58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F4E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E58u;
            // 0x2f4e5c: 0x2302823  subu        $a1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e58) {
            ctx->pc = 0x2F4E70u;
            goto label_2f4e70;
        }
    }
    ctx->pc = 0x2F4E60u;
    // 0x2f4e60: 0xc0bd95c  jal         func_2F6570
    ctx->pc = 0x2F4E60u;
    SET_GPR_U32(ctx, 31, 0x2F4E68u);
    ctx->pc = 0x2F4E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E60u;
            // 0x2f4e64: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6570u;
    if (runtime->hasFunction(0x2F6570u)) {
        auto targetFn = runtime->lookupFunction(0x2F6570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E68u; }
        if (ctx->pc != 0x2F4E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6570_0x2f6570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E68u; }
        if (ctx->pc != 0x2F4E68u) { return; }
    }
    ctx->pc = 0x2F4E68u;
label_2f4e68:
    // 0x2f4e68: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2F4E68u;
    {
        const bool branch_taken_0x2f4e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E68u;
            // 0x2f4e6c: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e68) {
            ctx->pc = 0x2F4FF8u;
            goto label_2f4ff8;
        }
    }
    ctx->pc = 0x2F4E70u;
label_2f4e70:
    // 0x2f4e70: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2f4e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4e74:
    // 0x2f4e74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f4e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f4e78:
    // 0x2f4e78: 0xc0bd95c  jal         func_2F6570
    ctx->pc = 0x2F4E78u;
    SET_GPR_U32(ctx, 31, 0x2F4E80u);
    ctx->pc = 0x2F4E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E78u;
            // 0x2f4e7c: 0x2242823  subu        $a1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6570u;
    if (runtime->hasFunction(0x2F6570u)) {
        auto targetFn = runtime->lookupFunction(0x2F6570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E80u; }
        if (ctx->pc != 0x2F4E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6570_0x2f6570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4E80u; }
        if (ctx->pc != 0x2F4E80u) { return; }
    }
    ctx->pc = 0x2F4E80u;
label_2f4e80:
    // 0x2f4e80: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x2F4E80u;
    {
        const bool branch_taken_0x2f4e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E80u;
            // 0x2f4e84: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e80) {
            ctx->pc = 0x2F4FF8u;
            goto label_2f4ff8;
        }
    }
    ctx->pc = 0x2F4E88u;
    // 0x2f4e88: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x2f4e88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2f4e8c:
    // 0x2f4e8c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2f4e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2f4e90:
    // 0x2f4e90: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F4E90u;
    {
        const bool branch_taken_0x2f4e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E90u;
            // 0x2f4e94: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e90) {
            ctx->pc = 0x2F4EB0u;
            goto label_2f4eb0;
        }
    }
    ctx->pc = 0x2F4E98u;
    // 0x2f4e98: 0xc0bd9e4  jal         func_2F6790
    ctx->pc = 0x2F4E98u;
    SET_GPR_U32(ctx, 31, 0x2F4EA0u);
    ctx->pc = 0x2F4E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4E98u;
            // 0x2f4e9c: 0x24a51e70  addiu       $a1, $a1, 0x1E70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6790u;
    if (runtime->hasFunction(0x2F6790u)) {
        auto targetFn = runtime->lookupFunction(0x2F6790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4EA0u; }
        if (ctx->pc != 0x2F4EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6790_0x2f6790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4EA0u; }
        if (ctx->pc != 0x2F4EA0u) { return; }
    }
    ctx->pc = 0x2F4EA0u;
label_2f4ea0:
    // 0x2f4ea0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4EA0u;
    {
        const bool branch_taken_0x2f4ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4EA0u;
            // 0x2f4ea4: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ea0) {
            ctx->pc = 0x2F4EB4u;
            goto label_2f4eb4;
        }
    }
    ctx->pc = 0x2F4EA8u;
    // 0x2f4ea8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4EA8u;
    {
        const bool branch_taken_0x2f4ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4EA8u;
            // 0x2f4eac: 0x240201bb  addiu       $v0, $zero, 0x1BB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ea8) {
            ctx->pc = 0x2F4EB4u;
            goto label_2f4eb4;
        }
    }
    ctx->pc = 0x2F4EB0u;
label_2f4eb0:
    // 0x2f4eb0: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2f4eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2f4eb4:
    // 0x2f4eb4: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x2f4eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
    // 0x2f4eb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f4eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4ebc: 0xc04a726  jal         func_129C98
    ctx->pc = 0x2F4EBCu;
    SET_GPR_U32(ctx, 31, 0x2F4EC4u);
    ctx->pc = 0x2F4EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4EBCu;
            // 0x2f4ec0: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (runtime->hasFunction(0x129C98u)) {
        auto targetFn = runtime->lookupFunction(0x129C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4EC4u; }
        if (ctx->pc != 0x2F4EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129C98_0x129c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4EC4u; }
        if (ctx->pc != 0x2F4EC4u) { return; }
    }
    ctx->pc = 0x2F4EC4u;
label_2f4ec4:
    // 0x2f4ec4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f4ec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4ec8: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4EC8u;
    {
        const bool branch_taken_0x2f4ec8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4EC8u;
            // 0x2f4ecc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ec8) {
            ctx->pc = 0x2F4EE0u;
            goto label_2f4ee0;
        }
    }
    ctx->pc = 0x2F4ED0u;
    // 0x2f4ed0: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2F4ED0u;
    SET_GPR_U32(ctx, 31, 0x2F4ED8u);
    ctx->pc = 0x2F4ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4ED0u;
            // 0x2f4ed4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4ED8u; }
        if (ctx->pc != 0x2F4ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4ED8u; }
        if (ctx->pc != 0x2F4ED8u) { return; }
    }
    ctx->pc = 0x2F4ED8u;
label_2f4ed8:
    // 0x2f4ed8: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x2f4ed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2f4edc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f4edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f4ee0:
    // 0x2f4ee0: 0xc04a726  jal         func_129C98
    ctx->pc = 0x2F4EE0u;
    SET_GPR_U32(ctx, 31, 0x2F4EE8u);
    ctx->pc = 0x2F4EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4EE0u;
            // 0x2f4ee4: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (runtime->hasFunction(0x129C98u)) {
        auto targetFn = runtime->lookupFunction(0x129C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4EE8u; }
        if (ctx->pc != 0x2F4EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129C98_0x129c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4EE8u; }
        if (ctx->pc != 0x2F4EE8u) { return; }
    }
    ctx->pc = 0x2F4EE8u;
label_2f4ee8:
    // 0x2f4ee8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f4ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4eec: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F4EECu;
    {
        const bool branch_taken_0x2f4eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4EECu;
            // 0x2f4ef0: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4eec) {
            ctx->pc = 0x2F4F50u;
            goto label_2f4f50;
        }
    }
    ctx->pc = 0x2F4EF4u;
    // 0x2f4ef4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x2f4ef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2f4ef8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F4EF8u;
    {
        const bool branch_taken_0x2f4ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4EF8u;
            // 0x2f4efc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ef8) {
            ctx->pc = 0x2F4F54u;
            goto label_2f4f54;
        }
    }
    ctx->pc = 0x2F4F00u;
    // 0x2f4f00: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2f4f00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4f04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f4f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f4f08: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x2f4f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2f4f0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F4F0Cu;
    {
        const bool branch_taken_0x2f4f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F0Cu;
            // 0x2f4f10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f0c) {
            ctx->pc = 0x2F4F4Cu;
            goto label_2f4f4c;
        }
    }
    ctx->pc = 0x2F4F14u;
    // 0x2f4f14: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x2f4f14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
label_2f4f18:
    // 0x2f4f18: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x2f4f18u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f4f1c: 0x24c2b7c8  addiu       $v0, $a2, -0x4838
    ctx->pc = 0x2f4f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948808));
    // 0x2f4f20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4f24: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f4f24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f4f28: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2f4f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2f4f2c: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2F4F2Cu;
    {
        const bool branch_taken_0x2f4f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F2Cu;
            // 0x2f4f30: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f2c) {
            ctx->pc = 0x2F4FF8u;
            goto label_2f4ff8;
        }
    }
    ctx->pc = 0x2F4F34u;
    // 0x2f4f34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f4f34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f4f38: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2f4f38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2f4f3c: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x2f4f3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2f4f40: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x2f4f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
    // 0x2f4f44: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F4F44u;
    {
        const bool branch_taken_0x2f4f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F44u;
            // 0x2f4f48: 0x442821  addu        $a1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f44) {
            ctx->pc = 0x2F4F18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f4f18;
        }
    }
    ctx->pc = 0x2F4F4Cu;
label_2f4f4c:
    // 0x2f4f4c: 0xae650010  sw          $a1, 0x10($s3)
    ctx->pc = 0x2f4f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 5));
label_2f4f50:
    // 0x2f4f50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f4f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f4f54:
    // 0x2f4f54: 0xc0bd95c  jal         func_2F6570
    ctx->pc = 0x2F4F54u;
    SET_GPR_U32(ctx, 31, 0x2F4F5Cu);
    ctx->pc = 0x2F4F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F54u;
            // 0x2f4f58: 0x2842823  subu        $a1, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6570u;
    if (runtime->hasFunction(0x2F6570u)) {
        auto targetFn = runtime->lookupFunction(0x2F6570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F5Cu; }
        if (ctx->pc != 0x2F4F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6570_0x2f6570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F5Cu; }
        if (ctx->pc != 0x2F4F5Cu) { return; }
    }
    ctx->pc = 0x2F4F5Cu;
label_2f4f5c:
    // 0x2f4f5c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2F4F5Cu;
    {
        const bool branch_taken_0x2f4f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F5Cu;
            // 0x2f4f60: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f5c) {
            ctx->pc = 0x2F4FF8u;
            goto label_2f4ff8;
        }
    }
    ctx->pc = 0x2F4F64u;
    // 0x2f4f64: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x2f4f64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f4f68: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x2f4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2f4f6c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F4F6Cu;
    {
        const bool branch_taken_0x2f4f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F4F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F6Cu;
            // 0x2f4f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f6c) {
            ctx->pc = 0x2F4FA0u;
            goto label_2f4fa0;
        }
    }
    ctx->pc = 0x2F4F74u;
    // 0x2f4f74: 0xc04a726  jal         func_129C98
    ctx->pc = 0x2F4F74u;
    SET_GPR_U32(ctx, 31, 0x2F4F7Cu);
    ctx->pc = 0x2F4F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F74u;
            // 0x2f4f78: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (runtime->hasFunction(0x129C98u)) {
        auto targetFn = runtime->lookupFunction(0x129C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F7Cu; }
        if (ctx->pc != 0x2F4F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129C98_0x129c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F7Cu; }
        if (ctx->pc != 0x2F4F7Cu) { return; }
    }
    ctx->pc = 0x2F4F7Cu;
label_2f4f7c:
    // 0x2f4f7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f4f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4f80: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F4F80u;
    {
        const bool branch_taken_0x2f4f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F80u;
            // 0x2f4f84: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f80) {
            ctx->pc = 0x2F4FA0u;
            goto label_2f4fa0;
        }
    }
    ctx->pc = 0x2F4F88u;
    // 0x2f4f88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4F88u;
    {
        const bool branch_taken_0x2f4f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F88u;
            // 0x2f4f8c: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f88) {
            ctx->pc = 0x2F4FB0u;
            goto label_2f4fb0;
        }
    }
    ctx->pc = 0x2F4F90u;
    // 0x2f4f90: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F4F90u;
    SET_GPR_U32(ctx, 31, 0x2F4F98u);
    ctx->pc = 0x2F4F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F90u;
            // 0x2f4f94: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6510u;
    if (runtime->hasFunction(0x2F6510u)) {
        auto targetFn = runtime->lookupFunction(0x2F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F98u; }
        if (ctx->pc != 0x2F4F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6510_0x2f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4F98u; }
        if (ctx->pc != 0x2F4F98u) { return; }
    }
    ctx->pc = 0x2F4F98u;
label_2f4f98:
    // 0x2f4f98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4F98u;
    {
        const bool branch_taken_0x2f4f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4F98u;
            // 0x2f4f9c: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4f98) {
            ctx->pc = 0x2F4FACu;
            goto label_2f4fac;
        }
    }
    ctx->pc = 0x2F4FA0u;
label_2f4fa0:
    // 0x2f4fa0: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x2F4FA0u;
    SET_GPR_U32(ctx, 31, 0x2F4FA8u);
    ctx->pc = 0x2F4FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4FA0u;
            // 0x2f4fa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4FA8u; }
        if (ctx->pc != 0x2F4FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4FA8u; }
        if (ctx->pc != 0x2F4FA8u) { return; }
    }
    ctx->pc = 0x2F4FA8u;
label_2f4fa8:
    // 0x2f4fa8: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2f4fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_2f4fac:
    // 0x2f4fac: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x2f4facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_2f4fb0:
    // 0x2f4fb0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F4FB0u;
    {
        const bool branch_taken_0x2f4fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4FB0u;
            // 0x2f4fb4: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4fb0) {
            ctx->pc = 0x2F4FF0u;
            goto label_2f4ff0;
        }
    }
    ctx->pc = 0x2F4FB8u;
    // 0x2f4fb8: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x2f4fb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f4fbc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4FBCu;
    {
        const bool branch_taken_0x2f4fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4FBCu;
            // 0x2f4fc0: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4fbc) {
            ctx->pc = 0x2F4FD4u;
            goto label_2f4fd4;
        }
    }
    ctx->pc = 0x2F4FC4u;
    // 0x2f4fc4: 0xc0bd944  jal         func_2F6510
    ctx->pc = 0x2F4FC4u;
    SET_GPR_U32(ctx, 31, 0x2F4FCCu);
    ctx->pc = 0x2F4FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4FC4u;
            // 0x2f4fc8: 0x24841e78  addiu       $a0, $a0, 0x1E78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6510u;
    if (runtime->hasFunction(0x2F6510u)) {
        auto targetFn = runtime->lookupFunction(0x2F6510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4FCCu; }
        if (ctx->pc != 0x2F4FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6510_0x2f6510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4FCCu; }
        if (ctx->pc != 0x2F4FCCu) { return; }
    }
    ctx->pc = 0x2F4FCCu;
label_2f4fcc:
    // 0x2f4fcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4FCCu;
    {
        const bool branch_taken_0x2f4fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4FCCu;
            // 0x2f4fd0: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4fcc) {
            ctx->pc = 0x2F4FE4u;
            goto label_2f4fe4;
        }
    }
    ctx->pc = 0x2F4FD4u;
label_2f4fd4:
    // 0x2f4fd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f4fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4fd8: 0xc0bd95c  jal         func_2F6570
    ctx->pc = 0x2F4FD8u;
    SET_GPR_U32(ctx, 31, 0x2F4FE0u);
    ctx->pc = 0x2F4FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4FD8u;
            // 0x2f4fdc: 0x2042823  subu        $a1, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6570u;
    if (runtime->hasFunction(0x2F6570u)) {
        auto targetFn = runtime->lookupFunction(0x2F6570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4FE0u; }
        if (ctx->pc != 0x2F4FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6570_0x2f6570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F4FE0u; }
        if (ctx->pc != 0x2F4FE0u) { return; }
    }
    ctx->pc = 0x2F4FE0u;
label_2f4fe0:
    // 0x2f4fe0: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x2f4fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_2f4fe4:
    // 0x2f4fe4: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2f4fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2f4fe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4FE8u;
    {
        const bool branch_taken_0x2f4fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4fe8) {
            ctx->pc = 0x2F4FF8u;
            goto label_2f4ff8;
        }
    }
    ctx->pc = 0x2F4FF0u;
label_2f4ff0:
    // 0x2f4ff0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4FF0u;
    {
        const bool branch_taken_0x2f4ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4FF0u;
            // 0x2f4ff4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ff0) {
            ctx->pc = 0x2F5004u;
            goto label_2f5004;
        }
    }
    ctx->pc = 0x2F4FF8u;
label_2f4ff8:
    // 0x2f4ff8: 0xc0bd44c  jal         func_2F5130
    ctx->pc = 0x2F4FF8u;
    SET_GPR_U32(ctx, 31, 0x2F5000u);
    ctx->pc = 0x2F4FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F4FF8u;
            // 0x2f4ffc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5130u;
    if (runtime->hasFunction(0x2F5130u)) {
        auto targetFn = runtime->lookupFunction(0x2F5130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5000u; }
        if (ctx->pc != 0x2F5000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5130_0x2f5130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F5000u; }
        if (ctx->pc != 0x2F5000u) { return; }
    }
    ctx->pc = 0x2F5000u;
label_2f5000:
    // 0x2f5000: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5004:
    // 0x2f5004: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f5004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f5008: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2f5008u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f500c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f500cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f5010: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f5010u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f5014: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f5014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5018: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f5018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f501c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f501cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5020: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5020u;
            // 0x2f5024: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5028u;
    ctx->pc = 0x2f5028u;
}
