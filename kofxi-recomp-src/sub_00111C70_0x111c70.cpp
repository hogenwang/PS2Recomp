#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00111C70
// Address: 0x111c70 - 0x111e78
void sub_00111C70_0x111c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111C70_0x111c70");
#endif

    switch (ctx->pc) {
        case 0x111c9cu: goto label_111c9c;
        case 0x111ca8u: goto label_111ca8;
        case 0x111cc8u: goto label_111cc8;
        case 0x111ce0u: goto label_111ce0;
        case 0x111cf0u: goto label_111cf0;
        case 0x111cf8u: goto label_111cf8;
        case 0x111d00u: goto label_111d00;
        case 0x111d34u: goto label_111d34;
        case 0x111d50u: goto label_111d50;
        case 0x111d58u: goto label_111d58;
        case 0x111d78u: goto label_111d78;
        case 0x111db0u: goto label_111db0;
        case 0x111decu: goto label_111dec;
        default: break;
    }

    ctx->pc = 0x111c70u;

    // 0x111c70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x111c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x111c74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x111c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111c78: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x111c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x111c7c: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x111c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x111c80: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x111c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x111c84: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x111c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x111c88: 0x26119a00  addiu       $s1, $s0, -0x6600
    ctx->pc = 0x111c88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941184));
    // 0x111c8c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x111c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x111c90: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x111c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x111c94: 0xc0440ea  jal         func_1103A8
    ctx->pc = 0x111C94u;
    SET_GPR_U32(ctx, 31, 0x111C9Cu);
    ctx->pc = 0x111C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111C94u;
            // 0x111c98: 0xffb20040  sd          $s2, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1103A8u;
    if (runtime->hasFunction(0x1103A8u)) {
        auto targetFn = runtime->lookupFunction(0x1103A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111C9Cu; }
        if (ctx->pc != 0x111C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001103A8_0x1103a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111C9Cu; }
        if (ctx->pc != 0x111C9Cu) { return; }
    }
    ctx->pc = 0x111C9Cu;
label_111c9c:
    // 0x111c9c: 0xae009a00  sw          $zero, -0x6600($s0)
    ctx->pc = 0x111c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941184), GPR_U32(ctx, 0));
    // 0x111ca0: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x111CA0u;
    SET_GPR_U32(ctx, 31, 0x111CA8u);
    ctx->pc = 0x111CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111CA0u;
            // 0x111ca4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111CA8u; }
        if (ctx->pc != 0x111CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111CA8u; }
        if (ctx->pc != 0x111CA8u) { return; }
    }
    ctx->pc = 0x111CA8u;
label_111ca8:
    // 0x111ca8: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x111ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x111cac: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x111cacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x111cb0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x111cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x111cb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x111cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111cb8: 0x24a51738  addiu       $a1, $a1, 0x1738
    ctx->pc = 0x111cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5944));
    // 0x111cbc: 0x24c699c0  addiu       $a2, $a2, -0x6640
    ctx->pc = 0x111cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941120));
    // 0x111cc0: 0xc043fcc  jal         func_10FF30
    ctx->pc = 0x111CC0u;
    SET_GPR_U32(ctx, 31, 0x111CC8u);
    ctx->pc = 0x111CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111CC0u;
            // 0x111cc4: 0x34840011  ori         $a0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF30u;
    if (runtime->hasFunction(0x10FF30u)) {
        auto targetFn = runtime->lookupFunction(0x10FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111CC8u; }
        if (ctx->pc != 0x111CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FF30_0x10ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111CC8u; }
        if (ctx->pc != 0x111CC8u) { return; }
    }
    ctx->pc = 0x111CC8u;
label_111cc8:
    // 0x111cc8: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x111cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x111ccc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x111cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x111cd0: 0x24a51c28  addiu       $a1, $a1, 0x1C28
    ctx->pc = 0x111cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7208));
    // 0x111cd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x111cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111cd8: 0xc043fcc  jal         func_10FF30
    ctx->pc = 0x111CD8u;
    SET_GPR_U32(ctx, 31, 0x111CE0u);
    ctx->pc = 0x111CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111CD8u;
            // 0x111cdc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF30u;
    if (runtime->hasFunction(0x10FF30u)) {
        auto targetFn = runtime->lookupFunction(0x10FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111CE0u; }
        if (ctx->pc != 0x111CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FF30_0x10ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111CE0u; }
        if (ctx->pc != 0x111CE0u) { return; }
    }
    ctx->pc = 0x111CE0u;
label_111ce0:
    // 0x111ce0: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x111CE0u;
    {
        const bool branch_taken_0x111ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x111CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111CE0u;
            // 0x111ce4: 0x3c130041  lui         $s3, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ce0) {
            ctx->pc = 0x111D1Cu;
            goto label_111d1c;
        }
    }
    ctx->pc = 0x111CE8u;
    // 0x111ce8: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x111CE8u;
    SET_GPR_U32(ctx, 31, 0x111CF0u);
    ctx->pc = 0x111CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111CE8u;
            // 0x111cec: 0x26709980  addiu       $s0, $s3, -0x6680 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111CF0u; }
        if (ctx->pc != 0x111CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111CF0u; }
        if (ctx->pc != 0x111CF0u) { return; }
    }
    ctx->pc = 0x111CF0u;
