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

// Function: sub_00198390
// Address: 0x198390 - 0x1983b0
void sub_00198390_0x198390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198390_0x198390");
#endif

    ctx->pc = 0x198390u;

    // 0x198390: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x198390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x198394: 0x9042af65  lbu         $v0, -0x509B($v0)
    ctx->pc = 0x198394u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946661)));
    // 0x198398: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x198398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19839c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x19839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1983a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1983A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1983A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1983A0u;
        // 0x1983a4: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1983A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1983A8u;
    // 0x1983a8: 0x0  nop
    ctx->pc = 0x1983a8u;
    // NOP
    // 0x1983ac: 0x0  nop
    ctx->pc = 0x1983acu;
    // NOP
}
