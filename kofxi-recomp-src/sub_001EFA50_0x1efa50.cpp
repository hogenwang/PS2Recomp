#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EFA50
// Address: 0x1efa50 - 0x1efaf0
void sub_001EFA50_0x1efa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFA50_0x1efa50");
#endif

    switch (ctx->pc) {
        case 0x1efa94u: goto label_1efa94;
        case 0x1efab0u: goto label_1efab0;
        case 0x1efad0u: goto label_1efad0;
        default: break;
    }

    ctx->pc = 0x1efa50u;

    // 0x1efa50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1efa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1efa54: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1efa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1efa58: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1efa58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa5c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1efa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1efa60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1efa60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa64: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1efa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1efa68: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x1efa68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x1efa6c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1efa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1efa70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1efa70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa74: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1efa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1efa78: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x1efa78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1efa7c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1efa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1efa80: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x1efa80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1efa84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1efa84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa88: 0x8e060160  lw          $a2, 0x160($s0)
    ctx->pc = 0x1efa88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x1efa8c: 0xc075982  jal         func_1D6608
    ctx->pc = 0x1EFA8Cu;
    SET_GPR_U32(ctx, 31, 0x1EFA94u);
    ctx->pc = 0x1EFA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFA8Cu;
    // 0x1efa90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6608u, 0x1EFA8Cu, 0x1EFA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFA94u;
label_1efa94:
    // 0x1efa94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1efa94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa98: 0x8e060164  lw          $a2, 0x164($s0)
    ctx->pc = 0x1efa98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x1efa9c: 0x264500e0  addiu       $a1, $s2, 0xE0
    ctx->pc = 0x1efa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x1efaa0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1efaa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efaa4: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x1efaa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1efaa8: 0xc075982  jal         func_1D6608
    ctx->pc = 0x1EFAA8u;
    SET_GPR_U32(ctx, 31, 0x1EFAB0u);
    ctx->pc = 0x1EFAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFAA8u;
    // 0x1efaac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6608u, 0x1EFAA8u, 0x1EFAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFAB0u;
label_1efab0:
    // 0x1efab0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1efab0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efab4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1efab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1efab8: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFAB8u;
    {
        const bool branch_taken_0x1efab8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAB8u;
        // 0x1efabc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efab8) {
            ctx->pc = 0x1EFAC8u;
            goto label_1efac8;
        }
    }
    ctx->pc = 0x1EFAC0u;
    // 0x1efac0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFAC0u;
    {
        const bool branch_taken_0x1efac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAC0u;
        // 0x1efac4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efac0) {
            ctx->pc = 0x1EFAD4u;
            goto label_1efad4;
        }
    }
    ctx->pc = 0x1EFAC8u;
label_1efac8:
    // 0x1efac8: 0xc07b5c0  jal         func_1ED700
    ctx->pc = 0x1EFAC8u;
    SET_GPR_U32(ctx, 31, 0x1EFAD0u);
    ctx->pc = 0x1EFACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFAC8u;
    // 0x1efacc: 0x34a50d0d  ori         $a1, $a1, 0xD0D (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3341);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED700u, 0x1EFAC8u, 0x1EFAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFAD0u;
label_1efad0:
    // 0x1efad0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1efad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1efad4:
    // 0x1efad4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1efad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1efad8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1efad8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1efadc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1efadcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1efae0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1efae0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1efae4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1efae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1efae8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAE8u;
        // 0x1efaec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFAF0u;
}
