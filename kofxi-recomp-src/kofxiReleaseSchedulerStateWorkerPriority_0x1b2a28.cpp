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

// Function: kofxiReleaseSchedulerStateWorkerPriority
// Address: 0x1b2a28 - 0x1b2a98
void kofxiReleaseSchedulerStateWorkerPriority_0x1b2a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiReleaseSchedulerStateWorkerPriority_0x1b2a28");
#endif

    switch (ctx->pc) {
        case 0x1b2a60u: goto label_1b2a60;
        case 0x1b2a68u: goto label_1b2a68;
        case 0x1b2a78u: goto label_1b2a78;
        default: break;
    }

    ctx->pc = 0x1b2a28u;

    // 0x1b2a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2a2c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b2a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b2a30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2a34: 0x24713030  addiu       $s1, $v1, 0x3030
    ctx->pc = 0x1b2a34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 12336));
    // 0x1b2a38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2a3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2a40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b2a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b2a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b2a48: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B2A48u;
    {
        const bool branch_taken_0x1b2a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A48u;
        // 0x1b2a4c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a48) {
            ctx->pc = 0x1B2A78u;
            goto label_1b2a78;
        }
    }
    ctx->pc = 0x1B2A50u;
    // 0x1b2a50: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b2a50u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b2a54: 0x26103088  addiu       $s0, $s0, 0x3088
    ctx->pc = 0x1b2a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12424));
    // 0x1b2a58: 0xc06cc80  jal         func_1B3200
    ctx->pc = 0x1B2A58u;
    SET_GPR_U32(ctx, 31, 0x1B2A60u);
    ctx->pc = 0x1B2A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A58u;
    // 0x1b2a5c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3200u, 0x1B2A58u, 0x1B2A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A60u;
label_1b2a60:
    // 0x1b2a60: 0xc0432d4  jal         func_10CB50
    ctx->pc = 0x1B2A60u;
    SET_GPR_U32(ctx, 31, 0x1B2A68u);
    ctx->pc = 0x1B2A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A60u;
    // 0x1b2a64: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x1B2A60u, 0x1B2A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A68u;
label_1b2a68:
    // 0x1b2a68: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b2a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b2a6c: 0x8c65a920  lw          $a1, -0x56E0($v1)
    ctx->pc = 0x1b2a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945056)));
    // 0x1b2a70: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B2A70u;
    SET_GPR_U32(ctx, 31, 0x1B2A78u);
    ctx->pc = 0x1B2A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2A70u;
    // 0x1b2a74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x1B2A70u, 0x1B2A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2A78u;
label_1b2a78:
    // 0x1b2a78: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b2a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b2a7c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B2A7Cu;
    {
        const bool branch_taken_0x1b2a7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1b2a7c) {
            ctx->pc = 0x1B2A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2A7Cu;
            // 0x1b2a80: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2A84u;
            goto label_1b2a84;
        }
    }
    ctx->pc = 0x1B2A84u;
label_1b2a84:
    // 0x1b2a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2a88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2a8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b2a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A90u;
        // 0x1b2a94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2A98u;
}
