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

// Function: sub_0018A210
// Address: 0x18a210 - 0x18a250
void sub_0018A210_0x18a210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A210_0x18a210");
#endif

    ctx->pc = 0x18a210u;

    // 0x18a210: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x18a210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x18a214: 0x22882  srl         $a1, $v0, 2
    ctx->pc = 0x18a214u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x18a218: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x18a218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18a21c: 0x30820030  andi        $v0, $a0, 0x30
    ctx->pc = 0x18a21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x18a220: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18a220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18a224: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x18a224u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x18a228: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18a228u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18a22c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18a230: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18a230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18a234: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a238: 0x2463dca4  addiu       $v1, $v1, -0x235C
    ctx->pc = 0x18a238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958244));
    // 0x18a23c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18a23cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18a240: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18a240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18a244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18a244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18a248: 0x3e00008  jr          $ra
    ctx->pc = 0x18A248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A248u;
        // 0x18a24c: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A250u;
}