label_111cf0:
    // 0x111cf0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x111CF0u;
    {
        const bool branch_taken_0x111cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111cf0) {
            ctx->pc = 0x111D20u;
            goto label_111d20;
        }
    }
    ctx->pc = 0x111CF8u;
label_111cf8:
    // 0x111cf8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x111cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111cfc: 0x0  nop
    ctx->pc = 0x111cfcu;
    // NOP
label_111d00:
    // 0x111d00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x111d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x111d04: 0x0  nop
    ctx->pc = 0x111d04u;
    // NOP
    // 0x111d08: 0x0  nop
    ctx->pc = 0x111d08u;
    // NOP
    // 0x111d0c: 0x0  nop
    ctx->pc = 0x111d0cu;
    // NOP
    // 0x111d10: 0x0  nop
    ctx->pc = 0x111d10u;
    // NOP
    // 0x111d14: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x111D14u;
    {
        const bool branch_taken_0x111d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x111d14) {
            ctx->pc = 0x111D00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_111d00;
        }
    }
    ctx->pc = 0x111D1Cu;
label_111d1c:
    // 0x111d1c: 0x26709980  addiu       $s0, $s3, -0x6680
    ctx->pc = 0x111d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941056));
label_111d20:
    // 0x111d20: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x111d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x111d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d28: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x111d28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x111d2c: 0xc0442d4  jal         func_110B50
    ctx->pc = 0x111D2Cu;
    SET_GPR_U32(ctx, 31, 0x111D34u);
    ctx->pc = 0x111D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111D2Cu;
            // 0x111d30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110B50u;
    if (runtime->hasFunction(0x110B50u)) {
        auto targetFn = runtime->lookupFunction(0x110B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111D34u; }
        if (ctx->pc != 0x111D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110B50_0x110b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111D34u; }
        if (ctx->pc != 0x111D34u) { return; }
    }
    ctx->pc = 0x111D34u;
label_111d34:
    // 0x111d34: 0x4400048  bltz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x111D34u;
    {
        const bool branch_taken_0x111d34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x111D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111D34u;
            // 0x111d38: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d34) {
            ctx->pc = 0x111E58u;
            goto label_111e58;
        }
    }
    ctx->pc = 0x111D3Cu;
    // 0x111d3c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x111d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x111d40: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x111D40u;
    {
        const bool branch_taken_0x111d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111D40u;
            // 0x111d44: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d40) {
            ctx->pc = 0x111CF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_111cf8;
        }
    }
    ctx->pc = 0x111D48u;
    // 0x111d48: 0xc044518  jal         func_111460
    ctx->pc = 0x111D48u;
    SET_GPR_U32(ctx, 31, 0x111D50u);
    ctx->pc = 0x111D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111D48u;
            // 0x111d4c: 0x3c140036  lui         $s4, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111460u;
    if (runtime->hasFunction(0x111460u)) {
        auto targetFn = runtime->lookupFunction(0x111460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111D50u; }
        if (ctx->pc != 0x111D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111460_0x111460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111D50u; }
        if (ctx->pc != 0x111D50u) { return; }
    }
    ctx->pc = 0x111D50u;
label_111d50:
    // 0x111d50: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x111D50u;
    SET_GPR_U32(ctx, 31, 0x111D58u);
    ctx->pc = 0x111D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111D50u;
            // 0x111d54: 0x8e848748  lw          $a0, -0x78B8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111D58u; }
        if (ctx->pc != 0x111D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111D58u; }
        if (ctx->pc != 0x111D58u) { return; }
    }
    ctx->pc = 0x111D58u;
label_111d58:
    // 0x111d58: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x111d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x111d5c: 0x24639780  addiu       $v1, $v1, -0x6880
    ctx->pc = 0x111d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940544));
    // 0x111d60: 0x24640200  addiu       $a0, $v1, 0x200
    ctx->pc = 0x111d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x111d64: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x111d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x111d68: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x111D68u;
    {
        const bool branch_taken_0x111d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111D68u;
            // 0x111d6c: 0x3c120041  lui         $s2, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d68) {
            ctx->pc = 0x111D9Cu;
            goto label_111d9c;
        }
    }
    ctx->pc = 0x111D70u;
    // 0x111d70: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x111d70u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x111d74: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x111d74u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
label_111d78:
    // 0x111d78: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x111d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x111d7c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x111d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x111d80: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x111d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x111d84: 0x0  nop
    ctx->pc = 0x111d84u;
    // NOP
    // 0x111d88: 0x0  nop
    ctx->pc = 0x111d88u;
    // NOP
    // 0x111d8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x111D8Cu;
    {
        const bool branch_taken_0x111d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111d8c) {
            ctx->pc = 0x111D78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_111d78;
        }
    }
    ctx->pc = 0x111D94u;
    // 0x111d94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x111D94u;
    {
        const bool branch_taken_0x111d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111D94u;
            // 0x111d98: 0x8e848748  lw          $a0, -0x78B8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111d94) {
            ctx->pc = 0x111DA8u;
            goto label_111da8;
        }
    }
    ctx->pc = 0x111D9Cu;
