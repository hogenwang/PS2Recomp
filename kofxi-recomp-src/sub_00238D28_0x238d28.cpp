#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238D28
// Address: 0x238d28 - 0x238f80
void sub_00238D28_0x238d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238D28_0x238d28");
#endif

    switch (ctx->pc) {
        case 0x238d88u: goto label_238d88;
        case 0x238db4u: goto label_238db4;
        case 0x238e50u: goto label_238e50;
        case 0x238ec4u: goto label_238ec4;
        case 0x238f18u: goto label_238f18;
        case 0x238f4cu: goto label_238f4c;
        case 0x238f5cu: goto label_238f5c;
        default: break;
    }

    ctx->pc = 0x238d28u;

    // 0x238d28: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x238d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x238d2c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x238d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d30: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x238d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x238d34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x238d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x238d38: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x238d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x238d3c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x238d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x238d40: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x238d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x238d44: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x238d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x238d48: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x238d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x238d4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x238d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x238d50: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x238d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x238d54: 0x8ca34e3c  lw          $v1, 0x4E3C($a1)
    ctx->pc = 0x238d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20028)));
    // 0x238d58: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238D58u;
    {
        const bool branch_taken_0x238d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x238D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238D58u;
            // 0x238d5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d58) {
            ctx->pc = 0x238D68u;
            goto label_238d68;
        }
    }
    ctx->pc = 0x238D60u;
    // 0x238d60: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x238D60u;
    {
        const bool branch_taken_0x238d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238D60u;
            // 0x238d64: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d60) {
            ctx->pc = 0x238F5Cu;
            goto label_238f5c;
        }
    }
    ctx->pc = 0x238D68u;
label_238d68:
    // 0x238d68: 0x8ca34e80  lw          $v1, 0x4E80($a1)
    ctx->pc = 0x238d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20096)));
    // 0x238d6c: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x238d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x238d70: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x238d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x238d74: 0x8ca44e48  lw          $a0, 0x4E48($a1)
    ctx->pc = 0x238d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20040)));
    // 0x238d78: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x238D78u;
    {
        const bool branch_taken_0x238d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238D78u;
            // 0x238d7c: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d78) {
            ctx->pc = 0x238D94u;
            goto label_238d94;
        }
    }
    ctx->pc = 0x238D80u;
    // 0x238d80: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x238D80u;
    SET_GPR_U32(ctx, 31, 0x238D88u);
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D88u; }
        if (ctx->pc != 0x238D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D88u; }
        if (ctx->pc != 0x238D88u) { return; }
    }
    ctx->pc = 0x238D88u;
label_238d88:
    // 0x238d88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x238d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d8c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x238d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238d90: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x238d90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_238d94:
    // 0x238d94: 0x8ca44e54  lw          $a0, 0x4E54($a1)
    ctx->pc = 0x238d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20052)));
    // 0x238d98: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x238D98u;
    {
        const bool branch_taken_0x238d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x238D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238D98u;
            // 0x238d9c: 0x26220004  addiu       $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238d98) {
            ctx->pc = 0x238DA4u;
            goto label_238da4;
        }
    }
    ctx->pc = 0x238DA0u;
    // 0x238da0: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x238da0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_238da4:
    // 0x238da4: 0x26340006  addiu       $s4, $s1, 0x6
    ctx->pc = 0x238da4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x238da8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x238da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238dac: 0xc08e140  jal         func_238500
    ctx->pc = 0x238DACu;
    SET_GPR_U32(ctx, 31, 0x238DB4u);
    ctx->pc = 0x238DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238DACu;
            // 0x238db0: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238500u;
    if (runtime->hasFunction(0x238500u)) {
        auto targetFn = runtime->lookupFunction(0x238500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DB4u; }
        if (ctx->pc != 0x238DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238500_0x238500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DB4u; }
        if (ctx->pc != 0x238DB4u) { return; }
    }
    ctx->pc = 0x238DB4u;
