#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E9EF0
// Address: 0x2e9ef0 - 0x2ea2e0
void sub_002E9EF0_0x2e9ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9EF0_0x2e9ef0");
#endif

    switch (ctx->pc) {
        case 0x2e9ef8u: goto label_2e9ef8;
        case 0x2e9f04u: goto label_2e9f04;
        case 0x2e9f2cu: goto label_2e9f2c;
        case 0x2e9f38u: goto label_2e9f38;
        case 0x2e9f44u: goto label_2e9f44;
        case 0x2e9f54u: goto label_2e9f54;
        case 0x2e9f58u: goto label_2e9f58;
        case 0x2e9f74u: goto label_2e9f74;
        case 0x2e9f84u: goto label_2e9f84;
        case 0x2e9fb8u: goto label_2e9fb8;
        case 0x2e9fc4u: goto label_2e9fc4;
        case 0x2e9fd4u: goto label_2e9fd4;
        case 0x2e9fdcu: goto label_2e9fdc;
        case 0x2e9fe8u: goto label_2e9fe8;
        case 0x2ea03cu: goto label_2ea03c;
        case 0x2ea044u: goto label_2ea044;
        case 0x2ea04cu: goto label_2ea04c;
        case 0x2ea05cu: goto label_2ea05c;
        case 0x2ea064u: goto label_2ea064;
        case 0x2ea070u: goto label_2ea070;
        case 0x2ea07cu: goto label_2ea07c;
        case 0x2ea08cu: goto label_2ea08c;
        case 0x2ea0a0u: goto label_2ea0a0;
        case 0x2ea0a8u: goto label_2ea0a8;
        case 0x2ea0c4u: goto label_2ea0c4;
        case 0x2ea0f0u: goto label_2ea0f0;
        case 0x2ea134u: goto label_2ea134;
        case 0x2ea29cu: goto label_2ea29c;
        case 0x2ea2acu: goto label_2ea2ac;
        default: break;
    }

    ctx->pc = 0x2e9ef0u;

    // 0x2e9ef0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e9ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e9ef4: 0x2403007e  addiu       $v1, $zero, 0x7E
    ctx->pc = 0x2e9ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_2e9ef8:
    // 0x2e9ef8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2e9ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2e9efc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2e9efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2e9f00: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e9f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2e9f04:
    // 0x2e9f04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e9f04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9f08: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2e9f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2e9f0c: 0x26535c84  addiu       $s3, $s2, 0x5C84
    ctx->pc = 0x2e9f0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 23684));
    // 0x2e9f10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e9f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e9f14: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2e9f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2e9f18: 0x8e545c80  lw          $s4, 0x5C80($s2)
    ctx->pc = 0x2e9f18u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 23680)));
    // 0x2e9f1c: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x2e9f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x2e9f20: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2e9f20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e9f24: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2E9F24u;
    SET_GPR_U32(ctx, 31, 0x2E9F2Cu);
    ctx->pc = 0x2E9F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F24u;
            // 0x2e9f28: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F2Cu; }
        if (ctx->pc != 0x2E9F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F2Cu; }
        if (ctx->pc != 0x2E9F2Cu) { return; }
    }
    ctx->pc = 0x2E9F2Cu;
label_2e9f2c:
    // 0x2e9f2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e9f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9f30: 0xc098552  jal         func_261548
    ctx->pc = 0x2E9F30u;
    SET_GPR_U32(ctx, 31, 0x2E9F38u);
    ctx->pc = 0x2E9F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F30u;
            // 0x2e9f34: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F38u; }
        if (ctx->pc != 0x2E9F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F38u; }
        if (ctx->pc != 0x2E9F38u) { return; }
    }
    ctx->pc = 0x2E9F38u;
label_2e9f38:
    // 0x2e9f38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e9f38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9f3c: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2E9F3Cu;
    SET_GPR_U32(ctx, 31, 0x2E9F44u);
    ctx->pc = 0x2E9F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F3Cu;
            // 0x2e9f40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F44u; }
        if (ctx->pc != 0x2E9F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F44u; }
        if (ctx->pc != 0x2E9F44u) { return; }
    }
    ctx->pc = 0x2E9F44u;
