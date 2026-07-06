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

// Function: sub_0031F480
// Address: 0x31f480 - 0x31f4c0
void sub_0031F480_0x31f480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F480_0x31f480");
#endif

    ctx->pc = 0x31f480u;

    // 0x31f480: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31f480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31f484: 0x90450378  lbu         $a1, 0x378($v0)
    ctx->pc = 0x31f484u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 888)));
    // 0x31f488: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31f488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31f48c: 0x90440379  lbu         $a0, 0x379($v0)
    ctx->pc = 0x31f48cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 889)));
    // 0x31f490: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31f490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31f494: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x31f494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x31f498: 0x9043037a  lbu         $v1, 0x37A($v0)
    ctx->pc = 0x31f498u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 890)));
    // 0x31f49c: 0x3c0201dc  lui         $v0, 0x1DC
    ctx->pc = 0x31f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)476 << 16));
    // 0x31f4a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x31f4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31f4a4: 0x9042037b  lbu         $v0, 0x37B($v0)
    ctx->pc = 0x31f4a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 891)));
    // 0x31f4a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31f4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31f4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x31F4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F4ACu;
        // 0x31f4b0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F4B4u;
    // 0x31f4b4: 0x0  nop
    ctx->pc = 0x31f4b4u;
    // NOP
    // 0x31f4b8: 0x0  nop
    ctx->pc = 0x31f4b8u;
    // NOP
    // 0x31f4bc: 0x0  nop
    ctx->pc = 0x31f4bcu;
    // NOP
}
