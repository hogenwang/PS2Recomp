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

// Function: kofxiStopFrameSchedulerSystem
// Address: 0x1b4488 - 0x1b4538
void kofxiStopFrameSchedulerSystem_0x1b4488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiStopFrameSchedulerSystem_0x1b4488");
#endif

    switch (ctx->pc) {
        case 0x1b44b0u: goto label_1b44b0;
        case 0x1b44b8u: goto label_1b44b8;
        case 0x1b44c0u: goto label_1b44c0;
        case 0x1b44c8u: goto label_1b44c8;
        case 0x1b44d0u: goto label_1b44d0;
        case 0x1b44d8u: goto label_1b44d8;
        case 0x1b44e0u: goto label_1b44e0;
        case 0x1b44f8u: goto label_1b44f8;
        case 0x1b4504u: goto label_1b4504;
        case 0x1b4510u: goto label_1b4510;
        default: break;
    }

    ctx->pc = 0x1b4488u;

    // 0x1b4488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b4488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b448c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b448cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b4490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4494: 0x24632ff4  addiu       $v1, $v1, 0x2FF4
    ctx->pc = 0x1b4494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12276));
    // 0x1b4498: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b4498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b449c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b449cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b44a0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1B44A0u;
    {
        const bool branch_taken_0x1b44a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44A0u;
        // 0x1b44a4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b44a0) {
            ctx->pc = 0x1B4528u;
            goto label_1b4528;
        }
    }
    ctx->pc = 0x1B44A8u;
    // 0x1b44a8: 0xc06ce00  jal         func_1B3800
    ctx->pc = 0x1B44A8u;
    SET_GPR_U32(ctx, 31, 0x1B44B0u);
    ctx->pc = 0x1B3800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3800u, 0x1B44A8u, 0x1B44B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44B0u;
label_1b44b0:
    // 0x1b44b0: 0xc06ce3a  jal         func_1B38E8
    ctx->pc = 0x1B44B0u;
    SET_GPR_U32(ctx, 31, 0x1B44B8u);
    ctx->pc = 0x1B38E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38E8u, 0x1B44B0u, 0x1B44B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44B8u;
label_1b44b8:
    // 0x1b44b8: 0xc06ce6e  jal         func_1B39B8
    ctx->pc = 0x1B44B8u;
    SET_GPR_U32(ctx, 31, 0x1B44C0u);
    ctx->pc = 0x1B39B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B39B8u, 0x1B44B8u, 0x1B44C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44C0u;
label_1b44c0:
    // 0x1b44c0: 0xc06ced6  jal         func_1B3B58
    ctx->pc = 0x1B44C0u;
    SET_GPR_U32(ctx, 31, 0x1B44C8u);
    ctx->pc = 0x1B3B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3B58u, 0x1B44C0u, 0x1B44C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44C8u;
label_1b44c8:
    // 0x1b44c8: 0xc06cea2  jal         func_1B3A88
    ctx->pc = 0x1B44C8u;
    SET_GPR_U32(ctx, 31, 0x1B44D0u);
    ctx->pc = 0x1B3A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A88u, 0x1B44C8u, 0x1B44D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44D0u;
label_1b44d0:
    // 0x1b44d0: 0xc06cf22  jal         func_1B3C88
    ctx->pc = 0x1B44D0u;
    SET_GPR_U32(ctx, 31, 0x1B44D8u);
    ctx->pc = 0x1B3C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C88u, 0x1B44D0u, 0x1B44D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44D8u;
label_1b44d8:
    // 0x1b44d8: 0xc06cf56  jal         func_1B3D58
    ctx->pc = 0x1B44D8u;
    SET_GPR_U32(ctx, 31, 0x1B44E0u);
    ctx->pc = 0x1B3D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3D58u, 0x1B44D8u, 0x1B44E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44E0u;
label_1b44e0:
    // 0x1b44e0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b44e4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1b44e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1b44e8: 0x24423098  addiu       $v0, $v0, 0x3098
    ctx->pc = 0x1b44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12440));
    // 0x1b44ec: 0x8c65a928  lw          $a1, -0x56D8($v1)
    ctx->pc = 0x1b44ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945064)));
    // 0x1b44f0: 0xc0432bc  jal         func_10CAF0
    ctx->pc = 0x1B44F0u;
    SET_GPR_U32(ctx, 31, 0x1B44F8u);
    ctx->pc = 0x1B44F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B44F0u;
    // 0x1b44f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAF0u, 0x1B44F0u, 0x1B44F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B44F8u;
label_1b44f8:
    // 0x1b44f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b44f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b44fc: 0xc07390a  jal         func_1CE428
    ctx->pc = 0x1B44FCu;
    SET_GPR_U32(ctx, 31, 0x1B4504u);
    ctx->pc = 0x1B4500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B44FCu;
    // 0x1b4500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE428u, 0x1B44FCu, 0x1B4504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4504u;
label_1b4504:
    // 0x1b4504: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b4504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4508: 0xc073910  jal         func_1CE440
    ctx->pc = 0x1B4508u;
    SET_GPR_U32(ctx, 31, 0x1B4510u);
    ctx->pc = 0x1B450Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4508u;
    // 0x1b450c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE440u, 0x1B4508u, 0x1B4510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4510u;
label_1b4510:
    // 0x1b4510: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b4510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b4514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4518: 0xac402ff8  sw          $zero, 0x2FF8($v0)
    ctx->pc = 0x1b4518u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12280), GPR_U32(ctx, 0));
    // 0x1b451c: 0x80739e2  j           func_1CE788
    ctx->pc = 0x1B451Cu;
    ctx->pc = 0x1B4520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B451Cu;
    // 0x1b4520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE788u;
    sub_001CE788_0x1ce788(rdram, ctx, runtime); return;
    ctx->pc = 0x1B4524u;
    // 0x1b4524: 0x0  nop
    ctx->pc = 0x1b4524u;
    // NOP
label_1b4528:
    // 0x1b4528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b452c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B452Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B452Cu;
        // 0x1b4530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B452Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4534u;
    // 0x1b4534: 0x0  nop
    ctx->pc = 0x1b4534u;
    // NOP
    if (ctx->pc == 0x1b4534u) { ctx->pc = 0x1b4538u; }
}
