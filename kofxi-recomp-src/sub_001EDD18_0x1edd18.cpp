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

// Function: sub_001EDD18
// Address: 0x1edd18 - 0x1eddf0
void sub_001EDD18_0x1edd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDD18_0x1edd18");
#endif

    switch (ctx->pc) {
        case 0x1edd40u: goto label_1edd40;
        case 0x1edd70u: goto label_1edd70;
        case 0x1edd9cu: goto label_1edd9c;
        case 0x1eddc0u: goto label_1eddc0;
        case 0x1eddd4u: goto label_1eddd4;
        default: break;
    }

    ctx->pc = 0x1edd18u;

    // 0x1edd18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1edd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1edd1c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1edd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1edd20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1edd20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd24: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1edd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1edd28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1edd28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd2c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1edd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1edd30: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1edd30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1edd34: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1EDD34u;
    {
        const bool branch_taken_0x1edd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD34u;
        // 0x1edd38: 0x8e120028  lw          $s2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd34) {
            ctx->pc = 0x1EDD7Cu;
            goto label_1edd7c;
        }
    }
    ctx->pc = 0x1EDD3Cu;
    // 0x1edd3c: 0x0  nop
    ctx->pc = 0x1edd3cu;
    // NOP
label_1edd40:
    // 0x1edd40: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x1edd40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1edd44: 0xde060990  ld          $a2, 0x990($s0)
    ctx->pc = 0x1edd44u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 2448)));
    // 0x1edd48: 0xde020998  ld          $v0, 0x998($s0)
    ctx->pc = 0x1edd48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 2456)));
    // 0x1edd4c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1edd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd50: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1edd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edd54: 0xe6302d  daddu       $a2, $a3, $a2
    ctx->pc = 0x1edd54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 6));
    // 0x1edd58: 0xfe060990  sd          $a2, 0x990($s0)
    ctx->pc = 0x1edd58u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2448), GPR_U64(ctx, 6));
    // 0x1edd5c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1edd5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1edd60: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EDD60u;
    {
        const bool branch_taken_0x1edd60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD60u;
        // 0x1edd64: 0xfe020998  sd          $v0, 0x998($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 2456), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd60) {
            ctx->pc = 0x1EDDCCu;
            goto label_1eddcc;
        }
    }
    ctx->pc = 0x1EDD68u;
    // 0x1edd68: 0xc07b7ac  jal         func_1EDEB0
    ctx->pc = 0x1EDD68u;
    SET_GPR_U32(ctx, 31, 0x1EDD70u);
    ctx->pc = 0x1EDEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDEB0u, 0x1EDD68u, 0x1EDD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDD70u;
label_1edd70:
    // 0x1edd70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1edd70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd74: 0x16200015  bnez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EDD74u;
    {
        const bool branch_taken_0x1edd74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edd74) {
            ctx->pc = 0x1EDDCCu;
            goto label_1eddcc;
        }
    }
    ctx->pc = 0x1EDD7Cu;
label_1edd7c:
    // 0x1edd7c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1edd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1edd80: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EDD80u;
    {
        const bool branch_taken_0x1edd80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDD80u;
        // 0x1edd84: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edd80) {
            ctx->pc = 0x1EDDCCu;
            goto label_1eddcc;
        }
    }
    ctx->pc = 0x1EDD88u;
    // 0x1edd88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1edd88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd8c: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x1edd8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1edd90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1edd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd94: 0xc07b77c  jal         func_1EDDF0
    ctx->pc = 0x1EDD94u;
    SET_GPR_U32(ctx, 31, 0x1EDD9Cu);
    ctx->pc = 0x1EDD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDD94u;
    // 0x1edd98: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDF0u, 0x1EDD94u, 0x1EDD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDD9Cu;
label_1edd9c:
    // 0x1edd9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1edd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edda0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1edda0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edda4: 0x27a7000c  addiu       $a3, $sp, 0xC
    ctx->pc = 0x1edda4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1edda8: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDDA8u;
    {
        const bool branch_taken_0x1edda8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDA8u;
        // 0x1eddac: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edda8) {
            ctx->pc = 0x1EDDCCu;
            goto label_1eddcc;
        }
    }
    ctx->pc = 0x1EDDB0u;
    // 0x1eddb0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1eddb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eddb4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1eddb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1eddb8: 0xc07b7c6  jal         func_1EDF18
    ctx->pc = 0x1EDDB8u;
    SET_GPR_U32(ctx, 31, 0x1EDDC0u);
    ctx->pc = 0x1EDDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDDB8u;
    // 0x1eddbc: 0x8fa90008  lw          $t1, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDF18u, 0x1EDDB8u, 0x1EDDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDDC0u;
label_1eddc0:
    // 0x1eddc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1eddc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eddc4: 0x1220ffde  beqz        $s1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x1EDDC4u;
    {
        const bool branch_taken_0x1eddc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDC4u;
        // 0x1eddc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eddc4) {
            ctx->pc = 0x1EDD40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1edd40;
        }
    }
    ctx->pc = 0x1EDDCCu;
label_1eddcc:
    // 0x1eddcc: 0xc07bdba  jal         func_1EF6E8
    ctx->pc = 0x1EDDCCu;
    SET_GPR_U32(ctx, 31, 0x1EDDD4u);
    ctx->pc = 0x1EDDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDDCCu;
    // 0x1eddd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF6E8u, 0x1EDDCCu, 0x1EDDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDDD4u;
label_1eddd4:
    // 0x1eddd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1eddd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eddd8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1eddd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1edddc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1edddcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1edde0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1edde0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1edde4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1edde4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1edde8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDDE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDDE8u;
        // 0x1eddec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDDE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDDF0u;
}