label_2e9f44:
    // 0x2e9f44: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E9F44u;
    {
        const bool branch_taken_0x2e9f44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F44u;
            // 0x2e9f48: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f44) {
            ctx->pc = 0x2E9F7Cu;
            goto label_2e9f7c;
        }
    }
    ctx->pc = 0x2E9F4Cu;
    // 0x2e9f4c: 0xc08a8cc  jal         func_22A330
    ctx->pc = 0x2E9F4Cu;
    SET_GPR_U32(ctx, 31, 0x2E9F54u);
    ctx->pc = 0x2E9F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F4Cu;
            // 0x2e9f50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (runtime->hasFunction(0x22A330u)) {
        auto targetFn = runtime->lookupFunction(0x22A330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F54u; }
        if (ctx->pc != 0x2E9F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A330_0x22a330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F54u; }
        if (ctx->pc != 0x2E9F54u) { return; }
    }
    ctx->pc = 0x2E9F54u;
label_2e9f54:
    // 0x2e9f54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e9f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e9f58:
    // 0x2e9f58: 0x16200012  bnez        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2E9F58u;
    {
        const bool branch_taken_0x2e9f58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F58u;
            // 0x2e9f5c: 0x26820002  addiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f58) {
            ctx->pc = 0x2E9FA4u;
            goto label_2e9fa4;
        }
    }
    ctx->pc = 0x2E9F60u;
    // 0x2e9f60: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e9f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2e9f64: 0x26460014  addiu       $a2, $s2, 0x14
    ctx->pc = 0x2e9f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2e9f68: 0x24a5ff10  addiu       $a1, $a1, -0xF0
    ctx->pc = 0x2e9f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967056));
    // 0x2e9f6c: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2E9F6Cu;
    SET_GPR_U32(ctx, 31, 0x2E9F74u);
    ctx->pc = 0x2E9F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F6Cu;
            // 0x2e9f70: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F74u; }
        if (ctx->pc != 0x2E9F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9F74u; }
        if (ctx->pc != 0x2E9F74u) { return; }
    }
    ctx->pc = 0x2E9F74u;
label_2e9f74:
    // 0x2e9f74: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x2E9F74u;
    {
        const bool branch_taken_0x2e9f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F74u;
            // 0x2e9f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f74) {
            ctx->pc = 0x2EA2BCu;
            goto label_2ea2bc;
        }
    }
    ctx->pc = 0x2E9F7Cu;
label_2e9f7c:
    // 0x2e9f7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e9f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9f80: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x2e9f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2e9f84:
    // 0x2e9f84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e9f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9f88: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x2e9f88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e9f8c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2e9f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2e9f90: 0xa6240012  sh          $a0, 0x12($s1)
    ctx->pc = 0x2e9f90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x2e9f94: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2e9f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2e9f98: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2e9f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2e9f9c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x2E9F9Cu;
    {
        const bool branch_taken_0x2e9f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9F9Cu;
            // 0x2e9fa0: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9f9c) {
            ctx->pc = 0x2E9F58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e9f58;
        }
    }
    ctx->pc = 0x2E9FA4u;
label_2e9fa4:
    // 0x2e9fa4: 0x2c4200e1  sltiu       $v0, $v0, 0xE1
    ctx->pc = 0x2e9fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)225) ? 1 : 0);
    // 0x2e9fa8: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x2E9FA8u;
    {
        const bool branch_taken_0x2e9fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9FA8u;
            // 0x2e9fac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9fa8) {
            ctx->pc = 0x2EA0CCu;
            goto label_2ea0cc;
        }
    }
    ctx->pc = 0x2E9FB0u;
    // 0x2e9fb0: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2E9FB0u;
    SET_GPR_U32(ctx, 31, 0x2E9FB8u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FB8u; }
        if (ctx->pc != 0x2E9FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FB8u; }
        if (ctx->pc != 0x2E9FB8u) { return; }
    }
    ctx->pc = 0x2E9FB8u;
