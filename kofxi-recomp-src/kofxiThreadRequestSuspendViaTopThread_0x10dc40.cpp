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

// Function: kofxiThreadRequestSuspendViaTopThread
// Address: 0x10dc40 - 0x10dcd8
void kofxiThreadRequestSuspendViaTopThread_0x10dc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiThreadRequestSuspendViaTopThread_0x10dc40");
#endif

    switch (ctx->pc) {
        case 0x10dc68u: goto label_10dc68;
        case 0x10dcc4u: goto label_10dcc4;
        default: break;
    }

    ctx->pc = 0x10dc40u;

    // 0x10dc40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10dc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10dc44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10dc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10dc48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10dc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10dc4c: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x10dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x10dc50: 0xc  syscall     0
    ctx->pc = 0x10dc50u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10dc54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10dc54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc58: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DC58u;
    {
        const bool branch_taken_0x10dc58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x10DC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC58u;
        // 0x10dc5c: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc58) {
            ctx->pc = 0x10DC70u;
            goto label_10dc70;
        }
    }
    ctx->pc = 0x10DC60u;
    // 0x10dc60: 0xc0432f8  jal         func_10CBE0
    ctx->pc = 0x10DC60u;
    SET_GPR_U32(ctx, 31, 0x10DC68u);
    ctx->pc = 0x10CBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CBE0u, 0x10DC60u, 0x10DC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC68u;
label_10dc68:
    // 0x10dc68: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10DC68u;
    {
        const bool branch_taken_0x10dc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC68u;
        // 0x10dc6c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc68) {
            ctx->pc = 0x10DCCCu;
            goto label_10dccc;
        }
    }
    ctx->pc = 0x10DC70u;
label_10dc70:
    // 0x10dc70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DC70u;
    {
        const bool branch_taken_0x10dc70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC70u;
        // 0x10dc74: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc70) {
            ctx->pc = 0x10DC84u;
            goto label_10dc84;
        }
    }
    ctx->pc = 0x10DC78u;
    // 0x10dc78: 0x8c438698  lw          $v1, -0x7968($v0)
    ctx->pc = 0x10dc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936216)));
    // 0x10dc7c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10DC7Cu;
    {
        const bool branch_taken_0x10dc7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC7Cu;
        // 0x10dc80: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc7c) {
            ctx->pc = 0x10DC8Cu;
            goto label_10dc8c;
        }
    }
    ctx->pc = 0x10DC84u;
label_10dc84:
    // 0x10dc84: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10DC84u;
    {
        const bool branch_taken_0x10dc84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC84u;
        // 0x10dc88: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc84) {
            ctx->pc = 0x10DCC8u;
            goto label_10dcc8;
        }
    }
    ctx->pc = 0x10DC8Cu;
label_10dc8c:
    // 0x10dc8c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x10dc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x10dc90: 0x24635e88  addiu       $v1, $v1, 0x5E88
    ctx->pc = 0x10dc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24200));
    // 0x10dc94: 0x8ca45e80  lw          $a0, 0x5E80($a1)
    ctx->pc = 0x10dc94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24192)));
    // 0x10dc98: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x10dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10dc9c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x10dc9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10dca0: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x10dca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x10dca4: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x10dca4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x10dca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10dcac: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x10dcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x10dcb0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x10dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x10dcb4: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x10dcb4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x10dcb8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x10dcb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dcbc: 0xc043324  jal         func_10CC90
    ctx->pc = 0x10DCBCu;
    SET_GPR_U32(ctx, 31, 0x10DCC4u);
    ctx->pc = 0x10DCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DCBCu;
    // 0x10dcc0: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC90u, 0x10DCBCu, 0x10DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DCC4u;
label_10dcc4:
    // 0x10dcc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10dcc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10dcc8:
    // 0x10dcc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10dcc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10dccc:
    // 0x10dccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10dcccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x10DCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DCD0u;
        // 0x10dcd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DCD8u;
}
