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

// Function: sub_001BDB90
// Address: 0x1bdb90 - 0x1bdbc0
void sub_001BDB90_0x1bdb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDB90_0x1bdb90");
#endif

    switch (ctx->pc) {
        case 0x1bdba0u: goto label_1bdba0;
        default: break;
    }

    ctx->pc = 0x1bdb90u;

    // 0x1bdb90: 0xa4870038  sh          $a3, 0x38($a0)
    ctx->pc = 0x1bdb90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 7));
    // 0x1bdb94: 0xa4850034  sh          $a1, 0x34($a0)
    ctx->pc = 0x1bdb94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 5));
    // 0x1bdb98: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDB98u;
        // 0x1bdb9c: 0xa4860036  sh          $a2, 0x36($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 54), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDBA0u;
label_1bdba0:
    // 0x1bdba0: 0x94820034  lhu         $v0, 0x34($a0)
    ctx->pc = 0x1bdba0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1bdba4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x1bdba4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1bdba8: 0x94830036  lhu         $v1, 0x36($a0)
    ctx->pc = 0x1bdba8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
    // 0x1bdbac: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x1bdbacu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bdbb0: 0x94820038  lhu         $v0, 0x38($a0)
    ctx->pc = 0x1bdbb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1bdbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDBB4u;
        // 0x1bdbb8: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDBBCu;
    // 0x1bdbbc: 0x0  nop
    ctx->pc = 0x1bdbbcu;
    // NOP
}
