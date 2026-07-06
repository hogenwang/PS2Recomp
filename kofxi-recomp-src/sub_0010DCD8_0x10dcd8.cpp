#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010DCD8
// Address: 0x10dcd8 - 0x10dda0
void sub_0010DCD8_0x10dcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DCD8_0x10dcd8");
#endif

    switch (ctx->pc) {
        case 0x10dd28u: goto label_10dd28;
        case 0x10dd48u: goto label_10dd48;
        case 0x10dd5cu: goto label_10dd5c;
        case 0x10dd70u: goto label_10dd70;
        case 0x10dd80u: goto label_10dd80;
        case 0x10dd88u: goto label_10dd88;
        default: break;
    }

    ctx->pc = 0x10dcd8u;

    // 0x10dcd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10dcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10dcdc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10dcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10dce0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10dce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10dce4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10dce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dce8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10dce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10dcec: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x10dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x10dcf0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10dcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x10dcf4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10dcf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10dcf8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DCF8u;
    {
        const bool branch_taken_0x10dcf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10dcf8) {
            ctx->pc = 0x10DCFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10DCF8u;
            // 0x10dcfc: 0x3c02003e  lui         $v0, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10DD0Cu;
            goto label_10dd0c;
        }
    }
    ctx->pc = 0x10DD00u;
    // 0x10dd00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x10dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10dd04: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x10DD04u;
    {
        const bool branch_taken_0x10dd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD04u;
            // 0x10dd08: 0x34428008  ori         $v0, $v0, 0x8008 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd04) {
            ctx->pc = 0x10DD8Cu;
            goto label_10dd8c;
        }
    }
    ctx->pc = 0x10DD0Cu;
label_10dd0c:
    // 0x10dd0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10dd10: 0x2442a520  addiu       $v0, $v0, -0x5AE0
    ctx->pc = 0x10dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944032));
    // 0x10dd14: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x10dd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x10dd18: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x10dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x10dd1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10dd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd20: 0xc043318  jal         func_10CC60
    ctx->pc = 0x10DD20u;
    SET_GPR_U32(ctx, 31, 0x10DD28u);
    ctx->pc = 0x10DD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD20u;
            // 0x10dd24: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD28u; }
        if (ctx->pc != 0x10DD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD28u; }
        if (ctx->pc != 0x10DD28u) { return; }
    }
    ctx->pc = 0x10DD28u;
label_10dd28:
    // 0x10dd28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10dd28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd2c: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DD2Cu;
    {
        const bool branch_taken_0x10dd2c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x10DD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD2Cu;
            // 0x10dd30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd2c) {
            ctx->pc = 0x10DD40u;
            goto label_10dd40;
        }
    }
    ctx->pc = 0x10DD34u;
    // 0x10dd34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x10dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x10dd38: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10DD38u;
    {
        const bool branch_taken_0x10dd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD38u;
            // 0x10dd3c: 0x34428003  ori         $v0, $v0, 0x8003 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd38) {
            ctx->pc = 0x10DD8Cu;
            goto label_10dd8c;
        }
    }
    ctx->pc = 0x10DD40u;
label_10dd40:
    // 0x10dd40: 0xc046278  jal         func_1189E0
    ctx->pc = 0x10DD40u;
    SET_GPR_U32(ctx, 31, 0x10DD48u);
    ctx->pc = 0x10DD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD40u;
            // 0x10dd44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1189E0u;
    if (runtime->hasFunction(0x1189E0u)) {
        auto targetFn = runtime->lookupFunction(0x1189E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD48u; }
        if (ctx->pc != 0x10DD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001189E0_0x1189e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD48u; }
        if (ctx->pc != 0x10DD48u) { return; }
    }
    ctx->pc = 0x10DD48u;
label_10dd48:
    // 0x10dd48: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x10dd48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x10dd4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10dd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd50: 0x24a5df18  addiu       $a1, $a1, -0x20E8
    ctx->pc = 0x10dd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958872));
    // 0x10dd54: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x10DD54u;
    SET_GPR_U32(ctx, 31, 0x10DD5Cu);
    ctx->pc = 0x10DD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD54u;
            // 0x10dd58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (runtime->hasFunction(0x118B90u)) {
        auto targetFn = runtime->lookupFunction(0x118B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD5Cu; }
        if (ctx->pc != 0x10DD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118B90_0x118b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD5Cu; }
        if (ctx->pc != 0x10DD5Cu) { return; }
    }
    ctx->pc = 0x10DD5Cu;
label_10dd5c:
    // 0x10dd5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10dd5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dd60: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DD60u;
    {
        const bool branch_taken_0x10dd60 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x10dd60) {
            ctx->pc = 0x10DD78u;
            goto label_10dd78;
        }
    }
    ctx->pc = 0x10DD68u;
    // 0x10dd68: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x10DD68u;
    SET_GPR_U32(ctx, 31, 0x10DD70u);
    ctx->pc = 0x10DD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD68u;
            // 0x10dd6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD70u; }
        if (ctx->pc != 0x10DD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD70u; }
        if (ctx->pc != 0x10DD70u) { return; }
    }
    ctx->pc = 0x10DD70u;
label_10dd70:
    // 0x10dd70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10DD70u;
    {
        const bool branch_taken_0x10dd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD70u;
            // 0x10dd74: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dd70) {
            ctx->pc = 0x10DD8Cu;
            goto label_10dd8c;
        }
    }
    ctx->pc = 0x10DD78u;
label_10dd78:
    // 0x10dd78: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x10DD78u;
    SET_GPR_U32(ctx, 31, 0x10DD80u);
    ctx->pc = 0x10DD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD78u;
            // 0x10dd7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD80u; }
        if (ctx->pc != 0x10DD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD80u; }
        if (ctx->pc != 0x10DD80u) { return; }
    }
    ctx->pc = 0x10DD80u;
label_10dd80:
    // 0x10dd80: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x10DD80u;
    SET_GPR_U32(ctx, 31, 0x10DD88u);
    ctx->pc = 0x10DD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD80u;
            // 0x10dd84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD88u; }
        if (ctx->pc != 0x10DD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DD88u; }
        if (ctx->pc != 0x10DD88u) { return; }
    }
    ctx->pc = 0x10DD88u;
label_10dd88:
    // 0x10dd88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10dd88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10dd8c:
    // 0x10dd8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10dd8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10dd90: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10dd90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10dd94: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10dd94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10dd98: 0x3e00008  jr          $ra
    ctx->pc = 0x10DD98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DD98u;
            // 0x10dd9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DDA0u;
    ctx->pc = 0x10dda0u;
}
