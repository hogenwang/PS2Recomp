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

// Function: sub_001A4910
// Address: 0x1a4910 - 0x1a4950
void sub_001A4910_0x1a4910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4910_0x1a4910");
#endif

    switch (ctx->pc) {
        case 0x1a4930u: goto label_1a4930;
        case 0x1a493cu: goto label_1a493c;
        default: break;
    }

    ctx->pc = 0x1a4910u;

    // 0x1a4910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4914: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a4914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a4918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a491c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a491cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a4920: 0x8c45b7e8  lw          $a1, -0x4818($v0)
    ctx->pc = 0x1a4920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948840)));
    // 0x1a4924: 0x24846980  addiu       $a0, $a0, 0x6980
    ctx->pc = 0x1a4924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27008));
    // 0x1a4928: 0xc068fcc  jal         func_1A3F30
    ctx->pc = 0x1A4928u;
    SET_GPR_U32(ctx, 31, 0x1A4930u);
    ctx->pc = 0x1A492Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4928u;
    // 0x1a492c: 0x3c060030  lui         $a2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F30u, 0x1A4928u, 0x1A4930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4930u;
label_1a4930:
    // 0x1a4930: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1a4930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x1a4934: 0xc0550c4  jal         func_154310
    ctx->pc = 0x1A4934u;
    SET_GPR_U32(ctx, 31, 0x1A493Cu);
    ctx->pc = 0x1A4938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4934u;
    // 0x1a4938: 0x24846990  addiu       $a0, $a0, 0x6990 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154310u, 0x1A4934u, 0x1A493Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A493Cu;
label_1a493c:
    // 0x1a493c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a493cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4940: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4940u;
        // 0x1a4944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4948u;
    // 0x1a4948: 0x0  nop
    ctx->pc = 0x1a4948u;
    // NOP
    // 0x1a494c: 0x0  nop
    ctx->pc = 0x1a494cu;
    // NOP
    if (ctx->pc == 0x1a494cu) { ctx->pc = 0x1a4950u; }
}