label_2e9fb8:
    // 0x2e9fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e9fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9fbc: 0xc098552  jal         func_261548
    ctx->pc = 0x2E9FBCu;
    SET_GPR_U32(ctx, 31, 0x2E9FC4u);
    ctx->pc = 0x2E9FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9FBCu;
            // 0x2e9fc0: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FC4u; }
        if (ctx->pc != 0x2E9FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FC4u; }
        if (ctx->pc != 0x2E9FC4u) { return; }
    }
    ctx->pc = 0x2E9FC4u;
label_2e9fc4:
    // 0x2e9fc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9FC4u;
    {
        const bool branch_taken_0x2e9fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9FC4u;
            // 0x2e9fc8: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9fc4) {
            ctx->pc = 0x2E9FE0u;
            goto label_2e9fe0;
        }
    }
    ctx->pc = 0x2E9FCCu;
    // 0x2e9fcc: 0xc08a8ec  jal         func_22A3B0
    ctx->pc = 0x2E9FCCu;
    SET_GPR_U32(ctx, 31, 0x2E9FD4u);
    ctx->pc = 0x2E9FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9FCCu;
            // 0x2e9fd0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (runtime->hasFunction(0x22A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x22A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FD4u; }
        if (ctx->pc != 0x2E9FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A3B0_0x22a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FD4u; }
        if (ctx->pc != 0x2E9FD4u) { return; }
    }
    ctx->pc = 0x2E9FD4u;
label_2e9fd4:
    // 0x2e9fd4: 0xc098552  jal         func_261548
    ctx->pc = 0x2E9FD4u;
    SET_GPR_U32(ctx, 31, 0x2E9FDCu);
    ctx->pc = 0x2E9FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9FD4u;
            // 0x2e9fd8: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FDCu; }
        if (ctx->pc != 0x2E9FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FDCu; }
        if (ctx->pc != 0x2E9FDCu) { return; }
    }
    ctx->pc = 0x2E9FDCu;
label_2e9fdc:
    // 0x2e9fdc: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2e9fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2e9fe0:
    // 0x2e9fe0: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2E9FE0u;
    SET_GPR_U32(ctx, 31, 0x2E9FE8u);
    ctx->pc = 0x2E9FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9FE0u;
            // 0x2e9fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FE8u; }
        if (ctx->pc != 0x2E9FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9FE8u; }
        if (ctx->pc != 0x2E9FE8u) { return; }
    }
    ctx->pc = 0x2E9FE8u;
label_2e9fe8:
    // 0x2e9fe8: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2e9fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2e9fec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E9FECu;
    {
        const bool branch_taken_0x2e9fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9FECu;
            // 0x2e9ff0: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9fec) {
            ctx->pc = 0x2EA018u;
            goto label_2ea018;
        }
    }
    ctx->pc = 0x2E9FF4u;
    // 0x2e9ff4: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2e9ff4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2e9ff8: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x2e9ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x2e9ffc: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2e9ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x2ea000: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x2ea000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x2ea004: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x2ea004u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ea008: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x2ea008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x2ea00c: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x2ea00cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x2ea010: 0xae310038  sw          $s1, 0x38($s1)
    ctx->pc = 0x2ea010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 17));
    // 0x2ea014: 0xae310034  sw          $s1, 0x34($s1)
    ctx->pc = 0x2ea014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 17));
label_2ea018:
    // 0x2ea018: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2ea018u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x2ea01c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ea01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ea020: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2EA020u;
    {
        const bool branch_taken_0x2ea020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA020u;
            // 0x2ea024: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea020) {
            ctx->pc = 0x2EA0CCu;
            goto label_2ea0cc;
        }
    }
    ctx->pc = 0x2EA028u;
    // 0x2ea028: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ea028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2ea02c: 0x26460014  addiu       $a2, $s2, 0x14
    ctx->pc = 0x2ea02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2ea030: 0x24a5ff10  addiu       $a1, $a1, -0xF0
    ctx->pc = 0x2ea030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967056));
    // 0x2ea034: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2EA034u;
    SET_GPR_U32(ctx, 31, 0x2EA03Cu);
    ctx->pc = 0x2EA038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA034u;
            // 0x2ea038: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA03Cu; }
        if (ctx->pc != 0x2EA03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA03Cu; }
        if (ctx->pc != 0x2EA03Cu) { return; }
    }
    ctx->pc = 0x2EA03Cu;
