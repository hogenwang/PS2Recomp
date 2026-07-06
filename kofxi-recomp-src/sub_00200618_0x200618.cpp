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

// Function: sub_00200618
// Address: 0x200618 - 0x200658
void sub_00200618_0x200618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200618_0x200618");
#endif

    ctx->pc = 0x200618u;

    // 0x200618: 0x24830014  addiu       $v1, $a0, 0x14
    ctx->pc = 0x200618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x20061c: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x20061cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x200620: 0x2409001f  addiu       $t1, $zero, 0x1F
    ctx->pc = 0x200620u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x200624: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x200624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x200628: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x200628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20062c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x20062cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x200630: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x200630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x200634: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x200634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x200638: 0xac490004  sw          $t1, 0x4($v0)
    ctx->pc = 0x200638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 9));
    // 0x20063c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20063cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x200640: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x200640u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x200644: 0xa0660002  sb          $a2, 0x2($v1)
    ctx->pc = 0x200644u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x200648: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x200648u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x20064c: 0x3e00008  jr          $ra
    ctx->pc = 0x20064Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20064Cu;
        // 0x200650: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20064Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200654u;
    // 0x200654: 0x0  nop
    ctx->pc = 0x200654u;
    // NOP
    if (ctx->pc == 0x200654u) { ctx->pc = 0x200658u; }
}
