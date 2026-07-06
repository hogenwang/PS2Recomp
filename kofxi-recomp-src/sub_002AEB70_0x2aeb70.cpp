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

// Function: sub_002AEB70
// Address: 0x2aeb70 - 0x2aebf8
void sub_002AEB70_0x2aeb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEB70_0x2aeb70");
#endif

    switch (ctx->pc) {
        case 0x2aeb8cu: goto label_2aeb8c;
        case 0x2aeba0u: goto label_2aeba0;
        case 0x2aebc0u: goto label_2aebc0;
        case 0x2aebd8u: goto label_2aebd8;
        default: break;
    }

    ctx->pc = 0x2aeb70u;

    // 0x2aeb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aeb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aeb74: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2aeb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2aeb78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aeb78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2aeb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aeb80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aeb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2aeb84: 0xc0a50d6  jal         func_294358
    ctx->pc = 0x2AEB84u;
    SET_GPR_U32(ctx, 31, 0x2AEB8Cu);
    ctx->pc = 0x2AEB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB84u;
    // 0x2aeb88: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294358u, 0x2AEB84u, 0x2AEB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEB8Cu;
label_2aeb8c:
    // 0x2aeb8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aeb8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb90: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AEB90u;
    {
        const bool branch_taken_0x2aeb90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEB90u;
        // 0x2aeb94: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aeb90) {
            ctx->pc = 0x2AEBACu;
            goto label_2aebac;
        }
    }
    ctx->pc = 0x2AEB98u;
    // 0x2aeb98: 0xc0a508e  jal         func_294238
    ctx->pc = 0x2AEB98u;
    SET_GPR_U32(ctx, 31, 0x2AEBA0u);
    ctx->pc = 0x2AEB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB98u;
    // 0x2aeb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294238u, 0x2AEB98u, 0x2AEBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBA0u;
label_2aeba0:
    // 0x2aeba0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AEBA0u;
    {
        const bool branch_taken_0x2aeba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aeba0) {
            ctx->pc = 0x2AEBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEBA0u;
            // 0x2aeba4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEBC8u;
            goto label_2aebc8;
        }
    }
    ctx->pc = 0x2AEBA8u;
    // 0x2aeba8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2aeba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2aebac:
    // 0x2aebac: 0x240500d6  addiu       $a1, $zero, 0xD6
    ctx->pc = 0x2aebacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 214));
    // 0x2aebb0: 0x24060805  addiu       $a2, $zero, 0x805
    ctx->pc = 0x2aebb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2053));
    // 0x2aebb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aebb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aebb8: 0xc0a5648  jal         func_295920
    ctx->pc = 0x2AEBB8u;
    SET_GPR_U32(ctx, 31, 0x2AEBC0u);
    ctx->pc = 0x2AEBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBB8u;
    // 0x2aebbc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2AEBB8u, 0x2AEBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBC0u;
label_2aebc0:
    // 0x2aebc0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2AEBC0u;
    {
        const bool branch_taken_0x2aebc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEBC0u;
        // 0x2aebc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aebc0) {
            ctx->pc = 0x2AEBE0u;
            goto label_2aebe0;
        }
    }
    ctx->pc = 0x2AEBC8u;
label_2aebc8:
    // 0x2aebc8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AEBC8u;
    {
        const bool branch_taken_0x2aebc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aebc8) {
            ctx->pc = 0x2AEBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEBC8u;
            // 0x2aebcc: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEBDCu;
            goto label_2aebdc;
        }
    }
    ctx->pc = 0x2AEBD0u;
    // 0x2aebd0: 0xc0a4ff2  jal         func_293FC8
    ctx->pc = 0x2AEBD0u;
    SET_GPR_U32(ctx, 31, 0x2AEBD8u);
    ctx->pc = 0x293FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293FC8u, 0x2AEBD0u, 0x2AEBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBD8u;
label_2aebd8:
    // 0x2aebd8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2aebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2aebdc:
    // 0x2aebdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aebe0:
    // 0x2aebe0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aebe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aebe4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2aebe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aebe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aebe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aebec: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEBECu;
        // 0x2aebf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEBF4u;
    // 0x2aebf4: 0x0  nop
    ctx->pc = 0x2aebf4u;
    // NOP
}
