#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002284D8
// Address: 0x2284d8 - 0x228510
void sub_002284D8_0x2284d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002284D8_0x2284d8");
#endif

    switch (ctx->pc) {
        case 0x2284f0u: goto label_2284f0;
        case 0x228500u: goto label_228500;
        default: break;
    }

    ctx->pc = 0x2284d8u;

    // 0x2284d8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2284d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2284dc: 0x8c43f998  lw          $v1, -0x668($v0)
    ctx->pc = 0x2284dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965656)));
    // 0x2284e0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2284E0u;
    {
        const bool branch_taken_0x2284e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2284e0) {
            ctx->pc = 0x228508u;
            goto label_228508;
        }
    }
    ctx->pc = 0x2284E8u;
    // 0x2284e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2284e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2284ec: 0x0  nop
    ctx->pc = 0x2284ecu;
    // NOP
label_2284f0:
    // 0x2284f0: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2284F0u;
    {
        const bool branch_taken_0x2284f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2284f0) {
            ctx->pc = 0x2284F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2284F0u;
            // 0x2284f4: 0x8c63001c  lw          $v1, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228500u;
            goto label_228500;
        }
    }
    ctx->pc = 0x2284F8u;
    // 0x2284f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2284F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2284FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2284F8u;
            // 0x2284fc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x228500u;
label_228500:
    // 0x228500: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x228500u;
    {
        const bool branch_taken_0x228500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x228500) {
            ctx->pc = 0x228504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228500u;
            // 0x228504: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2284F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2284f0;
        }
    }
    ctx->pc = 0x228508u;
label_228508:
    // 0x228508: 0x3e00008  jr          $ra
    ctx->pc = 0x228508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22850Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228508u;
            // 0x22850c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x228510u;
    ctx->pc = 0x228510u;
}
