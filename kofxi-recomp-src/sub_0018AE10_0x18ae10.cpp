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

// Function: sub_0018AE10
// Address: 0x18ae10 - 0x18ae50
void sub_0018AE10_0x18ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AE10_0x18ae10");
#endif

    ctx->pc = 0x18ae10u;

    // 0x18ae10: 0x3082000c  andi        $v0, $a0, 0xC
    ctx->pc = 0x18ae10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)12);
    // 0x18ae14: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18ae18: 0x23082  srl         $a2, $v0, 2
    ctx->pc = 0x18ae18u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x18ae1c: 0x2463db62  addiu       $v1, $v1, -0x249E
    ctx->pc = 0x18ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957922));
    // 0x18ae20: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x18ae20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18ae24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18ae24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ae28: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x18ae28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18ae2c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18ae30: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x18ae30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18ae34: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18ae38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18ae3c: 0x3e00008  jr          $ra
    ctx->pc = 0x18AE3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AE3Cu;
        // 0x18ae40: 0xa4650000  sh          $a1, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AE3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AE44u;
    // 0x18ae44: 0x0  nop
    ctx->pc = 0x18ae44u;
    // NOP
    // 0x18ae48: 0x0  nop
    ctx->pc = 0x18ae48u;
    // NOP
    // 0x18ae4c: 0x0  nop
    ctx->pc = 0x18ae4cu;
    // NOP
}
