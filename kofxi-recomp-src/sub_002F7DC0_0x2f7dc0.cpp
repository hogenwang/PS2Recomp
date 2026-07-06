#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F7DC0
// Address: 0x2f7dc0 - 0x2f7f08
void sub_002F7DC0_0x2f7dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7DC0_0x2f7dc0");
#endif

    switch (ctx->pc) {
        case 0x2f7e1cu: goto label_2f7e1c;
        case 0x2f7e30u: goto label_2f7e30;
        case 0x2f7e4cu: goto label_2f7e4c;
        case 0x2f7e6cu: goto label_2f7e6c;
        case 0x2f7e84u: goto label_2f7e84;
        case 0x2f7e8cu: goto label_2f7e8c;
        case 0x2f7e98u: goto label_2f7e98;
        case 0x2f7ee4u: goto label_2f7ee4;
        default: break;
    }

    ctx->pc = 0x2f7dc0u;

    // 0x2f7dc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f7dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f7dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f7dc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f7dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f7dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f7dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7dd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f7dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f7dd4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f7dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f7dd8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2f7dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2f7ddc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7DDCu;
    {
        const bool branch_taken_0x2f7ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7ddc) {
            ctx->pc = 0x2F7DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7DDCu;
            // 0x2f7de0: 0x8e020160  lw          $v0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7DF0u;
            goto label_2f7df0;
        }
    }
    ctx->pc = 0x2F7DE4u;
    // 0x2f7de4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2F7DE4u;
    {
        const bool branch_taken_0x2f7de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7DE4u;
            // 0x2f7de8: 0x8e030160  lw          $v1, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7de4) {
            ctx->pc = 0x2F7EB8u;
            goto label_2f7eb8;
        }
    }
    ctx->pc = 0x2F7DECu;
    // 0x2f7dec: 0x0  nop
    ctx->pc = 0x2f7decu;
    // NOP
label_2f7df0:
    // 0x2f7df0: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2f7df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7df4: 0xae050140  sw          $a1, 0x140($s0)
    ctx->pc = 0x2f7df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 5));
    // 0x2f7df8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2f7df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2f7dfc: 0xae060144  sw          $a2, 0x144($s0)
    ctx->pc = 0x2f7dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 6));
    // 0x2f7e00: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x2f7e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x2f7e04: 0x10f1000e  beq         $a3, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2F7E04u;
    {
        const bool branch_taken_0x2f7e04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F7E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7E04u;
            // 0x2f7e08: 0xae020160  sw          $v0, 0x160($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7e04) {
            ctx->pc = 0x2F7E40u;
            goto label_2f7e40;
        }
    }
    ctx->pc = 0x2F7E0Cu;
    // 0x2f7e0c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2f7e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7e10: 0xae070164  sw          $a3, 0x164($s0)
    ctx->pc = 0x2f7e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 7));
    // 0x2f7e14: 0xc046278  jal         func_1189E0
    ctx->pc = 0x2F7E14u;
    SET_GPR_U32(ctx, 31, 0x2F7E1Cu);
    ctx->pc = 0x2F7E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7E14u;
            // 0x2f7e18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1189E0u;
    if (runtime->hasFunction(0x1189E0u)) {
        auto targetFn = runtime->lookupFunction(0x1189E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E1Cu; }
        if (ctx->pc != 0x2F7E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001189E0_0x1189e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E1Cu; }
        if (ctx->pc != 0x2F7E1Cu) { return; }
    }
    ctx->pc = 0x2F7E1Cu;
label_2f7e1c:
    // 0x2f7e1c: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x2f7e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x2f7e20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f7e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7e24: 0x24a578f0  addiu       $a1, $a1, 0x78F0
    ctx->pc = 0x2f7e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30960));
    // 0x2f7e28: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x2F7E28u;
    SET_GPR_U32(ctx, 31, 0x2F7E30u);
    ctx->pc = 0x2F7E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7E28u;
            // 0x2f7e2c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (runtime->hasFunction(0x118B90u)) {
        auto targetFn = runtime->lookupFunction(0x118B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E30u; }
        if (ctx->pc != 0x2F7E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118B90_0x118b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E30u; }
        if (ctx->pc != 0x2F7E30u) { return; }
    }
    ctx->pc = 0x2F7E30u;