label_111d9c:
    // 0x111d9c: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x111d9cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x111da0: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x111da0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x111da4: 0x8e848748  lw          $a0, -0x78B8($s4)
    ctx->pc = 0x111da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936392)));
label_111da8:
    // 0x111da8: 0xc043320  jal         func_10CC80
    ctx->pc = 0x111DA8u;
    SET_GPR_U32(ctx, 31, 0x111DB0u);
    ctx->pc = 0x111DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111DA8u;
            // 0x111dac: 0x26108ec0  addiu       $s0, $s0, -0x7140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111DB0u; }
        if (ctx->pc != 0x111DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111DB0u; }
        if (ctx->pc != 0x111DB0u) { return; }
    }
    ctx->pc = 0x111DB0u;
label_111db0:
    // 0x111db0: 0x26238f00  addiu       $v1, $s1, -0x7100
    ctx->pc = 0x111db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294938368));
    // 0x111db4: 0x26478240  addiu       $a3, $s2, -0x7DC0
    ctx->pc = 0x111db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294935104));
    // 0x111db8: 0xae438240  sw          $v1, -0x7DC0($s2)
    ctx->pc = 0x111db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294935104), GPR_U32(ctx, 3));
    // 0x111dbc: 0x26649980  addiu       $a0, $s3, -0x6680
    ctx->pc = 0x111dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941056));
    // 0x111dc0: 0x24630440  addiu       $v1, $v1, 0x440
    ctx->pc = 0x111dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
    // 0x111dc4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x111dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x111dc8: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x111dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x111dcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111dccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111dd0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x111dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x111dd4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x111dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x111dd8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x111dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x111ddc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x111ddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111de0: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x111de0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x111de4: 0xc044576  jal         func_1115D8
    ctx->pc = 0x111DE4u;
    SET_GPR_U32(ctx, 31, 0x111DECu);
    ctx->pc = 0x111DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111DE4u;
            // 0x111de8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (runtime->hasFunction(0x1115D8u)) {
        auto targetFn = runtime->lookupFunction(0x1115D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111DECu; }
        if (ctx->pc != 0x111DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001115D8_0x1115d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111DECu; }
        if (ctx->pc != 0x111DECu) { return; }
    }
    ctx->pc = 0x111DECu;
label_111dec:
    // 0x111dec: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x111DECu;
    {
        const bool branch_taken_0x111dec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x111DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111DECu;
            // 0x111df0: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111dec) {
            ctx->pc = 0x111E00u;
            goto label_111e00;
        }
    }
    ctx->pc = 0x111DF4u;
    // 0x111df4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x111df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x111df8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x111DF8u;
    {
        const bool branch_taken_0x111df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111DF8u;
            // 0x111dfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x111df8) {
            ctx->pc = 0x111E58u;
            goto label_111e58;
        }
    }
    ctx->pc = 0x111E00u;
label_111e00:
    // 0x111e00: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x111e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x111e04: 0x2041825  or          $v1, $s0, $a0
    ctx->pc = 0x111e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x111e08: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x111e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x111e0c: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x111e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x111e10: 0x24a899a8  addiu       $t0, $a1, -0x6658
    ctx->pc = 0x111e10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941096));
    // 0x111e14: 0x88640003  lwl         $a0, 0x3($v1)
    ctx->pc = 0x111e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x111e18: 0x98640000  lwr         $a0, 0x0($v1)
    ctx->pc = 0x111e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x111e1c: 0xa9040003  swl         $a0, 0x3($t0)
    ctx->pc = 0x111e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x111e20: 0xb9040000  swr         $a0, 0x0($t0)
    ctx->pc = 0x111e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x111e24: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x111e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x111e28: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x111e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x111e2c: 0xaba30013  swl         $v1, 0x13($sp)
    ctx->pc = 0x111e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x111e30: 0xbba30010  swr         $v1, 0x10($sp)
    ctx->pc = 0x111e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x111e34: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x111e34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x111e38: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x111e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x111e3c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x111e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111e40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x111e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111e44: 0xaca4873c  sw          $a0, -0x78C4($a1)
    ctx->pc = 0x111e44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294936380), GPR_U32(ctx, 4));
    // 0x111e48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x111e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e4c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x111e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x111e50: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x111e50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x111e54: 0xacc38740  sw          $v1, -0x78C0($a2)
    ctx->pc = 0x111e54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294936384), GPR_U32(ctx, 3));
label_111e58:
    // 0x111e58: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x111e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x111e5c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x111e5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x111e60: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x111e60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111e64: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x111e64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111e68: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x111e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111e6c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x111e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111e70: 0x3e00008  jr          $ra
    ctx->pc = 0x111E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111E70u;
            // 0x111e74: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x111E78u;
    ctx->pc = 0x111e78u;
}
