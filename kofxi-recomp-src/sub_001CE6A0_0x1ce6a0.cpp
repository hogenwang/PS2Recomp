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

// Function: sub_001CE6A0
// Address: 0x1ce6a0 - 0x1ce748
void sub_001CE6A0_0x1ce6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE6A0_0x1ce6a0");
#endif

    switch (ctx->pc) {
        case 0x1ce6bcu: goto label_1ce6bc;
        case 0x1ce6d0u: goto label_1ce6d0;
        case 0x1ce6e4u: goto label_1ce6e4;
        case 0x1ce6f8u: goto label_1ce6f8;
        case 0x1ce70cu: goto label_1ce70c;
        case 0x1ce718u: goto label_1ce718;
        default: break;
    }

    ctx->pc = 0x1ce6a0u;

    // 0x1ce6a0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1ce6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1ce6a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ce6a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ce6a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce6a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6ac: 0x2484e588  addiu       $a0, $a0, -0x1A78
    ctx->pc = 0x1ce6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960520));
    // 0x1ce6b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ce6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ce6b4: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1CE6B4u;
    SET_GPR_U32(ctx, 31, 0x1CE6BCu);
    ctx->pc = 0x1CE6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6B4u;
    // 0x1ce6b8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1CE6B4u, 0x1CE6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE6BCu;
label_1ce6bc:
    // 0x1ce6bc: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1ce6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1ce6c0: 0x24847fe0  addiu       $a0, $a0, 0x7FE0
    ctx->pc = 0x1ce6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32736));
    // 0x1ce6c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6c8: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1CE6C8u;
    SET_GPR_U32(ctx, 31, 0x1CE6D0u);
    ctx->pc = 0x1CE6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6C8u;
    // 0x1ce6cc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1CE6C8u, 0x1CE6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE6D0u;
label_1ce6d0:
    // 0x1ce6d0: 0x3c0401bf  lui         $a0, 0x1BF
    ctx->pc = 0x1ce6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)447 << 16));
    // 0x1ce6d4: 0x24847fe8  addiu       $a0, $a0, 0x7FE8
    ctx->pc = 0x1ce6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32744));
    // 0x1ce6d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce6d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6dc: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1CE6DCu;
    SET_GPR_U32(ctx, 31, 0x1CE6E4u);
    ctx->pc = 0x1CE6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6DCu;
    // 0x1ce6e0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1CE6DCu, 0x1CE6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE6E4u;
label_1ce6e4:
    // 0x1ce6e4: 0x3c0401c0  lui         $a0, 0x1C0
    ctx->pc = 0x1ce6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)448 << 16));
    // 0x1ce6e8: 0x24848000  addiu       $a0, $a0, -0x8000
    ctx->pc = 0x1ce6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934528));
    // 0x1ce6ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce6f0: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1CE6F0u;
    SET_GPR_U32(ctx, 31, 0x1CE6F8u);
    ctx->pc = 0x1CE6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE6F0u;
    // 0x1ce6f4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1CE6F0u, 0x1CE6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE6F8u;
label_1ce6f8:
    // 0x1ce6f8: 0x3c0401c0  lui         $a0, 0x1C0
    ctx->pc = 0x1ce6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)448 << 16));
    // 0x1ce6fc: 0x24848008  addiu       $a0, $a0, -0x7FF8
    ctx->pc = 0x1ce6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934536));
    // 0x1ce700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce704: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x1CE704u;
    SET_GPR_U32(ctx, 31, 0x1CE70Cu);
    ctx->pc = 0x1CE708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE704u;
    // 0x1ce708: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x1CE704u, 0x1CE70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE70Cu;
label_1ce70c:
    // 0x1ce70c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ce70cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ce710: 0x2463e568  addiu       $v1, $v1, -0x1A98
    ctx->pc = 0x1ce710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960488));
    // 0x1ce714: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1ce714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ce718:
    // 0x1ce718: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ce718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ce71c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1ce71cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1ce720: 0x0  nop
    ctx->pc = 0x1ce720u;
    // NOP
    // 0x1ce724: 0x0  nop
    ctx->pc = 0x1ce724u;
    // NOP
    // 0x1ce728: 0x0  nop
    ctx->pc = 0x1ce728u;
    // NOP
    // 0x1ce72c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CE72Cu;
    {
        const bool branch_taken_0x1ce72c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CE730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE72Cu;
        // 0x1ce730: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce72c) {
            ctx->pc = 0x1CE718u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ce718;
        }
    }
    ctx->pc = 0x1CE734u;
    // 0x1ce734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ce734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce738: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1ce738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1ce73c: 0xac407ff8  sw          $zero, 0x7FF8($v0)
    ctx->pc = 0x1ce73cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32760), GPR_U32(ctx, 0));
    // 0x1ce740: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE740u;
        // 0x1ce744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE748u;
}
