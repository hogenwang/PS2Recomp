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

// Function: sub_001B6058
// Address: 0x1b6058 - 0x1b60b8
void sub_001B6058_0x1b6058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6058_0x1b6058");
#endif

    switch (ctx->pc) {
        case 0x1b6080u: goto label_1b6080;
        case 0x1b6090u: goto label_1b6090;
        default: break;
    }

    ctx->pc = 0x1b6058u;

    // 0x1b6058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b605c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1b605cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1b6060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b6060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b6064: 0x2450a948  addiu       $s0, $v0, -0x56B8
    ctx->pc = 0x1b6064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945096));
    // 0x1b6068: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b6068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b606c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b606cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b6070: 0x26110ac0  addiu       $s1, $s0, 0xAC0
    ctx->pc = 0x1b6070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2752));
    // 0x1b6074: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b6074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b6078: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1b6078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b607c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b607cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6080:
    // 0x1b6080: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6080u;
    {
        const bool branch_taken_0x1b6080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1b6080) {
            ctx->pc = 0x1B6084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6080u;
            // 0x1b6084: 0x261000ac  addiu       $s0, $s0, 0xAC (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6094u;
            goto label_1b6094;
        }
    }
    ctx->pc = 0x1B6088u;
    // 0x1b6088: 0xc06d748  jal         func_1B5D20
    ctx->pc = 0x1B6088u;
    SET_GPR_U32(ctx, 31, 0x1B6090u);
    ctx->pc = 0x1B608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6088u;
    // 0x1b608c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5D20u, 0x1B6088u, 0x1B6090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6090u;
label_1b6090:
    // 0x1b6090: 0x261000ac  addiu       $s0, $s0, 0xAC
    ctx->pc = 0x1b6090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
label_1b6094:
    // 0x1b6094: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1b6094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1b6098: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B6098u;
    {
        const bool branch_taken_0x1b6098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6098) {
            ctx->pc = 0x1B609Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6098u;
            // 0x1b609c: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6080u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6080;
        }
    }
    ctx->pc = 0x1B60A0u;
    // 0x1b60a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b60a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b60a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b60a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b60a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b60a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b60ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b60acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b60b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B60B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B60B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60B0u;
        // 0x1b60b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B60B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B60B8u;
}
