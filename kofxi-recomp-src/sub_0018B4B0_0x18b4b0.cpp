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

// Function: sub_0018B4B0
// Address: 0x18b4b0 - 0x18b4f0
void sub_0018B4B0_0x18b4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B4B0_0x18b4b0");
#endif

    ctx->pc = 0x18b4b0u;

    // 0x18b4b0: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x18b4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x18b4b4: 0x22882  srl         $a1, $v0, 2
    ctx->pc = 0x18b4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x18b4b8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x18b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18b4bc: 0x30820030  andi        $v0, $a0, 0x30
    ctx->pc = 0x18b4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x18b4c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18b4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x18b4c4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x18b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x18b4c8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18b4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18b4cc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18b4d0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18b4d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18b4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18b4d8: 0x2463dc9d  addiu       $v1, $v1, -0x2363
    ctx->pc = 0x18b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958237));
    // 0x18b4dc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18b4e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18b4e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x18B4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B4E8u;
        // 0x18b4ec: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B4F0u;
}