label_2ea03c:
    // 0x2ea03c: 0xc08a996  jal         func_22A658
    ctx->pc = 0x2EA03Cu;
    SET_GPR_U32(ctx, 31, 0x2EA044u);
    ctx->pc = 0x2EA040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA03Cu;
            // 0x2ea040: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA044u; }
        if (ctx->pc != 0x2EA044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA044u; }
        if (ctx->pc != 0x2EA044u) { return; }
    }
    ctx->pc = 0x2EA044u;
label_2ea044:
    // 0x2ea044: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x2EA044u;
    {
        const bool branch_taken_0x2ea044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA044u;
            // 0x2ea048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea044) {
            ctx->pc = 0x2EA2BCu;
            goto label_2ea2bc;
        }
    }
    ctx->pc = 0x2EA04Cu;
label_2ea04c:
    // 0x2ea04c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ea04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ea050: 0x24a5ff28  addiu       $a1, $a1, -0xD8
    ctx->pc = 0x2ea050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967080));
    // 0x2ea054: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2EA054u;
    SET_GPR_U32(ctx, 31, 0x2EA05Cu);
    ctx->pc = 0x2EA058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA054u;
            // 0x2ea058: 0x26460014  addiu       $a2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA05Cu; }
        if (ctx->pc != 0x2EA05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA05Cu; }
        if (ctx->pc != 0x2EA05Cu) { return; }
    }
    ctx->pc = 0x2EA05Cu;
label_2ea05c:
    // 0x2ea05c: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x2EA05Cu;
    {
        const bool branch_taken_0x2ea05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea05c) {
            ctx->pc = 0x2EA29Cu;
            goto label_2ea29c;
        }
    }
    ctx->pc = 0x2EA064u;
label_2ea064:
    // 0x2ea064: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ea064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea068: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EA068u;
    {
        const bool branch_taken_0x2ea068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA068u;
            // 0x2ea06c: 0x24a5ff50  addiu       $a1, $a1, -0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea068) {
            ctx->pc = 0x2EA094u;
            goto label_2ea094;
        }
    }
    ctx->pc = 0x2EA070u;
label_2ea070:
    // 0x2ea070: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ea070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ea074: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA074u;
    {
        const bool branch_taken_0x2ea074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA074u;
            // 0x2ea078: 0x24a5ff60  addiu       $a1, $a1, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea074) {
            ctx->pc = 0x2EA098u;
            goto label_2ea098;
        }
    }
    ctx->pc = 0x2EA07Cu;
label_2ea07c:
    // 0x2ea07c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ea07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2ea080: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2ea080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea084: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA084u;
    {
        const bool branch_taken_0x2ea084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA084u;
            // 0x2ea088: 0x24a5ff78  addiu       $a1, $a1, -0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea084) {
            ctx->pc = 0x2EA094u;
            goto label_2ea094;
        }
    }
    ctx->pc = 0x2EA08Cu;
label_2ea08c:
    // 0x2ea08c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2ea08cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea090: 0x24a5ff90  addiu       $a1, $a1, -0x70
    ctx->pc = 0x2ea090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967184));
label_2ea094:
    // 0x2ea094: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ea094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ea098:
    // 0x2ea098: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2EA098u;
    SET_GPR_U32(ctx, 31, 0x2EA0A0u);
    ctx->pc = 0x2EA09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA098u;
            // 0x2ea09c: 0x26460014  addiu       $a2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA0A0u; }
        if (ctx->pc != 0x2EA0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA0A0u; }
        if (ctx->pc != 0x2EA0A0u) { return; }
    }
    ctx->pc = 0x2EA0A0u;
label_2ea0a0:
    // 0x2ea0a0: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2EA0A0u;
    {
        const bool branch_taken_0x2ea0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea0a0) {
            ctx->pc = 0x2EA29Cu;
            goto label_2ea29c;
        }
    }
    ctx->pc = 0x2EA0A8u;
