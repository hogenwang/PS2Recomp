#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F9E90
// Address: 0x2f9e90 - 0x2f9eb8
void sub_002F9E90_0x2f9e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9E90_0x2f9e90");
#endif

    ctx->pc = 0x2f9e90u;

    // 0x2f9e90: 0x3c0201cb  lui         $v0, 0x1CB
    ctx->pc = 0x2f9e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
    // 0x2f9e94: 0xac440678  sw          $a0, 0x678($v0)
    ctx->pc = 0x2f9e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1656), GPR_U32(ctx, 4));
    // 0x2f9e98: 0x380282d  daddu       $a1, $gp, $zero
    ctx->pc = 0x2f9e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9e9c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x2f9e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x2f9ea0: 0x3c0401cb  lui         $a0, 0x1CB
    ctx->pc = 0x2f9ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
    // 0x2f9ea4: 0x24428fb0  addiu       $v0, $v0, -0x7050
    ctx->pc = 0x2f9ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938544));
    // 0x2f9ea8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2f9ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2f9eac: 0xac850684  sw          $a1, 0x684($a0)
    ctx->pc = 0x2f9eacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1668), GPR_U32(ctx, 5));
    // 0x2f9eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9EB0u;
            // 0x2f9eb4: 0xac62065c  sw          $v0, 0x65C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9EB8u;
    ctx->pc = 0x2f9eb8u;
}
