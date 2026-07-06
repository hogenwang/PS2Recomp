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

// Function: sub_001ED4F0
// Address: 0x1ed4f0 - 0x1ed558
void sub_001ED4F0_0x1ed4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED4F0_0x1ed4f0");
#endif

    switch (ctx->pc) {
        case 0x1ed524u: goto label_1ed524;
        case 0x1ed52cu: goto label_1ed52c;
        case 0x1ed53cu: goto label_1ed53c;
        case 0x1ed544u: goto label_1ed544;
        default: break;
    }

    ctx->pc = 0x1ed4f0u;

    // 0x1ed4f0: 0x3c0301c0  lui         $v1, 0x1C0
    ctx->pc = 0x1ed4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)448 << 16));
    // 0x1ed4f4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ed4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ed4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ed4fc: 0x24634f58  addiu       $v1, $v1, 0x4F58
    ctx->pc = 0x1ed4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20312));
    // 0x1ed500: 0x2442e7e0  addiu       $v0, $v0, -0x1820
    ctx->pc = 0x1ed500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961120));
    // 0x1ed504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ed504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ed508: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ed508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ed50c: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x1ed50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x1ed510: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ed510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ed514: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ed514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed518: 0x24043808  addiu       $a0, $zero, 0x3808
    ctx->pc = 0x1ed518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14344));
    // 0x1ed51c: 0xc07b652  jal         func_1ED948
    ctx->pc = 0x1ED51Cu;
    SET_GPR_U32(ctx, 31, 0x1ED524u);
    ctx->pc = 0x1ED948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED948u, 0x1ED51Cu, 0x1ED524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED524u;
label_1ed524:
    // 0x1ed524: 0xc07b556  jal         func_1ED558
    ctx->pc = 0x1ED524u;
    SET_GPR_U32(ctx, 31, 0x1ED52Cu);
    ctx->pc = 0x1ED528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED524u;
    // 0x1ed528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED558u, 0x1ED524u, 0x1ED52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED52Cu;
label_1ed52c:
    // 0x1ed52c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ED52Cu;
    {
        const bool branch_taken_0x1ed52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed52c) {
            ctx->pc = 0x1ED530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED52Cu;
            // 0x1ed530: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED54Cu;
            goto label_1ed54c;
        }
    }
    ctx->pc = 0x1ED534u;
    // 0x1ed534: 0xc07b65e  jal         func_1ED978
    ctx->pc = 0x1ED534u;
    SET_GPR_U32(ctx, 31, 0x1ED53Cu);
    ctx->pc = 0x1ED978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED978u, 0x1ED534u, 0x1ED53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED53Cu;
label_1ed53c:
    // 0x1ed53c: 0xc07b66c  jal         func_1ED9B0
    ctx->pc = 0x1ED53Cu;
    SET_GPR_U32(ctx, 31, 0x1ED544u);
    ctx->pc = 0x1ED9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED9B0u, 0x1ED53Cu, 0x1ED544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED544u;
label_1ed544:
    // 0x1ed544: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ed544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ed548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed54c:
    // 0x1ed54c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ed54cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ed550: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED550u;
        // 0x1ed554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED558u;
}