label_2f7e30:
    // 0x2f7e30: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7E30u;
    {
        const bool branch_taken_0x2f7e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x2F7E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7E30u;
            // 0x2f7e34: 0xae02014c  sw          $v0, 0x14C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7e30) {
            ctx->pc = 0x2F7E44u;
            goto label_2f7e44;
        }
    }
    ctx->pc = 0x2F7E38u;
    // 0x2f7e38: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2F7E38u;
    {
        const bool branch_taken_0x2f7e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7E38u;
            // 0x2f7e3c: 0x2402fc17  addiu       $v0, $zero, -0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7e38) {
            ctx->pc = 0x2F7EC8u;
            goto label_2f7ec8;
        }
    }
    ctx->pc = 0x2F7E40u;
label_2f7e40:
    // 0x2f7e40: 0xae07014c  sw          $a3, 0x14C($s0)
    ctx->pc = 0x2f7e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 7));
label_2f7e44:
    // 0x2f7e44: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x2F7E44u;
    SET_GPR_U32(ctx, 31, 0x2F7E4Cu);
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E4Cu; }
        if (ctx->pc != 0x2F7E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E4Cu; }
        if (ctx->pc != 0x2F7E4Cu) { return; }
    }
    ctx->pc = 0x2F7E4Cu;
label_2f7e4c:
    // 0x2f7e4c: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x2f7e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2f7e50: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f7e50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7e54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f7e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7e58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7e5c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2f7e5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f7e60: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2f7e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2f7e64: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x2F7E64u;
    SET_GPR_U32(ctx, 31, 0x2F7E6Cu);
    ctx->pc = 0x2F7E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7E64u;
            // 0x2f7e68: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (runtime->hasFunction(0x10CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E6Cu; }
        if (ctx->pc != 0x2F7E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E6Cu; }
        if (ctx->pc != 0x2F7E6Cu) { return; }
    }
    ctx->pc = 0x2F7E6Cu;
label_2f7e6c:
    // 0x2f7e6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f7e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7e70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f7e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f7e74: 0x12220014  beq         $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F7E74u;
    {
        const bool branch_taken_0x2f7e74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7E74u;
            // 0x2f7e78: 0x2402fc17  addiu       $v0, $zero, -0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7e74) {
            ctx->pc = 0x2F7EC8u;
            goto label_2f7ec8;
        }
    }
    ctx->pc = 0x2F7E7Cu;
    // 0x2f7e7c: 0xc043320  jal         func_10CC80
    ctx->pc = 0x2F7E7Cu;
    SET_GPR_U32(ctx, 31, 0x2F7E84u);
    ctx->pc = 0x2F7E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7E7Cu;
            // 0x2f7e80: 0x8e040158  lw          $a0, 0x158($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E84u; }
        if (ctx->pc != 0x2F7E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E84u; }
        if (ctx->pc != 0x2F7E84u) { return; }
    }
    ctx->pc = 0x2F7E84u;
label_2f7e84:
    // 0x2f7e84: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x2F7E84u;
    SET_GPR_U32(ctx, 31, 0x2F7E8Cu);
    ctx->pc = 0x2F7E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7E84u;
            // 0x2f7e88: 0x8e04015c  lw          $a0, 0x15C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 348)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E8Cu; }
        if (ctx->pc != 0x2F7E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E8Cu; }
        if (ctx->pc != 0x2F7E8Cu) { return; }
    }
    ctx->pc = 0x2F7E8Cu;
