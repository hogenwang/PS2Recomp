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

// Function: sub_00143880
// Address: 0x143880 - 0x1438c0
void sub_00143880_0x143880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143880_0x143880");
#endif

    switch (ctx->pc) {
        case 0x143880u: goto label_143880;
        case 0x143884u: goto label_143884;
        case 0x143888u: goto label_143888;
        case 0x14388cu: goto label_14388c;
        case 0x143890u: goto label_143890;
        case 0x143894u: goto label_143894;
        case 0x143898u: goto label_143898;
        case 0x14389cu: goto label_14389c;
        case 0x1438a0u: goto label_1438a0;
        case 0x1438a4u: goto label_1438a4;
        case 0x1438a8u: goto label_1438a8;
        case 0x1438acu: goto label_1438ac;
        case 0x1438b0u: goto label_1438b0;
        case 0x1438b4u: goto label_1438b4;
        case 0x1438b8u: goto label_1438b8;
        case 0x1438bcu: goto label_1438bc;
        default: break;
    }

    ctx->pc = 0x143880u;

label_143880:
    // 0x143880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_143884:
    // 0x143884: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x143884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_143888:
    // 0x143888: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x143888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14388c:
    // 0x14388c: 0x2442e030  addiu       $v0, $v0, -0x1FD0
    ctx->pc = 0x14388cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959152));
label_143890:
    // 0x143890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_143894:
    // 0x143894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x143894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_143898:
    // 0x143898: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x143898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14389c:
    // 0x14389c: 0x40f809  jalr        $v0
label_1438a0:
    if (ctx->pc == 0x1438A0u) {
        ctx->pc = 0x1438A4u;
        goto label_1438a4;
    }
    ctx->pc = 0x14389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1438A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14389Cu, 0x1438A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1438A4u;
label_1438a4:
    // 0x1438a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1438a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1438a8:
    // 0x1438a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1438a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1438ac:
    // 0x1438ac: 0x3e00008  jr          $ra
label_1438b0:
    if (ctx->pc == 0x1438B0u) {
        ctx->pc = 0x1438B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438ACu;
        // 0x1438b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1438B4u;
        goto label_1438b4;
    }
    ctx->pc = 0x1438ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1438B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438ACu;
        // 0x1438b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1438ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1438B4u;
label_1438b4:
    // 0x1438b4: 0x0  nop
    ctx->pc = 0x1438b4u;
    // NOP
label_1438b8:
    // 0x1438b8: 0x0  nop
    ctx->pc = 0x1438b8u;
    // NOP
label_1438bc:
    // 0x1438bc: 0x0  nop
    ctx->pc = 0x1438bcu;
    // NOP
    if (ctx->pc == 0x1438bcu) { ctx->pc = 0x1438c0u; }
}