label_2ea0a8:
    // 0x2ea0a8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ea0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ea0ac: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ea0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2ea0b0: 0x26460014  addiu       $a2, $s2, 0x14
    ctx->pc = 0x2ea0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x2ea0b4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x2ea0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x2ea0b8: 0x24a5ffb0  addiu       $a1, $a1, -0x50
    ctx->pc = 0x2ea0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967216));
    // 0x2ea0bc: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2EA0BCu;
    SET_GPR_U32(ctx, 31, 0x2EA0C4u);
    ctx->pc = 0x2EA0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA0BCu;
            // 0x2ea0c0: 0xe83825  or          $a3, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA0C4u; }
        if (ctx->pc != 0x2EA0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA0C4u; }
        if (ctx->pc != 0x2EA0C4u) { return; }
    }
    ctx->pc = 0x2EA0C4u;
label_2ea0c4:
    // 0x2ea0c4: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x2EA0C4u;
    {
        const bool branch_taken_0x2ea0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea0c4) {
            ctx->pc = 0x2EA29Cu;
            goto label_2ea29c;
        }
    }
    ctx->pc = 0x2EA0CCu;
label_2ea0cc:
    // 0x2ea0cc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2ea0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x2ea0d0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2ea0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2ea0d4: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2ea0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ea0d8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ea0d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea0dc: 0x1a80006a  blez        $s4, . + 4 + (0x6A << 2)
    ctx->pc = 0x2EA0DCu;
    {
        const bool branch_taken_0x2ea0dc = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2EA0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA0DCu;
            // 0x2ea0e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea0dc) {
            ctx->pc = 0x2EA288u;
            goto label_2ea288;
        }
    }
    ctx->pc = 0x2EA0E4u;
    // 0x2ea0e4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ea0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ea0e8: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x2ea0e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ea0ec: 0x244bea38  addiu       $t3, $v0, -0x15C8
    ctx->pc = 0x2ea0ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961720));
label_2ea0f0:
    // 0x2ea0f0: 0x92680000  lbu         $t0, 0x0($s3)
    ctx->pc = 0x2ea0f0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ea0f4: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x2ea0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x2ea0f8: 0x5502001c  bnel        $t0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2EA0F8u;
    {
        const bool branch_taken_0x2ea0f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ea0f8) {
            ctx->pc = 0x2EA0FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA0F8u;
            // 0x2ea0fc: 0x2d020020  sltiu       $v0, $t0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA16Cu;
            goto label_2ea16c;
        }
    }
    ctx->pc = 0x2EA100u;
    // 0x2ea100: 0x5520ffd2  bnel        $t1, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2EA100u;
    {
        const bool branch_taken_0x2ea100 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea100) {
            ctx->pc = 0x2EA104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA100u;
            // 0x2ea104: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA04Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ea04c;
        }
    }
    ctx->pc = 0x2EA108u;
    // 0x2ea108: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA108u;
    {
        const bool branch_taken_0x2ea108 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2EA10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA108u;
            // 0x2ea10c: 0x3402f0b8  ori         $v0, $zero, 0xF0B8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61624);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea108) {
            ctx->pc = 0x2EA118u;
            goto label_2ea118;
        }
    }
    ctx->pc = 0x2EA110u;
    // 0x2ea110: 0x5482ffd4  bnel        $a0, $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2EA110u;
    {
        const bool branch_taken_0x2ea110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ea110) {
            ctx->pc = 0x2EA114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA110u;
            // 0x2ea114: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA064u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ea064;
        }
    }
    ctx->pc = 0x2EA118u;
