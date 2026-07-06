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

// Function: sub_00324230
// Address: 0x324230 - 0x324260
void sub_00324230_0x324230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324230_0x324230");
#endif

    ctx->pc = 0x324230u;

    // 0x324230: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x324230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x324234: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x324234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x324238: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x324238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32423c: 0x52a3c  dsll32      $a1, $a1, 8
    ctx->pc = 0x32423cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 8));
    // 0x324240: 0x52a3e  dsrl32      $a1, $a1, 8
    ctx->pc = 0x324240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 8));
    // 0x324244: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x324244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x324248: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x324248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x32424c: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x32424cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x324250: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x324250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
    // 0x324254: 0x3e00008  jr          $ra
    ctx->pc = 0x324254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324254u;
        // 0x324258: 0xac830068  sw          $v1, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32425Cu;
    // 0x32425c: 0x0  nop
    ctx->pc = 0x32425cu;
    // NOP
    if (ctx->pc == 0x32425cu) { ctx->pc = 0x324260u; }
}
