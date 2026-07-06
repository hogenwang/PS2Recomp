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

// Function: sub_001ED3D0
// Address: 0x1ed3d0 - 0x1ed408
void sub_001ED3D0_0x1ed3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED3D0_0x1ed3d0");
#endif

    switch (ctx->pc) {
        case 0x1ed3d0u: goto label_1ed3d0;
        case 0x1ed3d4u: goto label_1ed3d4;
        case 0x1ed3d8u: goto label_1ed3d8;
        case 0x1ed3dcu: goto label_1ed3dc;
        case 0x1ed3e0u: goto label_1ed3e0;
        case 0x1ed3e4u: goto label_1ed3e4;
        case 0x1ed3e8u: goto label_1ed3e8;
        case 0x1ed3ecu: goto label_1ed3ec;
        case 0x1ed3f0u: goto label_1ed3f0;
        case 0x1ed3f4u: goto label_1ed3f4;
        case 0x1ed3f8u: goto label_1ed3f8;
        case 0x1ed3fcu: goto label_1ed3fc;
        case 0x1ed400u: goto label_1ed400;
        case 0x1ed404u: goto label_1ed404;
        default: break;
    }

    ctx->pc = 0x1ed3d0u;

label_1ed3d0:
    // 0x1ed3d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ed3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ed3d4:
    // 0x1ed3d4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ed3d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ed3d8:
    // 0x1ed3d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ed3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ed3dc:
    // 0x1ed3dc: 0x40f809  jalr        $v0
label_1ed3e0:
    if (ctx->pc == 0x1ED3E0u) {
        ctx->pc = 0x1ED3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3DCu;
        // 0x1ed3e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED3E4u;
        goto label_1ed3e4;
    }
    ctx->pc = 0x1ED3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED3E4u);
        ctx->pc = 0x1ED3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3DCu;
        // 0x1ed3e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED3DCu, 0x1ED3E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED3E4u;
label_1ed3e4:
    // 0x1ed3e4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ed3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ed3e8:
    // 0x1ed3e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ed3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1ed3ec:
    // 0x1ed3ec: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1ed3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
label_1ed3f0:
    // 0x1ed3f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ed3f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ed3f4:
    // 0x1ed3f4: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1ed3f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1ed3f8:
    // 0x1ed3f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ed3f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ed3fc:
    // 0x1ed3fc: 0x3e00008  jr          $ra
label_1ed400:
    if (ctx->pc == 0x1ED400u) {
        ctx->pc = 0x1ED400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3FCu;
        // 0x1ed400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED404u;
        goto label_1ed404;
    }
    ctx->pc = 0x1ED3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED3FCu;
        // 0x1ed400: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED404u;
label_1ed404:
    // 0x1ed404: 0x0  nop
    ctx->pc = 0x1ed404u;
    // NOP
    if (ctx->pc == 0x1ed404u) { ctx->pc = 0x1ed408u; }
}
