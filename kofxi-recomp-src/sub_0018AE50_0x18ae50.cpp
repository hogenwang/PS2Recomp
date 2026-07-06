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

// Function: sub_0018AE50
// Address: 0x18ae50 - 0x18aea0
void sub_0018AE50_0x18ae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AE50_0x18ae50");
#endif

    switch (ctx->pc) {
        case 0x18ae60u: goto label_18ae60;
        default: break;
    }

    ctx->pc = 0x18ae50u;

    // 0x18ae50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18ae54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ae54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ae58: 0xc062794  jal         func_189E50
    ctx->pc = 0x18AE58u;
    SET_GPR_U32(ctx, 31, 0x18AE60u);
    ctx->pc = 0x189E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189E50u, 0x18AE58u, 0x18AE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AE60u;
label_18ae60:
    // 0x18ae60: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x18ae60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18ae64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ae64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ae68: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18ae68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18ae6c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18ae70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18ae70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ae74: 0x2442db62  addiu       $v0, $v0, -0x249E
    ctx->pc = 0x18ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957922));
    // 0x18ae78: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18ae7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ae80: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18ae84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18ae84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18ae88: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x18ae88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18ae8c: 0x3e00008  jr          $ra
    ctx->pc = 0x18AE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE8Cu;
        // 0x18ae90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AE94u;
    // 0x18ae94: 0x0  nop
    ctx->pc = 0x18ae94u;
    // NOP
    // 0x18ae98: 0x0  nop
    ctx->pc = 0x18ae98u;
    // NOP
    // 0x18ae9c: 0x0  nop
    ctx->pc = 0x18ae9cu;
    // NOP
    if (ctx->pc == 0x18ae9cu) { ctx->pc = 0x18aea0u; }
}
