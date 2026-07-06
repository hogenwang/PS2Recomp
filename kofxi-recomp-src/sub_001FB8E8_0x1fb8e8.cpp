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

// Function: sub_001FB8E8
// Address: 0x1fb8e8 - 0x1fb938
void sub_001FB8E8_0x1fb8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB8E8_0x1fb8e8");
#endif

    switch (ctx->pc) {
        case 0x1fb8fcu: goto label_1fb8fc;
        case 0x1fb908u: goto label_1fb908;
        default: break;
    }

    ctx->pc = 0x1fb8e8u;

    // 0x1fb8e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fb8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fb8ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb8f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fb8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fb8f4: 0xc07ee4e  jal         func_1FB938
    ctx->pc = 0x1FB8F4u;
    SET_GPR_U32(ctx, 31, 0x1FB8FCu);
    ctx->pc = 0x1FB8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB8F4u;
    // 0x1fb8f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB938u, 0x1FB8F4u, 0x1FB8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB8FCu;
label_1fb8fc:
    // 0x1fb8fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fb8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb900: 0xc07ec02  jal         func_1FB008
    ctx->pc = 0x1FB900u;
    SET_GPR_U32(ctx, 31, 0x1FB908u);
    ctx->pc = 0x1FB904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB900u;
    // 0x1fb904: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB008u, 0x1FB900u, 0x1FB908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB908u;
label_1fb908:
    // 0x1fb908: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fb908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb90c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB90Cu;
    {
        const bool branch_taken_0x1fb90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB90Cu;
        // 0x1fb910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb90c) {
            ctx->pc = 0x1FB928u;
            goto label_1fb928;
        }
    }
    ctx->pc = 0x1FB914u;
    // 0x1fb914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb918: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fb918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb91c: 0x807f122  j           func_1FC488
    ctx->pc = 0x1FB91Cu;
    ctx->pc = 0x1FB920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB91Cu;
    // 0x1fb920: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC488u;
    sub_001FC488_0x1fc488(rdram, ctx, runtime); return;
    ctx->pc = 0x1FB924u;
    // 0x1fb924: 0x0  nop
    ctx->pc = 0x1fb924u;
    // NOP
label_1fb928:
    // 0x1fb928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb92c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fb92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb930: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB930u;
        // 0x1fb934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB938u;
}