label_2ea118:
    // 0x2ea118: 0x28e20006  slti        $v0, $a3, 0x6
    ctx->pc = 0x2ea118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2ea11c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA11Cu;
    {
        const bool branch_taken_0x2ea11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea11c) {
            ctx->pc = 0x2EA120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA11Cu;
            // 0x2ea120: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA13Cu;
            goto label_2ea13c;
        }
    }
    ctx->pc = 0x2EA124u;
    // 0x2ea124: 0x14e0ffd2  bnez        $a3, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2EA124u;
    {
        const bool branch_taken_0x2ea124 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA124u;
            // 0x2ea128: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea124) {
            ctx->pc = 0x2EA070u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ea070;
        }
    }
    ctx->pc = 0x2EA12Cu;
    // 0x2ea12c: 0xc08a996  jal         func_22A658
    ctx->pc = 0x2EA12Cu;
    SET_GPR_U32(ctx, 31, 0x2EA134u);
    ctx->pc = 0x2EA130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA12Cu;
            // 0x2ea130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA134u; }
        if (ctx->pc != 0x2EA134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA134u; }
        if (ctx->pc != 0x2EA134u) { return; }
    }
    ctx->pc = 0x2EA134u;
label_2ea134:
    // 0x2ea134: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2EA134u;
    {
        const bool branch_taken_0x2ea134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA134u;
            // 0x2ea138: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea134) {
            ctx->pc = 0x2EA2BCu;
            goto label_2ea2bc;
        }
    }
    ctx->pc = 0x2EA13Cu;
label_2ea13c:
    // 0x2ea13c: 0x24e7fffe  addiu       $a3, $a3, -0x2
    ctx->pc = 0x2ea13cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x2ea140: 0xae320014  sw          $s2, 0x14($s1)
    ctx->pc = 0x2ea140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
    // 0x2ea144: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x2ea144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2ea148: 0xae270018  sw          $a3, 0x18($s1)
    ctx->pc = 0x2ea148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 7));
    // 0x2ea14c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2ea14cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2ea150: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x2ea150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x2ea154: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2ea154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2ea158: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2ea158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2ea15c: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2EA15Cu;
    {
        const bool branch_taken_0x2ea15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA15Cu;
            // 0x2ea160: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea15c) {
            ctx->pc = 0x2EA07Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ea07c;
        }
    }
    ctx->pc = 0x2EA164u;
    // 0x2ea164: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2EA164u;
    {
        const bool branch_taken_0x2ea164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA164u;
            // 0x2ea168: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea164) {
            ctx->pc = 0x2EA2C0u;
            goto label_2ea2c0;
        }
    }
    ctx->pc = 0x2EA16Cu;
label_2ea16c:
    // 0x2ea16c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA16Cu;
    {
        const bool branch_taken_0x2ea16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea16c) {
            ctx->pc = 0x2EA188u;
            goto label_2ea188;
        }
    }
    ctx->pc = 0x2EA174u;
    // 0x2ea174: 0x8e427f7c  lw          $v0, 0x7F7C($s2)
    ctx->pc = 0x2ea174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32636)));
    // 0x2ea178: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x2ea178u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x2ea17c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ea17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ea180: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x2EA180u;
    {
        const bool branch_taken_0x2ea180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea180) {
            ctx->pc = 0x2EA184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA180u;
            // 0x2ea184: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA27Cu;
            goto label_2ea27c;
        }
    }
    ctx->pc = 0x2EA188u;
label_2ea188:
    // 0x2ea188: 0x55200006  bnel        $t1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA188u;
    {
        const bool branch_taken_0x2ea188 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ea188) {
            ctx->pc = 0x2EA18Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA188u;
            // 0x2ea18c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA1A4u;
            goto label_2ea1a4;
        }
    }
    ctx->pc = 0x2EA190u;
    // 0x2ea190: 0x2402007d  addiu       $v0, $zero, 0x7D
    ctx->pc = 0x2ea190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x2ea194: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA194u;
    {
        const bool branch_taken_0x2ea194 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x2ea194) {
            ctx->pc = 0x2EA1A8u;
            goto label_2ea1a8;
        }
    }
    ctx->pc = 0x2EA19Cu;
    // 0x2ea19c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2EA19Cu;
    {
        const bool branch_taken_0x2ea19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA19Cu;
            // 0x2ea1a0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea19c) {
            ctx->pc = 0x2EA278u;
            goto label_2ea278;
        }
    }
    ctx->pc = 0x2EA1A4u;
