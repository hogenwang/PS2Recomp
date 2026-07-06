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

// Function: sub_001A2E20
// Address: 0x1a2e20 - 0x1a2e80
void sub_001A2E20_0x1a2e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2E20_0x1a2e20");
#endif

    switch (ctx->pc) {
        case 0x1a2e54u: goto label_1a2e54;
        default: break;
    }

    ctx->pc = 0x1a2e20u;

    // 0x1a2e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a2e24: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1a2e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1a2e28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a2e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a2e2c: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x1a2e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x1a2e30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a2e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a2e34: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1a2e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1a2e38: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a2e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x1a2e3c: 0x2442b250  addiu       $v0, $v0, -0x4DB0
    ctx->pc = 0x1a2e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947408));
    // 0x1a2e40: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1a2e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a2e44: 0x24a56400  addiu       $a1, $a1, 0x6400
    ctx->pc = 0x1a2e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25600));
    // 0x1a2e48: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1a2e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a2e4c: 0xc049c48  jal         func_127120
    ctx->pc = 0x1A2E4Cu;
    SET_GPR_U32(ctx, 31, 0x1A2E54u);
    ctx->pc = 0x1A2E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E4Cu;
    // 0x1a2e50: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1A2E4Cu, 0x1A2E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E54u;
label_1a2e54:
    // 0x1a2e54: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x1a2e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x1a2e58: 0x2463b258  addiu       $v1, $v1, -0x4DA8
    ctx->pc = 0x1a2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947416));
    // 0x1a2e5c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a2e60: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1a2e60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2e64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a2e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2e68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E6Cu;
        // 0x1a2e70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2E74u;
    // 0x1a2e74: 0x0  nop
    ctx->pc = 0x1a2e74u;
    // NOP
    // 0x1a2e78: 0x0  nop
    ctx->pc = 0x1a2e78u;
    // NOP
    // 0x1a2e7c: 0x0  nop
    ctx->pc = 0x1a2e7cu;
    // NOP
}
