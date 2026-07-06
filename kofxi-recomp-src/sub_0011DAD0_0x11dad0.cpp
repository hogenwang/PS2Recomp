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

// Function: sub_0011DAD0
// Address: 0x11dad0 - 0x11dc58
void sub_0011DAD0_0x11dad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DAD0_0x11dad0");
#endif

    switch (ctx->pc) {
        case 0x11db10u: goto label_11db10;
        case 0x11db5cu: goto label_11db5c;
        case 0x11db88u: goto label_11db88;
        case 0x11dbe8u: goto label_11dbe8;
        default: break;
    }

    ctx->pc = 0x11dad0u;

    // 0x11dad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11dad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11dad4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x11dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x11dad8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11dad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11dadc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x11dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11dae0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11dae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11dae4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11dae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dae8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11dae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11daec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11daecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11daf0: 0x2470dd40  addiu       $s0, $v1, -0x22C0
    ctx->pc = 0x11daf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958400));
    // 0x11daf4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11daf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11daf8: 0xac62dd40  sw          $v0, -0x22C0($v1)
    ctx->pc = 0x11daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958400), GPR_U32(ctx, 2));
    // 0x11dafc: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x11dafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x11db00: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x11db00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x11db04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11db04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db08: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x11db08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x11db0c: 0x0  nop
    ctx->pc = 0x11db0cu;
    // NOP
label_11db10:
    // 0x11db10: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x11db10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x11db14: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x11db14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x11db18: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x11db18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11db1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11db1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11db20: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x11db20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x11db24: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x11db24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x11db28: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11DB28u;
    {
        const bool branch_taken_0x11db28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11db28) {
            ctx->pc = 0x11DB10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11db10;
        }
    }
    ctx->pc = 0x11DB30u;
    // 0x11db30: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x11db30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x11db34: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x11db34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x11db38: 0x2484db00  addiu       $a0, $a0, -0x2500
    ctx->pc = 0x11db38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957824));
    // 0x11db3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11db3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11db40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11db40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db44: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x11db44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db48: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x11db48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11db4c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x11db4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db50: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x11db50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11db54: 0xc04434c  jal         func_110D30
    ctx->pc = 0x11DB54u;
    SET_GPR_U32(ctx, 31, 0x11DB5Cu);
    ctx->pc = 0x11DB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB54u;
    // 0x11db58: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110D30u, 0x11DB54u, 0x11DB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB5Cu;
label_11db5c:
    // 0x11db5c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DB5Cu;
    {
        const bool branch_taken_0x11db5c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11db5c) {
            ctx->pc = 0x11DB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DB5Cu;
            // 0x11db60: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DB6Cu;
            goto label_11db6c;
        }
    }
    ctx->pc = 0x11DB64u;
    // 0x11db64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11DB64u;
    {
        const bool branch_taken_0x11db64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB64u;
        // 0x11db68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db64) {
            ctx->pc = 0x11DB90u;
            goto label_11db90;
        }
    }
    ctx->pc = 0x11DB6Cu;
label_11db6c:
    // 0x11db6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11db70: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DB70u;
    {
        const bool branch_taken_0x11db70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11DB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DB70u;
        // 0x11db74: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db70) {
            ctx->pc = 0x11DB90u;
            goto label_11db90;
        }
    }
    ctx->pc = 0x11DB78u;
    // 0x11db78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11db78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11db7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db80: 0xc047528  jal         func_11D4A0
    ctx->pc = 0x11DB80u;
    SET_GPR_U32(ctx, 31, 0x11DB88u);
    ctx->pc = 0x11DB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DB80u;
    // 0x11db84: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4A0u, 0x11DB80u, 0x11DB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DB88u;
label_11db88:
    // 0x11db88: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x11db88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11db8c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x11db8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_11db90:
    // 0x11db90: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11db90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11db94: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11db94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11db98: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11db98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11db9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11db9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dba0: 0x3e00008  jr          $ra
    ctx->pc = 0x11DBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBA0u;
        // 0x11dba4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DBA8u;
    // 0x11dba8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11dba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dbac: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x11dbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11dbb0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x11dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11dbb4: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x11dbb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11dbb8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x11dbb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11dbbc: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11dbbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11dbc0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11dbc4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x11dbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x11dbc8: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11dbcc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11dbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11dbd0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11dbd4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x11dbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11dbd8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DBD8u;
    {
        const bool branch_taken_0x11dbd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBD8u;
        // 0x11dbdc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbd8) {
            ctx->pc = 0x11DBF8u;
            goto label_11dbf8;
        }
    }
    ctx->pc = 0x11DBE0u;
    // 0x11dbe0: 0xc047472  jal         func_11D1C8
    ctx->pc = 0x11DBE0u;
    SET_GPR_U32(ctx, 31, 0x11DBE8u);
    ctx->pc = 0x11DBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DBE0u;
    // 0x11dbe4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1C8u, 0x11DBE0u, 0x11DBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DBE8u;
label_11dbe8:
    // 0x11dbe8: 0x93a30072  lbu         $v1, 0x72($sp)
    ctx->pc = 0x11dbe8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 114)));
    // 0x11dbec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dbf0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11DBF0u;
    {
        const bool branch_taken_0x11dbf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11DBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBF0u;
        // 0x11dbf4: 0x93a20064  lbu         $v0, 0x64($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbf0) {
            ctx->pc = 0x11DC00u;
            goto label_11dc00;
        }
    }
    ctx->pc = 0x11DBF8u;
label_11dbf8:
    // 0x11dbf8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11DBF8u;
    {
        const bool branch_taken_0x11dbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DBF8u;
        // 0x11dbfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbf8) {
            ctx->pc = 0x11DC4Cu;
            goto label_11dc4c;
        }
    }
    ctx->pc = 0x11DC00u;
label_11dc00:
    // 0x11dc00: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x11dc00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11dc04: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11DC04u;
    {
        const bool branch_taken_0x11dc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC04u;
        // 0x11dc08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc04) {
            ctx->pc = 0x11DC4Cu;
            goto label_11dc4c;
        }
    }
    ctx->pc = 0x11DC0Cu;
    // 0x11dc0c: 0x93a20066  lbu         $v0, 0x66($sp)
    ctx->pc = 0x11dc0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 102)));
    // 0x11dc10: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x11dc10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11dc14: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11DC14u;
    {
        const bool branch_taken_0x11dc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC14u;
        // 0x11dc18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc14) {
            ctx->pc = 0x11DC4Cu;
            goto label_11dc4c;
        }
    }
    ctx->pc = 0x11DC1Cu;
    // 0x11dc1c: 0x93a5007c  lbu         $a1, 0x7C($sp)
    ctx->pc = 0x11dc1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x11dc20: 0x93a3007b  lbu         $v1, 0x7B($sp)
    ctx->pc = 0x11dc20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 123)));
    // 0x11dc24: 0x93a4007a  lbu         $a0, 0x7A($sp)
    ctx->pc = 0x11dc24u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 122)));
    // 0x11dc28: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x11dc28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x11dc2c: 0x93a20079  lbu         $v0, 0x79($sp)
    ctx->pc = 0x11dc2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 121)));
    // 0x11dc30: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x11dc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x11dc34: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x11dc34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x11dc38: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x11dc38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x11dc3c: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x11dc3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x11dc40: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x11dc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x11dc44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11dc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11dc48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11dc48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_11dc4c:
    // 0x11dc4c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x11dc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11dc50: 0x3e00008  jr          $ra
    ctx->pc = 0x11DC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DC50u;
        // 0x11dc54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DC58u;
}