label_2f7e8c:
    // 0x2f7e8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f7e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7e90: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x2F7E90u;
    SET_GPR_U32(ctx, 31, 0x2F7E98u);
    ctx->pc = 0x2F7E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7E90u;
            // 0x2f7e94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (runtime->hasFunction(0x10CAF0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E98u; }
        if (ctx->pc != 0x2F7E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallChangeThreadPriorityWrappers_0x10caf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7E98u; }
        if (ctx->pc != 0x2F7E98u) { return; }
    }
    ctx->pc = 0x2F7E98u;
label_2f7e98:
    // 0x2f7e98: 0x8e030160  lw          $v1, 0x160($s0)
    ctx->pc = 0x2f7e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2f7e9c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x2f7e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x2f7ea0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F7EA0u;
    {
        const bool branch_taken_0x2f7ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7EA0u;
            // 0x2f7ea4: 0x2402fc08  addiu       $v0, $zero, -0x3F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7ea0) {
            ctx->pc = 0x2F7EC8u;
            goto label_2f7ec8;
        }
    }
    ctx->pc = 0x2F7EA8u;
    // 0x2f7ea8: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x2f7ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x2f7eac: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F7EACu;
    {
        const bool branch_taken_0x2f7eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7eac) {
            ctx->pc = 0x2F7EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7EACu;
            // 0x2f7eb0: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7ED4u;
            goto label_2f7ed4;
        }
    }
    ctx->pc = 0x2F7EB4u;
    // 0x2f7eb4: 0x0  nop
    ctx->pc = 0x2f7eb4u;
    // NOP
label_2f7eb8:
    // 0x2f7eb8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2f7eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2f7ebc: 0xae030160  sw          $v1, 0x160($s0)
    ctx->pc = 0x2f7ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 3));
    // 0x2f7ec0: 0x2402fc0d  addiu       $v0, $zero, -0x3F3
    ctx->pc = 0x2f7ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966285));
    // 0x2f7ec4: 0x0  nop
    ctx->pc = 0x2f7ec4u;
    // NOP
label_2f7ec8:
    // 0x2f7ec8: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2f7ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2f7ecc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F7ECCu;
    {
        const bool branch_taken_0x2f7ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7ECCu;
            // 0x2f7ed0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7ecc) {
            ctx->pc = 0x2F7EF0u;
            goto label_2f7ef0;
        }
    }
    ctx->pc = 0x2F7ED4u;
label_2f7ed4:
    // 0x2f7ed4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7ED4u;
    {
        const bool branch_taken_0x2f7ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7ed4) {
            ctx->pc = 0x2F7ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7ED4u;
            // 0x2f7ed8: 0x8e020148  lw          $v0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F7EF0u;
            goto label_2f7ef0;
        }
    }
    ctx->pc = 0x2F7EDCu;
    // 0x2f7edc: 0xc0bf12c  jal         func_2FC4B0
    ctx->pc = 0x2F7EDCu;
    SET_GPR_U32(ctx, 31, 0x2F7EE4u);
    ctx->pc = 0x2F7EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7EDCu;
            // 0x2f7ee0: 0x8e04013c  lw          $a0, 0x13C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC4B0u;
    if (runtime->hasFunction(0x2FC4B0u)) {
        auto targetFn = runtime->lookupFunction(0x2FC4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7EE4u; }
        if (ctx->pc != 0x2F7EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002FC4B0_0x2fc4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F7EE4u; }
        if (ctx->pc != 0x2F7EE4u) { return; }
    }
    ctx->pc = 0x2F7EE4u;
label_2f7ee4:
    // 0x2f7ee4: 0x2403fc13  addiu       $v1, $zero, -0x3ED
    ctx->pc = 0x2f7ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966291));
    // 0x2f7ee8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x2f7ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x2f7eec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f7eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f7ef0:
    // 0x2f7ef0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f7ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7ef4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f7ef4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7ef8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f7ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7efc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f7efcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7f00: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F7F00u;
            // 0x2f7f04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F7F08u;
    ctx->pc = 0x2f7f08u;
}
