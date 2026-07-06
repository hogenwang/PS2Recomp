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

// Function: sub_001EB540
// Address: 0x1eb540 - 0x1eb570
void sub_001EB540_0x1eb540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB540_0x1eb540");
#endif

    ctx->pc = 0x1eb540u;

    // 0x1eb540: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1eb540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1eb544: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1eb544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eb548: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1eb548u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eb54c: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EB54Cu;
    {
        const bool branch_taken_0x1eb54c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1EB550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB54Cu;
        // 0x1eb550: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb54c) {
            ctx->pc = 0x1EB564u;
            goto label_1eb564;
        }
    }
    ctx->pc = 0x1EB554u;
    // 0x1eb554: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eb554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eb558: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb55c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1eb55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1eb560: 0xac461370  sw          $a2, 0x1370($v0)
    ctx->pc = 0x1eb560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4976), GPR_U32(ctx, 6));
label_1eb564:
    // 0x1eb564: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB56Cu;
    // 0x1eb56c: 0x0  nop
    ctx->pc = 0x1eb56cu;
    // NOP
    if (ctx->pc == 0x1eb56cu) { ctx->pc = 0x1eb570u; }
}
