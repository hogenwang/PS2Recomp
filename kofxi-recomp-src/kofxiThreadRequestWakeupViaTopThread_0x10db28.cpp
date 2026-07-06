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

// Function: kofxiThreadRequestWakeupViaTopThread
// Address: 0x10db28 - 0x10dbc0
void kofxiThreadRequestWakeupViaTopThread_0x10db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiThreadRequestWakeupViaTopThread_0x10db28");
#endif

    switch (ctx->pc) {
        case 0x10db50u: goto label_10db50;
        case 0x10dba8u: goto label_10dba8;
        default: break;
    }

    ctx->pc = 0x10db28u;

    // 0x10db28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10db28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10db2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10db2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10db30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10db30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10db34: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x10db34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x10db38: 0xc  syscall     0
    ctx->pc = 0x10db38u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10db3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10db3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db40: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DB40u;
    {
        const bool branch_taken_0x10db40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x10DB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB40u;
        // 0x10db44: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db40) {
            ctx->pc = 0x10DB58u;
            goto label_10db58;
        }
    }
    ctx->pc = 0x10DB48u;
    // 0x10db48: 0xc0432e8  jal         func_10CBA0
    ctx->pc = 0x10DB48u;
    SET_GPR_U32(ctx, 31, 0x10DB50u);
    ctx->pc = 0x10CBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CBA0u, 0x10DB48u, 0x10DB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DB50u;
label_10db50:
    // 0x10db50: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x10DB50u;
    {
        const bool branch_taken_0x10db50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB50u;
        // 0x10db54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db50) {
            ctx->pc = 0x10DBB0u;
            goto label_10dbb0;
        }
    }
    ctx->pc = 0x10DB58u;
label_10db58:
    // 0x10db58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DB58u;
    {
        const bool branch_taken_0x10db58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB58u;
        // 0x10db5c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db58) {
            ctx->pc = 0x10DB6Cu;
            goto label_10db6c;
        }
    }
    ctx->pc = 0x10DB60u;
    // 0x10db60: 0x8c438698  lw          $v1, -0x7968($v0)
    ctx->pc = 0x10db60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936216)));
    // 0x10db64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10DB64u;
    {
        const bool branch_taken_0x10db64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB64u;
        // 0x10db68: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db64) {
            ctx->pc = 0x10DB74u;
            goto label_10db74;
        }
    }
    ctx->pc = 0x10DB6Cu;
label_10db6c:
    // 0x10db6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x10DB6Cu;
    {
        const bool branch_taken_0x10db6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB6Cu;
        // 0x10db70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db6c) {
            ctx->pc = 0x10DBACu;
            goto label_10dbac;
        }
    }
    ctx->pc = 0x10DB74u;
label_10db74:
    // 0x10db74: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x10db74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x10db78: 0x24635e88  addiu       $v1, $v1, 0x5E88
    ctx->pc = 0x10db78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24200));
    // 0x10db7c: 0x8ca45e80  lw          $a0, 0x5E80($a1)
    ctx->pc = 0x10db7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24192)));
    // 0x10db80: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x10db80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10db84: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x10db84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x10db88: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x10db88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x10db8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10db90: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x10db90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x10db94: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x10db94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x10db98: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x10db98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db9c: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x10db9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x10dba0: 0xc043324  jal         func_10CC90
    ctx->pc = 0x10DBA0u;
    SET_GPR_U32(ctx, 31, 0x10DBA8u);
    ctx->pc = 0x10DBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DBA0u;
    // 0x10dba4: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC90u, 0x10DBA0u, 0x10DBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DBA8u;
label_10dba8:
    // 0x10dba8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10dba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10dbac:
    // 0x10dbac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10dbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10dbb0:
    // 0x10dbb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10dbb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x10DBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBB4u;
        // 0x10dbb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DBBCu;
    // 0x10dbbc: 0x0  nop
    ctx->pc = 0x10dbbcu;
    // NOP
    if (ctx->pc == 0x10dbbcu) { ctx->pc = 0x10dbc0u; }
}
