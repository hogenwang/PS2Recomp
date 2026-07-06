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

// Function: sub_001C6BC0
// Address: 0x1c6bc0 - 0x1c6c40
void sub_001C6BC0_0x1c6bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6BC0_0x1c6bc0");
#endif

    switch (ctx->pc) {
        case 0x1c6be0u: goto label_1c6be0;
        case 0x1c6c08u: goto label_1c6c08;
        case 0x1c6c10u: goto label_1c6c10;
        case 0x1c6c1cu: goto label_1c6c1c;
        case 0x1c6c30u: goto label_1c6c30;
        default: break;
    }

    ctx->pc = 0x1c6bc0u;

    // 0x1c6bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6bc4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c6bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c6bc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c6bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c6bcc: 0x2442f1b0  addiu       $v0, $v0, -0xE50
    ctx->pc = 0x1c6bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963632));
    // 0x1c6bd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c6bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c6bd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c6bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bd8: 0xc071ab2  jal         func_1C6AC8
    ctx->pc = 0x1C6BD8u;
    SET_GPR_U32(ctx, 31, 0x1C6BE0u);
    ctx->pc = 0x1C6BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BD8u;
    // 0x1c6bdc: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AC8u, 0x1C6BD8u, 0x1C6BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6BE0u;
label_1c6be0:
    // 0x1c6be0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1c6be4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1c6be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1c6be8: 0x2450f1c8  addiu       $s0, $v0, -0xE38
    ctx->pc = 0x1c6be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963656));
    // 0x1c6bec: 0x2484f1d0  addiu       $a0, $a0, -0xE30
    ctx->pc = 0x1c6becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963664));
    // 0x1c6bf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c6bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c6bf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6bf8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6BF8u;
    {
        const bool branch_taken_0x1c6bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6BF8u;
        // 0x1c6bfc: 0x24064700  addiu       $a2, $zero, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6bf8) {
            ctx->pc = 0x1C6C20u;
            goto label_1c6c20;
        }
    }
    ctx->pc = 0x1C6C00u;
    // 0x1c6c00: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1C6C00u;
    SET_GPR_U32(ctx, 31, 0x1C6C08u);
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1C6C00u, 0x1C6C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C08u;
label_1c6c08:
    // 0x1c6c08: 0xc071aec  jal         func_1C6BB0
    ctx->pc = 0x1C6C08u;
    SET_GPR_U32(ctx, 31, 0x1C6C10u);
    ctx->pc = 0x1C6BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6BB0u, 0x1C6C08u, 0x1C6C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C10u;
label_1c6c10:
    // 0x1c6c10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c6c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c14: 0xc071abe  jal         func_1C6AF8
    ctx->pc = 0x1C6C14u;
    SET_GPR_U32(ctx, 31, 0x1C6C1Cu);
    ctx->pc = 0x1C6C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C14u;
    // 0x1c6c18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AF8u, 0x1C6C14u, 0x1C6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C1Cu;
label_1c6c1c:
    // 0x1c6c1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c6c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c6c20:
    // 0x1c6c20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1c6c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c6c24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c6c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6c28: 0xc071ab8  jal         func_1C6AE0
    ctx->pc = 0x1C6C28u;
    SET_GPR_U32(ctx, 31, 0x1C6C30u);
    ctx->pc = 0x1C6C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C28u;
    // 0x1c6c2c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6AE0u, 0x1C6C28u, 0x1C6C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6C30u;
label_1c6c30:
    // 0x1c6c30: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c6c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6c34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c6c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6c38: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6C38u;
        // 0x1c6c3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6C40u;
}
