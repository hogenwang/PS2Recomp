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

// Function: sub_00166BC0
// Address: 0x166bc0 - 0x166c40
void sub_00166BC0_0x166bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166BC0_0x166bc0");
#endif

    switch (ctx->pc) {
        case 0x166bc0u: goto label_166bc0;
        case 0x166bc4u: goto label_166bc4;
        case 0x166bc8u: goto label_166bc8;
        case 0x166bccu: goto label_166bcc;
        case 0x166bd0u: goto label_166bd0;
        case 0x166bd4u: goto label_166bd4;
        case 0x166bd8u: goto label_166bd8;
        case 0x166bdcu: goto label_166bdc;
        case 0x166be0u: goto label_166be0;
        case 0x166be4u: goto label_166be4;
        case 0x166be8u: goto label_166be8;
        case 0x166becu: goto label_166bec;
        case 0x166bf0u: goto label_166bf0;
        case 0x166bf4u: goto label_166bf4;
        case 0x166bf8u: goto label_166bf8;
        case 0x166bfcu: goto label_166bfc;
        case 0x166c00u: goto label_166c00;
        case 0x166c04u: goto label_166c04;
        case 0x166c08u: goto label_166c08;
        case 0x166c0cu: goto label_166c0c;
        case 0x166c10u: goto label_166c10;
        case 0x166c14u: goto label_166c14;
        case 0x166c18u: goto label_166c18;
        case 0x166c1cu: goto label_166c1c;
        case 0x166c20u: goto label_166c20;
        case 0x166c24u: goto label_166c24;
        case 0x166c28u: goto label_166c28;
        case 0x166c2cu: goto label_166c2c;
        case 0x166c30u: goto label_166c30;
        case 0x166c34u: goto label_166c34;
        case 0x166c38u: goto label_166c38;
        case 0x166c3cu: goto label_166c3c;
        default: break;
    }

    ctx->pc = 0x166bc0u;

label_166bc0:
    // 0x166bc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x166bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_166bc4:
    // 0x166bc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x166bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_166bc8:
    // 0x166bc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x166bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_166bcc:
    // 0x166bcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x166bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_166bd0:
    // 0x166bd0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x166bd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_166bd4:
    // 0x166bd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x166bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_166bd8:
    // 0x166bd8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x166bd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_166bdc:
    // 0x166bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_166be0:
    // 0x166be0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x166be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166be4:
    // 0x166be4: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x166be4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
label_166be8:
    // 0x166be8: 0x26102ca0  addiu       $s0, $s0, 0x2CA0
    ctx->pc = 0x166be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11424));
label_166bec:
    // 0x166bec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x166becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_166bf0:
    // 0x166bf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x166bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_166bf4:
    // 0x166bf4: 0x40f809  jalr        $v0
label_166bf8:
    if (ctx->pc == 0x166BF8u) {
        ctx->pc = 0x166BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BF4u;
        // 0x166bf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166BFCu;
        goto label_166bfc;
    }
    ctx->pc = 0x166BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x166BFCu);
        ctx->pc = 0x166BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BF4u;
        // 0x166bf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166BF4u, 0x166BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x166BFCu;
label_166bfc:
    // 0x166bfc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_166c00:
    if (ctx->pc == 0x166C00u) {
        ctx->pc = 0x166C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166BFCu;
        // 0x166c00: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166C04u;
        goto label_166c04;
    }
    ctx->pc = 0x166BFCu;
    {
        const bool branch_taken_0x166bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x166bfc) {
            ctx->pc = 0x166C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166BFCu;
            // 0x166c00: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x166C0Cu;
            goto label_166c0c;
        }
    }
    ctx->pc = 0x166C04u;
label_166c04:
    // 0x166c04: 0x10000005  b           . + 4 + (0x5 << 2)
label_166c08:
    if (ctx->pc == 0x166C08u) {
        ctx->pc = 0x166C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C04u;
        // 0x166c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166C0Cu;
        goto label_166c0c;
    }
    ctx->pc = 0x166C04u;
    {
        const bool branch_taken_0x166c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C04u;
        // 0x166c08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c04) {
            ctx->pc = 0x166C1Cu;
            goto label_166c1c;
        }
    }
    ctx->pc = 0x166C0Cu;
label_166c0c:
    // 0x166c0c: 0x2a22000c  slti        $v0, $s1, 0xC
    ctx->pc = 0x166c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)12) ? 1 : 0);
label_166c10:
    // 0x166c10: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_166c14:
    if (ctx->pc == 0x166C14u) {
        ctx->pc = 0x166C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C10u;
        // 0x166c14: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166C18u;
        goto label_166c18;
    }
    ctx->pc = 0x166C10u;
    {
        const bool branch_taken_0x166c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C10u;
        // 0x166c14: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c10) {
            ctx->pc = 0x166BECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_166bec;
        }
    }
    ctx->pc = 0x166C18u;
label_166c18:
    // 0x166c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_166c1c:
    // 0x166c1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x166c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_166c20:
    // 0x166c20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x166c20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_166c24:
    // 0x166c24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x166c24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_166c28:
    // 0x166c28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x166c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_166c2c:
    // 0x166c2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_166c30:
    // 0x166c30: 0x3e00008  jr          $ra
label_166c34:
    if (ctx->pc == 0x166C34u) {
        ctx->pc = 0x166C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C30u;
        // 0x166c34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x166C38u;
        goto label_166c38;
    }
    ctx->pc = 0x166C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C30u;
        // 0x166c34: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166C38u;
label_166c38:
    // 0x166c38: 0x0  nop
    ctx->pc = 0x166c38u;
    // NOP
label_166c3c:
    // 0x166c3c: 0x0  nop
    ctx->pc = 0x166c3cu;
    // NOP
}