label_2ea1a4:
    // 0x2ea1a4: 0x39080020  xori        $t0, $t0, 0x20
    ctx->pc = 0x2ea1a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)32);
label_2ea1a8:
    // 0x2ea1a8: 0x14e00010  bnez        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EA1A8u;
    {
        const bool branch_taken_0x2ea1a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA1A8u;
            // 0x2ea1ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1a8) {
            ctx->pc = 0x2EA1ECu;
            goto label_2ea1ec;
        }
    }
    ctx->pc = 0x2EA1B0u;
    // 0x2ea1b0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2ea1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ea1b4: 0x1103000d  beq         $t0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2EA1B4u;
    {
        const bool branch_taken_0x2ea1b4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ea1b4) {
            ctx->pc = 0x2EA1ECu;
            goto label_2ea1ec;
        }
    }
    ctx->pc = 0x2EA1BCu;
    // 0x2ea1bc: 0x8e420294  lw          $v0, 0x294($s2)
    ctx->pc = 0x2ea1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 660)));
    // 0x2ea1c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EA1C0u;
    {
        const bool branch_taken_0x2ea1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA1C0u;
            // 0x2ea1c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1c0) {
            ctx->pc = 0x2EA1E8u;
            goto label_2ea1e8;
        }
    }
    ctx->pc = 0x2EA1C8u;
    // 0x2ea1c8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2ea1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ea1cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ea1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ea1d0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2ea1d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea1d4: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2ea1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ea1d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ea1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ea1dc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2ea1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ea1e0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2ea1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2ea1e4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2ea1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2ea1e8:
    // 0x2ea1e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea1ec:
    // 0x2ea1ec: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EA1ECu;
    {
        const bool branch_taken_0x2ea1ec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EA1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA1ECu;
            // 0x2ea1f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1ec) {
            ctx->pc = 0x2EA1FCu;
            goto label_2ea1fc;
        }
    }
    ctx->pc = 0x2EA1F4u;
    // 0x2ea1f4: 0x550affa5  bnel        $t0, $t2, . + 4 + (-0x5B << 2)
    ctx->pc = 0x2EA1F4u;
    {
        const bool branch_taken_0x2ea1f4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        if (branch_taken_0x2ea1f4) {
            ctx->pc = 0x2EA1F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA1F4u;
            // 0x2ea1f8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA08Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ea08c;
        }
    }
    ctx->pc = 0x2EA1FCu;
label_2ea1fc:
    // 0x2ea1fc: 0x14e2000c  bne         $a3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EA1FCu;
    {
        const bool branch_taken_0x2ea1fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EA200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA1FCu;
            // 0x2ea200: 0x31020001  andi        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea1fc) {
            ctx->pc = 0x2EA230u;
            goto label_2ea230;
        }
    }
    ctx->pc = 0x2EA204u;
    // 0x2ea204: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EA204u;
    {
        const bool branch_taken_0x2ea204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea204) {
            ctx->pc = 0x2EA230u;
            goto label_2ea230;
        }
    }
    ctx->pc = 0x2EA20Cu;
    // 0x2ea20c: 0x8e42028c  lw          $v0, 0x28C($s2)
    ctx->pc = 0x2ea20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 652)));
    // 0x2ea210: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EA210u;
    {
        const bool branch_taken_0x2ea210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea210) {
            ctx->pc = 0x2EA230u;
            goto label_2ea230;
        }
    }
    ctx->pc = 0x2EA218u;
    // 0x2ea218: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x2ea218u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea21c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2ea21cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ea220: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ea220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ea224: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2ea224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ea228: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ea228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ea22c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2ea22cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2ea230:
    // 0x2ea230: 0x54ea0005  bnel        $a3, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA230u;
    {
        const bool branch_taken_0x2ea230 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        if (branch_taken_0x2ea230) {
            ctx->pc = 0x2EA234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA230u;
            // 0x2ea234: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA248u;
            goto label_2ea248;
        }
    }
    ctx->pc = 0x2EA238u;
    // 0x2ea238: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x2ea238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x2ea23c: 0x5040ff9a  beql        $v0, $zero, . + 4 + (-0x66 << 2)
    ctx->pc = 0x2EA23Cu;
    {
        const bool branch_taken_0x2ea23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea23c) {
            ctx->pc = 0x2EA240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA23Cu;
            // 0x2ea240: 0x90a7ffff  lbu         $a3, -0x1($a1) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA0A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ea0a8;
        }
    }
    ctx->pc = 0x2EA244u;
    // 0x2ea244: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2ea244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2ea248:
    // 0x2ea248: 0x881826  xor         $v1, $a0, $t0
    ctx->pc = 0x2ea248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 8));
    // 0x2ea24c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2ea24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2ea250: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x2ea250u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2ea254: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ea254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ea258: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2ea258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2ea25c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2ea25cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2ea260: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2ea260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2ea264: 0xa0a80000  sb          $t0, 0x0($a1)
    ctx->pc = 0x2ea264u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x2ea268: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2ea268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2ea26c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2ea26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ea270: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2ea270u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ea274: 0x442026  xor         $a0, $v0, $a0
    ctx->pc = 0x2ea274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_2ea278:
    // 0x2ea278: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ea278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2ea27c:
    // 0x2ea27c: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x2ea27cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2ea280: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x2EA280u;
    {
        const bool branch_taken_0x2ea280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA280u;
            // 0x2ea284: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea280) {
            ctx->pc = 0x2EA0F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ea0f0;
        }
    }
    ctx->pc = 0x2EA288u;
