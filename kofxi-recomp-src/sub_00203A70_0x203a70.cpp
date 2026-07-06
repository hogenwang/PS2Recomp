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

// Function: sub_00203A70
// Address: 0x203a70 - 0x203b00
void sub_00203A70_0x203a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203A70_0x203a70");
#endif

    ctx->pc = 0x203a70u;

    // 0x203a70: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x203a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x203a74: 0x54900  sll         $t1, $a1, 4
    ctx->pc = 0x203a74u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x203a78: 0x8c689bf8  lw          $t0, -0x6408($v1)
    ctx->pc = 0x203a78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941688)));
    // 0x203a7c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x203a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x203a80: 0x24a598a0  addiu       $a1, $a1, -0x6760
    ctx->pc = 0x203a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940832));
    // 0x203a84: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x203a84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x203a88: 0x8d0a0020  lw          $t2, 0x20($t0)
    ctx->pc = 0x203a88u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x203a8c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x203a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x203a90: 0x2463f240  addiu       $v1, $v1, -0xDC0
    ctx->pc = 0x203a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963776));
    // 0x203a94: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x203a94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x203a98: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x203a98u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x203a9c: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x203a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x203aa0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x203aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x203aa4: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x203aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x203aa8: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x203aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x203aac: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x203aacu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203ab0: 0x52a80  sll         $a1, $a1, 10
    ctx->pc = 0x203ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x203ab4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x203ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x203ab8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x203ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x203abc: 0x94680000  lhu         $t0, 0x0($v1)
    ctx->pc = 0x203abcu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x203ac0: 0x31037c00  andi        $v1, $t0, 0x7C00
    ctx->pc = 0x203ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31744);
    // 0x203ac4: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x203ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x203ac8: 0x329c2  srl         $a1, $v1, 7
    ctx->pc = 0x203ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
    // 0x203acc: 0x310303e0  andi        $v1, $t0, 0x3E0
    ctx->pc = 0x203accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)992);
    // 0x203ad0: 0xe53025  or          $a2, $a3, $a1
    ctx->pc = 0x203ad0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x203ad4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x203ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x203ad8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x203ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x203adc: 0xc32825  or          $a1, $a2, $v1
    ctx->pc = 0x203adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x203ae0: 0x3103001f  andi        $v1, $t0, 0x1F
    ctx->pc = 0x203ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)31);
    // 0x203ae4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x203ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x203ae8: 0x31cc0  sll         $v1, $v1, 19
    ctx->pc = 0x203ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
    // 0x203aec: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x203aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x203af0: 0x3e00008  jr          $ra
    ctx->pc = 0x203AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203AF0u;
        // 0x203af4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x203AF8u;
    // 0x203af8: 0x0  nop
    ctx->pc = 0x203af8u;
    // NOP
    // 0x203afc: 0x0  nop
    ctx->pc = 0x203afcu;
    // NOP
    if (ctx->pc == 0x203afcu) { ctx->pc = 0x203b00u; }
}
