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

// Function: kofxiThreadRequestRotateQueueViaTopThread
// Address: 0x10dbc0 - 0x10dc40
void kofxiThreadRequestRotateQueueViaTopThread_0x10dbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiThreadRequestRotateQueueViaTopThread_0x10dbc0");
#endif

    switch (ctx->pc) {
        case 0x10dc28u: goto label_10dc28;
        default: break;
    }

    ctx->pc = 0x10dbc0u;

    // 0x10dbc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10dbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10dbc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10dbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10dbc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10dbc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dbcc: 0x2e020080  sltiu       $v0, $s0, 0x80
    ctx->pc = 0x10dbccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x10dbd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DBD0u;
    {
        const bool branch_taken_0x10dbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBD0u;
        // 0x10dbd4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbd0) {
            ctx->pc = 0x10DBE8u;
            goto label_10dbe8;
        }
    }
    ctx->pc = 0x10DBD8u;
    // 0x10dbd8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x10dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x10dbdc: 0x8c438698  lw          $v1, -0x7968($v0)
    ctx->pc = 0x10dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936216)));
    // 0x10dbe0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10DBE0u;
    {
        const bool branch_taken_0x10dbe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBE0u;
        // 0x10dbe4: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbe0) {
            ctx->pc = 0x10DBF0u;
            goto label_10dbf0;
        }
    }
    ctx->pc = 0x10DBE8u;
label_10dbe8:
    // 0x10dbe8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x10DBE8u;
    {
        const bool branch_taken_0x10dbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DBE8u;
        // 0x10dbec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dbe8) {
            ctx->pc = 0x10DC2Cu;
            goto label_10dc2c;
        }
    }
    ctx->pc = 0x10DBF0u;
label_10dbf0:
    // 0x10dbf0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x10dbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x10dbf4: 0x24635e88  addiu       $v1, $v1, 0x5E88
    ctx->pc = 0x10dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24200));
    // 0x10dbf8: 0x8ca45e80  lw          $a0, 0x5E80($a1)
    ctx->pc = 0x10dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24192)));
    // 0x10dbfc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x10dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10dc00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x10dc00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10dc04: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x10dc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x10dc08: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x10dc08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x10dc0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10dc10: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x10dc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x10dc14: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x10dc14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x10dc18: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x10dc18u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x10dc1c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x10dc1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc20: 0xc043324  jal         func_10CC90
    ctx->pc = 0x10DC20u;
    SET_GPR_U32(ctx, 31, 0x10DC28u);
    ctx->pc = 0x10DC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC20u;
    // 0x10dc24: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC90u, 0x10DC20u, 0x10DC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC28u;
label_10dc28:
    // 0x10dc28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10dc28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10dc2c:
    // 0x10dc2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10dc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10dc30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10dc30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10dc34: 0x3e00008  jr          $ra
    ctx->pc = 0x10DC34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC34u;
        // 0x10dc38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DC34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DC3Cu;
    // 0x10dc3c: 0x0  nop
    ctx->pc = 0x10dc3cu;
    // NOP
    if (ctx->pc == 0x10dc3cu) { ctx->pc = 0x10dc40u; }
}
