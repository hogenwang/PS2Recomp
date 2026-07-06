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

// Function: sub_002F56C0
// Address: 0x2f56c0 - 0x2f5728
void sub_002F56C0_0x2f56c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F56C0_0x2f56c0");
#endif

    switch (ctx->pc) {
        case 0x2f56e0u: goto label_2f56e0;
        case 0x2f56f0u: goto label_2f56f0;
        case 0x2f5700u: goto label_2f5700;
        default: break;
    }

    ctx->pc = 0x2f56c0u;

    // 0x2f56c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f56c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f56c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f56c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f56c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f56c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f56cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f56ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f56d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f56d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f56d4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F56D4u;
    {
        const bool branch_taken_0x2f56d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F56D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56D4u;
        // 0x2f56d8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f56d4) {
            ctx->pc = 0x2F5710u;
            goto label_2f5710;
        }
    }
    ctx->pc = 0x2F56DCu;
    // 0x2f56dc: 0x0  nop
    ctx->pc = 0x2f56dcu;
    // NOP
label_2f56e0:
    // 0x2f56e0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x2f56e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f56e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f56e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f56e8: 0xc0bd55c  jal         func_2F5570
    ctx->pc = 0x2F56E8u;
    SET_GPR_U32(ctx, 31, 0x2F56F0u);
    ctx->pc = 0x2F56ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F56E8u;
    // 0x2f56ec: 0x8e06000c  lw          $a2, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5570u, 0x2F56E8u, 0x2F56F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F56F0u;
label_2f56f0:
    // 0x2f56f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F56F0u;
    {
        const bool branch_taken_0x2f56f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f56f0) {
            ctx->pc = 0x2F56F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F56F0u;
            // 0x2f56f4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F5708u;
            goto label_2f5708;
        }
    }
    ctx->pc = 0x2F56F8u;
    // 0x2f56f8: 0xc0bd594  jal         func_2F5650
    ctx->pc = 0x2F56F8u;
    SET_GPR_U32(ctx, 31, 0x2F5700u);
    ctx->pc = 0x2F56FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F56F8u;
    // 0x2f56fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F5650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F5650u, 0x2F56F8u, 0x2F5700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5700u;
label_2f5700:
    // 0x2f5700: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F5700u;
    {
        const bool branch_taken_0x2f5700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5700u;
        // 0x2f5704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5700) {
            ctx->pc = 0x2F5714u;
            goto label_2f5714;
        }
    }
    ctx->pc = 0x2F5708u;
label_2f5708:
    // 0x2f5708: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2F5708u;
    {
        const bool branch_taken_0x2f5708 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5708u;
        // 0x2f570c: 0x51880a  movz        $s1, $v0, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5708) {
            ctx->pc = 0x2F56E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f56e0;
        }
    }
    ctx->pc = 0x2F5710u;
label_2f5710:
    // 0x2f5710: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f5710u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f5714:
    // 0x2f5714: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f5714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5718: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f5718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f571c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f571cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5720: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F5724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5720u;
        // 0x2f5724: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F5728u;
}
