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

// Function: kofxiSifRpcReleaseRequestSlot
// Address: 0x110618 - 0x110638
void kofxiSifRpcReleaseRequestSlot_0x110618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiSifRpcReleaseRequestSlot_0x110618");
#endif

    ctx->pc = 0x110618u;

    // 0x110618: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x110618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11061c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11061cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x110620: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x110620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x110624: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x110624u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x110628: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x110628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11062c: 0x3e00008  jr          $ra
    ctx->pc = 0x11062Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11062Cu;
        // 0x110630: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11062Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110634u;
    // 0x110634: 0x0  nop
    ctx->pc = 0x110634u;
    // NOP
    if (ctx->pc == 0x110634u) { ctx->pc = 0x110638u; }
}
