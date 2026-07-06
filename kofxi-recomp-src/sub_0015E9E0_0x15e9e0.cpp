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

// Function: sub_0015E9E0
// Address: 0x15e9e0 - 0x15eaa0
void sub_0015E9E0_0x15e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E9E0_0x15e9e0");
#endif

    switch (ctx->pc) {
        case 0x15ea34u: goto label_15ea34;
        case 0x15ea44u: goto label_15ea44;
        case 0x15ea58u: goto label_15ea58;
        case 0x15ea70u: goto label_15ea70;
        default: break;
    }

    ctx->pc = 0x15e9e0u;

    // 0x15e9e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15e9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15e9e4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x15e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x15e9e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15e9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15e9ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15e9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15e9f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15e9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15e9f4: 0x9065da50  lbu         $a1, -0x25B0($v1)
    ctx->pc = 0x15e9f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957648)));
    // 0x15e9f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e9fc: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15E9FCu;
    {
        const bool branch_taken_0x15e9fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e9fc) {
            ctx->pc = 0x15EA4Cu;
            goto label_15ea4c;
        }
    }
    ctx->pc = 0x15EA04u;
    // 0x15ea04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ea08: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15EA08u;
    {
        const bool branch_taken_0x15ea08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ea08) {
            ctx->pc = 0x15EA4Cu;
            goto label_15ea4c;
        }
    }
    ctx->pc = 0x15EA10u;
    // 0x15ea10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15ea10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ea14: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15EA14u;
    {
        const bool branch_taken_0x15ea14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x15ea14) {
            ctx->pc = 0x15EA3Cu;
            goto label_15ea3c;
        }
    }
    ctx->pc = 0x15EA1Cu;
    // 0x15ea1c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EA1Cu;
    {
        const bool branch_taken_0x15ea1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ea1c) {
            ctx->pc = 0x15EA20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EA1Cu;
            // 0x15ea20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EA2Cu;
            goto label_15ea2c;
        }
    }
    ctx->pc = 0x15EA24u;
    // 0x15ea24: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15EA24u;
    {
        const bool branch_taken_0x15ea24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ea24) {
            ctx->pc = 0x15EA4Cu;
            goto label_15ea4c;
        }
    }
    ctx->pc = 0x15EA2Cu;
label_15ea2c:
    // 0x15ea2c: 0xc057974  jal         func_15E5D0
    ctx->pc = 0x15EA2Cu;
    SET_GPR_U32(ctx, 31, 0x15EA34u);
    ctx->pc = 0x15E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5D0u, 0x15EA2Cu, 0x15EA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EA34u;
label_15ea34:
    // 0x15ea34: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15EA34u;
    {
        const bool branch_taken_0x15ea34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ea34) {
            ctx->pc = 0x15EA80u;
            goto label_15ea80;
        }
    }
    ctx->pc = 0x15EA3Cu;
label_15ea3c:
    // 0x15ea3c: 0xc057974  jal         func_15E5D0
    ctx->pc = 0x15EA3Cu;
    SET_GPR_U32(ctx, 31, 0x15EA44u);
    ctx->pc = 0x15E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5D0u, 0x15EA3Cu, 0x15EA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EA44u;
label_15ea44:
    // 0x15ea44: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15EA44u;
    {
        const bool branch_taken_0x15ea44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ea44) {
            ctx->pc = 0x15EA80u;
            goto label_15ea80;
        }
    }
    ctx->pc = 0x15EA4Cu;
label_15ea4c:
    // 0x15ea4c: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x15ea4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x15ea50: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15ea50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ea54: 0x2610db50  addiu       $s0, $s0, -0x24B0
    ctx->pc = 0x15ea54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294957904));
label_15ea58:
    // 0x15ea58: 0x9204000a  lbu         $a0, 0xA($s0)
    ctx->pc = 0x15ea58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x15ea5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ea60: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EA60u;
    {
        const bool branch_taken_0x15ea60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15ea60) {
            ctx->pc = 0x15EA70u;
            goto label_15ea70;
        }
    }
    ctx->pc = 0x15EA68u;
    // 0x15ea68: 0xc057974  jal         func_15E5D0
    ctx->pc = 0x15EA68u;
    SET_GPR_U32(ctx, 31, 0x15EA70u);
    ctx->pc = 0x15EA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EA68u;
    // 0x15ea6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E5D0u, 0x15EA68u, 0x15EA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EA70u;
label_15ea70:
    // 0x15ea70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15ea70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15ea74: 0x2a230004  slti        $v1, $s1, 0x4
    ctx->pc = 0x15ea74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x15ea78: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x15EA78u;
    {
        const bool branch_taken_0x15ea78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA78u;
        // 0x15ea7c: 0x26100248  addiu       $s0, $s0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ea78) {
            ctx->pc = 0x15EA58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15ea58;
        }
    }
    ctx->pc = 0x15EA80u;
label_15ea80:
    // 0x15ea80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ea80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ea84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ea84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ea88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ea88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ea8c: 0x3e00008  jr          $ra
    ctx->pc = 0x15EA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA8Cu;
        // 0x15ea90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EA94u;
    // 0x15ea94: 0x0  nop
    ctx->pc = 0x15ea94u;
    // NOP
    // 0x15ea98: 0x0  nop
    ctx->pc = 0x15ea98u;
    // NOP
    // 0x15ea9c: 0x0  nop
    ctx->pc = 0x15ea9cu;
    // NOP
    if (ctx->pc == 0x15ea9cu) { ctx->pc = 0x15eaa0u; }
}
