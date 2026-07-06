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

// Function: sub_00111E78
// Address: 0x111e78 - 0x111f08
void sub_00111E78_0x111e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111E78_0x111e78");
#endif

    switch (ctx->pc) {
        case 0x111eb4u: goto label_111eb4;
        case 0x111eccu: goto label_111ecc;
        case 0x111ee0u: goto label_111ee0;
        default: break;
    }

    ctx->pc = 0x111e78u;

    // 0x111e78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x111e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x111e7c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x111e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x111e80: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x111e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x111e84: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x111e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x111e88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x111e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x111e8c: 0x2453868c  addiu       $s3, $v0, -0x7974
    ctx->pc = 0x111e8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936204));
    // 0x111e90: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x111e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x111e94: 0x247199a8  addiu       $s1, $v1, -0x6658
    ctx->pc = 0x111e94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941096));
    // 0x111e98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x111e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x111e9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x111e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ea0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ea8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x111ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111eac: 0xc049c22  jal         func_127088
    ctx->pc = 0x111EACu;
    SET_GPR_U32(ctx, 31, 0x111EB4u);
    ctx->pc = 0x111EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EACu;
    // 0x111eb0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x111EACu, 0x111EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111EB4u;
label_111eb4:
    // 0x111eb4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x111EB4u;
    {
        const bool branch_taken_0x111eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111EB4u;
        // 0x111eb8: 0x3c100036  lui         $s0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111eb4) {
            ctx->pc = 0x111EE4u;
            goto label_111ee4;
        }
    }
    ctx->pc = 0x111EBCu;
    // 0x111ebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ec0: 0x8e058750  lw          $a1, -0x78B0($s0)
    ctx->pc = 0x111ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936400)));
    // 0x111ec4: 0xc049c22  jal         func_127088
    ctx->pc = 0x111EC4u;
    SET_GPR_U32(ctx, 31, 0x111ECCu);
    ctx->pc = 0x111EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111EC4u;
    // 0x111ec8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x111EC4u, 0x111ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111ECCu;
label_111ecc:
    // 0x111ecc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111ECCu;
    {
        const bool branch_taken_0x111ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111ECCu;
        // 0x111ed0: 0x8e058750  lw          $a1, -0x78B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111ecc) {
            ctx->pc = 0x111EE4u;
            goto label_111ee4;
        }
    }
    ctx->pc = 0x111ED4u;
    // 0x111ed4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x111ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ed8: 0xc049c22  jal         func_127088
    ctx->pc = 0x111ED8u;
    SET_GPR_U32(ctx, 31, 0x111EE0u);
    ctx->pc = 0x111EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111ED8u;
    // 0x111edc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x111ED8u, 0x111EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111EE0u;
label_111ee0:
    // 0x111ee0: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x111ee0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_111ee4:
    // 0x111ee4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x111ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ee8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x111ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111eec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x111eecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111ef0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x111ef0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111ef4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x111ef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111efc: 0x3e00008  jr          $ra
    ctx->pc = 0x111EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111EFCu;
        // 0x111f00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111F04u;
    // 0x111f04: 0x0  nop
    ctx->pc = 0x111f04u;
    // NOP
}
