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

// Function: sub_00156040
// Address: 0x156040 - 0x156070
void sub_00156040_0x156040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156040_0x156040");
#endif

    ctx->pc = 0x156040u;

    // 0x156040: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x156040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x156044: 0x3c06009b  lui         $a2, 0x9B
    ctx->pc = 0x156044u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)155 << 16));
    // 0x156048: 0x946507d0  lhu         $a1, 0x7D0($v1)
    ctx->pc = 0x156048u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2000)));
    // 0x15604c: 0x24c607e0  addiu       $a2, $a2, 0x7E0
    ctx->pc = 0x15604cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2016));
    // 0x156050: 0x3c03009b  lui         $v1, 0x9B
    ctx->pc = 0x156050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)155 << 16));
    // 0x156054: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x156054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x156058: 0xa46507d0  sh          $a1, 0x7D0($v1)
    ctx->pc = 0x156058u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2000), (uint16_t)GPR_U32(ctx, 5));
    // 0x15605c: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x15605cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x156060: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x156060u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156064: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x156064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x156068: 0x3e00008  jr          $ra
    ctx->pc = 0x156068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156068u;
        // 0x15606c: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156070u;
}