label_238db4:
    // 0x238db4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x238db4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238db8: 0x56600003  bnel        $s3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x238DB8u;
    {
        const bool branch_taken_0x238db8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x238db8) {
            ctx->pc = 0x238DBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238DB8u;
            // 0x238dbc: 0x8e700008  lw          $s0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238DC8u;
            goto label_238dc8;
        }
    }
    ctx->pc = 0x238DC0u;
    // 0x238dc0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x238DC0u;
    {
        const bool branch_taken_0x238dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238DC0u;
            // 0x238dc4: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238dc0) {
            ctx->pc = 0x238F5Cu;
            goto label_238f5c;
        }
    }
    ctx->pc = 0x238DC8u;
label_238dc8:
    // 0x238dc8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x238dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x238dcc: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x238dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x238dd0: 0x112a02  srl         $a1, $s1, 8
    ctx->pc = 0x238dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 17), 8));
    // 0x238dd4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x238dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x238dd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238ddc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238de0: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x238de0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x238de4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238de4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238de8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x238de8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x238dec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238decu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238df0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x238df0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x238df4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238df8: 0xa2050000  sb          $a1, 0x0($s0)
    ctx->pc = 0x238df8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x238dfc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238e00: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x238e00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x238e04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238e04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238e08: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x238e08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x238e0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238e10: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x238e10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x238e14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x238e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238e18: 0x8c434e48  lw          $v1, 0x4E48($v0)
    ctx->pc = 0x238e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20040)));
    // 0x238e1c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x238E1Cu;
    {
        const bool branch_taken_0x238e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x238E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238E1Cu;
            // 0x238e20: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e1c) {
            ctx->pc = 0x238E58u;
            goto label_238e58;
        }
    }
    ctx->pc = 0x238E24u;
    // 0x238e24: 0x121202  srl         $v0, $s2, 8
    ctx->pc = 0x238e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x238e28: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x238e28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e2c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x238e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x238e30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238e34: 0xa2120000  sb          $s2, 0x0($s0)
    ctx->pc = 0x238e34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x238e38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238e3c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x238e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e44: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x238e44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x238e48: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x238E48u;
    SET_GPR_U32(ctx, 31, 0x238E50u);
    ctx->pc = 0x238E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238E48u;
            // 0x238e4c: 0x8c454e48  lw          $a1, 0x4E48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E50u; }
        if (ctx->pc != 0x238E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238E50u; }
        if (ctx->pc != 0x238E50u) { return; }
    }
    ctx->pc = 0x238E50u;
label_238e50:
    // 0x238e50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x238E50u;
    {
        const bool branch_taken_0x238e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238E50u;
            // 0x238e54: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e50) {
            ctx->pc = 0x238E6Cu;
            goto label_238e6c;
        }
    }
    ctx->pc = 0x238E58u;
label_238e58:
    // 0x238e58: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x238e58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x238e5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238e60: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x238e60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x238e64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238e68: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x238e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_238e6c:
    // 0x238e6c: 0x8ca24e54  lw          $v0, 0x4E54($a1)
    ctx->pc = 0x238e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20052)));
    // 0x238e70: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x238E70u;
    {
        const bool branch_taken_0x238e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238E70u;
            // 0x238e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238e70) {
            ctx->pc = 0x238ED0u;
            goto label_238ed0;
        }
    }
    ctx->pc = 0x238E78u;
    // 0x238e78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x238e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x238e7c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x238e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x238e80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238e84: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x238e84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x238e88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238e88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238e8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x238e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238e90: 0x8c624e54  lw          $v0, 0x4E54($v1)
    ctx->pc = 0x238e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20052)));
    // 0x238e94: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x238e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x238e98: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x238e98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x238e9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238ea0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x238ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238ea4: 0x90434e54  lbu         $v1, 0x4E54($v0)
    ctx->pc = 0x238ea4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20052)));
    // 0x238ea8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x238ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x238eac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238eb0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x238eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238eb8: 0x8c464e54  lw          $a2, 0x4E54($v0)
    ctx->pc = 0x238eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20052)));
    // 0x238ebc: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x238EBCu;
    SET_GPR_U32(ctx, 31, 0x238EC4u);
    ctx->pc = 0x238EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238EBCu;
            // 0x238ec0: 0x8c454e50  lw          $a1, 0x4E50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20048)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238EC4u; }
        if (ctx->pc != 0x238EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238EC4u; }
        if (ctx->pc != 0x238EC4u) { return; }
    }
    ctx->pc = 0x238EC4u;
