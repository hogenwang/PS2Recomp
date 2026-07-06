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

// Function: sub_0018D800
// Address: 0x18d800 - 0x18d850
void sub_0018D800_0x18d800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D800_0x18d800");
#endif

    ctx->pc = 0x18d800u;

    // 0x18d800: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d804: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x18d804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x18d808: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x18d808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x18d80c: 0x2463bcc0  addiu       $v1, $v1, -0x4340
    ctx->pc = 0x18d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950080));
    // 0x18d810: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d814: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x18d814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x18d818: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x18d818u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18d81c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18d81cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18d820: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d824: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18d824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18d828: 0x2463bd90  addiu       $v1, $v1, -0x4270
    ctx->pc = 0x18d828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950288));
    // 0x18d82c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x18d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x18d830: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18d830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18d834: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d834u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d838: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d83c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x18d83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18d840: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18d840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18d844: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x18d844u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18d848: 0x3e00008  jr          $ra
    ctx->pc = 0x18D848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D848u;
        // 0x18d84c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D850u;
}
