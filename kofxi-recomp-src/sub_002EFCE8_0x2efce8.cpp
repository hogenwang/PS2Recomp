#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EFCE8
// Address: 0x2efce8 - 0x2efd90
void sub_002EFCE8_0x2efce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EFCE8_0x2efce8");
#endif

    switch (ctx->pc) {
        case 0x2efd1cu: goto label_2efd1c;
        case 0x2efd2cu: goto label_2efd2c;
        case 0x2efd30u: goto label_2efd30;
        case 0x2efd44u: goto label_2efd44;
        case 0x2efd68u: goto label_2efd68;
        case 0x2efd80u: goto label_2efd80;
        default: break;
    }

    ctx->pc = 0x2efce8u;

    // 0x2efce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2efce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2efcec: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2efcecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2efcf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2efcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2efcf4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2efcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2efcf8: 0x25f0eca8  addiu       $s0, $t7, -0x1358
    ctx->pc = 0x2efcf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2efcfc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2efcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2efd00: 0x8e0e0058  lw          $t6, 0x58($s0)
    ctx->pc = 0x2efd00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2efd04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2efd04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2efd08: 0x11c00008  beqz        $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EFD08u;
    {
        const bool branch_taken_0x2efd08 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFD08u;
            // 0x2efd0c: 0x1c0302d  daddu       $a2, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efd08) {
            ctx->pc = 0x2EFD2Cu;
            goto label_2efd2c;
        }
    }
    ctx->pc = 0x2EFD10u;
    // 0x2efd10: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2efd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2efd14: 0xc089056  jal         func_224158
    ctx->pc = 0x2EFD14u;
    SET_GPR_U32(ctx, 31, 0x2EFD1Cu);
    ctx->pc = 0x2EFD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFD14u;
            // 0x2efd18: 0x8e050088  lw          $a1, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224158u;
    if (runtime->hasFunction(0x224158u)) {
        auto targetFn = runtime->lookupFunction(0x224158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD1Cu; }
        if (ctx->pc != 0x2EFD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224158_0x224158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD1Cu; }
        if (ctx->pc != 0x2EFD1Cu) { return; }
    }
    ctx->pc = 0x2EFD1Cu;
label_2efd1c:
    // 0x2efd1c: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EFD1Cu;
    {
        const bool branch_taken_0x2efd1c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2EFD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFD1Cu;
            // 0x2efd20: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efd1c) {
            ctx->pc = 0x2EFD44u;
            goto label_2efd44;
        }
    }
    ctx->pc = 0x2EFD24u;
    // 0x2efd24: 0xc0bb75c  jal         func_2EDD70
    ctx->pc = 0x2EFD24u;
    SET_GPR_U32(ctx, 31, 0x2EFD2Cu);
    ctx->pc = 0x2EDD70u;
    if (runtime->hasFunction(0x2EDD70u)) {
        auto targetFn = runtime->lookupFunction(0x2EDD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD2Cu; }
        if (ctx->pc != 0x2EFD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EDD70_0x2edd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD2Cu; }
        if (ctx->pc != 0x2EFD2Cu) { return; }
    }
    ctx->pc = 0x2EFD2Cu;
label_2efd2c:
    // 0x2efd2c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2efd2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2efd30:
    // 0x2efd30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2efd30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2efd34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2efd34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2efd38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2efd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2efd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EFD3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EFD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFD3Cu;
            // 0x2efd40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EFD44u;
label_2efd44:
    // 0x2efd44: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2EFD44u;
    {
        const bool branch_taken_0x2efd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2efd44) {
            ctx->pc = 0x2EFD48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFD44u;
            // 0x2efd48: 0x8e040088  lw          $a0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EFD70u;
            goto label_2efd70;
        }
    }
    ctx->pc = 0x2EFD4Cu;
    // 0x2efd4c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2efd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2efd50: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2efd50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2efd54: 0x24050b51  addiu       $a1, $zero, 0xB51
    ctx->pc = 0x2efd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2897));
    // 0x2efd58: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x2efd58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2efd5c: 0x24841508  addiu       $a0, $a0, 0x1508
    ctx->pc = 0x2efd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5384));
    // 0x2efd60: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x2EFD60u;
    SET_GPR_U32(ctx, 31, 0x2EFD68u);
    ctx->pc = 0x2EFD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFD60u;
            // 0x2efd64: 0x24e71520  addiu       $a3, $a3, 0x1520 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (runtime->hasFunction(0x225F58u)) {
        auto targetFn = runtime->lookupFunction(0x225F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD68u; }
        if (ctx->pc != 0x2EFD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225F58_0x225f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD68u; }
        if (ctx->pc != 0x2EFD68u) { return; }
    }
    ctx->pc = 0x2EFD68u;
label_2efd68:
    // 0x2efd68: 0x1000fff1  b           . + 4 + (-0xF << 2)
    ctx->pc = 0x2EFD68u;
    {
        const bool branch_taken_0x2efd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFD68u;
            // 0x2efd6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efd68) {
            ctx->pc = 0x2EFD30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2efd30;
        }
    }
    ctx->pc = 0x2EFD70u;
label_2efd70:
    // 0x2efd70: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x2efd70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2efd74: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2efd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2efd78: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x2EFD78u;
    SET_GPR_U32(ctx, 31, 0x2EFD80u);
    ctx->pc = 0x2EFD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFD78u;
            // 0x2efd7c: 0xc23023  subu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (runtime->hasFunction(0x1271D0u)) {
        auto targetFn = runtime->lookupFunction(0x1271D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD80u; }
        if (ctx->pc != 0x2EFD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001271D0_0x1271d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EFD80u; }
        if (ctx->pc != 0x2EFD80u) { return; }
    }
    ctx->pc = 0x2EFD80u;
label_2efd80:
    // 0x2efd80: 0x8e0f0058  lw          $t7, 0x58($s0)
    ctx->pc = 0x2efd80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2efd84: 0x1f17823  subu        $t7, $t7, $s1
    ctx->pc = 0x2efd84u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x2efd88: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x2EFD88u;
    {
        const bool branch_taken_0x2efd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EFD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EFD88u;
            // 0x2efd8c: 0xae0f0058  sw          $t7, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2efd88) {
            ctx->pc = 0x2EFD2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2efd2c;
        }
    }
    ctx->pc = 0x2EFD90u;
    ctx->pc = 0x2efd90u;
}
