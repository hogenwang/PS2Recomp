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

// Function: sub_001B9F98
// Address: 0x1b9f98 - 0x1ba058
void sub_001B9F98_0x1b9f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9F98_0x1b9f98");
#endif

    switch (ctx->pc) {
        case 0x1b9ffcu: goto label_1b9ffc;
        case 0x1ba010u: goto label_1ba010;
        case 0x1ba034u: goto label_1ba034;
        case 0x1ba03cu: goto label_1ba03c;
        case 0x1ba044u: goto label_1ba044;
        default: break;
    }

    ctx->pc = 0x1b9f98u;

    // 0x1b9f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9f9c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9F9Cu;
    {
        const bool branch_taken_0x1b9f9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9F9Cu;
        // 0x1b9fa0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f9c) {
            ctx->pc = 0x1B9FB8u;
            goto label_1b9fb8;
        }
    }
    ctx->pc = 0x1B9FA4u;
    // 0x1b9fa4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1b9fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1b9fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9fac: 0x248482c8  addiu       $a0, $a0, -0x7D38
    ctx->pc = 0x1b9facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935240));
    // 0x1b9fb0: 0x806ba0a  j           func_1AE828
    ctx->pc = 0x1B9FB0u;
    ctx->pc = 0x1B9FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9FB0u;
    // 0x1b9fb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    sub_001AE828_0x1ae828(rdram, ctx, runtime); return;
    ctx->pc = 0x1B9FB8u;
label_1b9fb8:
    // 0x1b9fb8: 0x28a2fff1  slti        $v0, $a1, -0xF
    ctx->pc = 0x1b9fb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294967281) ? 1 : 0);
    // 0x1b9fbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B9FBCu;
    {
        const bool branch_taken_0x1b9fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FBCu;
        // 0x1b9fc0: 0x28a20010  slti        $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fbc) {
            ctx->pc = 0x1B9FD0u;
            goto label_1b9fd0;
        }
    }
    ctx->pc = 0x1B9FC4u;
    // 0x1b9fc4: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x1b9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x1b9fc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9FC8u;
    {
        const bool branch_taken_0x1b9fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FC8u;
        // 0x1b9fcc: 0xa4820046  sh          $v0, 0x46($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fc8) {
            ctx->pc = 0x1B9FE0u;
            goto label_1b9fe0;
        }
    }
    ctx->pc = 0x1B9FD0u;
label_1b9fd0:
    // 0x1b9fd0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B9FD0u;
    {
        const bool branch_taken_0x1b9fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9fd0) {
            ctx->pc = 0x1B9FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9FD0u;
            // 0x1b9fd4: 0xa4850046  sh          $a1, 0x46($a0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9FE0u;
            goto label_1b9fe0;
        }
    }
    ctx->pc = 0x1B9FD8u;
    // 0x1b9fd8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1b9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1b9fdc: 0xa4820046  sh          $v0, 0x46($a0)
    ctx->pc = 0x1b9fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 70), (uint16_t)GPR_U32(ctx, 2));
label_1b9fe0:
    // 0x1b9fe0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b9fe4: 0x8c432358  lw          $v1, 0x2358($v0)
    ctx->pc = 0x1b9fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9048)));
    // 0x1b9fe8: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B9FE8u;
    {
        const bool branch_taken_0x1b9fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9fe8) {
            ctx->pc = 0x1B9FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9FE8u;
            // 0x1b9fec: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BA008u;
            goto label_1ba008;
        }
    }
    ctx->pc = 0x1B9FF0u;
    // 0x1b9ff0: 0x84850046  lh          $a1, 0x46($a0)
    ctx->pc = 0x1b9ff0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
    // 0x1b9ff4: 0xc06d336  jal         func_1B4CD8
    ctx->pc = 0x1B9FF4u;
    SET_GPR_U32(ctx, 31, 0x1B9FFCu);
    ctx->pc = 0x1B9FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9FF4u;
    // 0x1b9ff8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4CD8u, 0x1B9FF4u, 0x1B9FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9FFCu;
label_1b9ffc:
    // 0x1b9ffc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9FFCu;
    {
        const bool branch_taken_0x1b9ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9FFCu;
        // 0x1ba000: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ffc) {
            ctx->pc = 0x1BA014u;
            goto label_1ba014;
        }
    }
    ctx->pc = 0x1BA004u;
    // 0x1ba004: 0x0  nop
    ctx->pc = 0x1ba004u;
    // NOP
label_1ba008:
    // 0x1ba008: 0xc06d336  jal         func_1B4CD8
    ctx->pc = 0x1BA008u;
    SET_GPR_U32(ctx, 31, 0x1BA010u);
    ctx->pc = 0x1BA00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA008u;
    // 0x1ba00c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4CD8u, 0x1BA008u, 0x1BA010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA010u;
label_1ba010:
    // 0x1ba010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ba014:
    // 0x1ba014: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA014u;
        // 0x1ba018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA01Cu;
    // 0x1ba01c: 0x0  nop
    ctx->pc = 0x1ba01cu;
    // NOP
    // 0x1ba020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ba024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ba028: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ba028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ba02c: 0xc06b49a  jal         func_1AD268
    ctx->pc = 0x1BA02Cu;
    SET_GPR_U32(ctx, 31, 0x1BA034u);
    ctx->pc = 0x1BA030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA02Cu;
    // 0x1ba030: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD268u, 0x1BA02Cu, 0x1BA034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA034u;
label_1ba034:
    // 0x1ba034: 0xc06e816  jal         func_1BA058
    ctx->pc = 0x1BA034u;
    SET_GPR_U32(ctx, 31, 0x1BA03Cu);
    ctx->pc = 0x1BA038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA034u;
    // 0x1ba038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BA058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA058u, 0x1BA034u, 0x1BA03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA03Cu;
label_1ba03c:
    // 0x1ba03c: 0xc06b49c  jal         func_1AD270
    ctx->pc = 0x1BA03Cu;
    SET_GPR_U32(ctx, 31, 0x1BA044u);
    ctx->pc = 0x1BA040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA03Cu;
    // 0x1ba040: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD270u, 0x1BA03Cu, 0x1BA044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA044u;
label_1ba044:
    // 0x1ba044: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ba044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ba048: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ba048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba04c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ba04cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba050: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA050u;
        // 0x1ba054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA058u;
}
