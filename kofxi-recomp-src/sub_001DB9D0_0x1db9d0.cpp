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

// Function: sub_001DB9D0
// Address: 0x1db9d0 - 0x1dbaa0
void sub_001DB9D0_0x1db9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB9D0_0x1db9d0");
#endif

    switch (ctx->pc) {
        case 0x1dba48u: goto label_1dba48;
        case 0x1dba50u: goto label_1dba50;
        case 0x1dba74u: goto label_1dba74;
        default: break;
    }

    ctx->pc = 0x1db9d0u;

    // 0x1db9d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1db9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1db9d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db9d8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1db9d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db9dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1db9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1db9e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1db9e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db9e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db9e8: 0x2485025c  addiu       $a1, $a0, 0x25C
    ctx->pc = 0x1db9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 604));
    // 0x1db9ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1db9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1db9f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1db9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1db9f4: 0x8c8203a0  lw          $v0, 0x3A0($a0)
    ctx->pc = 0x1db9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 928)));
    // 0x1db9f8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DB9F8u;
    {
        const bool branch_taken_0x1db9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9F8u;
        // 0x1db9fc: 0x8c860194  lw          $a2, 0x194($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db9f8) {
            ctx->pc = 0x1DBA34u;
            goto label_1dba34;
        }
    }
    ctx->pc = 0x1DBA00u;
    // 0x1dba00: 0x8c8303a4  lw          $v1, 0x3A4($a0)
    ctx->pc = 0x1dba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 932)));
    // 0x1dba04: 0xac8003a0  sw          $zero, 0x3A0($a0)
    ctx->pc = 0x1dba04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 928), GPR_U32(ctx, 0));
    // 0x1dba08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dba08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1dba0c: 0xac8303a4  sw          $v1, 0x3A4($a0)
    ctx->pc = 0x1dba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 932), GPR_U32(ctx, 3));
    // 0x1dba10: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1dba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1dba14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dba14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dba18: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DBA18u;
    {
        const bool branch_taken_0x1dba18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA18u;
        // 0x1dba1c: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba18) {
            ctx->pc = 0x1DBA28u;
            goto label_1dba28;
        }
    }
    ctx->pc = 0x1DBA20u;
    // 0x1dba20: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1DBA20u;
    {
        const bool branch_taken_0x1dba20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA20u;
        // 0x1dba24: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba20) {
            ctx->pc = 0x1DBA80u;
            goto label_1dba80;
        }
    }
    ctx->pc = 0x1DBA28u;
label_1dba28:
    // 0x1dba28: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1dba28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1dba2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dba30: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1dba30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_1dba34:
    // 0x1dba34: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1dba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1dba38: 0x2411fffe  addiu       $s1, $zero, -0x2
    ctx->pc = 0x1dba38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dba3c: 0x46880b  movn        $s1, $v0, $a2
    ctx->pc = 0x1dba3cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x1dba40: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1dba40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dba44: 0x0  nop
    ctx->pc = 0x1dba44u;
    // NOP
label_1dba48:
    // 0x1dba48: 0xc076e1e  jal         func_1DB878
    ctx->pc = 0x1DBA48u;
    SET_GPR_U32(ctx, 31, 0x1DBA50u);
    ctx->pc = 0x1DBA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBA48u;
    // 0x1dba4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB878u, 0x1DBA48u, 0x1DBA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA50u;
label_1dba50:
    // 0x1dba50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dba50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dba54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dba58: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1dba58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dba5c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DBA5Cu;
    {
        const bool branch_taken_0x1dba5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA5Cu;
        // 0x1dba60: 0x531824  and         $v1, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba5c) {
            ctx->pc = 0x1DBA7Cu;
            goto label_1dba7c;
        }
    }
    ctx->pc = 0x1DBA64u;
    // 0x1dba64: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DBA64u;
    {
        const bool branch_taken_0x1dba64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dba64) {
            ctx->pc = 0x1DBA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBA64u;
            // 0x1dba68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBA7Cu;
            goto label_1dba7c;
        }
    }
    ctx->pc = 0x1DBA6Cu;
    // 0x1dba6c: 0xc076ea8  jal         func_1DBAA0
    ctx->pc = 0x1DBA6Cu;
    SET_GPR_U32(ctx, 31, 0x1DBA74u);
    ctx->pc = 0x1DBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBAA0u, 0x1DBA6Cu, 0x1DBA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA74u;
label_1dba74:
    // 0x1dba74: 0x1052fff4  beq         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DBA74u;
    {
        const bool branch_taken_0x1dba74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x1dba74) {
            ctx->pc = 0x1DBA48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dba48;
        }
    }
    ctx->pc = 0x1DBA7Cu;
label_1dba7c:
    // 0x1dba7c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1dba7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1dba80:
    // 0x1dba80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dba80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dba84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dba84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dba88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dba88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dba8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dba8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dba90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1dba90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dba94: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA94u;
        // 0x1dba98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBA9Cu;
    // 0x1dba9c: 0x0  nop
    ctx->pc = 0x1dba9cu;
    // NOP
    if (ctx->pc == 0x1dba9cu) { ctx->pc = 0x1dbaa0u; }
}
