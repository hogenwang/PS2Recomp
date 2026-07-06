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

// Function: sub_0010E178
// Address: 0x10e178 - 0x10e1a0
void sub_0010E178_0x10e178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E178_0x10e178");
#endif

    ctx->pc = 0x10e178u;

    // 0x10e178: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x10e178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x10e17c: 0x244362c0  addiu       $v1, $v0, 0x62C0
    ctx->pc = 0x10e17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25280));
    // 0x10e180: 0xac4462c0  sw          $a0, 0x62C0($v0)
    ctx->pc = 0x10e180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25280), GPR_U32(ctx, 4));
    // 0x10e184: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x10e184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x10e188: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10e188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e18c: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x10e18cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x10e190: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x10e190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x10e194: 0x3e00008  jr          $ra
    ctx->pc = 0x10E194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E194u;
        // 0x10e198: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E19Cu;
    // 0x10e19c: 0x0  nop
    ctx->pc = 0x10e19cu;
    // NOP
}