label_2ea288:
    // 0x2ea288: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ea288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2ea28c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2ea28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ea290: 0x24a5ffc8  addiu       $a1, $a1, -0x38
    ctx->pc = 0x2ea290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967240));
    // 0x2ea294: 0xc08b5ac  jal         func_22D6B0
    ctx->pc = 0x2EA294u;
    SET_GPR_U32(ctx, 31, 0x2EA29Cu);
    ctx->pc = 0x2EA298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA294u;
            // 0x2ea298: 0x26460014  addiu       $a2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA29Cu; }
        if (ctx->pc != 0x2EA29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA29Cu; }
        if (ctx->pc != 0x2EA29Cu) { return; }
    }
    ctx->pc = 0x2EA29Cu;
label_2ea29c:
    // 0x2ea29c: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA29Cu;
    {
        const bool branch_taken_0x2ea29c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea29c) {
            ctx->pc = 0x2EA2A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA29Cu;
            // 0x2ea2a0: 0xde430060  ld          $v1, 0x60($s2) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EA2B0u;
            goto label_2ea2b0;
        }
    }
    ctx->pc = 0x2EA2A4u;
    // 0x2ea2a4: 0xc08a996  jal         func_22A658
    ctx->pc = 0x2EA2A4u;
    SET_GPR_U32(ctx, 31, 0x2EA2ACu);
    ctx->pc = 0x2EA2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA2A4u;
            // 0x2ea2a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA2ACu; }
        if (ctx->pc != 0x2EA2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EA2ACu; }
        if (ctx->pc != 0x2EA2ACu) { return; }
    }
    ctx->pc = 0x2EA2ACu;
label_2ea2ac:
    // 0x2ea2ac: 0xde430060  ld          $v1, 0x60($s2)
    ctx->pc = 0x2ea2acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 96)));
label_2ea2b0:
    // 0x2ea2b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ea2b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea2b4: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x2ea2b4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x2ea2b8: 0xfe430060  sd          $v1, 0x60($s2)
    ctx->pc = 0x2ea2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 96), GPR_U64(ctx, 3));
label_2ea2bc:
    // 0x2ea2bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ea2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ea2c0:
    // 0x2ea2c0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2ea2c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ea2c4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2ea2c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ea2c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2ea2c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea2cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2ea2ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea2d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ea2d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA2D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EA2D4u;
            // 0x2ea2d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EA2DCu;
    // 0x2ea2dc: 0x0  nop
    ctx->pc = 0x2ea2dcu;
    // NOP
    ctx->pc = 0x2ea2e0u;
}
