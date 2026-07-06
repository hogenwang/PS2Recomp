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

// Function: sub_0032A030
// Address: 0x32a030 - 0x32a050
void sub_0032A030_0x32a030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A030_0x32a030");
#endif

    ctx->pc = 0x32a030u;

    // 0x32a030: 0xa4a4000a  sh          $a0, 0xA($a1)
    ctx->pc = 0x32a030u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x32a034: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32a034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32a038: 0x94a30008  lhu         $v1, 0x8($a1)
    ctx->pc = 0x32a038u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x32a03c: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x32a03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x32a040: 0x3e00008  jr          $ra
    ctx->pc = 0x32A040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A040u;
        // 0x32a044: 0xa4a30008  sh          $v1, 0x8($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A048u;
    // 0x32a048: 0x0  nop
    ctx->pc = 0x32a048u;
    // NOP
    // 0x32a04c: 0x0  nop
    ctx->pc = 0x32a04cu;
    // NOP
}
