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

// Function: sub_002C03F8
// Address: 0x2c03f8 - 0x2c0428
void sub_002C03F8_0x2c03f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C03F8_0x2c03f8");
#endif

    switch (ctx->pc) {
        case 0x2c041cu: goto label_2c041c;
        default: break;
    }

    ctx->pc = 0x2c03f8u;

    // 0x2c03f8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2c03f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c03fc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c03fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0404: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x2c0404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x2c0408: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c0408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c040c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c040cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0410: 0x24844088  addiu       $a0, $a0, 0x4088
    ctx->pc = 0x2c0410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16520));
    // 0x2c0414: 0xc09ff28  jal         func_27FCA0
    ctx->pc = 0x2C0414u;
    SET_GPR_U32(ctx, 31, 0x2C041Cu);
    ctx->pc = 0x2C0418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0414u;
    // 0x2c0418: 0x24a53d50  addiu       $a1, $a1, 0x3D50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27FCA0u, 0x2C0414u, 0x2C041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C041Cu;
label_2c041c:
    // 0x2c041c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c041cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0420: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0420u;
        // 0x2c0424: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0428u;
}
