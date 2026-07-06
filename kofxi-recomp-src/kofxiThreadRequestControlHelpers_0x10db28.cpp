#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: kofxiThreadRequestControlHelpers
// Address: 0x10db28 - 0x10dcd8
void kofxiThreadRequestControlHelpers_0x10db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiThreadRequestControlHelpers_0x10db28");
#endif

    switch (ctx->pc) {
        case 0x10db50u: goto label_10db50;
        case 0x10dba8u: goto label_10dba8;
        case 0x10dbc0u: goto label_10dbc0;
        case 0x10dc28u: goto label_10dc28;
        case 0x10dc40u: goto label_10dc40;
        case 0x10dc68u: goto label_10dc68;
        case 0x10dcc4u: goto label_10dcc4;
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
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DB40u;
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
    if (runtime->hasFunction(0x10CBA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DB50u; }
        if (ctx->pc != 0x10DB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWakeupCancelWrappers_0x10cba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DB50u; }
        if (ctx->pc != 0x10DB50u) { return; }
    }
    ctx->pc = 0x10DB50u;
label_10db50:
    // 0x10db50: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x10DB50u;
    {
        const bool branch_taken_0x10db50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DB54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DB50u;
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
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DB58u;
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
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DB64u;
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
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DB6Cu;
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
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DBA0u;
            // 0x10dba4: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (runtime->hasFunction(0x10CC90u)) {
        auto targetFn = runtime->lookupFunction(0x10CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DBA8u; }
        if (ctx->pc != 0x10DBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DBA8u; }
        if (ctx->pc != 0x10DBA8u) { return; }
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
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DBB4u;
            // 0x10dbb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DBBCu;
    // 0x10dbbc: 0x0  nop
    ctx->pc = 0x10dbbcu;
    // NOP
label_10dbc0:
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
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DBD0u;
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
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DBE0u;
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
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DBE8u;
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
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC20u;
            // 0x10dc24: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (runtime->hasFunction(0x10CC90u)) {
        auto targetFn = runtime->lookupFunction(0x10CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC28u; }
        if (ctx->pc != 0x10DC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC28u; }
        if (ctx->pc != 0x10DC28u) { return; }
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
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC34u;
            // 0x10dc38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DC3Cu;
    // 0x10dc3c: 0x0  nop
    ctx->pc = 0x10dc3cu;
    // NOP
label_10dc40:
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
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC58u;
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
    if (runtime->hasFunction(0x10CBE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC68u; }
        if (ctx->pc != 0x10DC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CBE0_0x10cbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DC68u; }
        if (ctx->pc != 0x10DC68u) { return; }
    }
    ctx->pc = 0x10DC68u;
label_10dc68:
    // 0x10dc68: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10DC68u;
    {
        const bool branch_taken_0x10dc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC68u;
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
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC70u;
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
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC7Cu;
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
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DC84u;
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
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10DCBCu;
            // 0x10dcc0: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC90u;
    if (runtime->hasFunction(0x10CC90u)) {
        auto targetFn = runtime->lookupFunction(0x10CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DCC4u; }
        if (ctx->pc != 0x10DCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallSignalSemaIntrWrapper_0x10cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10DCC4u; }
        if (ctx->pc != 0x10DCC4u) { return; }
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
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10DCD0u;
            // 0x10dcd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10DCD8u;
    ctx->pc = 0x10dcd8u;
}
