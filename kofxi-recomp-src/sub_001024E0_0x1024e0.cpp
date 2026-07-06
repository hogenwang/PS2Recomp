#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001024E0
// Address: 0x1024e0 - 0x102508
void sub_001024E0_0x1024e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001024E0_0x1024e0");
#endif

    switch (ctx->pc) {
        case 0x102500u: goto label_102500;
        default: break;
    }

    ctx->pc = 0x1024e0u;

    // 0x1024e0: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x1024e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1024e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1024E4u;
    {
        const bool branch_taken_0x1024e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1024E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1024E4u;
            // 0x1024e8: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024e4) {
            ctx->pc = 0x102500u;
            goto label_102500;
        }
    }
    ctx->pc = 0x1024ECu;
    // 0x1024ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1024ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1024f0: 0x24428460  addiu       $v0, $v0, -0x7BA0
    ctx->pc = 0x1024f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935648));
    // 0x1024f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1024f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1024f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1024F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1024FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1024F8u;
            // 0x1024fc: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102500u;
label_102500:
    // 0x102500: 0x3e00008  jr          $ra
    ctx->pc = 0x102500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102500u;
            // 0x102504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102508u;
    ctx->pc = 0x102508u;
}