label_238ec4:
    // 0x238ec4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x238ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238ec8: 0x8ca24e54  lw          $v0, 0x4E54($a1)
    ctx->pc = 0x238ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20052)));
    // 0x238ecc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x238eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_238ed0:
    // 0x238ed0: 0x8ca24e80  lw          $v0, 0x4E80($a1)
    ctx->pc = 0x238ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20096)));
    // 0x238ed4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x238ED4u;
    {
        const bool branch_taken_0x238ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238ED4u;
            // 0x238ed8: 0x26030004  addiu       $v1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ed4) {
            ctx->pc = 0x238F24u;
            goto label_238f24;
        }
    }
    ctx->pc = 0x238EDCu;
    // 0x238edc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238ee0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x238ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x238ee4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x238ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x238ee8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x238ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x238eec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238eecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238ef0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x238ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ef4: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x238ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x238ef8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x238ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x238efc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238f00: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x238f00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x238f04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238f08: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x238f08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x238f0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238f10: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x238F10u;
    SET_GPR_U32(ctx, 31, 0x238F18u);
    ctx->pc = 0x238F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238F10u;
            // 0x238f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238F18u; }
        if (ctx->pc != 0x238F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238F18u; }
        if (ctx->pc != 0x238F18u) { return; }
    }
    ctx->pc = 0x238F18u;
label_238f18:
    // 0x238f18: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x238f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238f1c: 0x8ca24e80  lw          $v0, 0x4E80($a1)
    ctx->pc = 0x238f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20096)));
    // 0x238f20: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x238f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_238f24:
    // 0x238f24: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x238f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x238f28: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x238f28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x238f2c: 0x2041823  subu        $v1, $s0, $a0
    ctx->pc = 0x238f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x238f30: 0x10750007  beq         $v1, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x238F30u;
    {
        const bool branch_taken_0x238f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x238F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238F30u;
            // 0x238f34: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f30) {
            ctx->pc = 0x238F50u;
            goto label_238f50;
        }
    }
    ctx->pc = 0x238F38u;
    // 0x238f38: 0x14283c  dsll32      $a1, $s4, 0
    ctx->pc = 0x238f38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) << (32 + 0));
    // 0x238f3c: 0x24845000  addiu       $a0, $a0, 0x5000
    ctx->pc = 0x238f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20480));
    // 0x238f40: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x238f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x238f44: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x238F44u;
    SET_GPR_U32(ctx, 31, 0x238F4Cu);
    ctx->pc = 0x238F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238F44u;
            // 0x238f48: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238F4Cu; }
        if (ctx->pc != 0x238F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238F4Cu; }
        if (ctx->pc != 0x238F4Cu) { return; }
    }
    ctx->pc = 0x238F4Cu;
label_238f4c:
    // 0x238f4c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x238f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_238f50:
    // 0x238f50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x238f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238f54: 0xc08e066  jal         func_238198
    ctx->pc = 0x238F54u;
    SET_GPR_U32(ctx, 31, 0x238F5Cu);
    ctx->pc = 0x238F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238F54u;
            // 0x238f58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238198u;
    if (runtime->hasFunction(0x238198u)) {
        auto targetFn = runtime->lookupFunction(0x238198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238F5Cu; }
        if (ctx->pc != 0x238F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238198_0x238198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238F5Cu; }
        if (ctx->pc != 0x238F5Cu) { return; }
    }
    ctx->pc = 0x238F5Cu;
label_238f5c:
    // 0x238f5c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x238f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x238f60: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x238f60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x238f64: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x238f64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x238f68: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x238f68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x238f6c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x238f6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x238f70: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x238f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238f74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x238f74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238f78: 0x3e00008  jr          $ra
    ctx->pc = 0x238F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238F78u;
            // 0x238f7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x238F80u;
    ctx->pc = 0x238f80u;
}
